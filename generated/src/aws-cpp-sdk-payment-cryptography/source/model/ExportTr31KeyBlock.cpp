/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/ExportTr31KeyBlock.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{

ExportTr31KeyBlock::ExportTr31KeyBlock() : 
    m_wrappingKeyIdentifierHasBeenSet(false)
{
}

ExportTr31KeyBlock::ExportTr31KeyBlock(JsonView jsonValue) : 
    m_wrappingKeyIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

ExportTr31KeyBlock& ExportTr31KeyBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WrappingKeyIdentifier"))
  {
    m_wrappingKeyIdentifier = jsonValue.GetString("WrappingKeyIdentifier");

    m_wrappingKeyIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportTr31KeyBlock::Jsonize() const
{
  JsonValue payload;

  if(m_wrappingKeyIdentifierHasBeenSet)
  {
   payload.WithString("WrappingKeyIdentifier", m_wrappingKeyIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
