/*=============================================================================
    Copyright (c) 2001-2011 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

    This is an auto-generated file. Do not edit!
==============================================================================*/
namespace boost { namespace fusion
{
    struct void_;
    struct fusion_sequence_tag;
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct vector
        : sequence_base<vector<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
    {
    private:
        typedef typename detail::vector_n_chooser<
            T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19>::type
        vector_n;
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19>
        friend struct vector;
    public:
        typedef typename vector_n::types types;
        typedef typename vector_n::fusion_tag fusion_tag;
        typedef typename vector_n::tag tag;
        typedef typename vector_n::size size;
        typedef typename vector_n::category category;
        typedef typename vector_n::is_view is_view;
        BOOST_FUSION_GPU_ENABLED
        vector()
            : vec() {}
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19>
        BOOST_FUSION_GPU_ENABLED
        vector(vector<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16 , U17 , U18 , U19> const& rhs)
            : vec(rhs.vec) {}
        BOOST_FUSION_GPU_ENABLED
        vector(vector const& rhs)
            : vec(rhs.vec) {}
        template <typename Sequence>
        BOOST_FUSION_GPU_ENABLED
        vector(Sequence const& rhs)
            : vec(BOOST_FUSION_VECTOR_COPY_INIT()) {}
        
        
        
        
        
        
        
    BOOST_FUSION_GPU_ENABLED
    explicit
    vector(typename detail::call_param<T0 >::type arg0)
        : vec(arg0) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0>
    BOOST_FUSION_GPU_ENABLED
    explicit
    vector(U0 && arg0)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1)
        : vec(arg0 , arg1) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1 , typename detail::call_param<T2 >::type arg2)
        : vec(arg0 , arg1 , arg2) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1 , U2 && arg2)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1) , BOOST_FUSION_FWD_ELEM(U2, arg2)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1 , typename detail::call_param<T2 >::type arg2 , typename detail::call_param<T3 >::type arg3)
        : vec(arg0 , arg1 , arg2 , arg3) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1) , BOOST_FUSION_FWD_ELEM(U2, arg2) , BOOST_FUSION_FWD_ELEM(U3, arg3)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1 , typename detail::call_param<T2 >::type arg2 , typename detail::call_param<T3 >::type arg3 , typename detail::call_param<T4 >::type arg4)
        : vec(arg0 , arg1 , arg2 , arg3 , arg4) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1) , BOOST_FUSION_FWD_ELEM(U2, arg2) , BOOST_FUSION_FWD_ELEM(U3, arg3) , BOOST_FUSION_FWD_ELEM(U4, arg4)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1 , typename detail::call_param<T2 >::type arg2 , typename detail::call_param<T3 >::type arg3 , typename detail::call_param<T4 >::type arg4 , typename detail::call_param<T5 >::type arg5)
        : vec(arg0 , arg1 , arg2 , arg3 , arg4 , arg5) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1) , BOOST_FUSION_FWD_ELEM(U2, arg2) , BOOST_FUSION_FWD_ELEM(U3, arg3) , BOOST_FUSION_FWD_ELEM(U4, arg4) , BOOST_FUSION_FWD_ELEM(U5, arg5)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1 , typename detail::call_param<T2 >::type arg2 , typename detail::call_param<T3 >::type arg3 , typename detail::call_param<T4 >::type arg4 , typename detail::call_param<T5 >::type arg5 , typename detail::call_param<T6 >::type arg6)
        : vec(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1) , BOOST_FUSION_FWD_ELEM(U2, arg2) , BOOST_FUSION_FWD_ELEM(U3, arg3) , BOOST_FUSION_FWD_ELEM(U4, arg4) , BOOST_FUSION_FWD_ELEM(U5, arg5) , BOOST_FUSION_FWD_ELEM(U6, arg6)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1 , typename detail::call_param<T2 >::type arg2 , typename detail::call_param<T3 >::type arg3 , typename detail::call_param<T4 >::type arg4 , typename detail::call_param<T5 >::type arg5 , typename detail::call_param<T6 >::type arg6 , typename detail::call_param<T7 >::type arg7)
        : vec(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1) , BOOST_FUSION_FWD_ELEM(U2, arg2) , BOOST_FUSION_FWD_ELEM(U3, arg3) , BOOST_FUSION_FWD_ELEM(U4, arg4) , BOOST_FUSION_FWD_ELEM(U5, arg5) , BOOST_FUSION_FWD_ELEM(U6, arg6) , BOOST_FUSION_FWD_ELEM(U7, arg7)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1 , typename detail::call_param<T2 >::type arg2 , typename detail::call_param<T3 >::type arg3 , typename detail::call_param<T4 >::type arg4 , typename detail::call_param<T5 >::type arg5 , typename detail::call_param<T6 >::type arg6 , typename detail::call_param<T7 >::type arg7 , typename detail::call_param<T8 >::type arg8)
        : vec(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1) , BOOST_FUSION_FWD_ELEM(U2, arg2) , BOOST_FUSION_FWD_ELEM(U3, arg3) , BOOST_FUSION_FWD_ELEM(U4, arg4) , BOOST_FUSION_FWD_ELEM(U5, arg5) , BOOST_FUSION_FWD_ELEM(U6, arg6) , BOOST_FUSION_FWD_ELEM(U7, arg7) , BOOST_FUSION_FWD_ELEM(U8, arg8)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1 , typename detail::call_param<T2 >::type arg2 , typename detail::call_param<T3 >::type arg3 , typename detail::call_param<T4 >::type arg4 , typename detail::call_param<T5 >::type arg5 , typename detail::call_param<T6 >::type arg6 , typename detail::call_param<T7 >::type arg7 , typename detail::call_param<T8 >::type arg8 , typename detail::call_param<T9 >::type arg9)
        : vec(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1) , BOOST_FUSION_FWD_ELEM(U2, arg2) , BOOST_FUSION_FWD_ELEM(U3, arg3) , BOOST_FUSION_FWD_ELEM(U4, arg4) , BOOST_FUSION_FWD_ELEM(U5, arg5) , BOOST_FUSION_FWD_ELEM(U6, arg6) , BOOST_FUSION_FWD_ELEM(U7, arg7) , BOOST_FUSION_FWD_ELEM(U8, arg8) , BOOST_FUSION_FWD_ELEM(U9, arg9)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1 , typename detail::call_param<T2 >::type arg2 , typename detail::call_param<T3 >::type arg3 , typename detail::call_param<T4 >::type arg4 , typename detail::call_param<T5 >::type arg5 , typename detail::call_param<T6 >::type arg6 , typename detail::call_param<T7 >::type arg7 , typename detail::call_param<T8 >::type arg8 , typename detail::call_param<T9 >::type arg9 , typename detail::call_param<T10 >::type arg10)
        : vec(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1) , BOOST_FUSION_FWD_ELEM(U2, arg2) , BOOST_FUSION_FWD_ELEM(U3, arg3) , BOOST_FUSION_FWD_ELEM(U4, arg4) , BOOST_FUSION_FWD_ELEM(U5, arg5) , BOOST_FUSION_FWD_ELEM(U6, arg6) , BOOST_FUSION_FWD_ELEM(U7, arg7) , BOOST_FUSION_FWD_ELEM(U8, arg8) , BOOST_FUSION_FWD_ELEM(U9, arg9) , BOOST_FUSION_FWD_ELEM(U10, arg10)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1 , typename detail::call_param<T2 >::type arg2 , typename detail::call_param<T3 >::type arg3 , typename detail::call_param<T4 >::type arg4 , typename detail::call_param<T5 >::type arg5 , typename detail::call_param<T6 >::type arg6 , typename detail::call_param<T7 >::type arg7 , typename detail::call_param<T8 >::type arg8 , typename detail::call_param<T9 >::type arg9 , typename detail::call_param<T10 >::type arg10 , typename detail::call_param<T11 >::type arg11)
        : vec(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1) , BOOST_FUSION_FWD_ELEM(U2, arg2) , BOOST_FUSION_FWD_ELEM(U3, arg3) , BOOST_FUSION_FWD_ELEM(U4, arg4) , BOOST_FUSION_FWD_ELEM(U5, arg5) , BOOST_FUSION_FWD_ELEM(U6, arg6) , BOOST_FUSION_FWD_ELEM(U7, arg7) , BOOST_FUSION_FWD_ELEM(U8, arg8) , BOOST_FUSION_FWD_ELEM(U9, arg9) , BOOST_FUSION_FWD_ELEM(U10, arg10) , BOOST_FUSION_FWD_ELEM(U11, arg11)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1 , typename detail::call_param<T2 >::type arg2 , typename detail::call_param<T3 >::type arg3 , typename detail::call_param<T4 >::type arg4 , typename detail::call_param<T5 >::type arg5 , typename detail::call_param<T6 >::type arg6 , typename detail::call_param<T7 >::type arg7 , typename detail::call_param<T8 >::type arg8 , typename detail::call_param<T9 >::type arg9 , typename detail::call_param<T10 >::type arg10 , typename detail::call_param<T11 >::type arg11 , typename detail::call_param<T12 >::type arg12)
        : vec(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1) , BOOST_FUSION_FWD_ELEM(U2, arg2) , BOOST_FUSION_FWD_ELEM(U3, arg3) , BOOST_FUSION_FWD_ELEM(U4, arg4) , BOOST_FUSION_FWD_ELEM(U5, arg5) , BOOST_FUSION_FWD_ELEM(U6, arg6) , BOOST_FUSION_FWD_ELEM(U7, arg7) , BOOST_FUSION_FWD_ELEM(U8, arg8) , BOOST_FUSION_FWD_ELEM(U9, arg9) , BOOST_FUSION_FWD_ELEM(U10, arg10) , BOOST_FUSION_FWD_ELEM(U11, arg11) , BOOST_FUSION_FWD_ELEM(U12, arg12)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1 , typename detail::call_param<T2 >::type arg2 , typename detail::call_param<T3 >::type arg3 , typename detail::call_param<T4 >::type arg4 , typename detail::call_param<T5 >::type arg5 , typename detail::call_param<T6 >::type arg6 , typename detail::call_param<T7 >::type arg7 , typename detail::call_param<T8 >::type arg8 , typename detail::call_param<T9 >::type arg9 , typename detail::call_param<T10 >::type arg10 , typename detail::call_param<T11 >::type arg11 , typename detail::call_param<T12 >::type arg12 , typename detail::call_param<T13 >::type arg13)
        : vec(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1) , BOOST_FUSION_FWD_ELEM(U2, arg2) , BOOST_FUSION_FWD_ELEM(U3, arg3) , BOOST_FUSION_FWD_ELEM(U4, arg4) , BOOST_FUSION_FWD_ELEM(U5, arg5) , BOOST_FUSION_FWD_ELEM(U6, arg6) , BOOST_FUSION_FWD_ELEM(U7, arg7) , BOOST_FUSION_FWD_ELEM(U8, arg8) , BOOST_FUSION_FWD_ELEM(U9, arg9) , BOOST_FUSION_FWD_ELEM(U10, arg10) , BOOST_FUSION_FWD_ELEM(U11, arg11) , BOOST_FUSION_FWD_ELEM(U12, arg12) , BOOST_FUSION_FWD_ELEM(U13, arg13)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1 , typename detail::call_param<T2 >::type arg2 , typename detail::call_param<T3 >::type arg3 , typename detail::call_param<T4 >::type arg4 , typename detail::call_param<T5 >::type arg5 , typename detail::call_param<T6 >::type arg6 , typename detail::call_param<T7 >::type arg7 , typename detail::call_param<T8 >::type arg8 , typename detail::call_param<T9 >::type arg9 , typename detail::call_param<T10 >::type arg10 , typename detail::call_param<T11 >::type arg11 , typename detail::call_param<T12 >::type arg12 , typename detail::call_param<T13 >::type arg13 , typename detail::call_param<T14 >::type arg14)
        : vec(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13 , arg14) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13 , U14 && arg14)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1) , BOOST_FUSION_FWD_ELEM(U2, arg2) , BOOST_FUSION_FWD_ELEM(U3, arg3) , BOOST_FUSION_FWD_ELEM(U4, arg4) , BOOST_FUSION_FWD_ELEM(U5, arg5) , BOOST_FUSION_FWD_ELEM(U6, arg6) , BOOST_FUSION_FWD_ELEM(U7, arg7) , BOOST_FUSION_FWD_ELEM(U8, arg8) , BOOST_FUSION_FWD_ELEM(U9, arg9) , BOOST_FUSION_FWD_ELEM(U10, arg10) , BOOST_FUSION_FWD_ELEM(U11, arg11) , BOOST_FUSION_FWD_ELEM(U12, arg12) , BOOST_FUSION_FWD_ELEM(U13, arg13) , BOOST_FUSION_FWD_ELEM(U14, arg14)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1 , typename detail::call_param<T2 >::type arg2 , typename detail::call_param<T3 >::type arg3 , typename detail::call_param<T4 >::type arg4 , typename detail::call_param<T5 >::type arg5 , typename detail::call_param<T6 >::type arg6 , typename detail::call_param<T7 >::type arg7 , typename detail::call_param<T8 >::type arg8 , typename detail::call_param<T9 >::type arg9 , typename detail::call_param<T10 >::type arg10 , typename detail::call_param<T11 >::type arg11 , typename detail::call_param<T12 >::type arg12 , typename detail::call_param<T13 >::type arg13 , typename detail::call_param<T14 >::type arg14 , typename detail::call_param<T15 >::type arg15)
        : vec(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13 , arg14 , arg15) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13 , U14 && arg14 , U15 && arg15)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1) , BOOST_FUSION_FWD_ELEM(U2, arg2) , BOOST_FUSION_FWD_ELEM(U3, arg3) , BOOST_FUSION_FWD_ELEM(U4, arg4) , BOOST_FUSION_FWD_ELEM(U5, arg5) , BOOST_FUSION_FWD_ELEM(U6, arg6) , BOOST_FUSION_FWD_ELEM(U7, arg7) , BOOST_FUSION_FWD_ELEM(U8, arg8) , BOOST_FUSION_FWD_ELEM(U9, arg9) , BOOST_FUSION_FWD_ELEM(U10, arg10) , BOOST_FUSION_FWD_ELEM(U11, arg11) , BOOST_FUSION_FWD_ELEM(U12, arg12) , BOOST_FUSION_FWD_ELEM(U13, arg13) , BOOST_FUSION_FWD_ELEM(U14, arg14) , BOOST_FUSION_FWD_ELEM(U15, arg15)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1 , typename detail::call_param<T2 >::type arg2 , typename detail::call_param<T3 >::type arg3 , typename detail::call_param<T4 >::type arg4 , typename detail::call_param<T5 >::type arg5 , typename detail::call_param<T6 >::type arg6 , typename detail::call_param<T7 >::type arg7 , typename detail::call_param<T8 >::type arg8 , typename detail::call_param<T9 >::type arg9 , typename detail::call_param<T10 >::type arg10 , typename detail::call_param<T11 >::type arg11 , typename detail::call_param<T12 >::type arg12 , typename detail::call_param<T13 >::type arg13 , typename detail::call_param<T14 >::type arg14 , typename detail::call_param<T15 >::type arg15 , typename detail::call_param<T16 >::type arg16)
        : vec(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13 , arg14 , arg15 , arg16) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13 , U14 && arg14 , U15 && arg15 , U16 && arg16)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1) , BOOST_FUSION_FWD_ELEM(U2, arg2) , BOOST_FUSION_FWD_ELEM(U3, arg3) , BOOST_FUSION_FWD_ELEM(U4, arg4) , BOOST_FUSION_FWD_ELEM(U5, arg5) , BOOST_FUSION_FWD_ELEM(U6, arg6) , BOOST_FUSION_FWD_ELEM(U7, arg7) , BOOST_FUSION_FWD_ELEM(U8, arg8) , BOOST_FUSION_FWD_ELEM(U9, arg9) , BOOST_FUSION_FWD_ELEM(U10, arg10) , BOOST_FUSION_FWD_ELEM(U11, arg11) , BOOST_FUSION_FWD_ELEM(U12, arg12) , BOOST_FUSION_FWD_ELEM(U13, arg13) , BOOST_FUSION_FWD_ELEM(U14, arg14) , BOOST_FUSION_FWD_ELEM(U15, arg15) , BOOST_FUSION_FWD_ELEM(U16, arg16)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1 , typename detail::call_param<T2 >::type arg2 , typename detail::call_param<T3 >::type arg3 , typename detail::call_param<T4 >::type arg4 , typename detail::call_param<T5 >::type arg5 , typename detail::call_param<T6 >::type arg6 , typename detail::call_param<T7 >::type arg7 , typename detail::call_param<T8 >::type arg8 , typename detail::call_param<T9 >::type arg9 , typename detail::call_param<T10 >::type arg10 , typename detail::call_param<T11 >::type arg11 , typename detail::call_param<T12 >::type arg12 , typename detail::call_param<T13 >::type arg13 , typename detail::call_param<T14 >::type arg14 , typename detail::call_param<T15 >::type arg15 , typename detail::call_param<T16 >::type arg16 , typename detail::call_param<T17 >::type arg17)
        : vec(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13 , arg14 , arg15 , arg16 , arg17) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13 , U14 && arg14 , U15 && arg15 , U16 && arg16 , U17 && arg17)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1) , BOOST_FUSION_FWD_ELEM(U2, arg2) , BOOST_FUSION_FWD_ELEM(U3, arg3) , BOOST_FUSION_FWD_ELEM(U4, arg4) , BOOST_FUSION_FWD_ELEM(U5, arg5) , BOOST_FUSION_FWD_ELEM(U6, arg6) , BOOST_FUSION_FWD_ELEM(U7, arg7) , BOOST_FUSION_FWD_ELEM(U8, arg8) , BOOST_FUSION_FWD_ELEM(U9, arg9) , BOOST_FUSION_FWD_ELEM(U10, arg10) , BOOST_FUSION_FWD_ELEM(U11, arg11) , BOOST_FUSION_FWD_ELEM(U12, arg12) , BOOST_FUSION_FWD_ELEM(U13, arg13) , BOOST_FUSION_FWD_ELEM(U14, arg14) , BOOST_FUSION_FWD_ELEM(U15, arg15) , BOOST_FUSION_FWD_ELEM(U16, arg16) , BOOST_FUSION_FWD_ELEM(U17, arg17)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1 , typename detail::call_param<T2 >::type arg2 , typename detail::call_param<T3 >::type arg3 , typename detail::call_param<T4 >::type arg4 , typename detail::call_param<T5 >::type arg5 , typename detail::call_param<T6 >::type arg6 , typename detail::call_param<T7 >::type arg7 , typename detail::call_param<T8 >::type arg8 , typename detail::call_param<T9 >::type arg9 , typename detail::call_param<T10 >::type arg10 , typename detail::call_param<T11 >::type arg11 , typename detail::call_param<T12 >::type arg12 , typename detail::call_param<T13 >::type arg13 , typename detail::call_param<T14 >::type arg14 , typename detail::call_param<T15 >::type arg15 , typename detail::call_param<T16 >::type arg16 , typename detail::call_param<T17 >::type arg17 , typename detail::call_param<T18 >::type arg18)
        : vec(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13 , arg14 , arg15 , arg16 , arg17 , arg18) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13 , U14 && arg14 , U15 && arg15 , U16 && arg16 , U17 && arg17 , U18 && arg18)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1) , BOOST_FUSION_FWD_ELEM(U2, arg2) , BOOST_FUSION_FWD_ELEM(U3, arg3) , BOOST_FUSION_FWD_ELEM(U4, arg4) , BOOST_FUSION_FWD_ELEM(U5, arg5) , BOOST_FUSION_FWD_ELEM(U6, arg6) , BOOST_FUSION_FWD_ELEM(U7, arg7) , BOOST_FUSION_FWD_ELEM(U8, arg8) , BOOST_FUSION_FWD_ELEM(U9, arg9) , BOOST_FUSION_FWD_ELEM(U10, arg10) , BOOST_FUSION_FWD_ELEM(U11, arg11) , BOOST_FUSION_FWD_ELEM(U12, arg12) , BOOST_FUSION_FWD_ELEM(U13, arg13) , BOOST_FUSION_FWD_ELEM(U14, arg14) , BOOST_FUSION_FWD_ELEM(U15, arg15) , BOOST_FUSION_FWD_ELEM(U16, arg16) , BOOST_FUSION_FWD_ELEM(U17, arg17) , BOOST_FUSION_FWD_ELEM(U18, arg18)) {}
