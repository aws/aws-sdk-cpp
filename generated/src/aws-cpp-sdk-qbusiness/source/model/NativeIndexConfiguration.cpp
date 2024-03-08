/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/NativeIndexConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

NativeIndexConfiguration::NativeIndexConfiguration() : 
    m_boostingOverrideHasBeenSet(false),
    m_indexIdHasBeenSet(false)
{
}

NativeIndexConfiguration::NativeIndexConfiguration(JsonView jsonValue) : 
    m_boostingOverrideHasBeenSet(false),
    m_indexIdHasBeenSet(false)
{
  *this = jsonValue;
}

NativeIndexConfiguration& NativeIndexConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("boostingOverride"))
  {
    Aws::Map<Aws::String, JsonView> boostingOverrideJsonMap = jsonValue.GetObject("boostingOverride").GetAllObjects();
    for(auto& boostingOverrideItem : boostingOverrideJsonMap)
    {
      m_boostingOverride[boostingOverrideItem.first] = boostingOverrideItem.second.AsObject();
    }
    m_boostingOverrideHasBeenSet = true;
  }

  if(jsonValue.ValueExists("indexId"))
  {
    m_indexId = jsonValue.GetString("indexId");

    m_indexIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NativeIndexConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_boostingOverrideHasBeenSet)
  {
   JsonValue boostingOverrideJsonMap;
   for(auto& boostingOverrideItem : m_boostingOverride)
   {
     boostingOverrideJsonMap.WithObject(boostingOverrideItem.first, boostingOverrideItem.second.Jsonize());
   }
   payload.WithObject("boostingOverride", std::move(boostingOverrideJsonMap));

  }

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("indexId", m_indexId);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
