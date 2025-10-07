/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
* SPDX-License-Identifier: Apache-2.0.
*/

#include <aws/core/utils/cbor/CborValue.h>

using namespace Aws::Utils::Cbor;
using namespace Aws::Crt::Cbor;

static const char AWS_CBOR_VALUE_LOG_TAG[] = "CborValue";

CborValue::CborValue() : m_decoder(nullptr)
{
}

CborValue::CborValue(Aws::IStream& istream) : m_decoder(nullptr)
{
    Aws::StringStream ss;
    ss << istream.rdbuf();
    m_body = ss.str();
    auto cursor = Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(m_body.c_str()), m_body.length());
    m_decoder = Aws::MakeShared<CborDecoder>(AWS_CBOR_VALUE_LOG_TAG, cursor);
}

CborValue::CborValue(const Aws::String& value) : m_decoder(nullptr)
{
  m_body = value;
  auto cursor = Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(m_body.c_str()), m_body.length());
  m_decoder = Aws::MakeShared<CborDecoder>(AWS_CBOR_VALUE_LOG_TAG, cursor);
}

CborValue::CborValue(const CborValue& other) :
    m_body(other.m_body)
{
    auto cursor = Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(m_body.c_str()), m_body.length());
    m_decoder = Aws::MakeShared<CborDecoder>(AWS_CBOR_VALUE_LOG_TAG, cursor);
}

CborValue& CborValue::operator=(const CborValue& other)
{
    if (this != &other) {
        m_body = other.m_body;
        auto cursor = Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(m_body.c_str()), m_body.length());
        m_decoder = Aws::MakeShared<CborDecoder>(AWS_CBOR_VALUE_LOG_TAG, cursor);
    }
    return *this;
}

CborValue::CborValue(CborValue&& value) noexcept :
    m_body(std::move(value.m_body))
{
    auto cursor = Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(m_body.c_str()), m_body.length());
    m_decoder = Aws::MakeShared<CborDecoder>(AWS_CBOR_VALUE_LOG_TAG, cursor);
}

CborValue& CborValue::operator=(CborValue&& other) noexcept
{
    if (this != &other) {
        m_body = std::move(other.m_body);
        auto cursor = Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(m_body.c_str()), m_body.length());
        m_decoder = Aws::MakeShared<CborDecoder>(AWS_CBOR_VALUE_LOG_TAG, cursor);
    }
    return *this;
}

CborValue::~CborValue() = default;