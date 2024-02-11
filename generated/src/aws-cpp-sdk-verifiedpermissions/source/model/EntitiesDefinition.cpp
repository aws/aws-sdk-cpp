/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/EntitiesDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

EntitiesDefinition::EntitiesDefinition() : 
    m_entityListHasBeenSet(false)
{
}

EntitiesDefinition::EntitiesDefinition(JsonView jsonValue) : 
    m_entityListHasBeenSet(false)
{
  *this = jsonValue;
}

EntitiesDefinition& EntitiesDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entityList"))
  {
    Aws::Utils::Array<JsonView> entityListJsonList = jsonValue.GetArray("entityList");
    for(unsigned entityListIndex = 0; entityListIndex < entityListJsonList.GetLength(); ++entityListIndex)
    {
      m_entityList.push_back(entityListJsonList[entityListIndex].AsObject());
    }
    m_entityListHasBeenSet = true;
  }

  return *this;
}

JsonValue EntitiesDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_entityListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entityListJsonList(m_entityList.size());
   for(unsigned entityListIndex = 0; entityListIndex < entityListJsonList.GetLength(); ++entityListIndex)
   {
     entityListJsonList[entityListIndex].AsObject(m_entityList[entityListIndex].Jsonize());
   }
   payload.WithArray("entityList", std::move(entityListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
