/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconvert/model/TtmlDestinationSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {

TtmlDestinationSettings::TtmlDestinationSettings(JsonView jsonValue) { *this = jsonValue; }

TtmlDestinationSettings& TtmlDestinationSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("backgroundColor")) {
    m_backgroundColor = TtmlBackgroundColorMapper::GetTtmlBackgroundColorForName(jsonValue.GetString("backgroundColor"));
    m_backgroundColorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("backgroundOpacity")) {
    m_backgroundOpacity = jsonValue.GetInteger("backgroundOpacity");
    m_backgroundOpacityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fontColor")) {
    m_fontColor = TtmlFontColorMapper::GetTtmlFontColorForName(jsonValue.GetString("fontColor"));
    m_fontColorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fontOpacity")) {
    m_fontOpacity = jsonValue.GetInteger("fontOpacity");
    m_fontOpacityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fontSize")) {
    m_fontSize = jsonValue.GetInteger("fontSize");
    m_fontSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fontStyle")) {
    m_fontStyle = TtmlFontStyleMapper::GetTtmlFontStyleForName(jsonValue.GetString("fontStyle"));
    m_fontStyleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fontWeight")) {
    m_fontWeight = TtmlFontWeightMapper::GetTtmlFontWeightForName(jsonValue.GetString("fontWeight"));
    m_fontWeightHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stylePassthrough")) {
    m_stylePassthrough = TtmlStylePassthroughMapper::GetTtmlStylePassthroughForName(jsonValue.GetString("stylePassthrough"));
    m_stylePassthroughHasBeenSet = true;
  }
  if (jsonValue.ValueExists("textDecoration")) {
    m_textDecoration = TtmlTextDecorationMapper::GetTtmlTextDecorationForName(jsonValue.GetString("textDecoration"));
    m_textDecorationHasBeenSet = true;
  }
  return *this;
}

JsonValue TtmlDestinationSettings::Jsonize() const {
  JsonValue payload;

  if (m_backgroundColorHasBeenSet) {
    payload.WithString("backgroundColor", TtmlBackgroundColorMapper::GetNameForTtmlBackgroundColor(m_backgroundColor));
  }

  if (m_backgroundOpacityHasBeenSet) {
    payload.WithInteger("backgroundOpacity", m_backgroundOpacity);
  }

  if (m_fontColorHasBeenSet) {
    payload.WithString("fontColor", TtmlFontColorMapper::GetNameForTtmlFontColor(m_fontColor));
  }

  if (m_fontOpacityHasBeenSet) {
    payload.WithInteger("fontOpacity", m_fontOpacity);
  }

  if (m_fontSizeHasBeenSet) {
    payload.WithInteger("fontSize", m_fontSize);
  }

  if (m_fontStyleHasBeenSet) {
    payload.WithString("fontStyle", TtmlFontStyleMapper::GetNameForTtmlFontStyle(m_fontStyle));
  }

  if (m_fontWeightHasBeenSet) {
    payload.WithString("fontWeight", TtmlFontWeightMapper::GetNameForTtmlFontWeight(m_fontWeight));
  }

  if (m_stylePassthroughHasBeenSet) {
    payload.WithString("stylePassthrough", TtmlStylePassthroughMapper::GetNameForTtmlStylePassthrough(m_stylePassthrough));
  }

  if (m_textDecorationHasBeenSet) {
    payload.WithString("textDecoration", TtmlTextDecorationMapper::GetNameForTtmlTextDecoration(m_textDecoration));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
