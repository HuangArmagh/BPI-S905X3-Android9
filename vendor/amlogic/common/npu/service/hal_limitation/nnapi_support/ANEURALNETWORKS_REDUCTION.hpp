/****************************************************************************
*
*    Copyright (c) 2020 Vivante Corporation
*
*    Permission is hereby granted, free of charge, to any person obtaining a
*    copy of this software and associated documentation files (the "Software"),
*    to deal in the Software without restriction, including without limitation
*    the rights to use, copy, modify, merge, publish, distribute, sublicense,
*    and/or sell copies of the Software, and to permit persons to whom the
*    Software is furnished to do so, subject to the following conditions:
*
*    The above copyright notice and this permission notice shall be included in
*    all copies or substantial portions of the Software.
*
*    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
*    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
*    DEALINGS IN THE SOFTWARE.
*
*****************************************************************************/

#ifndef __ANEURALNETWORKS_REDUCTION_HPP__
#define __ANEURALNETWORKS_REDUCTION_HPP__

#include "hal_limitation/support_macros.hpp"

#define OP_SPEC_NAME ReduceAllInput
OP_SPEC_BEGIN()
#define ARG_NAMES         \
    (input,               \
     axes,                \
     keep_dim)
#define ARGC BOOST_PP_TUPLE_SIZE(ARG_NAMES)
#define BOOST_PP_LOCAL_MACRO(n) OP_SPEC_ARG(BOOST_PP_TUPLE_ELEM(ARGC, n, ARG_NAMES))
#define BOOST_PP_LOCAL_LIMITS (0, ARGC)
#include BOOST_PP_LOCAL_ITERATE()
OP_SPEC_END()
// order of argument is important
MAKE_SPEC(base)
    .input_(nnrt::OperandType::TENSOR_BOOL8)
    .axes_(nnrt::OperandType::TENSOR_INT32)
    .keep_dim_(nnrt::OperandType::BOOL));
#undef ARG_NAMES
#undef ARGC
#undef OP_SPEC_NAME

#define OP_SPEC_NAME ReduceAllOutput
OP_SPEC_BEGIN()
#define ARG_NAMES         \
    (input,               \
     output)
#define ARGC BOOST_PP_TUPLE_SIZE(ARG_NAMES)
#define BOOST_PP_LOCAL_MACRO(n) OP_SPEC_ARG(BOOST_PP_TUPLE_ELEM(ARGC, n, ARG_NAMES))
#define BOOST_PP_LOCAL_LIMITS (0, ARGC)
#include BOOST_PP_LOCAL_ITERATE()
OP_SPEC_END()
// order of argument is important
MAKE_SPEC(base)
    .input_(nnrt::OperandType::TENSOR_BOOL8)
    .output_(nnrt::OperandType::TENSOR_BOOL8));
#undef ARG_NAMES
#undef ARGC
#undef OP_SPEC_NAME

#define OP_SPEC_NAME ReduceAnyInput
OP_SPEC_BEGIN()
#define ARG_NAMES         \
    (input,               \
     axes,                \
     keep_dim)
#define ARGC BOOST_PP_TUPLE_SIZE(ARG_NAMES)
#define BOOST_PP_LOCAL_MACRO(n) OP_SPEC_ARG(BOOST_PP_TUPLE_ELEM(ARGC, n, ARG_NAMES))
#define BOOST_PP_LOCAL_LIMITS (0, ARGC)
#include BOOST_PP_LOCAL_ITERATE()
OP_SPEC_END()
// order of argument is important
MAKE_SPEC(base)
    .input_(nnrt::OperandType::TENSOR_BOOL8)
    .axes_(nnrt::OperandType::TENSOR_INT32)
    .keep_dim_(nnrt::OperandType::BOOL));
#undef ARG_NAMES
#undef ARGC
#undef OP_SPEC_NAME

#define OP_SPEC_NAME ReduceAnyOutput
OP_SPEC_BEGIN()
#define ARG_NAMES         \
    (input,               \
     output)
#define ARGC BOOST_PP_TUPLE_SIZE(ARG_NAMES)
#define BOOST_PP_LOCAL_MACRO(n) OP_SPEC_ARG(BOOST_PP_TUPLE_ELEM(ARGC, n, ARG_NAMES))
#define BOOST_PP_LOCAL_LIMITS (0, ARGC)
#include BOOST_PP_LOCAL_ITERATE()
OP_SPEC_END()
// order of argument is important
MAKE_SPEC(base)
    .input_(nnrt::OperandType::TENSOR_BOOL8)
    .output_(nnrt::OperandType::TENSOR_BOOL8));
#undef ARG_NAMES
#undef ARGC
#undef OP_SPEC_NAME

