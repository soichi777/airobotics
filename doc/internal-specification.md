<nav id="table-of-contents">
<h2>Table of Contents</h2>
<div id="text-table-of-contents">
<ul>
<li><a href="#sec-1">1. 概要</a></li>
<li><a href="#sec-2">2. 動作とUI</a>
<ul>
<li><a href="#sec-2-1">2.1. ドメインロジック</a></li>
<li><a href="#sec-2-2">2.2. ロボット本体</a>
<ul>
<li><a href="#sec-2-2-1">2.2.1. <span class="todo TODO">TODO</span> 基本動作</a></li>
<li><a href="#sec-2-2-2">2.2.2. 状態表示</a></li>
</ul>
</li>
</ul>
</li>
<li><a href="#sec-3">3. 人工知能について</a>
<ul>
<li><a href="#sec-3-1">3.1. Particle Filter</a></li>
<li><a href="#sec-3-2">3.2. Hidden Markov Model</a></li>
</ul>
</li>
<li><a href="#sec-4">4. ハードウエア</a>
<ul>
<li><a href="#sec-4-1">4.1. 物理的サイズ</a></li>
<li><a href="#sec-4-2">4.2. モジュール</a>
<ul>
<li><a href="#sec-4-2-1">4.2.1. マイコン</a></li>
<li><a href="#sec-4-2-2">4.2.2. バッテリー</a></li>
<li><a href="#sec-4-2-3">4.2.3. モーター</a></li>
<li><a href="#sec-4-2-4">4.2.4. モータードライバ</a></li>
<li><a href="#sec-4-2-5">4.2.5. 超音波距離センサ</a></li>
<li><a href="#sec-4-2-6">4.2.6. 無線モジュール</a></li>
</ul>
</li>
<li><a href="#sec-4-3">4.3. 回路</a>
<ul>
<li><a href="#sec-4-3-1">4.3.1. 電源回路</a></li>
<li><a href="#sec-4-3-2">4.3.2. モーター回路</a></li>
<li><a href="#sec-4-3-3">4.3.3. 無線回路</a></li>
</ul>
</li>
</ul>
</li>
<li><a href="#sec-5">5. ソフトウエア</a>
<ul>
<li><a href="#sec-5-1">5.1. レイヤー構造</a></li>
<li><a href="#sec-5-2">5.2. モニタリングとマニュアル操作コンポーネント</a></li>
<li><a href="#sec-5-3">5.3. ロボット状態シーケンス</a></li>
</ul>
</li>
<li><a href="#sec-6">6. モジュール別詳細</a>
<ul>
<li><a href="#sec-6-1">6.1. 役割別モジュール例</a>
<ul>
<li><a href="#sec-6-1-1">6.1.1. ワイヤレスシステム</a></li>
<li><a href="#sec-6-1-2">6.1.2. モニターとマニュアルコントロール</a></li>
</ul>
</li>
<li><a href="#sec-6-2">6.2. 実装</a>
<ul>
<li><a href="#sec-6-2-1">6.2.1. ロボット本体側：モジュール別</a></li>
<li><a href="#sec-6-2-2">6.2.2. PC側</a></li>
</ul>
</li>
<li><a href="#sec-6-3">6.3. 学習用拡張</a>
<ul>
<li><a href="#sec-6-3-1">6.3.1. シミュレータ</a></li>
<li><a href="#sec-6-3-2">6.3.2. 等価Pythonコード</a></li>
</ul>
</li>
</ul>
</li>
</ul>
</div>
</nav>



# 概要<a id="sec-1"></a>

-   本プログラムは、人工知能を持つロボットのプログラムである
-   ロボットは超音波センサーによって周囲の障害物を検知し、自ら周囲の地図を作成する
-   一旦地図のデータを手に入れたロボットは、現在位置を忘れた後、再度その地図のどこかに配置されると自ら地図上の位置を割り出す
-   ロボットの現在位置ならびに地図データは、無線により遠隔のパソコンにリアルタイムに送られる
-   複数の動作モードを持ち、マニュアルモードでは遠隔のパソコンから操作できる
-   ハードウエアのロボットの代わりに、ソフトウエアシミュレーターに置き換えることができ、サービス層以下のロジックはそのまま使用できる

# 動作とUI<a id="sec-2"></a>

## ドメインロジック<a id="sec-2-1"></a>

## ロボット本体<a id="sec-2-2"></a>

### TODO 基本動作<a id="sec-2-2-1"></a>

-   main関数に無限ループを置き、システムに異常が起こらない限り、その無限ループを抜けることはない

