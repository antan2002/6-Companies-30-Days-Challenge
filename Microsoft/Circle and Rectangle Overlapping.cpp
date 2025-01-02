class Solution
{
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2)
    {
        int nearestx = max(x1, min(x2, xCenter));
        int nearesty = max(y1, min(y2, yCenter));
        int distX = nearestx - xCenter;
        int distY = nearesty - yCenter;
        return pow(distX, 2) + pow(distY, 2) <= pow(radius, 2);
    }
};