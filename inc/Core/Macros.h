#pragma once
#pragma warning(disable: 4553)
#pragma warning(disable: 4552)
#pragma warning(disable: 5033)
#pragma warning(disable: 4067)
#pragma warning(disable: 4828)

#define HEX_NODISCARD [[nodiscard]]
#define HEX_MAYBE_UNUSED [[maybe_unused]]
#define HEX_UNUSED(x) (void)(x)
#define HEX_CONSTEXPR constexpr
#define HEX_INLINE inline
#define HEX_NULL 0
#define HEX_INLINE_STATIC SR_INLINE static
#define _DEBUG HEX_DEBUG

#define HEX_SAFE_DELETE_PTR(ptr)\
    if(ptr) {                   \
        delete ptr;             \
        ptr = nullptr;          \
    }                           \

#define HEX_SAVE_DELETE_ARRAY_PTR(ptr)\
    if(ptr) {                         \
        delete[] ptr;                 \
        ptr = nullptr;                \
    }                                 \