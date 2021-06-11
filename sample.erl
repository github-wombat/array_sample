-module(sample).

main(_) ->
    A = [1,2,3],
    B = replace_at(A,1,4),
    io:format("~p~n",[B]),

    C = f(A),
    io:format("~p~n",[C]),

    D = [1,2],
    E = [replace_at(D,1,3),D],
    io:format("~p~n",[E]).

replace_at(L,I,V) ->
    H = lists:sublist(L,I-1),
    T = lists:sublist(L,I+1,length(L)-I),
    H ++ [V] ++ T.

f(X) ->
    replace_at(X,1,5).