# endif
    BOOST_FUSION_GPU_ENABLED
    vector(typename detail::call_param<T0 >::type arg0 , typename detail::call_param<T1 >::type arg1 , typename detail::call_param<T2 >::type arg2 , typename detail::call_param<T3 >::type arg3 , typename detail::call_param<T4 >::type arg4 , typename detail::call_param<T5 >::type arg5 , typename detail::call_param<T6 >::type arg6 , typename detail::call_param<T7 >::type arg7 , typename detail::call_param<T8 >::type arg8 , typename detail::call_param<T9 >::type arg9 , typename detail::call_param<T10 >::type arg10 , typename detail::call_param<T11 >::type arg11 , typename detail::call_param<T12 >::type arg12 , typename detail::call_param<T13 >::type arg13 , typename detail::call_param<T14 >::type arg14 , typename detail::call_param<T15 >::type arg15 , typename detail::call_param<T16 >::type arg16 , typename detail::call_param<T17 >::type arg17 , typename detail::call_param<T18 >::type arg18 , typename detail::call_param<T19 >::type arg19)
        : vec(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10 , arg11 , arg12 , arg13 , arg14 , arg15 , arg16 , arg17 , arg18 , arg19) {}
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
    template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19>
    BOOST_FUSION_GPU_ENABLED
    vector(U0 && arg0 , U1 && arg1 , U2 && arg2 , U3 && arg3 , U4 && arg4 , U5 && arg5 , U6 && arg6 , U7 && arg7 , U8 && arg8 , U9 && arg9 , U10 && arg10 , U11 && arg11 , U12 && arg12 , U13 && arg13 , U14 && arg14 , U15 && arg15 , U16 && arg16 , U17 && arg17 , U18 && arg18 , U19 && arg19)
        : vec(BOOST_FUSION_FWD_ELEM(U0, arg0) , BOOST_FUSION_FWD_ELEM(U1, arg1) , BOOST_FUSION_FWD_ELEM(U2, arg2) , BOOST_FUSION_FWD_ELEM(U3, arg3) , BOOST_FUSION_FWD_ELEM(U4, arg4) , BOOST_FUSION_FWD_ELEM(U5, arg5) , BOOST_FUSION_FWD_ELEM(U6, arg6) , BOOST_FUSION_FWD_ELEM(U7, arg7) , BOOST_FUSION_FWD_ELEM(U8, arg8) , BOOST_FUSION_FWD_ELEM(U9, arg9) , BOOST_FUSION_FWD_ELEM(U10, arg10) , BOOST_FUSION_FWD_ELEM(U11, arg11) , BOOST_FUSION_FWD_ELEM(U12, arg12) , BOOST_FUSION_FWD_ELEM(U13, arg13) , BOOST_FUSION_FWD_ELEM(U14, arg14) , BOOST_FUSION_FWD_ELEM(U15, arg15) , BOOST_FUSION_FWD_ELEM(U16, arg16) , BOOST_FUSION_FWD_ELEM(U17, arg17) , BOOST_FUSION_FWD_ELEM(U18, arg18) , BOOST_FUSION_FWD_ELEM(U19, arg19)) {}
