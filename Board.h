#pragma once

#include <iostream>

// 스크린 좌표 - 원점 : 왼쪽 상단
//  x축 : 왼->오 값 증가
//  y축 : 위->아래 값 증가 
// 좌표는 음수 없음

class Board
{
public:
    Board(void) {}
    Board(int x, int y) { setPt(x, y); }
    Board(const Board& pt) { setPt(pt.m_x, pt.m_y); }

    int getX(void) const { return m_x; }
    int getY(void) const { return m_y; }
    void setPt(int x, int y) { m_x = x, m_y = y; }

    void move(int dx, int dy) //dx,dy만큼 원래 값에서 이동
    {
        m_x += dx;
        m_y += dy;
    }
    void move(const Board& dpt) {
        move(dpt.m_x, dpt.m_y);
    }

private:
    int m_x = 0, m_y = 0; //2차원 좌표 특별한거 없으면 원점으로 배정
};
std::ostream& operator<<(std::ostream& stream, const Board& pt)
{
    stream << "(" << pt.getX() << "," << pt.getY() << ")";
    return stream;
}
