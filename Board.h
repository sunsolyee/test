#pragma once

#include <iostream>

// ��ũ�� ��ǥ - ���� : ���� ���
//  x�� : ��->�� �� ����
//  y�� : ��->�Ʒ� �� ���� 
// ��ǥ�� ���� ����

class Board
{
public:
    Board(void) {}
    Board(int x, int y) { setPt(x, y); }
    Board(const Board& pt) { setPt(pt.m_x, pt.m_y); }

    int getX(void) const { return m_x; }
    int getY(void) const { return m_y; }
    void setPt(int x, int y) { m_x = x, m_y = y; }

    void move(int dx, int dy) //dx,dy��ŭ ���� ������ �̵�
    {
        m_x += dx;
        m_y += dy;
    }
    void move(const Board& dpt) {
        move(dpt.m_x, dpt.m_y);
    }

private:
    int m_x = 0, m_y = 0; //2���� ��ǥ Ư���Ѱ� ������ �������� ����
};
std::ostream& operator<<(std::ostream& stream, const Board& pt)
{
    stream << "(" << pt.getX() << "," << pt.getY() << ")";
    return stream;
}