# endif
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19>
        BOOST_FUSION_GPU_ENABLED
        vector&
        operator=(vector<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16 , U17 , U18 , U19> const& rhs)
        {
            vec = rhs.vec;
            return *this;
        }
        template <typename T>
        BOOST_FUSION_GPU_ENABLED
        vector&
        operator=(T const& rhs)
        {
            vec = rhs;
            return *this;
        }
        BOOST_FUSION_GPU_ENABLED
        vector&
        operator=(vector const& rhs)
        {
            vec = rhs.vec;
            return *this;
        }
# if !defined(BOOST_NO_CXX11_RVALUE_REFERENCES)
        BOOST_FUSION_GPU_ENABLED
        vector(vector&& rhs)
            : vec(std::forward<vector_n>(rhs.vec)) {}
        BOOST_FUSION_GPU_ENABLED
        vector&
        operator=(vector&& rhs)
        {
            vec = std::forward<vector_n>(rhs.vec);
            return *this;
        }
        template <typename T>
        BOOST_FUSION_GPU_ENABLED
        vector&
        operator=(T&& rhs)
        {
            vec = BOOST_FUSION_FWD_ELEM(T, rhs);
            return *this;
        }
# endif
        template <int N>
        BOOST_FUSION_GPU_ENABLED
        typename add_reference<
            typename mpl::at_c<types, N>::type
        >::type
        at_impl(mpl::int_<N> index)
        {
            return vec.at_impl(index);
        }
        template <int N>
        BOOST_FUSION_GPU_ENABLED
        typename add_reference<
            typename add_const<
                typename mpl::at_c<types, N>::type
            >::type
        >::type
        at_impl(mpl::int_<N> index) const
        {
            return vec.at_impl(index);
        }
        template <typename I>
        BOOST_FUSION_GPU_ENABLED
        typename add_reference<
            typename mpl::at<types, I>::type
        >::type
        at_impl(I )
        {
            return vec.at_impl(mpl::int_<I::value>());
        }
        template<typename I>
        BOOST_FUSION_GPU_ENABLED
        typename add_reference<
            typename add_const<
                typename mpl::at<types, I>::type
            >::type
        >::type
        at_impl(I ) const
        {
            return vec.at_impl(mpl::int_<I::value>());
        }
    private:
        BOOST_FUSION_VECTOR_CTOR_HELPER()
        vector_n vec;
    };
}}
