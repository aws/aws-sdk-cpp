/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/OutgoingTr31KeyBlock.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PaymentCryptographyData
{
namespace Model
{

OutgoingTr31KeyBlock::OutgoingTr31KeyBlock(JsonView jsonValue)
{
  *this = jsonValue;
}

OutgoingTr31KeyBlock& OutgoingTr31KeyBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WrappingKeyIdentifier"))
  {
    m_wrappingKeyIdentifier = jsonValue.GetString("WrappingKeyIdentifier");
    m_wrappingKeyIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue OutgoingTr31KeyBlock::Jsonize() const
{
  JsonValue payload;

  if(m_wrappingKeyIdentifierHasBeenSet)
  {
   payload.WithString("WrappingKeyIdentifier", m_wrappingKeyIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
