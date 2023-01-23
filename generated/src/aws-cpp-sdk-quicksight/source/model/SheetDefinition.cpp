/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetDefinition.h>
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

SheetDefinition::SheetDefinition() : 
    m_sheetIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parameterControlsHasBeenSet(false),
    m_filterControlsHasBeenSet(false),
    m_visualsHasBeenSet(false),
    m_textBoxesHasBeenSet(false),
    m_layoutsHasBeenSet(false),
    m_sheetControlLayoutsHasBeenSet(false),
    m_contentType(SheetContentType::NOT_SET),
    m_contentTypeHasBeenSet(false)
{
}

SheetDefinition::SheetDefinition(JsonView jsonValue) : 
    m_sheetIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parameterControlsHasBeenSet(false),
    m_filterControlsHasBeenSet(false),
    m_visualsHasBeenSet(false),
    m_textBoxesHasBeenSet(false),
    m_layoutsHasBeenSet(false),
    m_sheetControlLayoutsHasBeenSet(false),
    m_contentType(SheetContentType::NOT_SET),
    m_contentTypeHasBeenSet(false)
{
  *this = jsonValue;
}

SheetDefinition& SheetDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SheetId"))
  {
    m_sheetId = jsonValue.GetString("SheetId");

    m_sheetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterControls"))
  {
    Aws::Utils::Array<JsonView> parameterControlsJsonList = jsonValue.GetArray("ParameterControls");
    for(unsigned parameterControlsIndex = 0; parameterControlsIndex < parameterControlsJsonList.GetLength(); ++parameterControlsIndex)
    {
      m_parameterControls.push_back(parameterControlsJsonList[parameterControlsIndex].AsObject());
    }
    m_parameterControlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilterControls"))
  {
    Aws::Utils::Array<JsonView> filterControlsJsonList = jsonValue.GetArray("FilterControls");
    for(unsigned filterControlsIndex = 0; filterControlsIndex < filterControlsJsonList.GetLength(); ++filterControlsIndex)
    {
      m_filterControls.push_back(filterControlsJsonList[filterControlsIndex].AsObject());
    }
    m_filterControlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Visuals"))
  {
    Aws::Utils::Array<JsonView> visualsJsonList = jsonValue.GetArray("Visuals");
    for(unsigned visualsIndex = 0; visualsIndex < visualsJsonList.GetLength(); ++visualsIndex)
    {
      m_visuals.push_back(visualsJsonList[visualsIndex].AsObject());
    }
    m_visualsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextBoxes"))
  {
    Aws::Utils::Array<JsonView> textBoxesJsonList = jsonValue.GetArray("TextBoxes");
    for(unsigned textBoxesIndex = 0; textBoxesIndex < textBoxesJsonList.GetLength(); ++textBoxesIndex)
    {
      m_textBoxes.push_back(textBoxesJsonList[textBoxesIndex].AsObject());
    }
    m_textBoxesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Layouts"))
  {
    Aws::Utils::Array<JsonView> layoutsJsonList = jsonValue.GetArray("Layouts");
    for(unsigned layoutsIndex = 0; layoutsIndex < layoutsJsonList.GetLength(); ++layoutsIndex)
    {
      m_layouts.push_back(layoutsJsonList[layoutsIndex].AsObject());
    }
    m_layoutsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SheetControlLayouts"))
  {
    Aws::Utils::Array<JsonView> sheetControlLayoutsJsonList = jsonValue.GetArray("SheetControlLayouts");
    for(unsigned sheetControlLayoutsIndex = 0; sheetControlLayoutsIndex < sheetControlLayoutsJsonList.GetLength(); ++sheetControlLayoutsIndex)
    {
      m_sheetControlLayouts.push_back(sheetControlLayoutsJsonList[sheetControlLayoutsIndex].AsObject());
    }
    m_sheetControlLayoutsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = SheetContentTypeMapper::GetSheetContentTypeForName(jsonValue.GetString("ContentType"));

    m_contentTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SheetDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_sheetIdHasBeenSet)
  {
   payload.WithString("SheetId", m_sheetId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_parameterControlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parameterControlsJsonList(m_parameterControls.size());
   for(unsigned parameterControlsIndex = 0; parameterControlsIndex < parameterControlsJsonList.GetLength(); ++parameterControlsIndex)
   {
     parameterControlsJsonList[parameterControlsIndex].AsObject(m_parameterControls[parameterControlsIndex].Jsonize());
   }
   payload.WithArray("ParameterControls", std::move(parameterControlsJsonList));

  }

  if(m_filterControlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterControlsJsonList(m_filterControls.size());
   for(unsigned filterControlsIndex = 0; filterControlsIndex < filterControlsJsonList.GetLength(); ++filterControlsIndex)
   {
     filterControlsJsonList[filterControlsIndex].AsObject(m_filterControls[filterControlsIndex].Jsonize());
   }
   payload.WithArray("FilterControls", std::move(filterControlsJsonList));

  }

  if(m_visualsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> visualsJsonList(m_visuals.size());
   for(unsigned visualsIndex = 0; visualsIndex < visualsJsonList.GetLength(); ++visualsIndex)
   {
     visualsJsonList[visualsIndex].AsObject(m_visuals[visualsIndex].Jsonize());
   }
   payload.WithArray("Visuals", std::move(visualsJsonList));

  }

  if(m_textBoxesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> textBoxesJsonList(m_textBoxes.size());
   for(unsigned textBoxesIndex = 0; textBoxesIndex < textBoxesJsonList.GetLength(); ++textBoxesIndex)
   {
     textBoxesJsonList[textBoxesIndex].AsObject(m_textBoxes[textBoxesIndex].Jsonize());
   }
   payload.WithArray("TextBoxes", std::move(textBoxesJsonList));

  }

  if(m_layoutsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> layoutsJsonList(m_layouts.size());
   for(unsigned layoutsIndex = 0; layoutsIndex < layoutsJsonList.GetLength(); ++layoutsIndex)
   {
     layoutsJsonList[layoutsIndex].AsObject(m_layouts[layoutsIndex].Jsonize());
   }
   payload.WithArray("Layouts", std::move(layoutsJsonList));

  }

  if(m_sheetControlLayoutsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sheetControlLayoutsJsonList(m_sheetControlLayouts.size());
   for(unsigned sheetControlLayoutsIndex = 0; sheetControlLayoutsIndex < sheetControlLayoutsJsonList.GetLength(); ++sheetControlLayoutsIndex)
   {
     sheetControlLayoutsJsonList[sheetControlLayoutsIndex].AsObject(m_sheetControlLayouts[sheetControlLayoutsIndex].Jsonize());
   }
   payload.WithArray("SheetControlLayouts", std::move(sheetControlLayoutsJsonList));

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", SheetContentTypeMapper::GetNameForSheetContentType(m_contentType));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
