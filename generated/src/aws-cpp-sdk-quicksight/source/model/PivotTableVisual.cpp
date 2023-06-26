/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableVisual.h>
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

PivotTableVisual::PivotTableVisual() : 
    m_visualIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_subtitleHasBeenSet(false),
    m_chartConfigurationHasBeenSet(false),
    m_conditionalFormattingHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
}

PivotTableVisual::PivotTableVisual(JsonView jsonValue) : 
    m_visualIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_subtitleHasBeenSet(false),
    m_chartConfigurationHasBeenSet(false),
    m_conditionalFormattingHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTableVisual& PivotTableVisual::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VisualId"))
  {
    m_visualId = jsonValue.GetString("VisualId");

    m_visualIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetObject("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subtitle"))
  {
    m_subtitle = jsonValue.GetObject("Subtitle");

    m_subtitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChartConfiguration"))
  {
    m_chartConfiguration = jsonValue.GetObject("ChartConfiguration");

    m_chartConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConditionalFormatting"))
  {
    m_conditionalFormatting = jsonValue.GetObject("ConditionalFormatting");

    m_conditionalFormattingHasBeenSet = true;
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

JsonValue PivotTableVisual::Jsonize() const
{
  JsonValue payload;

  if(m_visualIdHasBeenSet)
  {
   payload.WithString("VisualId", m_visualId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithObject("Title", m_title.Jsonize());

  }

  if(m_subtitleHasBeenSet)
  {
   payload.WithObject("Subtitle", m_subtitle.Jsonize());

  }

  if(m_chartConfigurationHasBeenSet)
  {
   payload.WithObject("ChartConfiguration", m_chartConfiguration.Jsonize());

  }

  if(m_conditionalFormattingHasBeenSet)
  {
   payload.WithObject("ConditionalFormatting", m_conditionalFormatting.Jsonize());

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
