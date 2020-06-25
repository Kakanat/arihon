## 2-1（全探索）

* 再帰関数
* スタック（LIFO）とキュー（FIFO）
* 深さ優先探索（DFS）
* 幅優先探索（BFS）
* 枝刈り

`next_permutation`は覚えておくと便利。


## 2-2（貪欲法）

「その場での最善」の選択を繰り返す。正しいルールを慎重に選ぶことが大切。

[FenceRepair](https://github.com/Kakanat/arihon/tree/master/chapter2/2-2/FenceRepair)はハフマン符号のアルゴリズムとして知られている。


## 2-3（動的計画法）

対象となる問題を複数の部分問題に分割し、部分問題の計算結果を記録しながら解いていく手法（Wikipediaより）。
通称DP（Dynamic Programming）。
帰納的関係性から作られた漸化式と計算結果のメモを使う。

下記をはじめとして、いろいろな形がある。

* 探索のメモ化
* 漸化式を用いたDP
* 状態遷移を考えたDP

