/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialLayerItem.h>
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

GeospatialLayerItem::GeospatialLayerItem(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialLayerItem& GeospatialLayerItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LayerId"))
  {
    m_layerId = jsonValue.GetString("LayerId");
    m_layerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LayerType"))
  {
    m_layerType = GeospatialLayerTypeMapper::GetGeospatialLayerTypeForName(jsonValue.GetString("LayerType"));
    m_layerTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");
    m_dataSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetString("Label");
    m_labelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));
    m_visibilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LayerDefinition"))
  {
    m_layerDefinition = jsonValue.GetObject("LayerDefinition");
    m_layerDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tooltip"))
  {
    m_tooltip = jsonValue.GetObject("Tooltip");
    m_tooltipHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JoinDefinition"))
  {
    m_joinDefinition = jsonValue.GetObject("JoinDefinition");
    m_joinDefinitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("Actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialLayerItem::Jsonize() const
{
  JsonValue payload;

  if(m_layerIdHasBeenSet)
  {
   payload.WithString("LayerId", m_layerId);

  }

  if(m_layerTypeHasBeenSet)
  {
   payload.WithString("LayerType", GeospatialLayerTypeMapper::GetNameForGeospatialLayerType(m_layerType));
  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("DataSource", m_dataSource.Jsonize());

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  if(m_layerDefinitionHasBeenSet)
  {
   payload.WithObject("LayerDefinition", m_layerDefinition.Jsonize());

  }

  if(m_tooltipHasBeenSet)
  {
   payload.WithObject("Tooltip", m_tooltip.Jsonize());

  }

  if(m_joinDefinitionHasBeenSet)
  {
   payload.WithObject("JoinDefinition", m_joinDefinition.Jsonize());

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
   }
   payload.WithArray("Actions", std::move(actionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