### 状態表示<a id="sec-2-2-2"></a>

チップLEDによる状態表示
-   高輝度青色チップＬＥＤ　２０１２サイズ　L-C170LBCT

<http://akizukidenshi.com/catalog/g/gI-00697/>

-   赤色チップＬＥＤ　OSHR1608　３５ｍｃｄ

<http://akizukidenshi.com/catalog/g/gI-03978/>

# 人工知能について<a id="sec-3"></a>

-   本プロジェクトは、人工知能（Artificial Intelligence: 以下、AI）に重点が置かれる

## Particle Filter<a id="sec-3-1"></a>

Particle Filter（[粒子フィルタ Wikipedia](http://ja.wikipedia.org/wiki/%E7%B2%92%E5%AD%90%E3%83%95%E3%82%A3%E3%83%AB%E3%82%BF)）

## Hidden Markov Model<a id="sec-3-2"></a>

[Hidden Markov Model](http://en.wikipedia.org/wiki/Hidden_Markov_model)

# ハードウエア<a id="sec-4"></a>

## 物理的サイズ<a id="sec-4-1"></a>

## モジュール<a id="sec-4-2"></a>

### マイコン<a id="sec-4-2-1"></a>

mbed [LPC1768](http://developer.mbed.org/platforms/mbed-LPC1768/) を使用
![img](./images/lpc1768.jpg)

1.  TODO 特徴

2.  TODO スペック

    1.  pin配置
    
        ![img](./images/lpc1768-pin_configuration.jpg)

### バッテリー<a id="sec-4-2-2"></a>

### モーター<a id="sec-4-2-3"></a>

### モータードライバ<a id="sec-4-2-4"></a>

[TB6612FNG](http://jp.rs-online.com/web/p/motor-driver-ics/7703797/)
[データシート](http://docs-asia.electrocomponents.com/webdocs/1159/0900766b8115965f.pdf)

### 超音波距離センサ<a id="sec-4-2-5"></a>

[パララックス社超音波距離センサーモジュール](http://akizukidenshi.com/catalog/g/gM-05400/)

![img](http://akizukidenshi.com/img/goods/C/M-05400.jpg)
[データシート](http://akizukidenshi.com/download/ds/parallax/28015-PING-Sensor-Product-Guide-v2.0.pdf)

### 無線モジュール<a id="sec-4-2-6"></a>

[XBee series2](http://akizukidenshi.com/catalog/g/gM-06195/)

![img](http://akizukidenshi.com/img/goods/C/M-06195.jpg)
[XBee USBインターフェースボード](http://akizukidenshi.com/catalog/g/gK-06188/)

![img](http://akizukidenshi.com/img/goods/C/K-06188.jpg)
[XStick ZB](https://www.switch-science.com/catalog/1793/)

![img](https://docid81hrs3j1.cloudfront.net/imagecontent/1793_002.jpg)

## 回路<a id="sec-4-3"></a>

### 電源回路<a id="sec-4-3-1"></a>

### モーター回路<a id="sec-4-3-2"></a>

### 無線回路<a id="sec-4-3-3"></a>

# ソフトウエア<a id="sec-5"></a>

## レイヤー構造<a id="sec-5-1"></a>

![img](./images/entire-layered-architecture.png)

## モニタリングとマニュアル操作コンポーネント<a id="sec-5-2"></a>

![img](./images/monitoring-manual_controling.png)

## ロボット状態シーケンス<a id="sec-5-3"></a>

![img](./images/robot-state-sequence.png)

# モジュール別詳細<a id="sec-6"></a>

## 役割別モジュール例<a id="sec-6-1"></a>

### ワイヤレスシステム<a id="sec-6-1-1"></a>

1.  通信API: XBeeAPI - Communicationマッピング

    XBeeAPIをベースに、ロボット本体とコントロールPCとの間のAPIを定義する。
    XBeeAPIは、複数のXBeeモジュール間での通信APIだが、ここで定義するのは、ロボットとコントロールPCとの間でのデータAPIである。
    
    1.  通信レイヤー
    
        ![img](./images/wireless-api-layer.png)
    
    2.  TODO アプリケーションレイヤーAPI定義

2.  マニュアルモード

    1.  シーケンス
    
        1.  TODO シーケンスのレベル
        
            各種シーケンス図間の関係を説明する
        
        2.  プログラム単位のシーケンス
        
            1.  データ受信(ZigBee Receive Packet)
            
                ![img](./images/wireless-data-receive.png)
        
        3.  最大シーケンスレベル（？）
        
            -   CommandLine
            
            コマンドラインツール
            -   CommandMapper
            
            エンコーダーとデコーダーの2つで構成される。
            コマンドに入力したコマンドシークエンスをXBee APIフォームに変換し、その逆も。
            -   StateMapper
            
            エンコーダーとデコーダーの2つで構成される。
            XBee APIフォームデータをコマンドラインに表示できるように変換し、その逆も。
            
            -   XBeeCoodinator
            
            XBee API Coodinator と設定されたXBeeハードモジュール
            -   XBeeRouter
            
            XBee API Router と設定されたXBeeハードモジュール
            -   Robot
            
            ロボット本体（mbedがコントロール部）
            
            ![img](./images/wireless-manual-control.png)
    
    2.  アクティビティ
    
        ![img](./images/wireless-manual-activity.png)
    
    3.  クラス構成
    
        ![img](./images/wireless-manual-classes.png)
    
    4.  main psuedocode
    
            void showStatus()
            {
              printf('showing status');
            }
            
            void listCommands();
            {
            }
            
            void run(CommandSequence sequence)
            {
              encoder = CommandEncoder();
            
              encoded = encoder.encode(sequence);
            
            
            }
            
            int main()
            {
              string command = '';
            
              sequence = CommandSequence();
            
              while (command !== QUIT) {
            
                printf('enter a command');
            
                listCommands();
            
                showStatus();
            
                if (command === RUN) {
                  run(CommandSequence);
                } else if (/* command is valid */) {
                  sequence.addCommand(command);
                }
              }
            
              printf('exiting program');
            
              return 0;
            }

3.  オートーモード

    ![img](./images/wireless-auto-mode.png)

### モニターとマニュアルコントロール<a id="sec-6-1-2"></a>

## 実装<a id="sec-6-2"></a>

### ロボット本体側：モジュール別<a id="sec-6-2-1"></a>

1.  XBee 無線制御部

    1.  XBee API mode
    
        -   0x10=パケット送信
        -   0x90=パケット受信
        -   0x8B=パケット送信の成否
    
    2.  無線通信フロー
    
        1.  障害物センサーデータ
        
            ロボット本体が回転し、同時にデータを収集しながら送信する。
            -   通常時
            -   エラー時
    
    3.  libxbee
    
        PC側（?）ライブラリ
        <https://github.com/thomasgubler/libxbee>
        
        大きすぎるため、これを参考にし自作を心がける。
    
    4.  XBee SmartLabXBeeAPI library
    
        mbed側のライブラリ。必要でないものも多いので、自作を心がける。
        
        1.  Class diagram

2.  Ping 超音波センサー部

3.  状態インジケータ部

4.  モータードライバ部

### PC側<a id="sec-6-2-2"></a>

## 学習用拡張<a id="sec-6-3"></a>

### シミュレータ<a id="sec-6-3-1"></a>

### 等価Pythonコード<a id="sec-6-3-2"></a>

-   同じAIロジックをPythonコードで実現する

<style>
@import url(http://fonts.googleapis.com/css?family=Inconsolata);
@import url(http://fonts.googleapis.com/css?family=PT+Sans);
@import url(http://fonts.googleapis.com/css?family=PT+Sans+Narrow:400,700);
article,
aside,
details,
figcaption,
figure,
footer,
header,
hgroup,
nav,
section,
summary {
  display: block;
}
audio,
canvas,
video {
  display: inline-block;
}
audio:not([controls]) {
  display: none;
  height: 0;
}
[hidden] {
  display: none;
}
html {
  font-family: sans-serif;
  -webkit-text-size-adjust: 100%;
  -ms-text-size-adjust: 100%;
}
body {
  margin: 0;
}
a:focus {
  outline: thin dotted;
}
a:active,
a:hover {
  outline: 0;
}
h1 {
  font-size: 2em;
}
abbr[title] {
  border-bottom: 1px dotted;
}
b,
strong {
  font-weight: bold;
}
dfn {
  font-style: italic;
}
mark {
  background: #ff0;
  color: #000;
}
code,
kbd,
pre,
samp {
  font-family: monospace, serif;
  font-size: 1em;
}
pre {
  white-space: pre-wrap;
  word-wrap: break-word;
}
q {
  quotes: "\201C" "\201D" "\2018" "\2019";
}
small {
  font-size: 80%;
}
sub,
sup {
  font-size: 75%;
  line-height: 0;
  position: relative;
  vertical-align: baseline;
}
sup {
  top: -0.5em;
}
sub {
  bottom: -0.25em;
}
img {
  border: 0;
}
svg:not(:root) {
  overflow: hidden;
}
figure {
  margin: 0;
}
fieldset {
  border: 1px solid #c0c0c0;
  margin: 0 2px;
  padding: 0.35em 0.625em 0.75em;
}
legend {
  border: 0;
  padding: 0;
}
button,
input,
select,
textarea {
  font-family: inherit;
  font-size: 100%;
  margin: 0;
}
button,
input {
  line-height: normal;
}
button,
html input[type="button"],
input[type="reset"],
input[type="submit"] {
  -webkit-appearance: button;
  cursor: pointer;
}
button[disabled],
input[disabled] {
  cursor: default;
}
input[type="checkbox"],
input[type="radio"] {
  box-sizing: border-box;
  padding: 0;
}
input[type="search"] {
  -webkit-appearance: textfield;
  -moz-box-sizing: content-box;
  -webkit-box-sizing: content-box;
  box-sizing: content-box;
}
input[type="search"]::-webkit-search-cancel-button,
input[type="search"]::-webkit-search-decoration {
  -webkit-appearance: none;
}
button::-moz-focus-inner,
input::-moz-focus-inner {
  border: 0;
  padding: 0;
}
textarea {
  overflow: auto;
  vertical-align: top;
}
table {
  border-collapse: collapse;
  border-spacing: 0;
}
html {
  font-family: 'PT Sans', sans-serif;
}
pre,
code {
  font-family: 'Inconsolata', sans-serif;
}
h1,
h2,
h3,
h4,
h5,
h6 {
  font-family: 'PT Sans Narrow', sans-serif;
  font-weight: 700;
}
html {
  background-color: #eee8d5;
  color: #657b83;
  margin: 1em;
}
body {
  background-color: #fdf6e3;
  margin: 0 auto;
  border: 1pt solid #93a1a1;
  padding: 1em;
}
code {
  background-color: #eee8d5;
  padding: 2px;
}
a {
  color: #b58900;
}
a:visited {
  color: #cb4b16;
}
a:hover {
  color: #cb4b16;
}
h1 {
  color: #d33682;
}
h2,
h3,
h4,
h5,
h6 {
  color: #859900;
}
pre {
  background-color: #fdf6e3;
  color: #657b83;
  border: 1pt solid #93a1a1;
  padding: 1em;
  box-shadow: 5pt 5pt 8pt #eee8d5;
}
pre code {
  background-color: #fdf6e3;
}
h1 {
  font-size: 2.8em;
}
h2 {
  font-size: 2.4em;
}
h3 {
  font-size: 1.8em;
}
h4 {
  font-size: 1.4em;
}
h5 {
  font-size: 1.3em;
}
h6 {
  font-size: 1.15em;
}
.tag {
  background-color: #eee8d5;
  color: #d33682;
  padding: 0 0.2em;
}
.todo,
.next,
.done {
  color: #fdf6e3;
  background-color: #dc322f;
  padding: 0 0.2em;
}
.tag {
  -webkit-border-radius: 0.35em;
  -moz-border-radius: 0.35em;
  border-radius: 0.35em;
}
.TODO {
  -webkit-border-radius: 0.2em;
  -moz-border-radius: 0.2em;
  border-radius: 0.2em;
  background-color: #2aa198;
}
.NEXT {
  -webkit-border-radius: 0.2em;
  -moz-border-radius: 0.2em;
  border-radius: 0.2em;
  background-color: #268bd2;
}
.ACTIVE {
  -webkit-border-radius: 0.2em;
  -moz-border-radius: 0.2em;
  border-radius: 0.2em;
  background-color: #268bd2;
}
.DONE {
  -webkit-border-radius: 0.2em;
  -moz-border-radius: 0.2em;
  border-radius: 0.2em;
  background-color: #859900;
}
.WAITING {
  -webkit-border-radius: 0.2em;
  -moz-border-radius: 0.2em;
  border-radius: 0.2em;
  background-color: #cb4b16;
}
.HOLD {
  -webkit-border-radius: 0.2em;
  -moz-border-radius: 0.2em;
  border-radius: 0.2em;
  background-color: #d33682;
}
.NOTE {
  -webkit-border-radius: 0.2em;
  -moz-border-radius: 0.2em;
  border-radius: 0.2em;
  background-color: #d33682;
}
.CANCELLED {
  -webkit-border-radius: 0.2em;
  -moz-border-radius: 0.2em;
  border-radius: 0.2em;
  background-color: #859900;
}
</style>