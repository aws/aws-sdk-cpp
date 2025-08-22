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
    m_decoder = Aws::MakeUnique<CborDecoder>("CborValue", cursor);

}

CborValue::CborValue(CborValue&& value) :
    m_body(value.m_body)
{
    auto cursor = Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(m_body.c_str()), m_body.length());
    m_decoder = Aws::MakeUnique<CborDecoder>("CborValue", cursor);
}

CborValue::~CborValue()
{
}