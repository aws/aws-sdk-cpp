/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/IncomingKeyMaterial.h>
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

IncomingKeyMaterial::IncomingKeyMaterial(JsonView jsonValue)
{
  *this = jsonValue;
}

IncomingKeyMaterial& IncomingKeyMaterial::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DiffieHellmanTr31KeyBlock"))
  {
    m_diffieHellmanTr31KeyBlock = jsonValue.GetObject("DiffieHellmanTr31KeyBlock");
    m_diffieHellmanTr31KeyBlockHasBeenSet = true;
  }
  return *this;
}

JsonValue IncomingKeyMaterial::Jsonize() const
{
  JsonValue payload;

  if(m_diffieHellmanTr31KeyBlockHasBeenSet)
  {
   payload.WithObject("DiffieHellmanTr31KeyBlock", m_diffieHellmanTr31KeyBlock.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