#define OP_SPEC_NAME ReduceMaxInput
OP_SPEC_BEGIN()
#define ARG_NAMES         \
    (input,               \
     axes,                \
     keep_dim)
#define ARGC BOOST_PP_TUPLE_SIZE(ARG_NAMES)

#define BOOST_PP_LOCAL_MACRO(n) OP_SPEC_ARG(BOOST_PP_TUPLE_ELEM(ARGC, n, ARG_NAMES))
#define BOOST_PP_LOCAL_LIMITS (0, ARGC)
#include BOOST_PP_LOCAL_ITERATE()
OP_SPEC_END()

// order of argument is important
MAKE_SPEC(float16_base)
    .input_(nnrt::OperandType::TENSOR_FLOAT16)
    .axes_(nnrt::OperandType::TENSOR_INT32)
    .keep_dim_(nnrt::OperandType::BOOL));

    OVERRIDE_SPEC(float16_base, float32)
    .input_(nnrt::OperandType::TENSOR_FLOAT32)
    );

    OVERRIDE_SPEC(float16_base, quant8_asymm)
    .input_(nnrt::OperandType::TENSOR_QUANT8_ASYMM)
    );

#undef ARG_NAMES
#undef ARGC
#undef OP_SPEC_NAME

#define OP_SPEC_NAME ReduceMaxOutput
OP_SPEC_BEGIN()
#define ARG_NAMES         \
    (input,               \
     output)
#define ARGC BOOST_PP_TUPLE_SIZE(ARG_NAMES)

#define BOOST_PP_LOCAL_MACRO(n) OP_SPEC_ARG(BOOST_PP_TUPLE_ELEM(ARGC, n, ARG_NAMES))
#define BOOST_PP_LOCAL_LIMITS (0, ARGC)
#include BOOST_PP_LOCAL_ITERATE()
OP_SPEC_END()

// order of argument is important
MAKE_SPEC(float16_base)
    .input_(nnrt::OperandType::TENSOR_FLOAT16)
    .output_(nnrt::OperandType::TENSOR_FLOAT16));

    OVERRIDE_SPEC(float16_base, float32)
    .input_(nnrt::OperandType::TENSOR_FLOAT32)
    .output_(nnrt::OperandType::TENSOR_FLOAT32));

    OVERRIDE_SPEC(float16_base, quant8_asymm)
    .input_(nnrt::OperandType::TENSOR_QUANT8_ASYMM)
    .output_(nnrt::OperandType::TENSOR_QUANT8_ASYMM));

#undef ARG_NAMES
#undef ARGC
#undef OP_SPEC_NAME

#define OP_SPEC_NAME ReduceMinInput
OP_SPEC_BEGIN()
#define ARG_NAMES         \
    (input,               \
     axes,                \
     keep_dim)
#define ARGC BOOST_PP_TUPLE_SIZE(ARG_NAMES)

#define BOOST_PP_LOCAL_MACRO(n) OP_SPEC_ARG(BOOST_PP_TUPLE_ELEM(ARGC, n, ARG_NAMES))
#define BOOST_PP_LOCAL_LIMITS (0, ARGC)
#include BOOST_PP_LOCAL_ITERATE()
OP_SPEC_END()

// order of argument is important
MAKE_SPEC(float16_base)
    .input_(nnrt::OperandType::TENSOR_FLOAT16)
    .axes_(nnrt::OperandType::TENSOR_INT32)
    .keep_dim_(nnrt::OperandType::BOOL));

    OVERRIDE_SPEC(float16_base, float32)
    .input_(nnrt::OperandType::TENSOR_FLOAT32)
    );

    OVERRIDE_SPEC(float16_base, quant8_asymm)
    .input_(nnrt::OperandType::TENSOR_QUANT8_ASYMM)
    );

#undef ARG_NAMES
#undef ARGC
#undef OP_SPEC_NAME

#define OP_SPEC_NAME ReduceMinOutput
OP_SPEC_BEGIN()
#define ARG_NAMES         \
    (input,               \
     output)
#define ARGC BOOST_PP_TUPLE_SIZE(ARG_NAMES)

#define BOOST_PP_LOCAL_MACRO(n) OP_SPEC_ARG(BOOST_PP_TUPLE_ELEM(ARGC, n, ARG_NAMES))
#define BOOST_PP_LOCAL_LIMITS (0, ARGC)
#include BOOST_PP_LOCAL_ITERATE()
OP_SPEC_END()

// order of argument is important
MAKE_SPEC(float16_base)
    .input_(nnrt::OperandType::TENSOR_FLOAT16)
    .output_(nnrt::OperandType::TENSOR_FLOAT16));

    OVERRIDE_SPEC(float16_base, float32)
    .input_(nnrt::OperandType::TENSOR_FLOAT32)
    .output_(nnrt::OperandType::TENSOR_FLOAT32));

    OVERRIDE_SPEC(float16_base, quant8_asymm)
    .input_(nnrt::OperandType::TENSOR_QUANT8_ASYMM)
    .output_(nnrt::OperandType::TENSOR_QUANT8_ASYMM));


