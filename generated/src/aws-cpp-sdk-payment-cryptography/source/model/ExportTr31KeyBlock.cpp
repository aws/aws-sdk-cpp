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

ExportTr31KeyBlock::ExportTr31KeyBlock(JsonView jsonValue)
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
  if(jsonValue.ValueExists("KeyBlockHeaders"))
  {
    m_keyBlockHeaders = jsonValue.GetObject("KeyBlockHeaders");
    m_keyBlockHeadersHasBeenSet = true;
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

  if(m_keyBlockHeadersHasBeenSet)
  {
   payload.WithObject("KeyBlockHeaders", m_keyBlockHeaders.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
