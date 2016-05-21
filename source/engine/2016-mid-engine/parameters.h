﻿#ifndef _2016_MID_PARAMETERS_
#define _2016_MID_PARAMETERS_

//
// futility pruning
//

// 深さに比例したfutility pruning
// depth手先で評価値が変動する幅が = depth * PARAM_FUTILITY_MARGIN_DEPTH
// 元の値 = 90
// [PARAM] min:50,max:120,step:3,interval:1,time_rate:1
PARAM_DEFINE PARAM_FUTILITY_MARGIN_ALPHA = 87;

// 静止探索でのfutility pruning
// 元の値 = 128
// [PARAM] min:50,max:150,step:3,interval:1,time_rate:1
PARAM_DEFINE PARAM_FUTILITY_MARGIN_QUIET = 129;

// futility pruningが適用されるdepth。これ以下のdepthに対して適用される。
// 元の値 = 7
// [PARAM] min:5,max:13,step:1,interval:2,time_rate:1
PARAM_DEFINE PARAM_FUTILITY_RETURN_DEPTH = 5;

// 親nodeでのfutilityを行なうdepthとそのmarginと、seeが負の指し手の枝刈りをするdepth

// 元の値 = 7
// [PARAM] min:5,max:13,step:1,interval:2,time_rate:1
PARAM_DEFINE PARAM_FUTILITY_AT_PARENT_NODE_DEPTH = 8;

// 元の値 = 170
// [PARAM] min:100,max:200,step:3,interval:1,time_rate:1
PARAM_DEFINE PARAM_FUTILITY_AT_PARENT_NODE_MARGIN = 170;

// 元の値 = 4
// [PARAM] min:2,max:10,step:1,interval:2,time_rate:1
PARAM_DEFINE PARAM_FUTILITY_AT_PARENT_NODE_SEE_DEPTH = 2;

//
// null move dynamic pruning
//

// null move dynamic pruningのときの
//  Reduction = (α + β * depth ) / 256 + ...みたいなαとβ

// 元の値 = 823
// [PARAM] min:500,max:1500,step:16,interval:1,time_rate:1
PARAM_DEFINE PARAM_NULL_MOVE_DYNAMIC_ALPHA = 871;

// 元の値 = 67
// [PARAM] min:50,max:100,step:3,interval:1,time_rate:1
PARAM_DEFINE PARAM_NULL_MOVE_DYNAMIC_BETA = 64;

// null moveの前提depthと、beta値を上回ったときにreturnするdepth
// 元の値 = 12
// [PARAM] min:4,max:10,step:1,interval:2,time_rate:1
PARAM_DEFINE PARAM_NULL_MOVE_RETURN_DEPTH = 11;

//
// probcut
//

// probcutの前提depth
// 元の値 = 5
// [PARAM] min:3,max:10,step:1,interval:2,time_rate:1
PARAM_DEFINE PARAM_PROBCUT_DEPTH = 5;

//
// singular extension
//

// singular extensionの前提depth
// 元の値 = 10
// [PARAM] min:6,max:13,step:1,interval:2,time_rate:3
PARAM_DEFINE PARAM_SINGULAR_EXTENSION_DEPTH = 8;

// singular extensionのmarginを計算するときの係数
// Value rBeta = ttValue - PARAM_SINGULAR_MARGIN * depth / ONE_PLY;

// 元の値 = 8
// [PARAM] min:2,max:20,step:1,interval:1,time_rate:1
PARAM_DEFINE PARAM_SINGULAR_MARGIN = 6;

// singular extensionで浅い探索をするときの深さに関する係数
// depth * PARAM_SINGULAR_SEARCH_DEPTH / 256

// 元の値 = 128
// [PARAM] min:64,max:192,step:32,interval:2,time_rate:1
PARAM_DEFINE PARAM_SINGULAR_SEARCH_DEPTH = 64;

//
// pruning by move count,history,etc..
//

// move countによる枝刈りをする深さ
// 元の値 = 16
// [PARAM] min:8,max:32,step:1,interval:3,time_rate:3
PARAM_DEFINE PARAM_PRUNING_BY_MOVE_COUNT_DEPTH = 16;

// historyによる枝刈りをする深さ

// 元の値 = 4
// [PARAM] min:2,max:32,step:1,interval:2,time_rate:1
PARAM_DEFINE PARAM_PRUNING_BY_HISTORY_DEPTH = 4;

