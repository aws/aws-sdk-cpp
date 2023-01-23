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
#include <aws/mediaconvert/model/FontScript.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/BurninSubtitleOutlineColor.h>
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
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/burn-in-output-captions.html.
   * When you work directly in your JSON job specification, include this object and
   * any required children when you set destinationType to BURN_IN.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/BurninDestinationSettings">AWS
   * API Reference</a></p>
   */
  class BurninDestinationSettings
  {
  public:
    AWS_MEDIACONVERT_API BurninDestinationSettings();
    AWS_MEDIACONVERT_API BurninDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API BurninDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the alignment of your captions. If no explicit x_position is provided,
     * setting alignment to centered will placethe captions at the bottom center of the
     * output. Similarly, setting a left alignment willalign captions to the bottom
     * left of the output. If x and y positions are given in conjunction with the
     * alignment parameter, the font will be justified (either left or centered)
     * relative to those coordinates.
     */
    inline const BurninSubtitleAlignment& GetAlignment() const{ return m_alignment; }

    /**
     * Specify the alignment of your captions. If no explicit x_position is provided,
     * setting alignment to centered will placethe captions at the bottom center of the
     * output. Similarly, setting a left alignment willalign captions to the bottom
     * left of the output. If x and y positions are given in conjunction with the
     * alignment parameter, the font will be justified (either left or centered)
     * relative to those coordinates.
     */
    inline bool AlignmentHasBeenSet() const { return m_alignmentHasBeenSet; }

    /**
     * Specify the alignment of your captions. If no explicit x_position is provided,
     * setting alignment to centered will placethe captions at the bottom center of the
     * output. Similarly, setting a left alignment willalign captions to the bottom
     * left of the output. If x and y positions are given in conjunction with the
     * alignment parameter, the font will be justified (either left or centered)
     * relative to those coordinates.
     */
    inline void SetAlignment(const BurninSubtitleAlignment& value) { m_alignmentHasBeenSet = true; m_alignment = value; }

    /**
     * Specify the alignment of your captions. If no explicit x_position is provided,
     * setting alignment to centered will placethe captions at the bottom center of the
     * output. Similarly, setting a left alignment willalign captions to the bottom
     * left of the output. If x and y positions are given in conjunction with the
     * alignment parameter, the font will be justified (either left or centered)
     * relative to those coordinates.
     */
    inline void SetAlignment(BurninSubtitleAlignment&& value) { m_alignmentHasBeenSet = true; m_alignment = std::move(value); }

    /**
     * Specify the alignment of your captions. If no explicit x_position is provided,
     * setting alignment to centered will placethe captions at the bottom center of the
     * output. Similarly, setting a left alignment willalign captions to the bottom
     * left of the output. If x and y positions are given in conjunction with the
     * alignment parameter, the font will be justified (either left or centered)
     * relative to those coordinates.
     */
    inline BurninDestinationSettings& WithAlignment(const BurninSubtitleAlignment& value) { SetAlignment(value); return *this;}

    /**
     * Specify the alignment of your captions. If no explicit x_position is provided,
     * setting alignment to centered will placethe captions at the bottom center of the
     * output. Similarly, setting a left alignment willalign captions to the bottom
     * left of the output. If x and y positions are given in conjunction with the
     * alignment parameter, the font will be justified (either left or centered)
     * relative to those coordinates.
     */
    inline BurninDestinationSettings& WithAlignment(BurninSubtitleAlignment&& value) { SetAlignment(std::move(value)); return *this;}


    /**
     * Ignore this setting unless Style passthrough (StylePassthrough) is set to
     * Enabled and Font color (FontColor) set to Black, Yellow, Red, Green, Blue, or
     * Hex. Use Apply font color (ApplyFontColor) for additional font color controls.
     * When you choose White text only (WHITE_TEXT_ONLY), or leave blank, your font
     * color setting only applies to white text in your input captions. For example, if
     * your font color setting is Yellow, and your input captions have red and white
     * text, your output captions will have red and yellow text. When you choose
     * ALL_TEXT, your font color setting applies to all of your output captions text.
     */
    inline const BurninSubtitleApplyFontColor& GetApplyFontColor() const{ return m_applyFontColor; }

    /**
     * Ignore this setting unless Style passthrough (StylePassthrough) is set to
     * Enabled and Font color (FontColor) set to Black, Yellow, Red, Green, Blue, or
     * Hex. Use Apply font color (ApplyFontColor) for additional font color controls.
     * When you choose White text only (WHITE_TEXT_ONLY), or leave blank, your font
     * color setting only applies to white text in your input captions. For example, if
     * your font color setting is Yellow, and your input captions have red and white
     * text, your output captions will have red and yellow text. When you choose
     * ALL_TEXT, your font color setting applies to all of your output captions text.
     */
    inline bool ApplyFontColorHasBeenSet() const { return m_applyFontColorHasBeenSet; }

    /**
     * Ignore this setting unless Style passthrough (StylePassthrough) is set to
     * Enabled and Font color (FontColor) set to Black, Yellow, Red, Green, Blue, or
     * Hex. Use Apply font color (ApplyFontColor) for additional font color controls.
     * When you choose White text only (WHITE_TEXT_ONLY), or leave blank, your font
     * color setting only applies to white text in your input captions. For example, if
     * your font color setting is Yellow, and your input captions have red and white
     * text, your output captions will have red and yellow text. When you choose
     * ALL_TEXT, your font color setting applies to all of your output captions text.
     */
    inline void SetApplyFontColor(const BurninSubtitleApplyFontColor& value) { m_applyFontColorHasBeenSet = true; m_applyFontColor = value; }

    /**
     * Ignore this setting unless Style passthrough (StylePassthrough) is set to
     * Enabled and Font color (FontColor) set to Black, Yellow, Red, Green, Blue, or
     * Hex. Use Apply font color (ApplyFontColor) for additional font color controls.
     * When you choose White text only (WHITE_TEXT_ONLY), or leave blank, your font
     * color setting only applies to white text in your input captions. For example, if
     * your font color setting is Yellow, and your input captions have red and white
     * text, your output captions will have red and yellow text. When you choose
     * ALL_TEXT, your font color setting applies to all of your output captions text.
     */
    inline void SetApplyFontColor(BurninSubtitleApplyFontColor&& value) { m_applyFontColorHasBeenSet = true; m_applyFontColor = std::move(value); }

    /**
     * Ignore this setting unless Style passthrough (StylePassthrough) is set to
     * Enabled and Font color (FontColor) set to Black, Yellow, Red, Green, Blue, or
     * Hex. Use Apply font color (ApplyFontColor) for additional font color controls.
     * When you choose White text only (WHITE_TEXT_ONLY), or leave blank, your font
     * color setting only applies to white text in your input captions. For example, if
     * your font color setting is Yellow, and your input captions have red and white
     * text, your output captions will have red and yellow text. When you choose
     * ALL_TEXT, your font color setting applies to all of your output captions text.
     */
    inline BurninDestinationSettings& WithApplyFontColor(const BurninSubtitleApplyFontColor& value) { SetApplyFontColor(value); return *this;}

    /**
     * Ignore this setting unless Style passthrough (StylePassthrough) is set to
     * Enabled and Font color (FontColor) set to Black, Yellow, Red, Green, Blue, or
     * Hex. Use Apply font color (ApplyFontColor) for additional font color controls.
     * When you choose White text only (WHITE_TEXT_ONLY), or leave blank, your font
     * color setting only applies to white text in your input captions. For example, if
     * your font color setting is Yellow, and your input captions have red and white
     * text, your output captions will have red and yellow text. When you choose
     * ALL_TEXT, your font color setting applies to all of your output captions text.
     */
    inline BurninDestinationSettings& WithApplyFontColor(BurninSubtitleApplyFontColor&& value) { SetApplyFontColor(std::move(value)); return *this;}


    /**
     * Specify the color of the rectangle behind the captions. Leave background color
     * (BackgroundColor) blank and set Style passthrough (StylePassthrough) to enabled
     * to use the background color data from your input captions, if present.
     */
    inline const BurninSubtitleBackgroundColor& GetBackgroundColor() const{ return m_backgroundColor; }

    /**
     * Specify the color of the rectangle behind the captions. Leave background color
     * (BackgroundColor) blank and set Style passthrough (StylePassthrough) to enabled
     * to use the background color data from your input captions, if present.
     */
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }

    /**
     * Specify the color of the rectangle behind the captions. Leave background color
     * (BackgroundColor) blank and set Style passthrough (StylePassthrough) to enabled
     * to use the background color data from your input captions, if present.
     */
    inline void SetBackgroundColor(const BurninSubtitleBackgroundColor& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }

    /**
     * Specify the color of the rectangle behind the captions. Leave background color
     * (BackgroundColor) blank and set Style passthrough (StylePassthrough) to enabled
     * to use the background color data from your input captions, if present.
     */
    inline void SetBackgroundColor(BurninSubtitleBackgroundColor&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::move(value); }

    /**
     * Specify the color of the rectangle behind the captions. Leave background color
     * (BackgroundColor) blank and set Style passthrough (StylePassthrough) to enabled
     * to use the background color data from your input captions, if present.
     */
    inline BurninDestinationSettings& WithBackgroundColor(const BurninSubtitleBackgroundColor& value) { SetBackgroundColor(value); return *this;}

    /**
     * Specify the color of the rectangle behind the captions. Leave background color
     * (BackgroundColor) blank and set Style passthrough (StylePassthrough) to enabled
     * to use the background color data from your input captions, if present.
     */
    inline BurninDestinationSettings& WithBackgroundColor(BurninSubtitleBackgroundColor&& value) { SetBackgroundColor(std::move(value)); return *this;}


    /**
     * Specify the opacity of the background rectangle. Enter a value from 0 to 255,
     * where 0 is transparent and 255 is opaque. If Style passthrough
     * (StylePassthrough) is set to enabled, leave blank to pass through the background
     * style information in your input captions to your output captions. If Style
     * passthrough is set to disabled, leave blank to use a value of 0 and remove all
     * backgrounds from your output captions.
     */
    inline int GetBackgroundOpacity() const{ return m_backgroundOpacity; }

    /**
     * Specify the opacity of the background rectangle. Enter a value from 0 to 255,
     * where 0 is transparent and 255 is opaque. If Style passthrough
     * (StylePassthrough) is set to enabled, leave blank to pass through the background
     * style information in your input captions to your output captions. If Style
     * passthrough is set to disabled, leave blank to use a value of 0 and remove all
     * backgrounds from your output captions.
     */
    inline bool BackgroundOpacityHasBeenSet() const { return m_backgroundOpacityHasBeenSet; }

    /**
     * Specify the opacity of the background rectangle. Enter a value from 0 to 255,
     * where 0 is transparent and 255 is opaque. If Style passthrough
     * (StylePassthrough) is set to enabled, leave blank to pass through the background
     * style information in your input captions to your output captions. If Style
     * passthrough is set to disabled, leave blank to use a value of 0 and remove all
     * backgrounds from your output captions.
     */
    inline void SetBackgroundOpacity(int value) { m_backgroundOpacityHasBeenSet = true; m_backgroundOpacity = value; }

    /**
     * Specify the opacity of the background rectangle. Enter a value from 0 to 255,
     * where 0 is transparent and 255 is opaque. If Style passthrough
     * (StylePassthrough) is set to enabled, leave blank to pass through the background
     * style information in your input captions to your output captions. If Style
     * passthrough is set to disabled, leave blank to use a value of 0 and remove all
     * backgrounds from your output captions.
     */
    inline BurninDestinationSettings& WithBackgroundOpacity(int value) { SetBackgroundOpacity(value); return *this;}


    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * set Fallback font (FallbackFont) to best match (BEST_MATCH), or leave blank,
     * MediaConvert uses a supported font that most closely matches the font that your
     * input captions specify. When there are multiple unsupported fonts in your input
     * captions, MediaConvert matches each font with the supported font that matches
     * best. When you explicitly choose a replacement font, MediaConvert uses that font
     * to replace all unsupported fonts from your input.
     */
    inline const BurninSubtitleFallbackFont& GetFallbackFont() const{ return m_fallbackFont; }

    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * set Fallback font (FallbackFont) to best match (BEST_MATCH), or leave blank,
     * MediaConvert uses a supported font that most closely matches the font that your
     * input captions specify. When there are multiple unsupported fonts in your input
     * captions, MediaConvert matches each font with the supported font that matches
     * best. When you explicitly choose a replacement font, MediaConvert uses that font
     * to replace all unsupported fonts from your input.
     */
    inline bool FallbackFontHasBeenSet() const { return m_fallbackFontHasBeenSet; }

    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * set Fallback font (FallbackFont) to best match (BEST_MATCH), or leave blank,
     * MediaConvert uses a supported font that most closely matches the font that your
     * input captions specify. When there are multiple unsupported fonts in your input
     * captions, MediaConvert matches each font with the supported font that matches
     * best. When you explicitly choose a replacement font, MediaConvert uses that font
     * to replace all unsupported fonts from your input.
     */
    inline void SetFallbackFont(const BurninSubtitleFallbackFont& value) { m_fallbackFontHasBeenSet = true; m_fallbackFont = value; }

    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * set Fallback font (FallbackFont) to best match (BEST_MATCH), or leave blank,
     * MediaConvert uses a supported font that most closely matches the font that your
     * input captions specify. When there are multiple unsupported fonts in your input
     * captions, MediaConvert matches each font with the supported font that matches
     * best. When you explicitly choose a replacement font, MediaConvert uses that font
     * to replace all unsupported fonts from your input.
     */
    inline void SetFallbackFont(BurninSubtitleFallbackFont&& value) { m_fallbackFontHasBeenSet = true; m_fallbackFont = std::move(value); }

    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * set Fallback font (FallbackFont) to best match (BEST_MATCH), or leave blank,
     * MediaConvert uses a supported font that most closely matches the font that your
     * input captions specify. When there are multiple unsupported fonts in your input
     * captions, MediaConvert matches each font with the supported font that matches
     * best. When you explicitly choose a replacement font, MediaConvert uses that font
     * to replace all unsupported fonts from your input.
     */
    inline BurninDestinationSettings& WithFallbackFont(const BurninSubtitleFallbackFont& value) { SetFallbackFont(value); return *this;}

    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * set Fallback font (FallbackFont) to best match (BEST_MATCH), or leave blank,
     * MediaConvert uses a supported font that most closely matches the font that your
     * input captions specify. When there are multiple unsupported fonts in your input
     * captions, MediaConvert matches each font with the supported font that matches
     * best. When you explicitly choose a replacement font, MediaConvert uses that font
     * to replace all unsupported fonts from your input.
     */
    inline BurninDestinationSettings& WithFallbackFont(BurninSubtitleFallbackFont&& value) { SetFallbackFont(std::move(value)); return *this;}


    /**
     * Specify the color of the burned-in captions text. Leave Font color (FontColor)
     * blank and set Style passthrough (StylePassthrough) to enabled to use the font
     * color data from your input captions, if present.
     */
    inline const BurninSubtitleFontColor& GetFontColor() const{ return m_fontColor; }

    /**
     * Specify the color of the burned-in captions text. Leave Font color (FontColor)
     * blank and set Style passthrough (StylePassthrough) to enabled to use the font
     * color data from your input captions, if present.
     */
    inline bool FontColorHasBeenSet() const { return m_fontColorHasBeenSet; }

    /**
     * Specify the color of the burned-in captions text. Leave Font color (FontColor)
     * blank and set Style passthrough (StylePassthrough) to enabled to use the font
     * color data from your input captions, if present.
     */
    inline void SetFontColor(const BurninSubtitleFontColor& value) { m_fontColorHasBeenSet = true; m_fontColor = value; }

    /**
     * Specify the color of the burned-in captions text. Leave Font color (FontColor)
     * blank and set Style passthrough (StylePassthrough) to enabled to use the font
     * color data from your input captions, if present.
     */
    inline void SetFontColor(BurninSubtitleFontColor&& value) { m_fontColorHasBeenSet = true; m_fontColor = std::move(value); }

    /**
     * Specify the color of the burned-in captions text. Leave Font color (FontColor)
     * blank and set Style passthrough (StylePassthrough) to enabled to use the font
     * color data from your input captions, if present.
     */
    inline BurninDestinationSettings& WithFontColor(const BurninSubtitleFontColor& value) { SetFontColor(value); return *this;}

    /**
     * Specify the color of the burned-in captions text. Leave Font color (FontColor)
     * blank and set Style passthrough (StylePassthrough) to enabled to use the font
     * color data from your input captions, if present.
     */
    inline BurninDestinationSettings& WithFontColor(BurninSubtitleFontColor&& value) { SetFontColor(std::move(value)); return *this;}


    /**
     * Specify the opacity of the burned-in captions. 255 is opaque; 0 is transparent.
     */
    inline int GetFontOpacity() const{ return m_fontOpacity; }

    /**
     * Specify the opacity of the burned-in captions. 255 is opaque; 0 is transparent.
     */
    inline bool FontOpacityHasBeenSet() const { return m_fontOpacityHasBeenSet; }

    /**
     * Specify the opacity of the burned-in captions. 255 is opaque; 0 is transparent.
     */
    inline void SetFontOpacity(int value) { m_fontOpacityHasBeenSet = true; m_fontOpacity = value; }

    /**
     * Specify the opacity of the burned-in captions. 255 is opaque; 0 is transparent.
     */
    inline BurninDestinationSettings& WithFontOpacity(int value) { SetFontOpacity(value); return *this;}


    /**
     * Specify the Font resolution (FontResolution) in DPI (dots per inch).
     */
    inline int GetFontResolution() const{ return m_fontResolution; }

    /**
     * Specify the Font resolution (FontResolution) in DPI (dots per inch).
     */
    inline bool FontResolutionHasBeenSet() const { return m_fontResolutionHasBeenSet; }

    /**
     * Specify the Font resolution (FontResolution) in DPI (dots per inch).
     */
    inline void SetFontResolution(int value) { m_fontResolutionHasBeenSet = true; m_fontResolution = value; }

    /**
     * Specify the Font resolution (FontResolution) in DPI (dots per inch).
     */
    inline BurninDestinationSettings& WithFontResolution(int value) { SetFontResolution(value); return *this;}


    /**
     * Set Font script (FontScript) to Automatically determined (AUTOMATIC), or leave
     * blank, to automatically determine the font script in your input captions.
     * Otherwise, set to Simplified Chinese (HANS) or Traditional Chinese (HANT) if
     * your input font script uses Simplified or Traditional Chinese.
     */
    inline const FontScript& GetFontScript() const{ return m_fontScript; }

    /**
     * Set Font script (FontScript) to Automatically determined (AUTOMATIC), or leave
     * blank, to automatically determine the font script in your input captions.
     * Otherwise, set to Simplified Chinese (HANS) or Traditional Chinese (HANT) if
     * your input font script uses Simplified or Traditional Chinese.
     */
    inline bool FontScriptHasBeenSet() const { return m_fontScriptHasBeenSet; }

    /**
     * Set Font script (FontScript) to Automatically determined (AUTOMATIC), or leave
     * blank, to automatically determine the font script in your input captions.
     * Otherwise, set to Simplified Chinese (HANS) or Traditional Chinese (HANT) if
     * your input font script uses Simplified or Traditional Chinese.
     */
    inline void SetFontScript(const FontScript& value) { m_fontScriptHasBeenSet = true; m_fontScript = value; }

    /**
     * Set Font script (FontScript) to Automatically determined (AUTOMATIC), or leave
     * blank, to automatically determine the font script in your input captions.
     * Otherwise, set to Simplified Chinese (HANS) or Traditional Chinese (HANT) if
     * your input font script uses Simplified or Traditional Chinese.
     */
    inline void SetFontScript(FontScript&& value) { m_fontScriptHasBeenSet = true; m_fontScript = std::move(value); }

    /**
     * Set Font script (FontScript) to Automatically determined (AUTOMATIC), or leave
     * blank, to automatically determine the font script in your input captions.
     * Otherwise, set to Simplified Chinese (HANS) or Traditional Chinese (HANT) if
     * your input font script uses Simplified or Traditional Chinese.
     */
    inline BurninDestinationSettings& WithFontScript(const FontScript& value) { SetFontScript(value); return *this;}

    /**
     * Set Font script (FontScript) to Automatically determined (AUTOMATIC), or leave
     * blank, to automatically determine the font script in your input captions.
     * Otherwise, set to Simplified Chinese (HANS) or Traditional Chinese (HANT) if
     * your input font script uses Simplified or Traditional Chinese.
     */
    inline BurninDestinationSettings& WithFontScript(FontScript&& value) { SetFontScript(std::move(value)); return *this;}


    /**
     * Specify the Font size (FontSize) in pixels. Must be a positive integer. Set to
     * 0, or leave blank, for automatic font size.
     */
    inline int GetFontSize() const{ return m_fontSize; }

    /**
     * Specify the Font size (FontSize) in pixels. Must be a positive integer. Set to
     * 0, or leave blank, for automatic font size.
     */
    inline bool FontSizeHasBeenSet() const { return m_fontSizeHasBeenSet; }

    /**
     * Specify the Font size (FontSize) in pixels. Must be a positive integer. Set to
     * 0, or leave blank, for automatic font size.
     */
    inline void SetFontSize(int value) { m_fontSizeHasBeenSet = true; m_fontSize = value; }

    /**
     * Specify the Font size (FontSize) in pixels. Must be a positive integer. Set to
     * 0, or leave blank, for automatic font size.
     */
    inline BurninDestinationSettings& WithFontSize(int value) { SetFontSize(value); return *this;}


    /**
     * Ignore this setting unless your Font color is set to Hex. Enter either six or
     * eight hexidecimal digits, representing red, green, and blue, with two optional
     * extra digits for alpha. For example a value of 1122AABB is a red value of 0x11,
     * a green value of 0x22, a blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline const Aws::String& GetHexFontColor() const{ return m_hexFontColor; }

    /**
     * Ignore this setting unless your Font color is set to Hex. Enter either six or
     * eight hexidecimal digits, representing red, green, and blue, with two optional
     * extra digits for alpha. For example a value of 1122AABB is a red value of 0x11,
     * a green value of 0x22, a blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline bool HexFontColorHasBeenSet() const { return m_hexFontColorHasBeenSet; }

    /**
     * Ignore this setting unless your Font color is set to Hex. Enter either six or
     * eight hexidecimal digits, representing red, green, and blue, with two optional
     * extra digits for alpha. For example a value of 1122AABB is a red value of 0x11,
     * a green value of 0x22, a blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline void SetHexFontColor(const Aws::String& value) { m_hexFontColorHasBeenSet = true; m_hexFontColor = value; }

    /**
     * Ignore this setting unless your Font color is set to Hex. Enter either six or
     * eight hexidecimal digits, representing red, green, and blue, with two optional
     * extra digits for alpha. For example a value of 1122AABB is a red value of 0x11,
     * a green value of 0x22, a blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline void SetHexFontColor(Aws::String&& value) { m_hexFontColorHasBeenSet = true; m_hexFontColor = std::move(value); }

    /**
     * Ignore this setting unless your Font color is set to Hex. Enter either six or
     * eight hexidecimal digits, representing red, green, and blue, with two optional
     * extra digits for alpha. For example a value of 1122AABB is a red value of 0x11,
     * a green value of 0x22, a blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline void SetHexFontColor(const char* value) { m_hexFontColorHasBeenSet = true; m_hexFontColor.assign(value); }

    /**
     * Ignore this setting unless your Font color is set to Hex. Enter either six or
     * eight hexidecimal digits, representing red, green, and blue, with two optional
     * extra digits for alpha. For example a value of 1122AABB is a red value of 0x11,
     * a green value of 0x22, a blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline BurninDestinationSettings& WithHexFontColor(const Aws::String& value) { SetHexFontColor(value); return *this;}

    /**
     * Ignore this setting unless your Font color is set to Hex. Enter either six or
     * eight hexidecimal digits, representing red, green, and blue, with two optional
     * extra digits for alpha. For example a value of 1122AABB is a red value of 0x11,
     * a green value of 0x22, a blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline BurninDestinationSettings& WithHexFontColor(Aws::String&& value) { SetHexFontColor(std::move(value)); return *this;}

    /**
     * Ignore this setting unless your Font color is set to Hex. Enter either six or
     * eight hexidecimal digits, representing red, green, and blue, with two optional
     * extra digits for alpha. For example a value of 1122AABB is a red value of 0x11,
     * a green value of 0x22, a blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline BurninDestinationSettings& WithHexFontColor(const char* value) { SetHexFontColor(value); return *this;}


    /**
     * Specify font outline color. Leave Outline color (OutlineColor) blank and set
     * Style passthrough (StylePassthrough) to enabled to use the font outline color
     * data from your input captions, if present.
     */
    inline const BurninSubtitleOutlineColor& GetOutlineColor() const{ return m_outlineColor; }

    /**
     * Specify font outline color. Leave Outline color (OutlineColor) blank and set
     * Style passthrough (StylePassthrough) to enabled to use the font outline color
     * data from your input captions, if present.
     */
    inline bool OutlineColorHasBeenSet() const { return m_outlineColorHasBeenSet; }

    /**
     * Specify font outline color. Leave Outline color (OutlineColor) blank and set
     * Style passthrough (StylePassthrough) to enabled to use the font outline color
     * data from your input captions, if present.
     */
    inline void SetOutlineColor(const BurninSubtitleOutlineColor& value) { m_outlineColorHasBeenSet = true; m_outlineColor = value; }

    /**
     * Specify font outline color. Leave Outline color (OutlineColor) blank and set
     * Style passthrough (StylePassthrough) to enabled to use the font outline color
     * data from your input captions, if present.
     */
    inline void SetOutlineColor(BurninSubtitleOutlineColor&& value) { m_outlineColorHasBeenSet = true; m_outlineColor = std::move(value); }

    /**
     * Specify font outline color. Leave Outline color (OutlineColor) blank and set
     * Style passthrough (StylePassthrough) to enabled to use the font outline color
     * data from your input captions, if present.
     */
    inline BurninDestinationSettings& WithOutlineColor(const BurninSubtitleOutlineColor& value) { SetOutlineColor(value); return *this;}

    /**
     * Specify font outline color. Leave Outline color (OutlineColor) blank and set
     * Style passthrough (StylePassthrough) to enabled to use the font outline color
     * data from your input captions, if present.
     */
    inline BurninDestinationSettings& WithOutlineColor(BurninSubtitleOutlineColor&& value) { SetOutlineColor(std::move(value)); return *this;}


    /**
     * Specify the Outline size (OutlineSize) of the caption text, in pixels. Leave
     * Outline size blank and set Style passthrough (StylePassthrough) to enabled to
     * use the outline size data from your input captions, if present.
     */
    inline int GetOutlineSize() const{ return m_outlineSize; }

    /**
     * Specify the Outline size (OutlineSize) of the caption text, in pixels. Leave
     * Outline size blank and set Style passthrough (StylePassthrough) to enabled to
     * use the outline size data from your input captions, if present.
     */
    inline bool OutlineSizeHasBeenSet() const { return m_outlineSizeHasBeenSet; }

    /**
     * Specify the Outline size (OutlineSize) of the caption text, in pixels. Leave
     * Outline size blank and set Style passthrough (StylePassthrough) to enabled to
     * use the outline size data from your input captions, if present.
     */
    inline void SetOutlineSize(int value) { m_outlineSizeHasBeenSet = true; m_outlineSize = value; }

    /**
     * Specify the Outline size (OutlineSize) of the caption text, in pixels. Leave
     * Outline size blank and set Style passthrough (StylePassthrough) to enabled to
     * use the outline size data from your input captions, if present.
     */
    inline BurninDestinationSettings& WithOutlineSize(int value) { SetOutlineSize(value); return *this;}


    /**
     * Specify the color of the shadow cast by the captions. Leave Shadow color
     * (ShadowColor) blank and set Style passthrough (StylePassthrough) to enabled to
     * use the shadow color data from your input captions, if present.
     */
    inline const BurninSubtitleShadowColor& GetShadowColor() const{ return m_shadowColor; }

    /**
     * Specify the color of the shadow cast by the captions. Leave Shadow color
     * (ShadowColor) blank and set Style passthrough (StylePassthrough) to enabled to
     * use the shadow color data from your input captions, if present.
     */
    inline bool ShadowColorHasBeenSet() const { return m_shadowColorHasBeenSet; }

    /**
     * Specify the color of the shadow cast by the captions. Leave Shadow color
     * (ShadowColor) blank and set Style passthrough (StylePassthrough) to enabled to
     * use the shadow color data from your input captions, if present.
     */
    inline void SetShadowColor(const BurninSubtitleShadowColor& value) { m_shadowColorHasBeenSet = true; m_shadowColor = value; }

    /**
     * Specify the color of the shadow cast by the captions. Leave Shadow color
     * (ShadowColor) blank and set Style passthrough (StylePassthrough) to enabled to
     * use the shadow color data from your input captions, if present.
     */
    inline void SetShadowColor(BurninSubtitleShadowColor&& value) { m_shadowColorHasBeenSet = true; m_shadowColor = std::move(value); }

    /**
     * Specify the color of the shadow cast by the captions. Leave Shadow color
     * (ShadowColor) blank and set Style passthrough (StylePassthrough) to enabled to
     * use the shadow color data from your input captions, if present.
     */
    inline BurninDestinationSettings& WithShadowColor(const BurninSubtitleShadowColor& value) { SetShadowColor(value); return *this;}

    /**
     * Specify the color of the shadow cast by the captions. Leave Shadow color
     * (ShadowColor) blank and set Style passthrough (StylePassthrough) to enabled to
     * use the shadow color data from your input captions, if present.
     */
    inline BurninDestinationSettings& WithShadowColor(BurninSubtitleShadowColor&& value) { SetShadowColor(std::move(value)); return *this;}


    /**
     * Specify the opacity of the shadow. Enter a value from 0 to 255, where 0 is
     * transparent and 255 is opaque. If Style passthrough (StylePassthrough) is set to
     * Enabled, leave Shadow opacity (ShadowOpacity) blank to pass through the shadow
     * style information in your input captions to your output captions. If Style
     * passthrough is set to disabled, leave blank to use a value of 0 and remove all
     * shadows from your output captions.
     */
    inline int GetShadowOpacity() const{ return m_shadowOpacity; }

    /**
     * Specify the opacity of the shadow. Enter a value from 0 to 255, where 0 is
     * transparent and 255 is opaque. If Style passthrough (StylePassthrough) is set to
     * Enabled, leave Shadow opacity (ShadowOpacity) blank to pass through the shadow
     * style information in your input captions to your output captions. If Style
     * passthrough is set to disabled, leave blank to use a value of 0 and remove all
     * shadows from your output captions.
     */
    inline bool ShadowOpacityHasBeenSet() const { return m_shadowOpacityHasBeenSet; }

    /**
     * Specify the opacity of the shadow. Enter a value from 0 to 255, where 0 is
     * transparent and 255 is opaque. If Style passthrough (StylePassthrough) is set to
     * Enabled, leave Shadow opacity (ShadowOpacity) blank to pass through the shadow
     * style information in your input captions to your output captions. If Style
     * passthrough is set to disabled, leave blank to use a value of 0 and remove all
     * shadows from your output captions.
     */
    inline void SetShadowOpacity(int value) { m_shadowOpacityHasBeenSet = true; m_shadowOpacity = value; }

    /**
     * Specify the opacity of the shadow. Enter a value from 0 to 255, where 0 is
     * transparent and 255 is opaque. If Style passthrough (StylePassthrough) is set to
     * Enabled, leave Shadow opacity (ShadowOpacity) blank to pass through the shadow
     * style information in your input captions to your output captions. If Style
     * passthrough is set to disabled, leave blank to use a value of 0 and remove all
     * shadows from your output captions.
     */
    inline BurninDestinationSettings& WithShadowOpacity(int value) { SetShadowOpacity(value); return *this;}


    /**
     * Specify the horizontal offset of the shadow, relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels to the left.
     */
    inline int GetShadowXOffset() const{ return m_shadowXOffset; }

    /**
     * Specify the horizontal offset of the shadow, relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels to the left.
     */
    inline bool ShadowXOffsetHasBeenSet() const { return m_shadowXOffsetHasBeenSet; }

    /**
     * Specify the horizontal offset of the shadow, relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels to the left.
     */
    inline void SetShadowXOffset(int value) { m_shadowXOffsetHasBeenSet = true; m_shadowXOffset = value; }

    /**
     * Specify the horizontal offset of the shadow, relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels to the left.
     */
    inline BurninDestinationSettings& WithShadowXOffset(int value) { SetShadowXOffset(value); return *this;}


    /**
     * Specify the vertical offset of the shadow relative to the captions in pixels. A
     * value of -2 would result in a shadow offset 2 pixels above the text. Leave
     * Shadow y-offset (ShadowYOffset) blank and set Style passthrough
     * (StylePassthrough) to enabled to use the shadow y-offset data from your input
     * captions, if present.
     */
    inline int GetShadowYOffset() const{ return m_shadowYOffset; }

    /**
     * Specify the vertical offset of the shadow relative to the captions in pixels. A
     * value of -2 would result in a shadow offset 2 pixels above the text. Leave
     * Shadow y-offset (ShadowYOffset) blank and set Style passthrough
     * (StylePassthrough) to enabled to use the shadow y-offset data from your input
     * captions, if present.
     */
    inline bool ShadowYOffsetHasBeenSet() const { return m_shadowYOffsetHasBeenSet; }

    /**
     * Specify the vertical offset of the shadow relative to the captions in pixels. A
     * value of -2 would result in a shadow offset 2 pixels above the text. Leave
     * Shadow y-offset (ShadowYOffset) blank and set Style passthrough
     * (StylePassthrough) to enabled to use the shadow y-offset data from your input
     * captions, if present.
     */
    inline void SetShadowYOffset(int value) { m_shadowYOffsetHasBeenSet = true; m_shadowYOffset = value; }

    /**
     * Specify the vertical offset of the shadow relative to the captions in pixels. A
     * value of -2 would result in a shadow offset 2 pixels above the text. Leave
     * Shadow y-offset (ShadowYOffset) blank and set Style passthrough
     * (StylePassthrough) to enabled to use the shadow y-offset data from your input
     * captions, if present.
     */
    inline BurninDestinationSettings& WithShadowYOffset(int value) { SetShadowYOffset(value); return *this;}


    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use default settings:
     * white text with black outlining, bottom-center positioning, and automatic
     * sizing. Whether you set Style passthrough to enabled or not, you can also choose
     * to manually override any of the individual style and position settings.
     */
    inline const BurnInSubtitleStylePassthrough& GetStylePassthrough() const{ return m_stylePassthrough; }

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use default settings:
     * white text with black outlining, bottom-center positioning, and automatic
     * sizing. Whether you set Style passthrough to enabled or not, you can also choose
     * to manually override any of the individual style and position settings.
     */
    inline bool StylePassthroughHasBeenSet() const { return m_stylePassthroughHasBeenSet; }

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use default settings:
     * white text with black outlining, bottom-center positioning, and automatic
     * sizing. Whether you set Style passthrough to enabled or not, you can also choose
     * to manually override any of the individual style and position settings.
     */
    inline void SetStylePassthrough(const BurnInSubtitleStylePassthrough& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = value; }

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use default settings:
     * white text with black outlining, bottom-center positioning, and automatic
     * sizing. Whether you set Style passthrough to enabled or not, you can also choose
     * to manually override any of the individual style and position settings.
     */
    inline void SetStylePassthrough(BurnInSubtitleStylePassthrough&& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = std::move(value); }

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use default settings:
     * white text with black outlining, bottom-center positioning, and automatic
     * sizing. Whether you set Style passthrough to enabled or not, you can also choose
     * to manually override any of the individual style and position settings.
     */
    inline BurninDestinationSettings& WithStylePassthrough(const BurnInSubtitleStylePassthrough& value) { SetStylePassthrough(value); return *this;}

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use default settings:
     * white text with black outlining, bottom-center positioning, and automatic
     * sizing. Whether you set Style passthrough to enabled or not, you can also choose
     * to manually override any of the individual style and position settings.
     */
    inline BurninDestinationSettings& WithStylePassthrough(BurnInSubtitleStylePassthrough&& value) { SetStylePassthrough(std::move(value)); return *this;}


    /**
     * Specify whether the text spacing (TeletextSpacing) in your captions is set by
     * the captions grid, or varies depending on letter width. Choose fixed grid
     * (FIXED_GRID) to conform to the spacing specified in the captions file more
     * accurately. Choose proportional (PROPORTIONAL) to make the text easier to read
     * for closed captions.
     */
    inline const BurninSubtitleTeletextSpacing& GetTeletextSpacing() const{ return m_teletextSpacing; }

    /**
     * Specify whether the text spacing (TeletextSpacing) in your captions is set by
     * the captions grid, or varies depending on letter width. Choose fixed grid
     * (FIXED_GRID) to conform to the spacing specified in the captions file more
     * accurately. Choose proportional (PROPORTIONAL) to make the text easier to read
     * for closed captions.
     */
    inline bool TeletextSpacingHasBeenSet() const { return m_teletextSpacingHasBeenSet; }

    /**
     * Specify whether the text spacing (TeletextSpacing) in your captions is set by
     * the captions grid, or varies depending on letter width. Choose fixed grid
     * (FIXED_GRID) to conform to the spacing specified in the captions file more
     * accurately. Choose proportional (PROPORTIONAL) to make the text easier to read
     * for closed captions.
     */
    inline void SetTeletextSpacing(const BurninSubtitleTeletextSpacing& value) { m_teletextSpacingHasBeenSet = true; m_teletextSpacing = value; }

    /**
     * Specify whether the text spacing (TeletextSpacing) in your captions is set by
     * the captions grid, or varies depending on letter width. Choose fixed grid
     * (FIXED_GRID) to conform to the spacing specified in the captions file more
     * accurately. Choose proportional (PROPORTIONAL) to make the text easier to read
     * for closed captions.
     */
    inline void SetTeletextSpacing(BurninSubtitleTeletextSpacing&& value) { m_teletextSpacingHasBeenSet = true; m_teletextSpacing = std::move(value); }

    /**
     * Specify whether the text spacing (TeletextSpacing) in your captions is set by
     * the captions grid, or varies depending on letter width. Choose fixed grid
     * (FIXED_GRID) to conform to the spacing specified in the captions file more
     * accurately. Choose proportional (PROPORTIONAL) to make the text easier to read
     * for closed captions.
     */
    inline BurninDestinationSettings& WithTeletextSpacing(const BurninSubtitleTeletextSpacing& value) { SetTeletextSpacing(value); return *this;}

    /**
     * Specify whether the text spacing (TeletextSpacing) in your captions is set by
     * the captions grid, or varies depending on letter width. Choose fixed grid
     * (FIXED_GRID) to conform to the spacing specified in the captions file more
     * accurately. Choose proportional (PROPORTIONAL) to make the text easier to read
     * for closed captions.
     */
    inline BurninDestinationSettings& WithTeletextSpacing(BurninSubtitleTeletextSpacing&& value) { SetTeletextSpacing(std::move(value)); return *this;}


    /**
     * Specify the horizontal position (XPosition) of the captions, relative to the
     * left side of the output in pixels. A value of 10 would result in the captions
     * starting 10 pixels from the left of the output. If no explicit x_position is
     * provided, the horizontal caption position will be determined by the alignment
     * parameter.
     */
    inline int GetXPosition() const{ return m_xPosition; }

    /**
     * Specify the horizontal position (XPosition) of the captions, relative to the
     * left side of the output in pixels. A value of 10 would result in the captions
     * starting 10 pixels from the left of the output. If no explicit x_position is
     * provided, the horizontal caption position will be determined by the alignment
     * parameter.
     */
    inline bool XPositionHasBeenSet() const { return m_xPositionHasBeenSet; }

    /**
     * Specify the horizontal position (XPosition) of the captions, relative to the
     * left side of the output in pixels. A value of 10 would result in the captions
     * starting 10 pixels from the left of the output. If no explicit x_position is
     * provided, the horizontal caption position will be determined by the alignment
     * parameter.
     */
    inline void SetXPosition(int value) { m_xPositionHasBeenSet = true; m_xPosition = value; }

    /**
     * Specify the horizontal position (XPosition) of the captions, relative to the
     * left side of the output in pixels. A value of 10 would result in the captions
     * starting 10 pixels from the left of the output. If no explicit x_position is
     * provided, the horizontal caption position will be determined by the alignment
     * parameter.
     */
    inline BurninDestinationSettings& WithXPosition(int value) { SetXPosition(value); return *this;}


    /**
     * Specify the vertical position (YPosition) of the captions, relative to the top
     * of the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the top of the output. If no explicit y_position is provided, the
     * caption will be positioned towards the bottom of the output.
     */
    inline int GetYPosition() const{ return m_yPosition; }

    /**
     * Specify the vertical position (YPosition) of the captions, relative to the top
     * of the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the top of the output. If no explicit y_position is provided, the
     * caption will be positioned towards the bottom of the output.
     */
    inline bool YPositionHasBeenSet() const { return m_yPositionHasBeenSet; }

    /**
     * Specify the vertical position (YPosition) of the captions, relative to the top
     * of the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the top of the output. If no explicit y_position is provided, the
     * caption will be positioned towards the bottom of the output.
     */
    inline void SetYPosition(int value) { m_yPositionHasBeenSet = true; m_yPosition = value; }

    /**
     * Specify the vertical position (YPosition) of the captions, relative to the top
     * of the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the top of the output. If no explicit y_position is provided, the
     * caption will be positioned towards the bottom of the output.
     */
    inline BurninDestinationSettings& WithYPosition(int value) { SetYPosition(value); return *this;}

  private:

    BurninSubtitleAlignment m_alignment;
    bool m_alignmentHasBeenSet = false;

    BurninSubtitleApplyFontColor m_applyFontColor;
    bool m_applyFontColorHasBeenSet = false;

    BurninSubtitleBackgroundColor m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;

    int m_backgroundOpacity;
    bool m_backgroundOpacityHasBeenSet = false;

    BurninSubtitleFallbackFont m_fallbackFont;
    bool m_fallbackFontHasBeenSet = false;

    BurninSubtitleFontColor m_fontColor;
    bool m_fontColorHasBeenSet = false;

    int m_fontOpacity;
    bool m_fontOpacityHasBeenSet = false;

    int m_fontResolution;
    bool m_fontResolutionHasBeenSet = false;

    FontScript m_fontScript;
    bool m_fontScriptHasBeenSet = false;

    int m_fontSize;
    bool m_fontSizeHasBeenSet = false;

    Aws::String m_hexFontColor;
    bool m_hexFontColorHasBeenSet = false;

    BurninSubtitleOutlineColor m_outlineColor;
    bool m_outlineColorHasBeenSet = false;

    int m_outlineSize;
    bool m_outlineSizeHasBeenSet = false;

    BurninSubtitleShadowColor m_shadowColor;
    bool m_shadowColorHasBeenSet = false;

    int m_shadowOpacity;
    bool m_shadowOpacityHasBeenSet = false;

    int m_shadowXOffset;
    bool m_shadowXOffsetHasBeenSet = false;

    int m_shadowYOffset;
    bool m_shadowYOffsetHasBeenSet = false;

    BurnInSubtitleStylePassthrough m_stylePassthrough;
    bool m_stylePassthroughHasBeenSet = false;

    BurninSubtitleTeletextSpacing m_teletextSpacing;
    bool m_teletextSpacingHasBeenSet = false;

    int m_xPosition;
    bool m_xPositionHasBeenSet = false;

    int m_yPosition;
    bool m_yPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
