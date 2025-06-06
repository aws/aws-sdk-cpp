﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/PrivateKeyAttributesV3.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

PrivateKeyAttributesV3::PrivateKeyAttributesV3(JsonView jsonValue)
{
  *this = jsonValue;
}

PrivateKeyAttributesV3& PrivateKeyAttributesV3::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Algorithm"))
  {
    m_algorithm = PrivateKeyAlgorithmMapper::GetPrivateKeyAlgorithmForName(jsonValue.GetString("Algorithm"));
    m_algorithmHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CryptoProviders"))
  {
    Aws::Utils::Array<JsonView> cryptoProvidersJsonList = jsonValue.GetArray("CryptoProviders");
    for(unsigned cryptoProvidersIndex = 0; cryptoProvidersIndex < cryptoProvidersJsonList.GetLength(); ++cryptoProvidersIndex)
    {
      m_cryptoProviders.push_back(cryptoProvidersJsonList[cryptoProvidersIndex].AsString());
    }
    m_cryptoProvidersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeySpec"))
  {
    m_keySpec = KeySpecMapper::GetKeySpecForName(jsonValue.GetString("KeySpec"));
    m_keySpecHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyUsageProperty"))
  {
    m_keyUsageProperty = jsonValue.GetObject("KeyUsageProperty");
    m_keyUsagePropertyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MinimalKeyLength"))
  {
    m_minimalKeyLength = jsonValue.GetInteger("MinimalKeyLength");
    m_minimalKeyLengthHasBeenSet = true;
  }
  return *this;
}

JsonValue PrivateKeyAttributesV3::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmHasBeenSet)
  {
   payload.WithString("Algorithm", PrivateKeyAlgorithmMapper::GetNameForPrivateKeyAlgorithm(m_algorithm));
  }

  if(m_cryptoProvidersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cryptoProvidersJsonList(m_cryptoProviders.size());
   for(unsigned cryptoProvidersIndex = 0; cryptoProvidersIndex < cryptoProvidersJsonList.GetLength(); ++cryptoProvidersIndex)
   {
     cryptoProvidersJsonList[cryptoProvidersIndex].AsString(m_cryptoProviders[cryptoProvidersIndex]);
   }
   payload.WithArray("CryptoProviders", std::move(cryptoProvidersJsonList));

  }

  if(m_keySpecHasBeenSet)
  {
   payload.WithString("KeySpec", KeySpecMapper::GetNameForKeySpec(m_keySpec));
  }

  if(m_keyUsagePropertyHasBeenSet)
  {
   payload.WithObject("KeyUsageProperty", m_keyUsageProperty.Jsonize());

  }

  if(m_minimalKeyLengthHasBeenSet)
  {
   payload.WithInteger("MinimalKeyLength", m_minimalKeyLength);

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
