/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/TooltipSheetDefinition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

TooltipSheetDefinition::TooltipSheetDefinition(JsonView jsonValue) { *this = jsonValue; }

TooltipSheetDefinition& TooltipSheetDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SheetId")) {
    m_sheetId = jsonValue.GetString("SheetId");
    m_sheetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Visuals")) {
    Aws::Utils::Array<JsonView> visualsJsonList = jsonValue.GetArray("Visuals");
    for (unsigned visualsIndex = 0; visualsIndex < visualsJsonList.GetLength(); ++visualsIndex) {
      m_visuals.push_back(visualsJsonList[visualsIndex].AsObject());
    }
    m_visualsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TextBoxes")) {
    Aws::Utils::Array<JsonView> textBoxesJsonList = jsonValue.GetArray("TextBoxes");
    for (unsigned textBoxesIndex = 0; textBoxesIndex < textBoxesJsonList.GetLength(); ++textBoxesIndex) {
      m_textBoxes.push_back(textBoxesJsonList[textBoxesIndex].AsObject());
    }
    m_textBoxesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Images")) {
    Aws::Utils::Array<JsonView> imagesJsonList = jsonValue.GetArray("Images");
    for (unsigned imagesIndex = 0; imagesIndex < imagesJsonList.GetLength(); ++imagesIndex) {
      m_images.push_back(imagesJsonList[imagesIndex].AsObject());
    }
    m_imagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Layouts")) {
    Aws::Utils::Array<JsonView> layoutsJsonList = jsonValue.GetArray("Layouts");
    for (unsigned layoutsIndex = 0; layoutsIndex < layoutsJsonList.GetLength(); ++layoutsIndex) {
      m_layouts.push_back(layoutsJsonList[layoutsIndex].AsObject());
    }
    m_layoutsHasBeenSet = true;
  }
  return *this;
}

JsonValue TooltipSheetDefinition::Jsonize() const {
  JsonValue payload;

  if (m_sheetIdHasBeenSet) {
    payload.WithString("SheetId", m_sheetId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_visualsHasBeenSet) {
    Aws::Utils::Array<JsonValue> visualsJsonList(m_visuals.size());
    for (unsigned visualsIndex = 0; visualsIndex < visualsJsonList.GetLength(); ++visualsIndex) {
      visualsJsonList[visualsIndex].AsObject(m_visuals[visualsIndex].Jsonize());
    }
    payload.WithArray("Visuals", std::move(visualsJsonList));
  }

  if (m_textBoxesHasBeenSet) {
    Aws::Utils::Array<JsonValue> textBoxesJsonList(m_textBoxes.size());
    for (unsigned textBoxesIndex = 0; textBoxesIndex < textBoxesJsonList.GetLength(); ++textBoxesIndex) {
      textBoxesJsonList[textBoxesIndex].AsObject(m_textBoxes[textBoxesIndex].Jsonize());
    }
    payload.WithArray("TextBoxes", std::move(textBoxesJsonList));
  }

  if (m_imagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> imagesJsonList(m_images.size());
    for (unsigned imagesIndex = 0; imagesIndex < imagesJsonList.GetLength(); ++imagesIndex) {
      imagesJsonList[imagesIndex].AsObject(m_images[imagesIndex].Jsonize());
    }
    payload.WithArray("Images", std::move(imagesJsonList));
  }

  if (m_layoutsHasBeenSet) {
    Aws::Utils::Array<JsonValue> layoutsJsonList(m_layouts.size());
    for (unsigned layoutsIndex = 0; layoutsIndex < layoutsJsonList.GetLength(); ++layoutsIndex) {
      layoutsJsonList[layoutsIndex].AsObject(m_layouts[layoutsIndex].Jsonize());
    }
    payload.WithArray("Layouts", std::move(layoutsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
