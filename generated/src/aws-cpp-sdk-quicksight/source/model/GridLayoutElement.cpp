/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/GridLayoutElement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

GridLayoutElement::GridLayoutElement(JsonView jsonValue) { *this = jsonValue; }

GridLayoutElement& GridLayoutElement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ElementId")) {
    m_elementId = jsonValue.GetString("ElementId");
    m_elementIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ElementType")) {
    m_elementType = LayoutElementTypeMapper::GetLayoutElementTypeForName(jsonValue.GetString("ElementType"));
    m_elementTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ColumnIndex")) {
    m_columnIndex = jsonValue.GetInteger("ColumnIndex");
    m_columnIndexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ColumnSpan")) {
    m_columnSpan = jsonValue.GetInteger("ColumnSpan");
    m_columnSpanHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RowIndex")) {
    m_rowIndex = jsonValue.GetInteger("RowIndex");
    m_rowIndexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RowSpan")) {
    m_rowSpan = jsonValue.GetInteger("RowSpan");
    m_rowSpanHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BorderStyle")) {
    m_borderStyle = jsonValue.GetObject("BorderStyle");
    m_borderStyleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SelectedBorderStyle")) {
    m_selectedBorderStyle = jsonValue.GetObject("SelectedBorderStyle");
    m_selectedBorderStyleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackgroundStyle")) {
    m_backgroundStyle = jsonValue.GetObject("BackgroundStyle");
    m_backgroundStyleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LoadingAnimation")) {
    m_loadingAnimation = jsonValue.GetObject("LoadingAnimation");
    m_loadingAnimationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BorderRadius")) {
    m_borderRadius = jsonValue.GetString("BorderRadius");
    m_borderRadiusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Padding")) {
    m_padding = jsonValue.GetString("Padding");
    m_paddingHasBeenSet = true;
  }
  return *this;
}

JsonValue GridLayoutElement::Jsonize() const {
  JsonValue payload;

  if (m_elementIdHasBeenSet) {
    payload.WithString("ElementId", m_elementId);
  }

  if (m_elementTypeHasBeenSet) {
    payload.WithString("ElementType", LayoutElementTypeMapper::GetNameForLayoutElementType(m_elementType));
  }

  if (m_columnIndexHasBeenSet) {
    payload.WithInteger("ColumnIndex", m_columnIndex);
  }

  if (m_columnSpanHasBeenSet) {
    payload.WithInteger("ColumnSpan", m_columnSpan);
  }

  if (m_rowIndexHasBeenSet) {
    payload.WithInteger("RowIndex", m_rowIndex);
  }

  if (m_rowSpanHasBeenSet) {
    payload.WithInteger("RowSpan", m_rowSpan);
  }

  if (m_borderStyleHasBeenSet) {
    payload.WithObject("BorderStyle", m_borderStyle.Jsonize());
  }

  if (m_selectedBorderStyleHasBeenSet) {
    payload.WithObject("SelectedBorderStyle", m_selectedBorderStyle.Jsonize());
  }

  if (m_backgroundStyleHasBeenSet) {
    payload.WithObject("BackgroundStyle", m_backgroundStyle.Jsonize());
  }

  if (m_loadingAnimationHasBeenSet) {
    payload.WithObject("LoadingAnimation", m_loadingAnimation.Jsonize());
  }

  if (m_borderRadiusHasBeenSet) {
    payload.WithString("BorderRadius", m_borderRadius);
  }

  if (m_paddingHasBeenSet) {
    payload.WithString("Padding", m_padding);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
