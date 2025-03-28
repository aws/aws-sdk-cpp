﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DvbSubDestinationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

DvbSubDestinationSettings::DvbSubDestinationSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

DvbSubDestinationSettings& DvbSubDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alignment"))
  {
    m_alignment = DvbSubtitleAlignmentMapper::GetDvbSubtitleAlignmentForName(jsonValue.GetString("alignment"));
    m_alignmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("applyFontColor"))
  {
    m_applyFontColor = DvbSubtitleApplyFontColorMapper::GetDvbSubtitleApplyFontColorForName(jsonValue.GetString("applyFontColor"));
    m_applyFontColorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("backgroundColor"))
  {
    m_backgroundColor = DvbSubtitleBackgroundColorMapper::GetDvbSubtitleBackgroundColorForName(jsonValue.GetString("backgroundColor"));
    m_backgroundColorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("backgroundOpacity"))
  {
    m_backgroundOpacity = jsonValue.GetInteger("backgroundOpacity");
    m_backgroundOpacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ddsHandling"))
  {
    m_ddsHandling = DvbddsHandlingMapper::GetDvbddsHandlingForName(jsonValue.GetString("ddsHandling"));
    m_ddsHandlingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ddsXCoordinate"))
  {
    m_ddsXCoordinate = jsonValue.GetInteger("ddsXCoordinate");
    m_ddsXCoordinateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ddsYCoordinate"))
  {
    m_ddsYCoordinate = jsonValue.GetInteger("ddsYCoordinate");
    m_ddsYCoordinateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fallbackFont"))
  {
    m_fallbackFont = DvbSubSubtitleFallbackFontMapper::GetDvbSubSubtitleFallbackFontForName(jsonValue.GetString("fallbackFont"));
    m_fallbackFontHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fontColor"))
  {
    m_fontColor = DvbSubtitleFontColorMapper::GetDvbSubtitleFontColorForName(jsonValue.GetString("fontColor"));
    m_fontColorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fontFileBold"))
  {
    m_fontFileBold = jsonValue.GetString("fontFileBold");
    m_fontFileBoldHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fontFileBoldItalic"))
  {
    m_fontFileBoldItalic = jsonValue.GetString("fontFileBoldItalic");
    m_fontFileBoldItalicHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fontFileItalic"))
  {
    m_fontFileItalic = jsonValue.GetString("fontFileItalic");
    m_fontFileItalicHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fontFileRegular"))
  {
    m_fontFileRegular = jsonValue.GetString("fontFileRegular");
    m_fontFileRegularHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fontOpacity"))
  {
    m_fontOpacity = jsonValue.GetInteger("fontOpacity");
    m_fontOpacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fontResolution"))
  {
    m_fontResolution = jsonValue.GetInteger("fontResolution");
    m_fontResolutionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fontScript"))
  {
    m_fontScript = FontScriptMapper::GetFontScriptForName(jsonValue.GetString("fontScript"));
    m_fontScriptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fontSize"))
  {
    m_fontSize = jsonValue.GetInteger("fontSize");
    m_fontSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("height"))
  {
    m_height = jsonValue.GetInteger("height");
    m_heightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hexFontColor"))
  {
    m_hexFontColor = jsonValue.GetString("hexFontColor");
    m_hexFontColorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outlineColor"))
  {
    m_outlineColor = DvbSubtitleOutlineColorMapper::GetDvbSubtitleOutlineColorForName(jsonValue.GetString("outlineColor"));
    m_outlineColorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outlineSize"))
  {
    m_outlineSize = jsonValue.GetInteger("outlineSize");
    m_outlineSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shadowColor"))
  {
    m_shadowColor = DvbSubtitleShadowColorMapper::GetDvbSubtitleShadowColorForName(jsonValue.GetString("shadowColor"));
    m_shadowColorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shadowOpacity"))
  {
    m_shadowOpacity = jsonValue.GetInteger("shadowOpacity");
    m_shadowOpacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shadowXOffset"))
  {
    m_shadowXOffset = jsonValue.GetInteger("shadowXOffset");
    m_shadowXOffsetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shadowYOffset"))
  {
    m_shadowYOffset = jsonValue.GetInteger("shadowYOffset");
    m_shadowYOffsetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stylePassthrough"))
  {
    m_stylePassthrough = DvbSubtitleStylePassthroughMapper::GetDvbSubtitleStylePassthroughForName(jsonValue.GetString("stylePassthrough"));
    m_stylePassthroughHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subtitlingType"))
  {
    m_subtitlingType = DvbSubtitlingTypeMapper::GetDvbSubtitlingTypeForName(jsonValue.GetString("subtitlingType"));
    m_subtitlingTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("teletextSpacing"))
  {
    m_teletextSpacing = DvbSubtitleTeletextSpacingMapper::GetDvbSubtitleTeletextSpacingForName(jsonValue.GetString("teletextSpacing"));
    m_teletextSpacingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("width"))
  {
    m_width = jsonValue.GetInteger("width");
    m_widthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("xPosition"))
  {
    m_xPosition = jsonValue.GetInteger("xPosition");
    m_xPositionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("yPosition"))
  {
    m_yPosition = jsonValue.GetInteger("yPosition");
    m_yPositionHasBeenSet = true;
  }
  return *this;
}

JsonValue DvbSubDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_alignmentHasBeenSet)
  {
   payload.WithString("alignment", DvbSubtitleAlignmentMapper::GetNameForDvbSubtitleAlignment(m_alignment));
  }

  if(m_applyFontColorHasBeenSet)
  {
   payload.WithString("applyFontColor", DvbSubtitleApplyFontColorMapper::GetNameForDvbSubtitleApplyFontColor(m_applyFontColor));
  }

  if(m_backgroundColorHasBeenSet)
  {
   payload.WithString("backgroundColor", DvbSubtitleBackgroundColorMapper::GetNameForDvbSubtitleBackgroundColor(m_backgroundColor));
  }

  if(m_backgroundOpacityHasBeenSet)
  {
   payload.WithInteger("backgroundOpacity", m_backgroundOpacity);

  }

  if(m_ddsHandlingHasBeenSet)
  {
   payload.WithString("ddsHandling", DvbddsHandlingMapper::GetNameForDvbddsHandling(m_ddsHandling));
  }

  if(m_ddsXCoordinateHasBeenSet)
  {
   payload.WithInteger("ddsXCoordinate", m_ddsXCoordinate);

  }

  if(m_ddsYCoordinateHasBeenSet)
  {
   payload.WithInteger("ddsYCoordinate", m_ddsYCoordinate);

  }

  if(m_fallbackFontHasBeenSet)
  {
   payload.WithString("fallbackFont", DvbSubSubtitleFallbackFontMapper::GetNameForDvbSubSubtitleFallbackFont(m_fallbackFont));
  }

  if(m_fontColorHasBeenSet)
  {
   payload.WithString("fontColor", DvbSubtitleFontColorMapper::GetNameForDvbSubtitleFontColor(m_fontColor));
  }

  if(m_fontFileBoldHasBeenSet)
  {
   payload.WithString("fontFileBold", m_fontFileBold);

  }

  if(m_fontFileBoldItalicHasBeenSet)
  {
   payload.WithString("fontFileBoldItalic", m_fontFileBoldItalic);

  }

  if(m_fontFileItalicHasBeenSet)
  {
   payload.WithString("fontFileItalic", m_fontFileItalic);

  }

  if(m_fontFileRegularHasBeenSet)
  {
   payload.WithString("fontFileRegular", m_fontFileRegular);

  }

  if(m_fontOpacityHasBeenSet)
  {
   payload.WithInteger("fontOpacity", m_fontOpacity);

  }

  if(m_fontResolutionHasBeenSet)
  {
   payload.WithInteger("fontResolution", m_fontResolution);

  }

  if(m_fontScriptHasBeenSet)
  {
   payload.WithString("fontScript", FontScriptMapper::GetNameForFontScript(m_fontScript));
  }

  if(m_fontSizeHasBeenSet)
  {
   payload.WithInteger("fontSize", m_fontSize);

  }

  if(m_heightHasBeenSet)
  {
   payload.WithInteger("height", m_height);

  }

  if(m_hexFontColorHasBeenSet)
  {
   payload.WithString("hexFontColor", m_hexFontColor);

  }

  if(m_outlineColorHasBeenSet)
  {
   payload.WithString("outlineColor", DvbSubtitleOutlineColorMapper::GetNameForDvbSubtitleOutlineColor(m_outlineColor));
  }

  if(m_outlineSizeHasBeenSet)
  {
   payload.WithInteger("outlineSize", m_outlineSize);

  }

  if(m_shadowColorHasBeenSet)
  {
   payload.WithString("shadowColor", DvbSubtitleShadowColorMapper::GetNameForDvbSubtitleShadowColor(m_shadowColor));
  }

  if(m_shadowOpacityHasBeenSet)
  {
   payload.WithInteger("shadowOpacity", m_shadowOpacity);

  }

  if(m_shadowXOffsetHasBeenSet)
  {
   payload.WithInteger("shadowXOffset", m_shadowXOffset);

  }

  if(m_shadowYOffsetHasBeenSet)
  {
   payload.WithInteger("shadowYOffset", m_shadowYOffset);

  }

  if(m_stylePassthroughHasBeenSet)
  {
   payload.WithString("stylePassthrough", DvbSubtitleStylePassthroughMapper::GetNameForDvbSubtitleStylePassthrough(m_stylePassthrough));
  }

  if(m_subtitlingTypeHasBeenSet)
  {
   payload.WithString("subtitlingType", DvbSubtitlingTypeMapper::GetNameForDvbSubtitlingType(m_subtitlingType));
  }

  if(m_teletextSpacingHasBeenSet)
  {
   payload.WithString("teletextSpacing", DvbSubtitleTeletextSpacingMapper::GetNameForDvbSubtitleTeletextSpacing(m_teletextSpacing));
  }

  if(m_widthHasBeenSet)
  {
   payload.WithInteger("width", m_width);

  }

  if(m_xPositionHasBeenSet)
  {
   payload.WithInteger("xPosition", m_xPosition);

  }

  if(m_yPositionHasBeenSet)
  {
   payload.WithInteger("yPosition", m_yPosition);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
