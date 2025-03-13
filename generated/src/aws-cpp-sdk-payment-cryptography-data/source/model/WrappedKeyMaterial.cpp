/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/WrappedKeyMaterial.h>
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

WrappedKeyMaterial::WrappedKeyMaterial(JsonView jsonValue)
{
  *this = jsonValue;
}

WrappedKeyMaterial& WrappedKeyMaterial::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Tr31KeyBlock"))
  {
    m_tr31KeyBlock = jsonValue.GetString("Tr31KeyBlock");
    m_tr31KeyBlockHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DiffieHellmanSymmetricKey"))
  {
    m_diffieHellmanSymmetricKey = jsonValue.GetObject("DiffieHellmanSymmetricKey");
    m_diffieHellmanSymmetricKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue WrappedKeyMaterial::Jsonize() const
{
  JsonValue payload;

  if(m_tr31KeyBlockHasBeenSet)
  {
   payload.WithString("Tr31KeyBlock", m_tr31KeyBlock);

  }

  if(m_diffieHellmanSymmetricKeyHasBeenSet)
  {
   payload.WithObject("DiffieHellmanSymmetricKey", m_diffieHellmanSymmetricKey.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
