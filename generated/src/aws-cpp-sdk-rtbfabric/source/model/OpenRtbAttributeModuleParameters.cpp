/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rtbfabric/model/OpenRtbAttributeModuleParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RTBFabric
{
namespace Model
{

OpenRtbAttributeModuleParameters::OpenRtbAttributeModuleParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

OpenRtbAttributeModuleParameters& OpenRtbAttributeModuleParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filterType"))
  {
    m_filterType = FilterTypeMapper::GetFilterTypeForName(jsonValue.GetString("filterType"));
    m_filterTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("filterConfiguration"))
  {
    Aws::Utils::Array<JsonView> filterConfigurationJsonList = jsonValue.GetArray("filterConfiguration");
    for(unsigned filterConfigurationIndex = 0; filterConfigurationIndex < filterConfigurationJsonList.GetLength(); ++filterConfigurationIndex)
    {
      m_filterConfiguration.push_back(filterConfigurationJsonList[filterConfigurationIndex].AsObject());
    }
    m_filterConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetObject("action");
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("holdbackPercentage"))
  {
    m_holdbackPercentage = jsonValue.GetDouble("holdbackPercentage");
    m_holdbackPercentageHasBeenSet = true;
  }
  return *this;
}

JsonValue OpenRtbAttributeModuleParameters::Jsonize() const
{
  JsonValue payload;

  if(m_filterTypeHasBeenSet)
  {
   payload.WithString("filterType", FilterTypeMapper::GetNameForFilterType(m_filterType));
  }

  if(m_filterConfigurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterConfigurationJsonList(m_filterConfiguration.size());
   for(unsigned filterConfigurationIndex = 0; filterConfigurationIndex < filterConfigurationJsonList.GetLength(); ++filterConfigurationIndex)
   {
     filterConfigurationJsonList[filterConfigurationIndex].AsObject(m_filterConfiguration[filterConfigurationIndex].Jsonize());
   }
   payload.WithArray("filterConfiguration", std::move(filterConfigurationJsonList));

  }

  if(m_actionHasBeenSet)
  {
   payload.WithObject("action", m_action.Jsonize());

  }

  if(m_holdbackPercentageHasBeenSet)
  {
   payload.WithDouble("holdbackPercentage", m_holdbackPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace RTBFabric
} // namespace Aws
