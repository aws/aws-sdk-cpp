/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/DvbSubDestinationAlignment.h>
#include <aws/medialive/model/DvbSubDestinationBackgroundColor.h>
#include <aws/medialive/model/InputLocation.h>
#include <aws/medialive/model/DvbSubDestinationFontColor.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/DvbSubDestinationOutlineColor.h>
#include <aws/medialive/model/DvbSubDestinationShadowColor.h>
#include <aws/medialive/model/DvbSubDestinationTeletextGridControl.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * Dvb Sub Destination Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DvbSubDestinationSettings">AWS
   * API Reference</a></p>
   */
  class DvbSubDestinationSettings
  {
  public:
    AWS_MEDIALIVE_API DvbSubDestinationSettings();
    AWS_MEDIALIVE_API DvbSubDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API DvbSubDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If no explicit xPosition or yPosition is provided, setting alignment to centered
     * will place the captions at the bottom center of the output. Similarly, setting a
     * left alignment will align captions to the bottom left of the output. If x and y
     * positions are given in conjunction with the alignment parameter, the font will
     * be justified (either left or centered) relative to those coordinates. Selecting
     * "smart" justification will left-justify live subtitles and center-justify
     * pre-recorded subtitles.  This option is not valid for source captions that are
     * STL or 608/embedded.  These source settings are already pre-defined by the
     * caption stream.  All burn-in and DVB-Sub font settings must match.
     */
    inline const DvbSubDestinationAlignment& GetAlignment() const{ return m_alignment; }
    inline bool AlignmentHasBeenSet() const { return m_alignmentHasBeenSet; }
    inline void SetAlignment(const DvbSubDestinationAlignment& value) { m_alignmentHasBeenSet = true; m_alignment = value; }
    inline void SetAlignment(DvbSubDestinationAlignment&& value) { m_alignmentHasBeenSet = true; m_alignment = std::move(value); }
    inline DvbSubDestinationSettings& WithAlignment(const DvbSubDestinationAlignment& value) { SetAlignment(value); return *this;}
    inline DvbSubDestinationSettings& WithAlignment(DvbSubDestinationAlignment&& value) { SetAlignment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the color of the rectangle behind the captions.  All burn-in and
     * DVB-Sub font settings must match.
     */
    inline const DvbSubDestinationBackgroundColor& GetBackgroundColor() const{ return m_backgroundColor; }
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }
    inline void SetBackgroundColor(const DvbSubDestinationBackgroundColor& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }
    inline void SetBackgroundColor(DvbSubDestinationBackgroundColor&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::move(value); }
    inline DvbSubDestinationSettings& WithBackgroundColor(const DvbSubDestinationBackgroundColor& value) { SetBackgroundColor(value); return *this;}
    inline DvbSubDestinationSettings& WithBackgroundColor(DvbSubDestinationBackgroundColor&& value) { SetBackgroundColor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the opacity of the background rectangle. 255 is opaque; 0 is
     * transparent. Leaving this parameter blank is equivalent to setting it to 0
     * (transparent).  All burn-in and DVB-Sub font settings must match.
     */
    inline int GetBackgroundOpacity() const{ return m_backgroundOpacity; }
    inline bool BackgroundOpacityHasBeenSet() const { return m_backgroundOpacityHasBeenSet; }
    inline void SetBackgroundOpacity(int value) { m_backgroundOpacityHasBeenSet = true; m_backgroundOpacity = value; }
    inline DvbSubDestinationSettings& WithBackgroundOpacity(int value) { SetBackgroundOpacity(value); return *this;}
    ///@}

    ///@{
    /**
     * External font file used for caption burn-in. File extension must be 'ttf' or
     * 'tte'.  Although the user can select output fonts for many different types of
     * input captions, embedded, STL and teletext sources use a strict grid system.
     * Using external fonts with these caption sources could cause unexpected display
     * of proportional fonts.  All burn-in and DVB-Sub font settings must match.
     */
    inline const InputLocation& GetFont() const{ return m_font; }
    inline bool FontHasBeenSet() const { return m_fontHasBeenSet; }
    inline void SetFont(const InputLocation& value) { m_fontHasBeenSet = true; m_font = value; }
    inline void SetFont(InputLocation&& value) { m_fontHasBeenSet = true; m_font = std::move(value); }
    inline DvbSubDestinationSettings& WithFont(const InputLocation& value) { SetFont(value); return *this;}
    inline DvbSubDestinationSettings& WithFont(InputLocation&& value) { SetFont(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the color of the burned-in captions.  This option is not valid for
     * source captions that are STL, 608/embedded or teletext.  These source settings
     * are already pre-defined by the caption stream.  All burn-in and DVB-Sub font
     * settings must match.
     */
    inline const DvbSubDestinationFontColor& GetFontColor() const{ return m_fontColor; }
    inline bool FontColorHasBeenSet() const { return m_fontColorHasBeenSet; }
    inline void SetFontColor(const DvbSubDestinationFontColor& value) { m_fontColorHasBeenSet = true; m_fontColor = value; }
    inline void SetFontColor(DvbSubDestinationFontColor&& value) { m_fontColorHasBeenSet = true; m_fontColor = std::move(value); }
    inline DvbSubDestinationSettings& WithFontColor(const DvbSubDestinationFontColor& value) { SetFontColor(value); return *this;}
    inline DvbSubDestinationSettings& WithFontColor(DvbSubDestinationFontColor&& value) { SetFontColor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the opacity of the burned-in captions. 255 is opaque; 0 is
     * transparent.  All burn-in and DVB-Sub font settings must match.
     */
    inline int GetFontOpacity() const{ return m_fontOpacity; }
    inline bool FontOpacityHasBeenSet() const { return m_fontOpacityHasBeenSet; }
    inline void SetFontOpacity(int value) { m_fontOpacityHasBeenSet = true; m_fontOpacity = value; }
    inline DvbSubDestinationSettings& WithFontOpacity(int value) { SetFontOpacity(value); return *this;}
    ///@}

    ///@{
    /**
     * Font resolution in DPI (dots per inch); default is 96 dpi.  All burn-in and
     * DVB-Sub font settings must match.
     */
    inline int GetFontResolution() const{ return m_fontResolution; }
    inline bool FontResolutionHasBeenSet() const { return m_fontResolutionHasBeenSet; }
    inline void SetFontResolution(int value) { m_fontResolutionHasBeenSet = true; m_fontResolution = value; }
    inline DvbSubDestinationSettings& WithFontResolution(int value) { SetFontResolution(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to auto fontSize will scale depending on the size of the output. 
     * Giving a positive integer will specify the exact font size in points.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline const Aws::String& GetFontSize() const{ return m_fontSize; }
    inline bool FontSizeHasBeenSet() const { return m_fontSizeHasBeenSet; }
    inline void SetFontSize(const Aws::String& value) { m_fontSizeHasBeenSet = true; m_fontSize = value; }
    inline void SetFontSize(Aws::String&& value) { m_fontSizeHasBeenSet = true; m_fontSize = std::move(value); }
    inline void SetFontSize(const char* value) { m_fontSizeHasBeenSet = true; m_fontSize.assign(value); }
    inline DvbSubDestinationSettings& WithFontSize(const Aws::String& value) { SetFontSize(value); return *this;}
    inline DvbSubDestinationSettings& WithFontSize(Aws::String&& value) { SetFontSize(std::move(value)); return *this;}
    inline DvbSubDestinationSettings& WithFontSize(const char* value) { SetFontSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies font outline color. This option is not valid for source captions that
     * are either 608/embedded or teletext. These source settings are already
     * pre-defined by the caption stream. All burn-in and DVB-Sub font settings must
     * match.
     */
    inline const DvbSubDestinationOutlineColor& GetOutlineColor() const{ return m_outlineColor; }
    inline bool OutlineColorHasBeenSet() const { return m_outlineColorHasBeenSet; }
    inline void SetOutlineColor(const DvbSubDestinationOutlineColor& value) { m_outlineColorHasBeenSet = true; m_outlineColor = value; }
    inline void SetOutlineColor(DvbSubDestinationOutlineColor&& value) { m_outlineColorHasBeenSet = true; m_outlineColor = std::move(value); }
    inline DvbSubDestinationSettings& WithOutlineColor(const DvbSubDestinationOutlineColor& value) { SetOutlineColor(value); return *this;}
    inline DvbSubDestinationSettings& WithOutlineColor(DvbSubDestinationOutlineColor&& value) { SetOutlineColor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies font outline size in pixels. This option is not valid for source
     * captions that are either 608/embedded or teletext. These source settings are
     * already pre-defined by the caption stream. All burn-in and DVB-Sub font settings
     * must match.
     */
    inline int GetOutlineSize() const{ return m_outlineSize; }
    inline bool OutlineSizeHasBeenSet() const { return m_outlineSizeHasBeenSet; }
    inline void SetOutlineSize(int value) { m_outlineSizeHasBeenSet = true; m_outlineSize = value; }
    inline DvbSubDestinationSettings& WithOutlineSize(int value) { SetOutlineSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the color of the shadow cast by the captions.  All burn-in and DVB-Sub
     * font settings must match.
     */
    inline const DvbSubDestinationShadowColor& GetShadowColor() const{ return m_shadowColor; }
    inline bool ShadowColorHasBeenSet() const { return m_shadowColorHasBeenSet; }
    inline void SetShadowColor(const DvbSubDestinationShadowColor& value) { m_shadowColorHasBeenSet = true; m_shadowColor = value; }
    inline void SetShadowColor(DvbSubDestinationShadowColor&& value) { m_shadowColorHasBeenSet = true; m_shadowColor = std::move(value); }
    inline DvbSubDestinationSettings& WithShadowColor(const DvbSubDestinationShadowColor& value) { SetShadowColor(value); return *this;}
    inline DvbSubDestinationSettings& WithShadowColor(DvbSubDestinationShadowColor&& value) { SetShadowColor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the opacity of the shadow. 255 is opaque; 0 is transparent. Leaving
     * this parameter blank is equivalent to setting it to 0 (transparent).  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline int GetShadowOpacity() const{ return m_shadowOpacity; }
    inline bool ShadowOpacityHasBeenSet() const { return m_shadowOpacityHasBeenSet; }
    inline void SetShadowOpacity(int value) { m_shadowOpacityHasBeenSet = true; m_shadowOpacity = value; }
    inline DvbSubDestinationSettings& WithShadowOpacity(int value) { SetShadowOpacity(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the horizontal offset of the shadow relative to the captions in
     * pixels. A value of -2 would result in a shadow offset 2 pixels to the left.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline int GetShadowXOffset() const{ return m_shadowXOffset; }
    inline bool ShadowXOffsetHasBeenSet() const { return m_shadowXOffsetHasBeenSet; }
    inline void SetShadowXOffset(int value) { m_shadowXOffsetHasBeenSet = true; m_shadowXOffset = value; }
    inline DvbSubDestinationSettings& WithShadowXOffset(int value) { SetShadowXOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the vertical offset of the shadow relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels above the text.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline int GetShadowYOffset() const{ return m_shadowYOffset; }
    inline bool ShadowYOffsetHasBeenSet() const { return m_shadowYOffsetHasBeenSet; }
    inline void SetShadowYOffset(int value) { m_shadowYOffsetHasBeenSet = true; m_shadowYOffset = value; }
    inline DvbSubDestinationSettings& WithShadowYOffset(int value) { SetShadowYOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * Controls whether a fixed grid size will be used to generate the output subtitles
     * bitmap. Only applicable for Teletext inputs and DVB-Sub/Burn-in outputs.
     */
    inline const DvbSubDestinationTeletextGridControl& GetTeletextGridControl() const{ return m_teletextGridControl; }
    inline bool TeletextGridControlHasBeenSet() const { return m_teletextGridControlHasBeenSet; }
    inline void SetTeletextGridControl(const DvbSubDestinationTeletextGridControl& value) { m_teletextGridControlHasBeenSet = true; m_teletextGridControl = value; }
    inline void SetTeletextGridControl(DvbSubDestinationTeletextGridControl&& value) { m_teletextGridControlHasBeenSet = true; m_teletextGridControl = std::move(value); }
    inline DvbSubDestinationSettings& WithTeletextGridControl(const DvbSubDestinationTeletextGridControl& value) { SetTeletextGridControl(value); return *this;}
    inline DvbSubDestinationSettings& WithTeletextGridControl(DvbSubDestinationTeletextGridControl&& value) { SetTeletextGridControl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the horizontal position of the caption relative to the left side of
     * the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the left of the output. If no explicit xPosition is provided, the
     * horizontal caption position will be determined by the alignment parameter.  This
     * option is not valid for source captions that are STL, 608/embedded or teletext.
     * These source settings are already pre-defined by the caption stream.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline int GetXPosition() const{ return m_xPosition; }
    inline bool XPositionHasBeenSet() const { return m_xPositionHasBeenSet; }
    inline void SetXPosition(int value) { m_xPositionHasBeenSet = true; m_xPosition = value; }
    inline DvbSubDestinationSettings& WithXPosition(int value) { SetXPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the vertical position of the caption relative to the top of the output
     * in pixels. A value of 10 would result in the captions starting 10 pixels from
     * the top of the output. If no explicit yPosition is provided, the caption will be
     * positioned towards the bottom of the output.  This option is not valid for
     * source captions that are STL, 608/embedded or teletext.  These source settings
     * are already pre-defined by the caption stream.  All burn-in and DVB-Sub font
     * settings must match.
     */
    inline int GetYPosition() const{ return m_yPosition; }
    inline bool YPositionHasBeenSet() const { return m_yPositionHasBeenSet; }
    inline void SetYPosition(int value) { m_yPositionHasBeenSet = true; m_yPosition = value; }
    inline DvbSubDestinationSettings& WithYPosition(int value) { SetYPosition(value); return *this;}
    ///@}
  private:

    DvbSubDestinationAlignment m_alignment;
    bool m_alignmentHasBeenSet = false;

    DvbSubDestinationBackgroundColor m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;

    int m_backgroundOpacity;
    bool m_backgroundOpacityHasBeenSet = false;

    InputLocation m_font;
    bool m_fontHasBeenSet = false;

    DvbSubDestinationFontColor m_fontColor;
    bool m_fontColorHasBeenSet = false;

    int m_fontOpacity;
    bool m_fontOpacityHasBeenSet = false;

    int m_fontResolution;
    bool m_fontResolutionHasBeenSet = false;

    Aws::String m_fontSize;
    bool m_fontSizeHasBeenSet = false;

    DvbSubDestinationOutlineColor m_outlineColor;
    bool m_outlineColorHasBeenSet = false;

    int m_outlineSize;
    bool m_outlineSizeHasBeenSet = false;

    DvbSubDestinationShadowColor m_shadowColor;
    bool m_shadowColorHasBeenSet = false;

    int m_shadowOpacity;
    bool m_shadowOpacityHasBeenSet = false;

    int m_shadowXOffset;
    bool m_shadowXOffsetHasBeenSet = false;

    int m_shadowYOffset;
    bool m_shadowYOffsetHasBeenSet = false;

    DvbSubDestinationTeletextGridControl m_teletextGridControl;
    bool m_teletextGridControlHasBeenSet = false;

    int m_xPosition;
    bool m_xPositionHasBeenSet = false;

    int m_yPosition;
    bool m_yPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