#undef ARG_NAMES
#undef ARGC
#undef OP_SPEC_NAME

#define OP_SPEC_NAME ReduceSumInput
OP_SPEC_BEGIN()
#define ARG_NAMES         \
    (input,               \
     axes,                \
     keep_dim)
#define ARGC BOOST_PP_TUPLE_SIZE(ARG_NAMES)

#define BOOST_PP_LOCAL_MACRO(n) OP_SPEC_ARG(BOOST_PP_TUPLE_ELEM(ARGC, n, ARG_NAMES))
#define BOOST_PP_LOCAL_LIMITS (0, ARGC)
#include BOOST_PP_LOCAL_ITERATE()
OP_SPEC_END()

// order of argument is important
MAKE_SPEC(float16_base)
    .input_(nnrt::OperandType::TENSOR_FLOAT16)
    .axes_(nnrt::OperandType::TENSOR_INT32)
    .keep_dim_(nnrt::OperandType::BOOL));

    OVERRIDE_SPEC(float16_base, float32)
    .input_(nnrt::OperandType::TENSOR_FLOAT32)
    );

#undef ARG_NAMES
#undef ARGC
#undef OP_SPEC_NAME

#define OP_SPEC_NAME ReduceSumOutput
OP_SPEC_BEGIN()
#define ARG_NAMES         \
    (input,               \
     output)
#define ARGC BOOST_PP_TUPLE_SIZE(ARG_NAMES)

#define BOOST_PP_LOCAL_MACRO(n) OP_SPEC_ARG(BOOST_PP_TUPLE_ELEM(ARGC, n, ARG_NAMES))
#define BOOST_PP_LOCAL_LIMITS (0, ARGC)
#include BOOST_PP_LOCAL_ITERATE()
OP_SPEC_END()

// order of argument is important
MAKE_SPEC(float16_base)
    .input_(nnrt::OperandType::TENSOR_FLOAT16)
    .output_(nnrt::OperandType::TENSOR_FLOAT16));

    OVERRIDE_SPEC(float16_base, float32)
    .input_(nnrt::OperandType::TENSOR_FLOAT32)
    .output_(nnrt::OperandType::TENSOR_FLOAT32));

#undef ARG_NAMES
#undef ARGC
#undef OP_SPEC_NAME

#define OP_SPEC_NAME ReduceProdInput
OP_SPEC_BEGIN()
#define ARG_NAMES         \
    (input,               \
     axes,                \
     keep_dim)
#define ARGC BOOST_PP_TUPLE_SIZE(ARG_NAMES)

#define BOOST_PP_LOCAL_MACRO(n) OP_SPEC_ARG(BOOST_PP_TUPLE_ELEM(ARGC, n, ARG_NAMES))
#define BOOST_PP_LOCAL_LIMITS (0, ARGC)
#include BOOST_PP_LOCAL_ITERATE()
OP_SPEC_END()

// order of argument is important
MAKE_SPEC(float16_base)
    .input_(nnrt::OperandType::TENSOR_FLOAT16)
    .axes_(nnrt::OperandType::TENSOR_INT32)
    .keep_dim_(nnrt::OperandType::BOOL));

    OVERRIDE_SPEC(float16_base, float32)
    .input_(nnrt::OperandType::TENSOR_FLOAT32)
    );

#undef ARG_NAMES
#undef ARGC
#undef OP_SPEC_NAME

#define OP_SPEC_NAME ReduceProdOutput
OP_SPEC_BEGIN()
#define ARG_NAMES         \
    (input,               \
     output)
#define ARGC BOOST_PP_TUPLE_SIZE(ARG_NAMES)

#define BOOST_PP_LOCAL_MACRO(n) OP_SPEC_ARG(BOOST_PP_TUPLE_ELEM(ARGC, n, ARG_NAMES))
#define BOOST_PP_LOCAL_LIMITS (0, ARGC)
#include BOOST_PP_LOCAL_ITERATE()
OP_SPEC_END()

// order of argument is important
MAKE_SPEC(float16_base)
    .input_(nnrt::OperandType::TENSOR_FLOAT16)
    .output_(nnrt::OperandType::TENSOR_FLOAT16));

    OVERRIDE_SPEC(float16_base, float32)
    .input_(nnrt::OperandType::TENSOR_FLOAT32)
    .output_(nnrt::OperandType::TENSOR_FLOAT32));

#undef ARG_NAMES
#undef ARGC
#undef OP_SPEC_NAME

#endif
