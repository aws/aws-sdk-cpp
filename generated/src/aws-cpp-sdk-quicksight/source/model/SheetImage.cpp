/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetImage.h>
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

SheetImage::SheetImage(JsonView jsonValue)
{
  *this = jsonValue;
}

SheetImage& SheetImage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SheetImageId"))
  {
    m_sheetImageId = jsonValue.GetString("SheetImageId");
    m_sheetImageIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetObject("Source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Scaling"))
  {
    m_scaling = jsonValue.GetObject("Scaling");
    m_scalingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tooltip"))
  {
    m_tooltip = jsonValue.GetObject("Tooltip");
    m_tooltipHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImageContentAltText"))
  {
    m_imageContentAltText = jsonValue.GetString("ImageContentAltText");
    m_imageContentAltTextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Interactions"))
  {
    m_interactions = jsonValue.GetObject("Interactions");
    m_interactionsHasBeenSet = true;
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

JsonValue SheetImage::Jsonize() const
{
  JsonValue payload;

  if(m_sheetImageIdHasBeenSet)
  {
   payload.WithString("SheetImageId", m_sheetImageId);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  if(m_scalingHasBeenSet)
  {
   payload.WithObject("Scaling", m_scaling.Jsonize());

  }

  if(m_tooltipHasBeenSet)
  {
   payload.WithObject("Tooltip", m_tooltip.Jsonize());

  }

  if(m_imageContentAltTextHasBeenSet)
  {
   payload.WithString("ImageContentAltText", m_imageContentAltText);

  }

  if(m_interactionsHasBeenSet)
  {
   payload.WithObject("Interactions", m_interactions.Jsonize());

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
