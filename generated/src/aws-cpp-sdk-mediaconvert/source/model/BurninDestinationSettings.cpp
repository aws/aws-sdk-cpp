﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/BurninDestinationSettings.h>
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

BurninDestinationSettings::BurninDestinationSettings() : 
    m_alignment(BurninSubtitleAlignment::NOT_SET),
    m_alignmentHasBeenSet(false),
    m_applyFontColor(BurninSubtitleApplyFontColor::NOT_SET),
    m_applyFontColorHasBeenSet(false),
    m_backgroundColor(BurninSubtitleBackgroundColor::NOT_SET),
    m_backgroundColorHasBeenSet(false),
    m_backgroundOpacity(0),
    m_backgroundOpacityHasBeenSet(false),
    m_fallbackFont(BurninSubtitleFallbackFont::NOT_SET),
    m_fallbackFontHasBeenSet(false),
    m_fontColor(BurninSubtitleFontColor::NOT_SET),
    m_fontColorHasBeenSet(false),
    m_fontOpacity(0),
    m_fontOpacityHasBeenSet(false),
    m_fontResolution(0),
    m_fontResolutionHasBeenSet(false),
    m_fontScript(FontScript::NOT_SET),
    m_fontScriptHasBeenSet(false),
    m_fontSize(0),
    m_fontSizeHasBeenSet(false),
    m_hexFontColorHasBeenSet(false),
    m_outlineColor(BurninSubtitleOutlineColor::NOT_SET),
    m_outlineColorHasBeenSet(false),
    m_outlineSize(0),
    m_outlineSizeHasBeenSet(false),
    m_shadowColor(BurninSubtitleShadowColor::NOT_SET),
    m_shadowColorHasBeenSet(false),
    m_shadowOpacity(0),
    m_shadowOpacityHasBeenSet(false),
    m_shadowXOffset(0),
    m_shadowXOffsetHasBeenSet(false),
    m_shadowYOffset(0),
    m_shadowYOffsetHasBeenSet(false),
    m_stylePassthrough(BurnInSubtitleStylePassthrough::NOT_SET),
    m_stylePassthroughHasBeenSet(false),
    m_teletextSpacing(BurninSubtitleTeletextSpacing::NOT_SET),
    m_teletextSpacingHasBeenSet(false),
    m_xPosition(0),
    m_xPositionHasBeenSet(false),
    m_yPosition(0),
    m_yPositionHasBeenSet(false)
{
}

BurninDestinationSettings::BurninDestinationSettings(JsonView jsonValue) : 
    m_alignment(BurninSubtitleAlignment::NOT_SET),
    m_alignmentHasBeenSet(false),
    m_applyFontColor(BurninSubtitleApplyFontColor::NOT_SET),
    m_applyFontColorHasBeenSet(false),
    m_backgroundColor(BurninSubtitleBackgroundColor::NOT_SET),
    m_backgroundColorHasBeenSet(false),
    m_backgroundOpacity(0),
    m_backgroundOpacityHasBeenSet(false),
    m_fallbackFont(BurninSubtitleFallbackFont::NOT_SET),
    m_fallbackFontHasBeenSet(false),
    m_fontColor(BurninSubtitleFontColor::NOT_SET),
    m_fontColorHasBeenSet(false),
    m_fontOpacity(0),
    m_fontOpacityHasBeenSet(false),
    m_fontResolution(0),
    m_fontResolutionHasBeenSet(false),
    m_fontScript(FontScript::NOT_SET),
    m_fontScriptHasBeenSet(false),
    m_fontSize(0),
    m_fontSizeHasBeenSet(false),
    m_hexFontColorHasBeenSet(false),
    m_outlineColor(BurninSubtitleOutlineColor::NOT_SET),
    m_outlineColorHasBeenSet(false),
    m_outlineSize(0),
    m_outlineSizeHasBeenSet(false),
    m_shadowColor(BurninSubtitleShadowColor::NOT_SET),
    m_shadowColorHasBeenSet(false),
    m_shadowOpacity(0),
    m_shadowOpacityHasBeenSet(false),
    m_shadowXOffset(0),
    m_shadowXOffsetHasBeenSet(false),
    m_shadowYOffset(0),
    m_shadowYOffsetHasBeenSet(false),
    m_stylePassthrough(BurnInSubtitleStylePassthrough::NOT_SET),
    m_stylePassthroughHasBeenSet(false),
    m_teletextSpacing(BurninSubtitleTeletextSpacing::NOT_SET),
    m_teletextSpacingHasBeenSet(false),
    m_xPosition(0),
    m_xPositionHasBeenSet(false),
    m_yPosition(0),
    m_yPositionHasBeenSet(false)
{
  *this = jsonValue;
}