// historyの値によってreductionするときの係数
// 元の値 = 14980
// [PARAM] min:4000,max:32000,step:256,interval:1,time_rate:1
PARAM_DEFINE PARAM_REDUCTION_BY_HISTORY = 14724;

//
// razoring pruning
// 


// return (Value)(PARAM_RAZORING_MARGIN + PARAM_RAZORING_ALPHA * static_cast<int>(d));

// 元の値 = 512
// [PARAM] min:64,max:1024,step:32,interval:1,time_rate:1
PARAM_DEFINE PARAM_RAZORING_MARGIN = 448;

// 元の値 = 16
// [PARAM] min:4,max:32,step:2,interval:1,time_rate:1
PARAM_DEFINE PARAM_RAZORING_ALPHA = 16;

//
// etc..
// 

// この個数までquietの指し手を登録してhistoryなどを増減させる。
// 元の値 = 64
// [PARAM] min:32,max:128,step:4,interval:2,time_rate:2
PARAM_DEFINE PARAM_QUIET_SEARCH_COUNT = 72;

//
// history of changed parameters
//
/*
ここに過去の変更履歴が自動的に書き込まれる。
右側にある「←」は値を減らしたときの勝率。「→」は値を増やしたときの勝率。
[HISTORY]
PARAM_FUTILITY_MARGIN_ALPHA : 87 → 87(50.00%) : ←←(値81,勝率49.25%,1440局,有意68.84%) ,←(値84,勝率49.15%,1440局,有意71.06%) ,→(値90,勝率49.52%,1440局,有意62.78%) ,→→(値93,勝率49.52%,1440局,有意62.82%) ,
PARAM_QUIET_SEARCH_COUNT : 64 → 72(55.05%) : ←←(値56,勝率51.07%,1440局,有意24.62%) ,←(値60,勝率50.27%,1440局,有意42.23%) ,→(値68,勝率50.43%,1440局,有意38.46%) ,→→(値72,勝率55.05%,480局,有意1.30%) ,
PARAM_RAZORING_ALPHA : 16 → 16(50.00%) : ←←(値12,勝率50.27%,1440局,有意42.22%) ,←(値14,勝率49.72%,2880局,有意58.44%) ,→(値18,勝率50.69%,1440局,有意32.37%) ,→→(値20,勝率48.82%,1440局,有意77.39%) ,
PARAM_RAZORING_MARGIN : 448 → 448(50.00%) : ←←(値384,勝率49.73%,1440局,有意57.74%) ,←(値416,勝率49.30%,1440局,有意67.68%) ,→(値480,勝率49.57%,1440局,有意61.59%) ,→→(値512,勝率50.16%,1440局,有意44.80%) ,
PARAM_PRUNING_BY_HISTORY_DEPTH : 4 → 4(50.00%) : ←←(値8,勝率0.00%,0局,有意50.00%) ,←(値8,勝率45.11%,1440局,有意99.88%) ,→(値8,勝率48.94%,1440局,有意75.28%) ,→→(値8,勝率43.19%,480局,有意99.87%) ,
PARAM_REDUCTION_BY_HISTORY : 14724 → 14724(50.00%) : ←←(値14212,勝率46.27%,480局,有意95.18%) ,←(値14468,勝率51.28%,1440局,有意20.74%) ,→(値14980,勝率47.74%,1440局,有意92.08%) ,→→(値15236,勝率50.32%,2880局,有意40.51%) ,
PARAM_SINGULAR_SEARCH_DEPTH : 128 → 64(53.94%) : ←←(値64,勝率53.94%,624局,有意3.96%) ,←(値96,勝率46.20%,480局,有意95.54%) ,→(値160,勝率50.85%,1440局,有意28.96%) ,→→(値192,勝率49.26%,1440局,有意68.75%) ,
PARAM_SINGULAR_MARGIN : 7 → 6(52.27%) : ←←(値5,勝率49.10%,1872局,有意73.59%) ,←(値6,勝率52.27%,1872局,有意5.71%) ,→(値8,勝率49.80%,1872局,有意55.68%) ,→→(値9,勝率51.97%,1872局,有意8.45%) ,
PARAM_SINGULAR_EXTENSION_DEPTH : 10 → 8(53.44%) : ←←(値8,勝率53.44%,624局,有意4.08%) ,←(値9,勝率49.96%,1872局,有意51.14%) ,→(値11,勝率49.06%,1872局,有意74.51%) ,→→(値12,勝率49.63%,1872局,有意60.13%) ,
PARAM_PROBCUT_DEPTH : 5 → 5(50.00%) : ←←(値3,勝率39.35%,624局,有意100.00%) ,←(値4,勝率49.96%,1872局,有意51.14%) ,→(値6,勝率46.54%,1872局,有意99.20%) ,→→(値7,勝率45.23%,624局,有意99.21%) ,
PARAM_NULL_MOVE_DYNAMIC_BETA : 58 → 64(53.36%) : ←←(値52,勝率51.11%,1872局,有意21.99%) ,←(値55,勝率50.41%,1872局,有意38.74%) ,→(値61,勝率52.29%,1872局,有意5.47%) ,→→(値64,勝率53.36%,624局,有意4.46%) ,
PARAM_NULL_MOVE_RETURN_DEPTH : 12 → 11(51.58%) : ←←(値10,勝率49.84%,1872局,有意54.55%) ,←(値10,勝率51.58%,3744局,有意8.77%) ,→(値10,勝率51.11%,1872局,有意21.99%) ,→→(値10,勝率0.00%,0局,有意50.00%) ,
PARAM_NULL_MOVE_DYNAMIC_ALPHA : 871 → 871(50.00%) : ←←(値839,勝率49.22%,1872局,有意70.68%) ,←(値855,勝率49.10%,1872局,有意73.53%) ,→(値887,勝率49.96%,1872局,有意51.14%) ,→→(値903,勝率46.32%,624局,有意96.87%) ,
PARAM_FUTILITY_AT_PARENT_NODE_SEE_DEPTH : 2 → 2(50.00%) : ←←(値2,勝率0.00%,0局,有意50.00%) ,←(値2,勝率0.00%,0局,有意50.00%) ,→(値3,勝率50.00%,1872局,有意50.00%) ,→→(値4,勝率50.55%,3744局,有意31.99%) ,
PARAM_FUTILITY_AT_PARENT_NODE_MARGIN : 173 → 170(52.73%) : ←←(値167,勝率49.10%,3744局,有意77.95%) ,←(値170,勝率52.73%,3744局,有意0.97%) ,→(値176,勝率47.78%,1872局,有意93.91%) ,→→(値179,勝率50.16%,1872局,有意45.46%) ,
PARAM_FUTILITY_AT_PARENT_NODE_DEPTH : 7 → 8(52.15%) : ←←(値5,勝率45.79%,624局,有意98.35%) ,←(値6,勝率50.74%,1872局,有意30.27%) ,→(値8,勝率52.15%,1872局,有意6.76%) ,→→(値9,勝率50.16%,1872局,有意45.43%) ,
PARAM_FUTILITY_MARGIN_QUIET : 129 → 129(50.00%) : ←←(値123,勝率46.64%,624局,有意95.54%) ,←(値126,勝率49.10%,1872局,有意73.59%) ,→(値132,勝率50.25%,1872局,有意43.15%) ,→→(値135,勝率49.80%,1872局,有意55.68%) ,
PARAM_FUTILITY_RETURN_DEPTH : 5 → 5(50.00%) : ←←(値5,勝率0.00%,0局,有意50.00%) ,←(値5,勝率0.00%,0局,有意50.00%) ,→(値6,勝率50.20%,1872局,有意44.32%) ,→→(値7,勝率49.55%,1872局,有意62.39%) ,
PARAM_FUTILITY_MARGIN_ALPHA : 93 → 87(53.42%) : ←←(値87,勝率53.42%,1872局,有意0.86%) ,←(値90,勝率50.00%,1872局,有意50.00%) ,→(値96,勝率50.08%,1872局,有意47.72%) ,→→(値99,勝率47.19%,1872局,有意97.56%) ,
PARAM_RAZORING_ALPHA : 14 → 16(51.97%) : ←←(値10,勝率49.35%,1872局,有意67.61%) ,←(値12,勝率51.89%,1872局,有意9.37%) ,→(値16,勝率51.97%,1872局,有意8.45%) ,→→(値18,勝率46.18%,624局,有意97.36%) ,
PARAM_RAZORING_MARGIN : 448 → 448(50.00%) : ←←(値384,勝率50.77%,3744局,有意25.62%) ,←(値416,勝率51.01%,3744局,有意19.37%) ,→(値480,勝率46.57%,624局,有意95.90%) ,→→(値512,勝率49.02%,1872局,有意75.38%) ,
PARAM_REDUCTION_BY_HISTORY : 14724 → 14724(50.00%) : ←←(値14212,勝率51.11%,1872局,有意21.99%) ,←(値14468,勝率50.82%,1872局,有意28.36%) ,→(値14980,勝率47.55%,3744局,有意98.22%) ,→→(値15236,勝率51.19%,1872局,有意20.29%) ,
PARAM_SINGULAR_MARGIN : 7 → 7(50.00%) : ←←(値5,勝率49.51%,1872局,有意63.43%) ,←(値6,勝率50.94%,1872局,有意25.57%) ,→(値8,勝率48.72%,3744局,有意86.37%) ,→→(値9,勝率50.94%,1872局,有意25.52%) ,
PARAM_NULL_MOVE_DYNAMIC_BETA : 58 → 58(50.00%) : ←←(値52,勝率50.41%,1872局,有意38.71%) ,←(値55,勝率47.02%,1872局,有意98.16%) ,→(値61,勝率50.49%,1872局,有意36.59%) ,→→(値64,勝率50.69%,1872局,有意31.36%) ,
PARAM_NULL_MOVE_DYNAMIC_ALPHA : 855 → 871(51.92%) : ←←(値823,勝率50.49%,1872局,有意36.58%) ,←(値839,勝率47.42%,1872局,有意96.42%) ,→(値871,勝率51.92%,1872局,有意8.98%) ,→→(値887,勝率51.15%,1872局,有意21.12%) ,
PARAM_FUTILITY_AT_PARENT_NODE_MARGIN : 170 → 173(53.72%) : ←←(値164,勝率49.92%,1872局,有意52.28%) ,←(値167,勝率46.72%,624局,有意95.16%) ,→(値173,勝率53.72%,624局,有意3.07%) ,→→(値176,勝率51.99%,1872局,有意8.11%) ,
PARAM_FUTILITY_MARGIN_QUIET : 123 → 129(52.55%) : ←←(値117,勝率50.78%,1872局,有意29.32%) ,←(値120,勝率50.08%,1872局,有意47.72%) ,→(値126,勝率52.19%,1872局,有意6.39%) ,→→(値129,勝率52.55%,3744局,有意1.42%) ,
PARAM_FUTILITY_MARGIN_ALPHA : 93 → 93(50.00%) : ←←(値87,勝率49.92%,1872局,有意52.29%) ,←(値90,勝率46.42%,624局,有意96.54%) ,→(値96,勝率50.29%,1872局,有意42.07%) ,→→(値99,勝率48.82%,1872局,有意79.61%) ,
PARAM_RAZORING_ALPHA : 16 → 14(55.15%) : ←←(値12,勝率48.04%,1872局,有意91.51%) ,←(値14,勝率55.15%,624局,有意0.51%) ,→(値18,勝率51.88%,3744局,有意5.36%) ,→→(値20,勝率51.72%,3744局,有意7.05%) ,
PARAM_RAZORING_MARGIN : 448 → 448(50.00%) : ←←(値384,勝率49.75%,1872局,有意56.82%) ,←(値416,勝率50.37%,1872局,有意39.80%) ,→(値480,勝率50.03%,3744局,有意49.07%) ,→→(値512,勝率50.16%,1872局,有意45.44%) ,
PARAM_REDUCTION_BY_HISTORY : 14724 → 14724(50.00%) : ←←(値14212,勝率48.19%,3744局,有意93.88%) ,←(値14468,勝率50.37%,1872局,有意39.84%) ,→(値14980,勝率49.14%,1872局,有意72.64%) ,→→(値15236,勝率48.04%,1872局,有意91.48%) ,
PARAM_SINGULAR_MARGIN : 8 → 7(51.69%) : ←←(値6,勝率48.94%,1872局,有意77.09%) ,←(値7,勝率51.69%,3744局,有意7.41%) ,→(値9,勝率50.16%,1872局,有意45.45%) ,→→(値10,勝率49.71%,1872局,有意57.95%) ,
PARAM_NULL_MOVE_DYNAMIC_BETA : 61 → 58(53.98%) : ←←(値55,勝率48.01%,1872局,有意91.89%) ,←(値58,勝率53.98%,624局,有意2.18%) ,→(値64,勝率52.49%,1872局,有意4.06%) ,→→(値67,勝率51.18%,1872局,有意20.41%) ,
PARAM_NULL_MOVE_DYNAMIC_ALPHA : 823 → 855(53.43%) : ←←(値791,勝率48.47%,3744局,有意90.50%) ,←(値807,勝率52.52%,1872局,有意3.97%) ,→(値839,勝率48.08%,1872局,有意91.03%) ,→→(値855,勝率53.43%,1872局,有意0.82%) ,
PARAM_FUTILITY_AT_PARENT_NODE_MARGIN : 170 → 170(50.00%) : ←←(値164,勝率49.51%,1872局,有意63.40%) ,←(値167,勝率46.15%,624局,有意97.40%) ,→(値173,勝率50.65%,1872局,有意32.40%) ,→→(値176,勝率49.51%,1872局,有意63.45%) ,
PARAM_FUTILITY_MARGIN_QUIET : 123 → 123(50.00%) : ←←(値117,勝率50.63%,3744局,有意29.57%) ,←(値120,勝率48.75%,3744局,有意85.85%) ,→(値126,勝率50.25%,1872局,有意43.18%) ,→→(値129,勝率50.86%,1872局,有意27.41%) ,
PARAM_FUTILITY_MARGIN_ALPHA : 90 → 93(55.95%) : ←←(値84,勝率47.93%,1872局,有意92.70%) ,←(値87,勝率50.53%,1872局,有意35.55%) ,→(値93,勝率55.95%,624局,有意0.14%) ,→→(値96,勝率47.30%,1872局,有意97.06%) ,
PARAM_PRUNING_BY_MOVE_COUNT_DEPTH : 16 → 16(50.00%) : ←←(値14,勝率47.70%,1872局,有意94.57%) ,←(値15,勝率48.98%,1872局,有意76.27%) ,→(値17,勝率49.09%,3744局,有意78.02%) ,→→(値18,勝率51.03%,1872局,有意23.68%) ,
PARAM_QUIET_SEARCH_COUNT : 64 → 64(50.00%) : ←←(値56,勝率47.11%,1872局,有意97.79%) ,←(値60,勝率50.04%,1872局,有意48.86%) ,→(値68,勝率47.76%,1872局,有意94.20%) ,→→(値72,勝率50.12%,1872局,有意46.58%) ,
PARAM_PRUNING_BY_HISTORY_DEPTH : 4 → 4(50.00%) : ←←(値8,勝率0.00%,0局,有意50.00%) ,←(値8,勝率46.47%,624局,有意96.27%) ,→(値8,勝率50.24%,1872局,有意43.21%) ,→→(値8,勝率47.48%,1872局,有意96.15%) ,
PARAM_SINGULAR_SEARCH_DEPTH : 128 → 128(50.00%) : ←←(値64,勝率51.03%,1872局,有意23.68%) ,←(値96,勝率49.06%,1872局,有意74.48%) ,→(値160,勝率50.29%,1872局,有意42.07%) ,→→(値192,勝率51.06%,1872局,有意22.85%) ,
PARAM_SINGULAR_EXTENSION_DEPTH : 10 → 11(52.83%) : ←←(値8,勝率49.67%,1872局,有意59.04%) ,←(値9,勝率50.16%,1872局,有意45.43%) ,→(値11,勝率52.83%,1872局,有意2.33%) ,→→(値12,勝率50.12%,1872局,有意46.58%) ,
PARAM_PROBCUT_DEPTH : 5 → 5(50.00%) : ←←(値3,勝率39.42%,624局,有意100.00%) ,←(値4,勝率49.13%,1872局,有意72.67%) ,→(値6,勝率47.16%,3744局,有意99.25%) ,→→(値7,勝率46.13%,624局,有意97.44%) ,
PARAM_NULL_MOVE_RETURN_DEPTH : 12 → 12(50.00%) : ←←(値10,勝率50.29%,1872局,有意42.05%) ,←(値10,勝率49.84%,1872局,有意54.55%) ,→(値10,勝率50.41%,3744局,有意36.28%) ,→→(値10,勝率0.00%,0局,有意50.00%) ,
PARAM_FUTILITY_AT_PARENT_NODE_SEE_DEPTH : 4 → 2(57.03%) : ←←(値2,勝率57.03%,624局,有意0.02%) ,←(値3,勝率49.63%,1872局,有意60.16%) ,→(値5,勝率47.83%,3744局,有意96.88%) ,→→(値6,勝率46.15%,624局,有意97.40%) ,
PARAM_FUTILITY_AT_PARENT_NODE_DEPTH : 7 → 7(50.00%) : ←←(値5,勝率50.11%,3744局,有意46.28%) ,←(値6,勝率51.09%,3744局,有意17.54%) ,→(値8,勝率49.18%,3744局,有意75.82%) ,→→(値9,勝率48.90%,1872局,有意77.98%) ,
PARAM_FUTILITY_RETURN_DEPTH : 7 → 5(53.43%) : ←←(値5,勝率53.43%,624局,有意4.10%) ,←(値6,勝率50.04%,1872局,有意48.86%) ,→(値8,勝率51.15%,1872局,有意21.14%) ,→→(値9,勝率49.18%,1872局,有意71.67%) ,
PARAM_RAZORING_ALPHA : 16 → 16(50.00%) : ←←(値12,勝率50.98%,1872局,有意24.65%) ,←(値14,勝率48.93%,1872局,有意77.17%) ,→(値18,勝率50.85%,1872局,有意27.46%) ,→→(値20,勝率47.56%,1872局,有意95.66%) ,
PARAM_RAZORING_MARGIN : 512 → 448(53.51%) : ←←(値448,勝率53.51%,624局,有意3.77%) ,←(値480,勝率52.83%,1872局,有意2.41%) ,→(値544,勝率50.69%,1872局,有意31.37%) ,→→(値576,勝率49.84%,1872局,有意54.55%) ,
PARAM_REDUCTION_BY_HISTORY : 14724 → 14724(50.00%) : ←←(値14212,勝率49.26%,1872局,有意69.70%) ,←(値14468,勝率50.57%,1872局,有意34.44%) ,→(値14980,勝率50.04%,1872局,有意48.86%) ,→→(値15236,勝率50.45%,1872局,有意37.67%) ,
PARAM_SINGULAR_MARGIN : 8 → 8(50.00%) : ←←(値6,勝率50.08%,1872局,有意47.72%) ,←(値7,勝率48.08%,1872局,有意91.03%) ,→(値9,勝率51.44%,3744局,有意10.85%) ,→→(値10,勝率51.00%,3744局,有意19.43%) ,
PARAM_NULL_MOVE_DYNAMIC_BETA : 67 → 61(52.12%) : ←←(値61,勝率52.12%,3744局,有意3.45%) ,←(値64,勝率46.25%,624局,有意97.11%) ,→(値70,勝率52.04%,3744局,有意4.00%) ,→→(値73,勝率50.82%,1872局,有意28.39%) ,
PARAM_NULL_MOVE_DYNAMIC_ALPHA : 823 → 823(50.00%) : ←←(値791,勝率50.90%,1872局,有意26.42%) ,←(値807,勝率47.87%,1872局,有意93.17%) ,→(値839,勝率50.00%,1872局,有意50.00%) ,→→(値855,勝率49.92%,1872局,有意52.28%) ,
PARAM_FUTILITY_AT_PARENT_NODE_MARGIN : 170 → 170(50.00%) : ←←(値164,勝率49.47%,1872局,有意64.53%) ,←(値167,勝率50.04%,1872局,有意48.86%) ,→(値173,勝率49.23%,1872局,有意70.62%) ,→→(値176,勝率49.35%,1872局,有意67.61%) ,
PARAM_FUTILITY_MARGIN_QUIET : 123 → 123(50.00%) : ←←(値117,勝率49.47%,1872局,有意64.50%) ,←(値120,勝率49.02%,1872局,有意75.36%) ,→(値126,勝率49.88%,1872局,有意53.41%) ,→→(値129,勝率47.39%,1872局,有意96.63%) ,
PARAM_FUTILITY_MARGIN_ALPHA : 90 → 90(50.00%) : ←←(値84,勝率50.00%,1872局,有意50.00%) ,←(値87,勝率49.22%,1872局,有意70.70%) ,→(値93,勝率46.33%,624局,有意96.85%) ,→→(値96,勝率46.73%,624局,有意95.13%) ,

*/

#endif
