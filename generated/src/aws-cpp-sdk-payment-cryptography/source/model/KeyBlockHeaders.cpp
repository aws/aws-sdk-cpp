/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/KeyBlockHeaders.h>
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

KeyBlockHeaders::KeyBlockHeaders(JsonView jsonValue)
{
  *this = jsonValue;
}

KeyBlockHeaders& KeyBlockHeaders::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyModesOfUse"))
  {
    m_keyModesOfUse = jsonValue.GetObject("KeyModesOfUse");
    m_keyModesOfUseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyExportability"))
  {
    m_keyExportability = KeyExportabilityMapper::GetKeyExportabilityForName(jsonValue.GetString("KeyExportability"));
    m_keyExportabilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KeyVersion"))
  {
    m_keyVersion = jsonValue.GetString("KeyVersion");
    m_keyVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptionalBlocks"))
  {
    Aws::Map<Aws::String, JsonView> optionalBlocksJsonMap = jsonValue.GetObject("OptionalBlocks").GetAllObjects();
    for(auto& optionalBlocksItem : optionalBlocksJsonMap)
    {
      m_optionalBlocks[optionalBlocksItem.first] = optionalBlocksItem.second.AsString();
    }
    m_optionalBlocksHasBeenSet = true;
  }
  return *this;
}

JsonValue KeyBlockHeaders::Jsonize() const
{
  JsonValue payload;

  if(m_keyModesOfUseHasBeenSet)
  {
   payload.WithObject("KeyModesOfUse", m_keyModesOfUse.Jsonize());

  }

  if(m_keyExportabilityHasBeenSet)
  {
   payload.WithString("KeyExportability", KeyExportabilityMapper::GetNameForKeyExportability(m_keyExportability));
  }

  if(m_keyVersionHasBeenSet)
  {
   payload.WithString("KeyVersion", m_keyVersion);

  }

  if(m_optionalBlocksHasBeenSet)
  {
   JsonValue optionalBlocksJsonMap;
   for(auto& optionalBlocksItem : m_optionalBlocks)
   {
     optionalBlocksJsonMap.WithString(optionalBlocksItem.first, optionalBlocksItem.second);
   }
   payload.WithObject("OptionalBlocks", std::move(optionalBlocksJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