BurninDestinationSettings& BurninDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alignment"))
  {
    m_alignment = BurninSubtitleAlignmentMapper::GetBurninSubtitleAlignmentForName(jsonValue.GetString("alignment"));

    m_alignmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applyFontColor"))
  {
    m_applyFontColor = BurninSubtitleApplyFontColorMapper::GetBurninSubtitleApplyFontColorForName(jsonValue.GetString("applyFontColor"));

    m_applyFontColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("backgroundColor"))
  {
    m_backgroundColor = BurninSubtitleBackgroundColorMapper::GetBurninSubtitleBackgroundColorForName(jsonValue.GetString("backgroundColor"));

    m_backgroundColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("backgroundOpacity"))
  {
    m_backgroundOpacity = jsonValue.GetInteger("backgroundOpacity");

    m_backgroundOpacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fallbackFont"))
  {
    m_fallbackFont = BurninSubtitleFallbackFontMapper::GetBurninSubtitleFallbackFontForName(jsonValue.GetString("fallbackFont"));

    m_fallbackFontHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fontColor"))
  {
    m_fontColor = BurninSubtitleFontColorMapper::GetBurninSubtitleFontColorForName(jsonValue.GetString("fontColor"));

    m_fontColorHasBeenSet = true;
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

  if(jsonValue.ValueExists("hexFontColor"))
  {
    m_hexFontColor = jsonValue.GetString("hexFontColor");

    m_hexFontColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outlineColor"))
  {
    m_outlineColor = BurninSubtitleOutlineColorMapper::GetBurninSubtitleOutlineColorForName(jsonValue.GetString("outlineColor"));

    m_outlineColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outlineSize"))
  {
    m_outlineSize = jsonValue.GetInteger("outlineSize");

    m_outlineSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shadowColor"))
  {
    m_shadowColor = BurninSubtitleShadowColorMapper::GetBurninSubtitleShadowColorForName(jsonValue.GetString("shadowColor"));

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
    m_stylePassthrough = BurnInSubtitleStylePassthroughMapper::GetBurnInSubtitleStylePassthroughForName(jsonValue.GetString("stylePassthrough"));

    m_stylePassthroughHasBeenSet = true;
  }

  if(jsonValue.ValueExists("teletextSpacing"))
  {
    m_teletextSpacing = BurninSubtitleTeletextSpacingMapper::GetBurninSubtitleTeletextSpacingForName(jsonValue.GetString("teletextSpacing"));

    m_teletextSpacingHasBeenSet = true;
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

JsonValue BurninDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_alignmentHasBeenSet)
  {
   payload.WithString("alignment", BurninSubtitleAlignmentMapper::GetNameForBurninSubtitleAlignment(m_alignment));
  }

  if(m_applyFontColorHasBeenSet)
  {
   payload.WithString("applyFontColor", BurninSubtitleApplyFontColorMapper::GetNameForBurninSubtitleApplyFontColor(m_applyFontColor));
  }

  if(m_backgroundColorHasBeenSet)
  {
   payload.WithString("backgroundColor", BurninSubtitleBackgroundColorMapper::GetNameForBurninSubtitleBackgroundColor(m_backgroundColor));
  }

  if(m_backgroundOpacityHasBeenSet)
  {
   payload.WithInteger("backgroundOpacity", m_backgroundOpacity);

  }

  if(m_fallbackFontHasBeenSet)
  {
   payload.WithString("fallbackFont", BurninSubtitleFallbackFontMapper::GetNameForBurninSubtitleFallbackFont(m_fallbackFont));
  }

  if(m_fontColorHasBeenSet)
  {
   payload.WithString("fontColor", BurninSubtitleFontColorMapper::GetNameForBurninSubtitleFontColor(m_fontColor));
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

  if(m_hexFontColorHasBeenSet)
  {
   payload.WithString("hexFontColor", m_hexFontColor);

  }

  if(m_outlineColorHasBeenSet)
  {
   payload.WithString("outlineColor", BurninSubtitleOutlineColorMapper::GetNameForBurninSubtitleOutlineColor(m_outlineColor));
  }

  if(m_outlineSizeHasBeenSet)
  {
   payload.WithInteger("outlineSize", m_outlineSize);

  }

  if(m_shadowColorHasBeenSet)
  {
   payload.WithString("shadowColor", BurninSubtitleShadowColorMapper::GetNameForBurninSubtitleShadowColor(m_shadowColor));
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
   payload.WithString("stylePassthrough", BurnInSubtitleStylePassthroughMapper::GetNameForBurnInSubtitleStylePassthrough(m_stylePassthrough));
  }

  if(m_teletextSpacingHasBeenSet)
  {
   payload.WithString("teletextSpacing", BurninSubtitleTeletextSpacingMapper::GetNameForBurninSubtitleTeletextSpacing(m_teletextSpacing));
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
