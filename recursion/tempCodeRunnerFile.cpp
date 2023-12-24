 //left
    if(check(x , y-1 , maze , rat_visited)) {
        ans.push_back("l");
        getPath(maze , rat_visited , ans , x , y-1);
    }