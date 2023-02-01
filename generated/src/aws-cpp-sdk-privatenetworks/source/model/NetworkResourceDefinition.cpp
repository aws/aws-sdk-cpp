/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/NetworkResourceDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

NetworkResourceDefinition::NetworkResourceDefinition() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_type(NetworkResourceDefinitionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

NetworkResourceDefinition::NetworkResourceDefinition(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_type(NetworkResourceDefinitionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkResourceDefinition& NetworkResourceDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("options"))
  {
    Aws::Utils::Array<JsonView> optionsJsonList = jsonValue.GetArray("options");
    for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
    {
      m_options.push_back(optionsJsonList[optionsIndex].AsObject());
    }
    m_optionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = NetworkResourceDefinitionTypeMapper::GetNetworkResourceDefinitionTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkResourceDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  if(m_optionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optionsJsonList(m_options.size());
   for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
   {
     optionsJsonList[optionsIndex].AsObject(m_options[optionsIndex].Jsonize());
   }
   payload.WithArray("options", std::move(optionsJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", NetworkResourceDefinitionTypeMapper::GetNameForNetworkResourceDefinitionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
