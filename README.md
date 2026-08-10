# Cheapino2 Totem-style Vial firmware

Totem で使っていた 5 レイヤー、Home Row Mods、Combo、句読点の Mod-Morph、
マウス操作、カスタムキーを Cheapino v2 の 36 キーへ移植した Vial
ファームウェアです。

Totem にだけ存在する外側 2 キーと Bluetooth 操作は省いています。LED は
実際の出力・Vial からの設定とも最小の非消灯値 1 に制限し、レイヤーごとに色を変えます。

## レイヤー色

| Layer | 用途 | 色 |
| --- | --- | --- |
| 0 | Base | シアン |
| 1 | Lower | イエロー |
| 2 | Upper | マゼンタ |
| 3 | Adjust | グリーン |
| 4 | Mouse | レッド |

## Vial Keymap C Editor

このリポジトリは
[`vial-keymap-c-editor`](https://vial-keymap-c-editor.pages.dev/)
が要求する 1 リポジトリ・1 キーボード・1 キーマップ構成です。

1. Editor で GitHub にログインします。
2. このリポジトリと編集対象ブランチを選びます。
3. Keymap、Tap Dance、Combo、Macro、Key Override を編集します。
4. `COMMIT CHANGES` を押すと `keymap.c` が更新されます。
5. コミットを push すると `Build Cheapino2 Vial firmware` が実行され、
   Actions の `cheapino2-totem-vial` artifact から UF2 を取得できます。

`/* USER INCLUDE BEGIN */` と `/* USER CODE BEGIN */` の範囲には、
最新 Vial-QMK 向けの互換処理、カスタムキー、レイヤー色、Combo のレイヤー制限が
入っています。Editor で再生成してもこの範囲は保持されます。

Editor `f142b1b` には Tap Dance 数と Combo 数を逆に読む既知の実装上の都合が
あるため、両方を 32 スロットに揃えています。使用する Tap Dance は先頭 3 件、
Combo は先頭 9 件で、残り 23 件も Editor から追加・再編集できます。

## ビルドの固定バージョン

- Vial-QMK: `dd43959ae5c08d8a28d38a1acf7b04e86b14a344`
- Cheapino v2 hardware source:
  `ec9377e4ca9da985456e2bd02a7bf5242d1a9490`

GitHub Actions は Cheapino のハードウェアソースを取得し、このリポジトリの
`qmk_firmware/keyboards/cheapino` を上書きしてビルドします。上流の起動時
レインボー処理は無効化しているため、起動時も明るさ 5 を超えません。

## 書き込み

Vial の `Security` から unlock した状態で bootloader reboot を実行するか、
基板裏の BOOT/RESET 操作で `RPI-RP2` ドライブを表示し、生成された
`cheapino2-totem-vial.uf2` をコピーします。

Vial の unlock キーは左右の最外上段キー（Base の `B` と `J`）です。

## Totem との差分

- 物理的に不足する左外側 `Esc` と右外側 `Right Ctrl / Tab` は省略。
- Bluetooth profile、pairing、clear 操作は省略。
- ZMK の shifted-symbol Hold-Tap は、QMK Mod-Tap の 8-bit 制限を避けるため
  Vial Tap Dance 3 エントリで再現。
- Combo 0〜8 には元のレイヤー条件を手書きコードで適用。アプリキー Combo だけ
  60 ms、他は 30 ms。
- Vial で調整した Mouse Keys の移動値（delay 10、interval 20、step 7、
  max speed 7、time to max 24）とホイール値（delay 10、interval 80、
  max speed 4、time to max 33）を初期値として保持。
- Mouse Key が重なったときは加速段階を 0 に戻し、方向転換時に直前の加速を
  引き継がない。
- Mouse layer を離れた時は移動・スクロール状態を明示的に解除。

書き込み前の接続済みキーボード設定はローカルの
`backups/cheapino2-before-totem.vil` に退避されます。このディレクトリは
Git には含めません。
