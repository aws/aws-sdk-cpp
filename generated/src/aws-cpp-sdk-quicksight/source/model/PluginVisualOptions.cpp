/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PluginVisualOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

PluginVisualOptions::PluginVisualOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

PluginVisualOptions& PluginVisualOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VisualProperties"))
  {
    Aws::Utils::Array<JsonView> visualPropertiesJsonList = jsonValue.GetArray("VisualProperties");
    for(unsigned visualPropertiesIndex = 0; visualPropertiesIndex < visualPropertiesJsonList.GetLength(); ++visualPropertiesIndex)
    {
      m_visualProperties.push_back(visualPropertiesJsonList[visualPropertiesIndex].AsObject());
    }
    m_visualPropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue PluginVisualOptions::Jsonize() const
{
  JsonValue payload;

  if(m_visualPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> visualPropertiesJsonList(m_visualProperties.size());
   for(unsigned visualPropertiesIndex = 0; visualPropertiesIndex < visualPropertiesJsonList.GetLength(); ++visualPropertiesIndex)
   {
     visualPropertiesJsonList[visualPropertiesIndex].AsObject(m_visualProperties[visualPropertiesIndex].Jsonize());
   }
   payload.WithArray("VisualProperties", std::move(visualPropertiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
