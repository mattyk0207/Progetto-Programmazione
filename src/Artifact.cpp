#include "Artifact.hpp"

Artifact::Artifact(): Drawable()
{
   
}

Artifact::Artifact(int y, int x,chtype ch): Drawable(y,x,ch)
{
   
}
Artifact::Artifact(int y, int x): Drawable(y,x,RandomArtifact())
{
   
}

chtype Artifact::RandomArtifact()
{
    srand(time(NULL));
    int i = (rand() % (3));
    if(i==1)
    {
        return 'R';
    }
    else if(i==2)
    {
        return 'E';
    }
    else
    {
        return 'H';
    }
}