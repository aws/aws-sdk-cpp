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
#include <aws/medialive/model/DvbSubDestinationSubtitleRows.h>
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
    AWS_MEDIALIVE_API DvbSubDestinationSettings() = default;
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
    inline DvbSubDestinationAlignment GetAlignment() const { return m_alignment; }
    inline bool AlignmentHasBeenSet() const { return m_alignmentHasBeenSet; }
    inline void SetAlignment(DvbSubDestinationAlignment value) { m_alignmentHasBeenSet = true; m_alignment = value; }
    inline DvbSubDestinationSettings& WithAlignment(DvbSubDestinationAlignment value) { SetAlignment(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the color of the rectangle behind the captions.  All burn-in and
     * DVB-Sub font settings must match.
     */
    inline DvbSubDestinationBackgroundColor GetBackgroundColor() const { return m_backgroundColor; }
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }
    inline void SetBackgroundColor(DvbSubDestinationBackgroundColor value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }
    inline DvbSubDestinationSettings& WithBackgroundColor(DvbSubDestinationBackgroundColor value) { SetBackgroundColor(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the opacity of the background rectangle. 255 is opaque; 0 is
     * transparent. Leaving this parameter blank is equivalent to setting it to 0
     * (transparent).  All burn-in and DVB-Sub font settings must match.
     */
    inline int GetBackgroundOpacity() const { return m_backgroundOpacity; }
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
    inline const InputLocation& GetFont() const { return m_font; }
    inline bool FontHasBeenSet() const { return m_fontHasBeenSet; }
    template<typename FontT = InputLocation>
    void SetFont(FontT&& value) { m_fontHasBeenSet = true; m_font = std::forward<FontT>(value); }
    template<typename FontT = InputLocation>
    DvbSubDestinationSettings& WithFont(FontT&& value) { SetFont(std::forward<FontT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the color of the burned-in captions.  This option is not valid for
     * source captions that are STL, 608/embedded or teletext.  These source settings
     * are already pre-defined by the caption stream.  All burn-in and DVB-Sub font
     * settings must match.
     */
    inline DvbSubDestinationFontColor GetFontColor() const { return m_fontColor; }
    inline bool FontColorHasBeenSet() const { return m_fontColorHasBeenSet; }
    inline void SetFontColor(DvbSubDestinationFontColor value) { m_fontColorHasBeenSet = true; m_fontColor = value; }
    inline DvbSubDestinationSettings& WithFontColor(DvbSubDestinationFontColor value) { SetFontColor(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the opacity of the burned-in captions. 255 is opaque; 0 is
     * transparent.  All burn-in and DVB-Sub font settings must match.
     */
    inline int GetFontOpacity() const { return m_fontOpacity; }
    inline bool FontOpacityHasBeenSet() const { return m_fontOpacityHasBeenSet; }
    inline void SetFontOpacity(int value) { m_fontOpacityHasBeenSet = true; m_fontOpacity = value; }
    inline DvbSubDestinationSettings& WithFontOpacity(int value) { SetFontOpacity(value); return *this;}
    ///@}

    ///@{
    /**
     * Font resolution in DPI (dots per inch); default is 96 dpi.  All burn-in and
     * DVB-Sub font settings must match.
     */
    inline int GetFontResolution() const { return m_fontResolution; }
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
    inline const Aws::String& GetFontSize() const { return m_fontSize; }
    inline bool FontSizeHasBeenSet() const { return m_fontSizeHasBeenSet; }
    template<typename FontSizeT = Aws::String>
    void SetFontSize(FontSizeT&& value) { m_fontSizeHasBeenSet = true; m_fontSize = std::forward<FontSizeT>(value); }
    template<typename FontSizeT = Aws::String>
    DvbSubDestinationSettings& WithFontSize(FontSizeT&& value) { SetFontSize(std::forward<FontSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies font outline color. This option is not valid for source captions that
     * are either 608/embedded or teletext. These source settings are already
     * pre-defined by the caption stream. All burn-in and DVB-Sub font settings must
     * match.
     */
    inline DvbSubDestinationOutlineColor GetOutlineColor() const { return m_outlineColor; }
    inline bool OutlineColorHasBeenSet() const { return m_outlineColorHasBeenSet; }
    inline void SetOutlineColor(DvbSubDestinationOutlineColor value) { m_outlineColorHasBeenSet = true; m_outlineColor = value; }
    inline DvbSubDestinationSettings& WithOutlineColor(DvbSubDestinationOutlineColor value) { SetOutlineColor(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies font outline size in pixels. This option is not valid for source
     * captions that are either 608/embedded or teletext. These source settings are
     * already pre-defined by the caption stream. All burn-in and DVB-Sub font settings
     * must match.
     */
    inline int GetOutlineSize() const { return m_outlineSize; }
    inline bool OutlineSizeHasBeenSet() const { return m_outlineSizeHasBeenSet; }
    inline void SetOutlineSize(int value) { m_outlineSizeHasBeenSet = true; m_outlineSize = value; }
    inline DvbSubDestinationSettings& WithOutlineSize(int value) { SetOutlineSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the color of the shadow cast by the captions.  All burn-in and DVB-Sub
     * font settings must match.
     */
    inline DvbSubDestinationShadowColor GetShadowColor() const { return m_shadowColor; }
    inline bool ShadowColorHasBeenSet() const { return m_shadowColorHasBeenSet; }
    inline void SetShadowColor(DvbSubDestinationShadowColor value) { m_shadowColorHasBeenSet = true; m_shadowColor = value; }
    inline DvbSubDestinationSettings& WithShadowColor(DvbSubDestinationShadowColor value) { SetShadowColor(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the opacity of the shadow. 255 is opaque; 0 is transparent. Leaving
     * this parameter blank is equivalent to setting it to 0 (transparent).  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline int GetShadowOpacity() const { return m_shadowOpacity; }
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
    inline int GetShadowXOffset() const { return m_shadowXOffset; }
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
    inline int GetShadowYOffset() const { return m_shadowYOffset; }
    inline bool ShadowYOffsetHasBeenSet() const { return m_shadowYOffsetHasBeenSet; }
    inline void SetShadowYOffset(int value) { m_shadowYOffsetHasBeenSet = true; m_shadowYOffset = value; }
    inline DvbSubDestinationSettings& WithShadowYOffset(int value) { SetShadowYOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * Controls whether a fixed grid size will be used to generate the output subtitles
     * bitmap. Only applicable for Teletext inputs and DVB-Sub/Burn-in outputs.
     */
    inline DvbSubDestinationTeletextGridControl GetTeletextGridControl() const { return m_teletextGridControl; }
    inline bool TeletextGridControlHasBeenSet() const { return m_teletextGridControlHasBeenSet; }
    inline void SetTeletextGridControl(DvbSubDestinationTeletextGridControl value) { m_teletextGridControlHasBeenSet = true; m_teletextGridControl = value; }
    inline DvbSubDestinationSettings& WithTeletextGridControl(DvbSubDestinationTeletextGridControl value) { SetTeletextGridControl(value); return *this;}
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
    inline int GetXPosition() const { return m_xPosition; }
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
    inline int GetYPosition() const { return m_yPosition; }
    inline bool YPositionHasBeenSet() const { return m_yPositionHasBeenSet; }
    inline void SetYPosition(int value) { m_yPositionHasBeenSet = true; m_yPosition = value; }
    inline DvbSubDestinationSettings& WithYPosition(int value) { SetYPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * Applies only when the input captions are Teletext and the output captions are
     * DVB-Sub or Burn-In. Choose the number of lines for the captions bitmap. The
     * captions bitmap is 700 wide × 576 high and will be laid over the video. For
     * example, a value of 16 divides the bitmap into 16 lines, with each line 36
     * pixels high (16 × 36 = 576). The default is 24 (24 pixels high). Enter the same
     * number in every encode in every output that converts the same Teletext source to
     * DVB-Sub or Burn-in.
     */
    inline DvbSubDestinationSubtitleRows GetSubtitleRows() const { return m_subtitleRows; }
    inline bool SubtitleRowsHasBeenSet() const { return m_subtitleRowsHasBeenSet; }
    inline void SetSubtitleRows(DvbSubDestinationSubtitleRows value) { m_subtitleRowsHasBeenSet = true; m_subtitleRows = value; }
    inline DvbSubDestinationSettings& WithSubtitleRows(DvbSubDestinationSubtitleRows value) { SetSubtitleRows(value); return *this;}
    ///@}
  private:

    DvbSubDestinationAlignment m_alignment{DvbSubDestinationAlignment::NOT_SET};
    bool m_alignmentHasBeenSet = false;

    DvbSubDestinationBackgroundColor m_backgroundColor{DvbSubDestinationBackgroundColor::NOT_SET};
    bool m_backgroundColorHasBeenSet = false;

    int m_backgroundOpacity{0};
    bool m_backgroundOpacityHasBeenSet = false;

    InputLocation m_font;
    bool m_fontHasBeenSet = false;

    DvbSubDestinationFontColor m_fontColor{DvbSubDestinationFontColor::NOT_SET};
    bool m_fontColorHasBeenSet = false;

    int m_fontOpacity{0};
    bool m_fontOpacityHasBeenSet = false;

    int m_fontResolution{0};
    bool m_fontResolutionHasBeenSet = false;

    Aws::String m_fontSize;
    bool m_fontSizeHasBeenSet = false;

    DvbSubDestinationOutlineColor m_outlineColor{DvbSubDestinationOutlineColor::NOT_SET};
    bool m_outlineColorHasBeenSet = false;

    int m_outlineSize{0};
    bool m_outlineSizeHasBeenSet = false;

    DvbSubDestinationShadowColor m_shadowColor{DvbSubDestinationShadowColor::NOT_SET};
    bool m_shadowColorHasBeenSet = false;

    int m_shadowOpacity{0};
    bool m_shadowOpacityHasBeenSet = false;

    int m_shadowXOffset{0};
    bool m_shadowXOffsetHasBeenSet = false;

    int m_shadowYOffset{0};
    bool m_shadowYOffsetHasBeenSet = false;

    DvbSubDestinationTeletextGridControl m_teletextGridControl{DvbSubDestinationTeletextGridControl::NOT_SET};
    bool m_teletextGridControlHasBeenSet = false;

    int m_xPosition{0};
    bool m_xPositionHasBeenSet = false;

    int m_yPosition{0};
    bool m_yPositionHasBeenSet = false;

    DvbSubDestinationSubtitleRows m_subtitleRows{DvbSubDestinationSubtitleRows::NOT_SET};
    bool m_subtitleRowsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
