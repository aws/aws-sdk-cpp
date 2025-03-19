/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/BurninSubtitleAlignment.h>
#include <aws/mediaconvert/model/BurninSubtitleApplyFontColor.h>
#include <aws/mediaconvert/model/BurninSubtitleBackgroundColor.h>
#include <aws/mediaconvert/model/BurninSubtitleFallbackFont.h>
#include <aws/mediaconvert/model/BurninSubtitleFontColor.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/FontScript.h>
#include <aws/mediaconvert/model/BurninSubtitleOutlineColor.h>
#include <aws/mediaconvert/model/RemoveRubyReserveAttributes.h>
#include <aws/mediaconvert/model/BurninSubtitleShadowColor.h>
#include <aws/mediaconvert/model/BurnInSubtitleStylePassthrough.h>
#include <aws/mediaconvert/model/BurninSubtitleTeletextSpacing.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Burn-in is a captions delivery method, rather than a captions format. Burn-in
   * writes the captions directly on your video frames, replacing pixels of video
   * content with the captions. Set up burn-in captions in the same output as your
   * video. For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/burn-in-output-captions.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/BurninDestinationSettings">AWS
   * API Reference</a></p>
   */
  class BurninDestinationSettings
  {
  public:
    AWS_MEDIACONVERT_API BurninDestinationSettings() = default;
    AWS_MEDIACONVERT_API BurninDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API BurninDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the alignment of your captions. If no explicit x_position is provided,
     * setting alignment to centered will placethe captions at the bottom center of the
     * output. Similarly, setting a left alignment willalign captions to the bottom
     * left of the output. If x and y positions are given in conjunction with the
     * alignment parameter, the font will be justified (either left or centered)
     * relative to those coordinates.
     */
    inline BurninSubtitleAlignment GetAlignment() const { return m_alignment; }
    inline bool AlignmentHasBeenSet() const { return m_alignmentHasBeenSet; }
    inline void SetAlignment(BurninSubtitleAlignment value) { m_alignmentHasBeenSet = true; m_alignment = value; }
    inline BurninDestinationSettings& WithAlignment(BurninSubtitleAlignment value) { SetAlignment(value); return *this;}
    ///@}

    ///@{
    /**
     * Ignore this setting unless Style passthrough is set to Enabled and Font color
     * set to Black, Yellow, Red, Green, Blue, or Hex. Use Apply font color for
     * additional font color controls. When you choose White text only, or leave blank,
     * your font color setting only applies to white text in your input captions. For
     * example, if your font color setting is Yellow, and your input captions have red
     * and white text, your output captions will have red and yellow text. When you
     * choose ALL_TEXT, your font color setting applies to all of your output captions
     * text.
     */
    inline BurninSubtitleApplyFontColor GetApplyFontColor() const { return m_applyFontColor; }
    inline bool ApplyFontColorHasBeenSet() const { return m_applyFontColorHasBeenSet; }
    inline void SetApplyFontColor(BurninSubtitleApplyFontColor value) { m_applyFontColorHasBeenSet = true; m_applyFontColor = value; }
    inline BurninDestinationSettings& WithApplyFontColor(BurninSubtitleApplyFontColor value) { SetApplyFontColor(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the color of the rectangle behind the captions. Leave background color
     * blank and set Style passthrough to enabled to use the background color data from
     * your input captions, if present.
     */
    inline BurninSubtitleBackgroundColor GetBackgroundColor() const { return m_backgroundColor; }
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }
    inline void SetBackgroundColor(BurninSubtitleBackgroundColor value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }
    inline BurninDestinationSettings& WithBackgroundColor(BurninSubtitleBackgroundColor value) { SetBackgroundColor(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the opacity of the background rectangle. Enter a value from 0 to 255,
     * where 0 is transparent and 255 is opaque. If Style passthrough is set to
     * enabled, leave blank to pass through the background style information in your
     * input captions to your output captions. If Style passthrough is set to disabled,
     * leave blank to use a value of 0 and remove all backgrounds from your output
     * captions.
     */
    inline int GetBackgroundOpacity() const { return m_backgroundOpacity; }
    inline bool BackgroundOpacityHasBeenSet() const { return m_backgroundOpacityHasBeenSet; }
    inline void SetBackgroundOpacity(int value) { m_backgroundOpacityHasBeenSet = true; m_backgroundOpacity = value; }
    inline BurninDestinationSettings& WithBackgroundOpacity(int value) { SetBackgroundOpacity(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * set Fallback font to best match, or leave blank, MediaConvert uses a supported
     * font that most closely matches the font that your input captions specify. When
     * there are multiple unsupported fonts in your input captions, MediaConvert
     * matches each font with the supported font that matches best. When you explicitly
     * choose a replacement font, MediaConvert uses that font to replace all
     * unsupported fonts from your input.
     */
    inline BurninSubtitleFallbackFont GetFallbackFont() const { return m_fallbackFont; }
    inline bool FallbackFontHasBeenSet() const { return m_fallbackFontHasBeenSet; }
    inline void SetFallbackFont(BurninSubtitleFallbackFont value) { m_fallbackFontHasBeenSet = true; m_fallbackFont = value; }
    inline BurninDestinationSettings& WithFallbackFont(BurninSubtitleFallbackFont value) { SetFallbackFont(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the color of the burned-in captions text. Leave Font color blank and set
     * Style passthrough to enabled to use the font color data from your input
     * captions, if present.
     */
    inline BurninSubtitleFontColor GetFontColor() const { return m_fontColor; }
    inline bool FontColorHasBeenSet() const { return m_fontColorHasBeenSet; }
    inline void SetFontColor(BurninSubtitleFontColor value) { m_fontColorHasBeenSet = true; m_fontColor = value; }
    inline BurninDestinationSettings& WithFontColor(BurninSubtitleFontColor value) { SetFontColor(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify a bold TrueType font file to use when rendering your output captions.
     * Enter an S3, HTTP, or HTTPS URL. When you do, you must also separately specify a
     * regular, an italic, and a bold italic font file.
     */
    inline const Aws::String& GetFontFileBold() const { return m_fontFileBold; }
    inline bool FontFileBoldHasBeenSet() const { return m_fontFileBoldHasBeenSet; }
    template<typename FontFileBoldT = Aws::String>
    void SetFontFileBold(FontFileBoldT&& value) { m_fontFileBoldHasBeenSet = true; m_fontFileBold = std::forward<FontFileBoldT>(value); }
    template<typename FontFileBoldT = Aws::String>
    BurninDestinationSettings& WithFontFileBold(FontFileBoldT&& value) { SetFontFileBold(std::forward<FontFileBoldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify a bold italic TrueType font file to use when rendering your output
     * captions.
Enter an S3, HTTP, or HTTPS URL.
When you do, you must also separately
     * specify a regular, a bold, and an italic font file.
     */
    inline const Aws::String& GetFontFileBoldItalic() const { return m_fontFileBoldItalic; }
    inline bool FontFileBoldItalicHasBeenSet() const { return m_fontFileBoldItalicHasBeenSet; }
    template<typename FontFileBoldItalicT = Aws::String>
    void SetFontFileBoldItalic(FontFileBoldItalicT&& value) { m_fontFileBoldItalicHasBeenSet = true; m_fontFileBoldItalic = std::forward<FontFileBoldItalicT>(value); }
    template<typename FontFileBoldItalicT = Aws::String>
    BurninDestinationSettings& WithFontFileBoldItalic(FontFileBoldItalicT&& value) { SetFontFileBoldItalic(std::forward<FontFileBoldItalicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify an italic TrueType font file to use when rendering your output captions.
     * Enter an S3, HTTP, or HTTPS URL. When you do, you must also separately specify a
     * regular, a bold, and a bold italic font file.
     */
    inline const Aws::String& GetFontFileItalic() const { return m_fontFileItalic; }
    inline bool FontFileItalicHasBeenSet() const { return m_fontFileItalicHasBeenSet; }
    template<typename FontFileItalicT = Aws::String>
    void SetFontFileItalic(FontFileItalicT&& value) { m_fontFileItalicHasBeenSet = true; m_fontFileItalic = std::forward<FontFileItalicT>(value); }
    template<typename FontFileItalicT = Aws::String>
    BurninDestinationSettings& WithFontFileItalic(FontFileItalicT&& value) { SetFontFileItalic(std::forward<FontFileItalicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify a regular TrueType font file to use when rendering your output captions.
     * Enter an S3, HTTP, or HTTPS URL. When you do, you must also separately specify a
     * bold, an italic, and a bold italic font file.
     */
    inline const Aws::String& GetFontFileRegular() const { return m_fontFileRegular; }
    inline bool FontFileRegularHasBeenSet() const { return m_fontFileRegularHasBeenSet; }
    template<typename FontFileRegularT = Aws::String>
    void SetFontFileRegular(FontFileRegularT&& value) { m_fontFileRegularHasBeenSet = true; m_fontFileRegular = std::forward<FontFileRegularT>(value); }
    template<typename FontFileRegularT = Aws::String>
    BurninDestinationSettings& WithFontFileRegular(FontFileRegularT&& value) { SetFontFileRegular(std::forward<FontFileRegularT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the opacity of the burned-in captions. 255 is opaque; 0 is transparent.
     */
    inline int GetFontOpacity() const { return m_fontOpacity; }
    inline bool FontOpacityHasBeenSet() const { return m_fontOpacityHasBeenSet; }
    inline void SetFontOpacity(int value) { m_fontOpacityHasBeenSet = true; m_fontOpacity = value; }
    inline BurninDestinationSettings& WithFontOpacity(int value) { SetFontOpacity(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the Font resolution in DPI (dots per inch).
     */
    inline int GetFontResolution() const { return m_fontResolution; }
    inline bool FontResolutionHasBeenSet() const { return m_fontResolutionHasBeenSet; }
    inline void SetFontResolution(int value) { m_fontResolutionHasBeenSet = true; m_fontResolution = value; }
    inline BurninDestinationSettings& WithFontResolution(int value) { SetFontResolution(value); return *this;}
    ///@}

    ///@{
    /**
     * Set Font script to Automatically determined, or leave blank, to automatically
     * determine the font script in your input captions. Otherwise, set to Simplified
     * Chinese (HANS) or Traditional Chinese (HANT) if your input font script uses
     * Simplified or Traditional Chinese.
     */
    inline FontScript GetFontScript() const { return m_fontScript; }
    inline bool FontScriptHasBeenSet() const { return m_fontScriptHasBeenSet; }
    inline void SetFontScript(FontScript value) { m_fontScriptHasBeenSet = true; m_fontScript = value; }
    inline BurninDestinationSettings& WithFontScript(FontScript value) { SetFontScript(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the Font size in pixels. Must be a positive integer. Set to 0, or leave
     * blank, for automatic font size.
     */
    inline int GetFontSize() const { return m_fontSize; }
    inline bool FontSizeHasBeenSet() const { return m_fontSizeHasBeenSet; }
    inline void SetFontSize(int value) { m_fontSizeHasBeenSet = true; m_fontSize = value; }
    inline BurninDestinationSettings& WithFontSize(int value) { SetFontSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Ignore this setting unless your Font color is set to Hex. Enter either six or
     * eight hexidecimal digits, representing red, green, and blue, with two optional
     * extra digits for alpha. For example a value of 1122AABB is a red value of 0x11,
     * a green value of 0x22, a blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline const Aws::String& GetHexFontColor() const { return m_hexFontColor; }
    inline bool HexFontColorHasBeenSet() const { return m_hexFontColorHasBeenSet; }
    template<typename HexFontColorT = Aws::String>
    void SetHexFontColor(HexFontColorT&& value) { m_hexFontColorHasBeenSet = true; m_hexFontColor = std::forward<HexFontColorT>(value); }
    template<typename HexFontColorT = Aws::String>
    BurninDestinationSettings& WithHexFontColor(HexFontColorT&& value) { SetHexFontColor(std::forward<HexFontColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify font outline color. Leave Outline color blank and set Style passthrough
     * to enabled to use the font outline color data from your input captions, if
     * present.
     */
    inline BurninSubtitleOutlineColor GetOutlineColor() const { return m_outlineColor; }
    inline bool OutlineColorHasBeenSet() const { return m_outlineColorHasBeenSet; }
    inline void SetOutlineColor(BurninSubtitleOutlineColor value) { m_outlineColorHasBeenSet = true; m_outlineColor = value; }
    inline BurninDestinationSettings& WithOutlineColor(BurninSubtitleOutlineColor value) { SetOutlineColor(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the Outline size of the caption text, in pixels. Leave Outline size
     * blank and set Style passthrough to enabled to use the outline size data from
     * your input captions, if present.
     */
    inline int GetOutlineSize() const { return m_outlineSize; }
    inline bool OutlineSizeHasBeenSet() const { return m_outlineSizeHasBeenSet; }
    inline void SetOutlineSize(int value) { m_outlineSizeHasBeenSet = true; m_outlineSize = value; }
    inline BurninDestinationSettings& WithOutlineSize(int value) { SetOutlineSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Optionally remove any tts:rubyReserve attributes present in your input, that do 
     * not have a tts:ruby attribute in the same element, from your output. Use if your
     * vertical Japanese output captions have alignment issues. To remove ruby reserve
     * attributes when present: Choose Enabled. To not remove any ruby reserve
     * attributes: Keep the default value, Disabled.
     */
    inline RemoveRubyReserveAttributes GetRemoveRubyReserveAttributes() const { return m_removeRubyReserveAttributes; }
    inline bool RemoveRubyReserveAttributesHasBeenSet() const { return m_removeRubyReserveAttributesHasBeenSet; }
    inline void SetRemoveRubyReserveAttributes(RemoveRubyReserveAttributes value) { m_removeRubyReserveAttributesHasBeenSet = true; m_removeRubyReserveAttributes = value; }
    inline BurninDestinationSettings& WithRemoveRubyReserveAttributes(RemoveRubyReserveAttributes value) { SetRemoveRubyReserveAttributes(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the color of the shadow cast by the captions. Leave Shadow color blank
     * and set Style passthrough to enabled to use the shadow color data from your
     * input captions, if present.
     */
    inline BurninSubtitleShadowColor GetShadowColor() const { return m_shadowColor; }
    inline bool ShadowColorHasBeenSet() const { return m_shadowColorHasBeenSet; }
    inline void SetShadowColor(BurninSubtitleShadowColor value) { m_shadowColorHasBeenSet = true; m_shadowColor = value; }
    inline BurninDestinationSettings& WithShadowColor(BurninSubtitleShadowColor value) { SetShadowColor(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the opacity of the shadow. Enter a value from 0 to 255, where 0 is
     * transparent and 255 is opaque. If Style passthrough is set to Enabled, leave
     * Shadow opacity blank to pass through the shadow style information in your input
     * captions to your output captions. If Style passthrough is set to disabled, leave
     * blank to use a value of 0 and remove all shadows from your output captions.
     */
    inline int GetShadowOpacity() const { return m_shadowOpacity; }
    inline bool ShadowOpacityHasBeenSet() const { return m_shadowOpacityHasBeenSet; }
    inline void SetShadowOpacity(int value) { m_shadowOpacityHasBeenSet = true; m_shadowOpacity = value; }
    inline BurninDestinationSettings& WithShadowOpacity(int value) { SetShadowOpacity(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the horizontal offset of the shadow, relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels to the left.
     */
    inline int GetShadowXOffset() const { return m_shadowXOffset; }
    inline bool ShadowXOffsetHasBeenSet() const { return m_shadowXOffsetHasBeenSet; }
    inline void SetShadowXOffset(int value) { m_shadowXOffsetHasBeenSet = true; m_shadowXOffset = value; }
    inline BurninDestinationSettings& WithShadowXOffset(int value) { SetShadowXOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the vertical offset of the shadow relative to the captions in pixels. A
     * value of -2 would result in a shadow offset 2 pixels above the text. Leave
     * Shadow y-offset blank and set Style passthrough to enabled to use the shadow
     * y-offset data from your input captions, if present.
     */
    inline int GetShadowYOffset() const { return m_shadowYOffset; }
    inline bool ShadowYOffsetHasBeenSet() const { return m_shadowYOffsetHasBeenSet; }
    inline void SetShadowYOffset(int value) { m_shadowYOffsetHasBeenSet = true; m_shadowYOffset = value; }
    inline BurninDestinationSettings& WithShadowYOffset(int value) { SetShadowYOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * To use the available style, color, and position information from your input
     * captions: Set Style passthrough to Enabled. Note that MediaConvert uses default
     * settings for any missing style or position information in your input captions To
     * ignore the style and position information from your input captions and use
     * default settings: Leave blank or keep the default value, Disabled. Default
     * settings include white text with black outlining, bottom-center positioning, and
     * automatic sizing. Whether you set Style passthrough to enabled or not, you can
     * also choose to manually override any of the individual style and position
     * settings. You can also override any fonts by manually specifying custom font
     * files.
     */
    inline BurnInSubtitleStylePassthrough GetStylePassthrough() const { return m_stylePassthrough; }
    inline bool StylePassthroughHasBeenSet() const { return m_stylePassthroughHasBeenSet; }
    inline void SetStylePassthrough(BurnInSubtitleStylePassthrough value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = value; }
    inline BurninDestinationSettings& WithStylePassthrough(BurnInSubtitleStylePassthrough value) { SetStylePassthrough(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether the text spacing in your captions is set by the captions grid,
     * or varies depending on letter width. Choose fixed grid to conform to the spacing
     * specified in the captions file more accurately. Choose proportional to make the
     * text easier to read for closed captions.
     */
    inline BurninSubtitleTeletextSpacing GetTeletextSpacing() const { return m_teletextSpacing; }
    inline bool TeletextSpacingHasBeenSet() const { return m_teletextSpacingHasBeenSet; }
    inline void SetTeletextSpacing(BurninSubtitleTeletextSpacing value) { m_teletextSpacingHasBeenSet = true; m_teletextSpacing = value; }
    inline BurninDestinationSettings& WithTeletextSpacing(BurninSubtitleTeletextSpacing value) { SetTeletextSpacing(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the horizontal position of the captions, relative to the left side of
     * the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the left of the output. If no explicit x_position is provided, the
     * horizontal caption position will be determined by the alignment parameter.
     */
    inline int GetXPosition() const { return m_xPosition; }
    inline bool XPositionHasBeenSet() const { return m_xPositionHasBeenSet; }
    inline void SetXPosition(int value) { m_xPositionHasBeenSet = true; m_xPosition = value; }
    inline BurninDestinationSettings& WithXPosition(int value) { SetXPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the vertical position of the captions, relative to the top of the output
     * in pixels. A value of 10 would result in the captions starting 10 pixels from
     * the top of the output. If no explicit y_position is provided, the caption will
     * be positioned towards the bottom of the output.
     */
    inline int GetYPosition() const { return m_yPosition; }
    inline bool YPositionHasBeenSet() const { return m_yPositionHasBeenSet; }
    inline void SetYPosition(int value) { m_yPositionHasBeenSet = true; m_yPosition = value; }
    inline BurninDestinationSettings& WithYPosition(int value) { SetYPosition(value); return *this;}
    ///@}
  private:

    BurninSubtitleAlignment m_alignment{BurninSubtitleAlignment::NOT_SET};
    bool m_alignmentHasBeenSet = false;

    BurninSubtitleApplyFontColor m_applyFontColor{BurninSubtitleApplyFontColor::NOT_SET};
    bool m_applyFontColorHasBeenSet = false;

    BurninSubtitleBackgroundColor m_backgroundColor{BurninSubtitleBackgroundColor::NOT_SET};
    bool m_backgroundColorHasBeenSet = false;

    int m_backgroundOpacity{0};
    bool m_backgroundOpacityHasBeenSet = false;

    BurninSubtitleFallbackFont m_fallbackFont{BurninSubtitleFallbackFont::NOT_SET};
    bool m_fallbackFontHasBeenSet = false;

    BurninSubtitleFontColor m_fontColor{BurninSubtitleFontColor::NOT_SET};
    bool m_fontColorHasBeenSet = false;

    Aws::String m_fontFileBold;
    bool m_fontFileBoldHasBeenSet = false;

    Aws::String m_fontFileBoldItalic;
    bool m_fontFileBoldItalicHasBeenSet = false;

    Aws::String m_fontFileItalic;
    bool m_fontFileItalicHasBeenSet = false;

    Aws::String m_fontFileRegular;
    bool m_fontFileRegularHasBeenSet = false;

    int m_fontOpacity{0};
    bool m_fontOpacityHasBeenSet = false;

    int m_fontResolution{0};
    bool m_fontResolutionHasBeenSet = false;

    FontScript m_fontScript{FontScript::NOT_SET};
    bool m_fontScriptHasBeenSet = false;

    int m_fontSize{0};
    bool m_fontSizeHasBeenSet = false;

    Aws::String m_hexFontColor;
    bool m_hexFontColorHasBeenSet = false;

    BurninSubtitleOutlineColor m_outlineColor{BurninSubtitleOutlineColor::NOT_SET};
    bool m_outlineColorHasBeenSet = false;

    int m_outlineSize{0};
    bool m_outlineSizeHasBeenSet = false;

    RemoveRubyReserveAttributes m_removeRubyReserveAttributes{RemoveRubyReserveAttributes::NOT_SET};
    bool m_removeRubyReserveAttributesHasBeenSet = false;

    BurninSubtitleShadowColor m_shadowColor{BurninSubtitleShadowColor::NOT_SET};
    bool m_shadowColorHasBeenSet = false;

    int m_shadowOpacity{0};
    bool m_shadowOpacityHasBeenSet = false;

    int m_shadowXOffset{0};
    bool m_shadowXOffsetHasBeenSet = false;

    int m_shadowYOffset{0};
    bool m_shadowYOffsetHasBeenSet = false;

    BurnInSubtitleStylePassthrough m_stylePassthrough{BurnInSubtitleStylePassthrough::NOT_SET};
    bool m_stylePassthroughHasBeenSet = false;

    BurninSubtitleTeletextSpacing m_teletextSpacing{BurninSubtitleTeletextSpacing::NOT_SET};
    bool m_teletextSpacingHasBeenSet = false;

    int m_xPosition{0};
    bool m_xPositionHasBeenSet = false;

    int m_yPosition{0};
    bool m_yPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
