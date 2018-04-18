//
// Created by Yves Gingras on 18-04-18.
//

class Cell
{
public:
    Cell(int value, Cell *next);

    int GetValue() const;
    Cell *GetNext() const;
/*
    int Value() const {return m_value;}
    Cell *Next() const {return m_next;}
*/

private:
    int m_value;
    Cell *m_next;
};
