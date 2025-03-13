/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PluginVisualFieldWell.h>
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

PluginVisualFieldWell::PluginVisualFieldWell(JsonView jsonValue)
{
  *this = jsonValue;
}

PluginVisualFieldWell& PluginVisualFieldWell::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AxisName"))
  {
    m_axisName = PluginVisualAxisNameMapper::GetPluginVisualAxisNameForName(jsonValue.GetString("AxisName"));
    m_axisNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Dimensions"))
  {
    Aws::Utils::Array<JsonView> dimensionsJsonList = jsonValue.GetArray("Dimensions");
    for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
    {
      m_dimensions.push_back(dimensionsJsonList[dimensionsIndex].AsObject());
    }
    m_dimensionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Measures"))
  {
    Aws::Utils::Array<JsonView> measuresJsonList = jsonValue.GetArray("Measures");
    for(unsigned measuresIndex = 0; measuresIndex < measuresJsonList.GetLength(); ++measuresIndex)
    {
      m_measures.push_back(measuresJsonList[measuresIndex].AsObject());
    }
    m_measuresHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Unaggregated"))
  {
    Aws::Utils::Array<JsonView> unaggregatedJsonList = jsonValue.GetArray("Unaggregated");
    for(unsigned unaggregatedIndex = 0; unaggregatedIndex < unaggregatedJsonList.GetLength(); ++unaggregatedIndex)
    {
      m_unaggregated.push_back(unaggregatedJsonList[unaggregatedIndex].AsObject());
    }
    m_unaggregatedHasBeenSet = true;
  }
  return *this;
}

JsonValue PluginVisualFieldWell::Jsonize() const
{
  JsonValue payload;

  if(m_axisNameHasBeenSet)
  {
   payload.WithString("AxisName", PluginVisualAxisNameMapper::GetNameForPluginVisualAxisName(m_axisName));
  }

  if(m_dimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionsJsonList(m_dimensions.size());
   for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
   {
     dimensionsJsonList[dimensionsIndex].AsObject(m_dimensions[dimensionsIndex].Jsonize());
   }
   payload.WithArray("Dimensions", std::move(dimensionsJsonList));

  }

  if(m_measuresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> measuresJsonList(m_measures.size());
   for(unsigned measuresIndex = 0; measuresIndex < measuresJsonList.GetLength(); ++measuresIndex)
   {
     measuresJsonList[measuresIndex].AsObject(m_measures[measuresIndex].Jsonize());
   }
   payload.WithArray("Measures", std::move(measuresJsonList));

  }

  if(m_unaggregatedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> unaggregatedJsonList(m_unaggregated.size());
   for(unsigned unaggregatedIndex = 0; unaggregatedIndex < unaggregatedJsonList.GetLength(); ++unaggregatedIndex)
   {
     unaggregatedJsonList[unaggregatedIndex].AsObject(m_unaggregated[unaggregatedIndex].Jsonize());
   }
   payload.WithArray("Unaggregated", std::move(unaggregatedJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
