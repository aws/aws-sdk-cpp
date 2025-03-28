/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/DiffieHellmanDerivationData.h>
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

DiffieHellmanDerivationData::DiffieHellmanDerivationData(JsonView jsonValue)
{
  *this = jsonValue;
}

DiffieHellmanDerivationData& DiffieHellmanDerivationData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SharedInformation"))
  {
    m_sharedInformation = jsonValue.GetString("SharedInformation");
    m_sharedInformationHasBeenSet = true;
  }
  return *this;
}

JsonValue DiffieHellmanDerivationData::Jsonize() const
{
  JsonValue payload;

  if(m_sharedInformationHasBeenSet)
  {
   payload.WithString("SharedInformation", m_sharedInformation);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
