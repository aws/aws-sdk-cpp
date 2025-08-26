/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
* SPDX-License-Identifier: Apache-2.0.
*/

#include <aws/core/utils/cbor/CborValue.h>

using namespace Aws::Utils::Cbor;
using namespace Aws::Crt::Cbor;

CborValue::CborValue() : m_decoder(nullptr)
{
}

CborValue::CborValue(Aws::IStream& istream) : m_decoder(nullptr)
{
    Aws::StringStream ss;
    ss << istream.rdbuf();
    m_body = ss.str();
    auto cursor = Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(m_body.c_str()), m_body.length());
    m_decoder = std::make_shared<CborDecoder>(cursor);
}

CborValue::CborValue(const CborValue& other) :
    m_body(other.m_body)
{
    auto cursor = Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(m_body.c_str()), m_body.length());
    m_decoder = std::make_shared<CborDecoder>(cursor);
}

CborValue& CborValue::operator=(const CborValue& other)
{
    if (this != &other) {
        m_body = other.m_body;
        auto cursor = Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(m_body.c_str()), m_body.length());
        m_decoder = std::make_shared<CborDecoder>(cursor);
    }
    return *this;
}

CborValue::CborValue(CborValue&& value) noexcept :
    m_body(std::move(value.m_body))
{
    auto cursor = Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(m_body.c_str()), m_body.length());
    m_decoder = std::make_shared<CborDecoder>(cursor);
}

CborValue& CborValue::operator=(CborValue&& other) noexcept
{
    if (this != &other) {
        m_body = std::move(other.m_body);
        auto cursor = Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(m_body.c_str()), m_body.length());
        m_decoder = std::make_shared<CborDecoder>(cursor);
    }
    return *this;
}

CborValue::~CborValue() = default;