//
// Created by pisel on 29/01/2020.
//

#ifndef ANDMULT_H
#define ANDMULT_H

#include "../core/BinaryExpression.h"
#include "And.h"
#include "../core/Expression.h"

#include "../core/BinaryExpression.h"
#include "And.h"
#include "../core/Expression.h"

namespace fuzzy{
    template <class T>
    class AndMult : public And<T> {

    public:
        AndMult();

    public:
        T evaluate(core::Expression<T>* l,core::Expression<T>* r);
    };

    template<class T>
    T AndMult<T>::evaluate(core::Expression<T>* l, core::Expression<T>* r) {
        return l->evaluate() * r->evaluate() ;
    }

    template<class T>
    AndMult<T>::AndMult() {}


}

#endif //ANDMULT_H
