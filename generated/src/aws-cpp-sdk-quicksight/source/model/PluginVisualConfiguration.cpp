/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PluginVisualConfiguration.h>
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

PluginVisualConfiguration::PluginVisualConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PluginVisualConfiguration& PluginVisualConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldWells"))
  {
    Aws::Utils::Array<JsonView> fieldWellsJsonList = jsonValue.GetArray("FieldWells");
    for(unsigned fieldWellsIndex = 0; fieldWellsIndex < fieldWellsJsonList.GetLength(); ++fieldWellsIndex)
    {
      m_fieldWells.push_back(fieldWellsJsonList[fieldWellsIndex].AsObject());
    }
    m_fieldWellsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VisualOptions"))
  {
    m_visualOptions = jsonValue.GetObject("VisualOptions");
    m_visualOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SortConfiguration"))
  {
    m_sortConfiguration = jsonValue.GetObject("SortConfiguration");
    m_sortConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue PluginVisualConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fieldWellsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldWellsJsonList(m_fieldWells.size());
   for(unsigned fieldWellsIndex = 0; fieldWellsIndex < fieldWellsJsonList.GetLength(); ++fieldWellsIndex)
   {
     fieldWellsJsonList[fieldWellsIndex].AsObject(m_fieldWells[fieldWellsIndex].Jsonize());
   }
   payload.WithArray("FieldWells", std::move(fieldWellsJsonList));

  }

  if(m_visualOptionsHasBeenSet)
  {
   payload.WithObject("VisualOptions", m_visualOptions.Jsonize());

  }

  if(m_sortConfigurationHasBeenSet)
  {
   payload.WithObject("SortConfiguration", m_sortConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
