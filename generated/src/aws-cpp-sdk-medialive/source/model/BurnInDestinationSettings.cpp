/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BurnInDestinationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

BurnInDestinationSettings::BurnInDestinationSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

BurnInDestinationSettings& BurnInDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alignment"))
  {
    m_alignment = BurnInAlignmentMapper::GetBurnInAlignmentForName(jsonValue.GetString("alignment"));
    m_alignmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("backgroundColor"))
  {
    m_backgroundColor = BurnInBackgroundColorMapper::GetBurnInBackgroundColorForName(jsonValue.GetString("backgroundColor"));
    m_backgroundColorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("backgroundOpacity"))
  {
    m_backgroundOpacity = jsonValue.GetInteger("backgroundOpacity");
    m_backgroundOpacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("font"))
  {
    m_font = jsonValue.GetObject("font");
    m_fontHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fontColor"))
  {
    m_fontColor = BurnInFontColorMapper::GetBurnInFontColorForName(jsonValue.GetString("fontColor"));
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
  if(jsonValue.ValueExists("fontSize"))
  {
    m_fontSize = jsonValue.GetString("fontSize");
    m_fontSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outlineColor"))
  {
    m_outlineColor = BurnInOutlineColorMapper::GetBurnInOutlineColorForName(jsonValue.GetString("outlineColor"));
    m_outlineColorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outlineSize"))
  {
    m_outlineSize = jsonValue.GetInteger("outlineSize");
    m_outlineSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shadowColor"))
  {
    m_shadowColor = BurnInShadowColorMapper::GetBurnInShadowColorForName(jsonValue.GetString("shadowColor"));
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
  if(jsonValue.ValueExists("teletextGridControl"))
  {
    m_teletextGridControl = BurnInTeletextGridControlMapper::GetBurnInTeletextGridControlForName(jsonValue.GetString("teletextGridControl"));
    m_teletextGridControlHasBeenSet = true;
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
  if(jsonValue.ValueExists("subtitleRows"))
  {
    m_subtitleRows = BurnInDestinationSubtitleRowsMapper::GetBurnInDestinationSubtitleRowsForName(jsonValue.GetString("subtitleRows"));
    m_subtitleRowsHasBeenSet = true;
  }
  return *this;
}

JsonValue BurnInDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_alignmentHasBeenSet)
  {
   payload.WithString("alignment", BurnInAlignmentMapper::GetNameForBurnInAlignment(m_alignment));
  }

  if(m_backgroundColorHasBeenSet)
  {
   payload.WithString("backgroundColor", BurnInBackgroundColorMapper::GetNameForBurnInBackgroundColor(m_backgroundColor));
  }

  if(m_backgroundOpacityHasBeenSet)
  {
   payload.WithInteger("backgroundOpacity", m_backgroundOpacity);

  }

  if(m_fontHasBeenSet)
  {
   payload.WithObject("font", m_font.Jsonize());

  }

  if(m_fontColorHasBeenSet)
  {
   payload.WithString("fontColor", BurnInFontColorMapper::GetNameForBurnInFontColor(m_fontColor));
  }

  if(m_fontOpacityHasBeenSet)
  {
   payload.WithInteger("fontOpacity", m_fontOpacity);

  }

  if(m_fontResolutionHasBeenSet)
  {
   payload.WithInteger("fontResolution", m_fontResolution);

  }

  if(m_fontSizeHasBeenSet)
  {
   payload.WithString("fontSize", m_fontSize);

  }

  if(m_outlineColorHasBeenSet)
  {
   payload.WithString("outlineColor", BurnInOutlineColorMapper::GetNameForBurnInOutlineColor(m_outlineColor));
  }

  if(m_outlineSizeHasBeenSet)
  {
   payload.WithInteger("outlineSize", m_outlineSize);

  }

  if(m_shadowColorHasBeenSet)
  {
   payload.WithString("shadowColor", BurnInShadowColorMapper::GetNameForBurnInShadowColor(m_shadowColor));
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

  if(m_teletextGridControlHasBeenSet)
  {
   payload.WithString("teletextGridControl", BurnInTeletextGridControlMapper::GetNameForBurnInTeletextGridControl(m_teletextGridControl));
  }

  if(m_xPositionHasBeenSet)
  {
   payload.WithInteger("xPosition", m_xPosition);

  }

  if(m_yPositionHasBeenSet)
  {
   payload.WithInteger("yPosition", m_yPosition);

  }

  if(m_subtitleRowsHasBeenSet)
  {
   payload.WithString("subtitleRows", BurnInDestinationSubtitleRowsMapper::GetNameForBurnInDestinationSubtitleRows(m_subtitleRows));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
