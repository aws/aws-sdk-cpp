﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/DvbSubtitleAlignment.h>
#include <aws/mediaconvert/model/DvbSubtitleApplyFontColor.h>
#include <aws/mediaconvert/model/DvbSubtitleBackgroundColor.h>
#include <aws/mediaconvert/model/DvbddsHandling.h>
#include <aws/mediaconvert/model/DvbSubSubtitleFallbackFont.h>
#include <aws/mediaconvert/model/DvbSubtitleFontColor.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/FontScript.h>
#include <aws/mediaconvert/model/DvbSubtitleOutlineColor.h>
#include <aws/mediaconvert/model/DvbSubtitleShadowColor.h>
#include <aws/mediaconvert/model/DvbSubtitleStylePassthrough.h>
#include <aws/mediaconvert/model/DvbSubtitlingType.h>
#include <aws/mediaconvert/model/DvbSubtitleTeletextSpacing.h>
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
   * Settings related to DVB-Sub captions. Set up DVB-Sub captions in the same output
   * as your video. For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/dvb-sub-output-captions.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DvbSubDestinationSettings">AWS
   * API Reference</a></p>
   */
  class DvbSubDestinationSettings
  {
  public:
    AWS_MEDIACONVERT_API DvbSubDestinationSettings();
    AWS_MEDIACONVERT_API DvbSubDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API DvbSubDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the alignment of your captions. If no explicit x_position is provided,
     * setting alignment to centered will placethe captions at the bottom center of the
     * output. Similarly, setting a left alignment willalign captions to the bottom
     * left of the output. If x and y positions are given in conjunction with the
     * alignment parameter, the font will be justified (either left or centered)
     * relative to those coordinates. Within your job settings, all of your DVB-Sub
     * settings must be identical.
     */
    inline const DvbSubtitleAlignment& GetAlignment() const{ return m_alignment; }
    inline bool AlignmentHasBeenSet() const { return m_alignmentHasBeenSet; }
    inline void SetAlignment(const DvbSubtitleAlignment& value) { m_alignmentHasBeenSet = true; m_alignment = value; }
    inline void SetAlignment(DvbSubtitleAlignment&& value) { m_alignmentHasBeenSet = true; m_alignment = std::move(value); }
    inline DvbSubDestinationSettings& WithAlignment(const DvbSubtitleAlignment& value) { SetAlignment(value); return *this;}
    inline DvbSubDestinationSettings& WithAlignment(DvbSubtitleAlignment&& value) { SetAlignment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Ignore this setting unless Style Passthrough is set to Enabled and Font color
     * set to Black, Yellow, Red, Green, Blue, or Hex. Use Apply font color for
     * additional font color controls. When you choose White text only, or leave blank,
     * your font color setting only applies to white text in your input captions. For
     * example, if your font color setting is Yellow, and your input captions have red
     * and white text, your output captions will have red and yellow text. When you
     * choose ALL_TEXT, your font color setting applies to all of your output captions
     * text.
     */
    inline const DvbSubtitleApplyFontColor& GetApplyFontColor() const{ return m_applyFontColor; }
    inline bool ApplyFontColorHasBeenSet() const { return m_applyFontColorHasBeenSet; }
    inline void SetApplyFontColor(const DvbSubtitleApplyFontColor& value) { m_applyFontColorHasBeenSet = true; m_applyFontColor = value; }
    inline void SetApplyFontColor(DvbSubtitleApplyFontColor&& value) { m_applyFontColorHasBeenSet = true; m_applyFontColor = std::move(value); }
    inline DvbSubDestinationSettings& WithApplyFontColor(const DvbSubtitleApplyFontColor& value) { SetApplyFontColor(value); return *this;}
    inline DvbSubDestinationSettings& WithApplyFontColor(DvbSubtitleApplyFontColor&& value) { SetApplyFontColor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the color of the rectangle behind the captions. Leave background color
     * blank and set Style passthrough to enabled to use the background color data from
     * your input captions, if present.
     */
    inline const DvbSubtitleBackgroundColor& GetBackgroundColor() const{ return m_backgroundColor; }
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }
    inline void SetBackgroundColor(const DvbSubtitleBackgroundColor& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }
    inline void SetBackgroundColor(DvbSubtitleBackgroundColor&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::move(value); }
    inline DvbSubDestinationSettings& WithBackgroundColor(const DvbSubtitleBackgroundColor& value) { SetBackgroundColor(value); return *this;}
    inline DvbSubDestinationSettings& WithBackgroundColor(DvbSubtitleBackgroundColor&& value) { SetBackgroundColor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the opacity of the background rectangle. Enter a value from 0 to 255,
     * where 0 is transparent and 255 is opaque. If Style passthrough is set to
     * enabled, leave blank to pass through the background style information in your
     * input captions to your output captions. If Style passthrough is set to disabled,
     * leave blank to use a value of 0 and remove all backgrounds from your output
     * captions. Within your job settings, all of your DVB-Sub settings must be
     * identical.
     */
    inline int GetBackgroundOpacity() const{ return m_backgroundOpacity; }
    inline bool BackgroundOpacityHasBeenSet() const { return m_backgroundOpacityHasBeenSet; }
    inline void SetBackgroundOpacity(int value) { m_backgroundOpacityHasBeenSet = true; m_backgroundOpacity = value; }
    inline DvbSubDestinationSettings& WithBackgroundOpacity(int value) { SetBackgroundOpacity(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify how MediaConvert handles the display definition segment (DDS). To
     * exclude the DDS from this set of captions: Keep the default, None. To include
     * the DDS: Choose Specified. When you do, also specify the offset coordinates of
     * the display window with DDS x-coordinate and DDS y-coordinate. To include the
     * DDS, but not include display window data: Choose No display window. When you do,
     * you can write position metadata to the page composition segment (PCS) with DDS
     * x-coordinate and DDS y-coordinate. For video resolutions with a height of 576
     * pixels or less, MediaConvert doesn't include the DDS, regardless of the value
     * you choose for DDS handling. All burn-in and DVB-Sub font settings must match.
     */
    inline const DvbddsHandling& GetDdsHandling() const{ return m_ddsHandling; }
    inline bool DdsHandlingHasBeenSet() const { return m_ddsHandlingHasBeenSet; }
    inline void SetDdsHandling(const DvbddsHandling& value) { m_ddsHandlingHasBeenSet = true; m_ddsHandling = value; }
    inline void SetDdsHandling(DvbddsHandling&& value) { m_ddsHandlingHasBeenSet = true; m_ddsHandling = std::move(value); }
    inline DvbSubDestinationSettings& WithDdsHandling(const DvbddsHandling& value) { SetDdsHandling(value); return *this;}
    inline DvbSubDestinationSettings& WithDdsHandling(DvbddsHandling&& value) { SetDdsHandling(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use this setting, along with DDS y-coordinate, to specify the upper left corner
     * of the display definition segment (DDS) display window. With this setting,
     * specify the distance, in pixels, between the left side of the frame and the left
     * side of the DDS display window. Keep the default value, 0, to have MediaConvert
     * automatically choose this offset. Related setting: When you use this setting,
     * you must set DDS handling to a value other than None. MediaConvert uses these
     * values to determine whether to write page position data to the DDS or to the
     * page composition segment. All burn-in and DVB-Sub font settings must match.
     */
    inline int GetDdsXCoordinate() const{ return m_ddsXCoordinate; }
    inline bool DdsXCoordinateHasBeenSet() const { return m_ddsXCoordinateHasBeenSet; }
    inline void SetDdsXCoordinate(int value) { m_ddsXCoordinateHasBeenSet = true; m_ddsXCoordinate = value; }
    inline DvbSubDestinationSettings& WithDdsXCoordinate(int value) { SetDdsXCoordinate(value); return *this;}
    ///@}

    ///@{
    /**
     * Use this setting, along with DDS x-coordinate, to specify the upper left corner
     * of the display definition segment (DDS) display window. With this setting,
     * specify the distance, in pixels, between the top of the frame and the top of the
     * DDS display window. Keep the default value, 0, to have MediaConvert
     * automatically choose this offset. Related setting: When you use this setting,
     * you must set DDS handling to a value other than None. MediaConvert uses these
     * values to determine whether to write page position data to the DDS or to the
     * page composition segment (PCS). All burn-in and DVB-Sub font settings must
     * match.
     */
    inline int GetDdsYCoordinate() const{ return m_ddsYCoordinate; }
    inline bool DdsYCoordinateHasBeenSet() const { return m_ddsYCoordinateHasBeenSet; }
    inline void SetDdsYCoordinate(int value) { m_ddsYCoordinateHasBeenSet = true; m_ddsYCoordinate = value; }
    inline DvbSubDestinationSettings& WithDdsYCoordinate(int value) { SetDdsYCoordinate(value); return *this;}
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
    inline const DvbSubSubtitleFallbackFont& GetFallbackFont() const{ return m_fallbackFont; }
    inline bool FallbackFontHasBeenSet() const { return m_fallbackFontHasBeenSet; }
    inline void SetFallbackFont(const DvbSubSubtitleFallbackFont& value) { m_fallbackFontHasBeenSet = true; m_fallbackFont = value; }
    inline void SetFallbackFont(DvbSubSubtitleFallbackFont&& value) { m_fallbackFontHasBeenSet = true; m_fallbackFont = std::move(value); }
    inline DvbSubDestinationSettings& WithFallbackFont(const DvbSubSubtitleFallbackFont& value) { SetFallbackFont(value); return *this;}
    inline DvbSubDestinationSettings& WithFallbackFont(DvbSubSubtitleFallbackFont&& value) { SetFallbackFont(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the color of the captions text. Leave Font color blank and set Style
     * passthrough to enabled to use the font color data from your input captions, if
     * present. Within your job settings, all of your DVB-Sub settings must be
     * identical.
     */
    inline const DvbSubtitleFontColor& GetFontColor() const{ return m_fontColor; }
    inline bool FontColorHasBeenSet() const { return m_fontColorHasBeenSet; }
    inline void SetFontColor(const DvbSubtitleFontColor& value) { m_fontColorHasBeenSet = true; m_fontColor = value; }
    inline void SetFontColor(DvbSubtitleFontColor&& value) { m_fontColorHasBeenSet = true; m_fontColor = std::move(value); }
    inline DvbSubDestinationSettings& WithFontColor(const DvbSubtitleFontColor& value) { SetFontColor(value); return *this;}
    inline DvbSubDestinationSettings& WithFontColor(DvbSubtitleFontColor&& value) { SetFontColor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify a bold TrueType font file to use when rendering your output captions.
     * Enter an S3, HTTP, or HTTPS URL. When you do, you must also separately specify a
     * regular, an italic, and a bold italic font file.
     */
    inline const Aws::String& GetFontFileBold() const{ return m_fontFileBold; }
    inline bool FontFileBoldHasBeenSet() const { return m_fontFileBoldHasBeenSet; }
    inline void SetFontFileBold(const Aws::String& value) { m_fontFileBoldHasBeenSet = true; m_fontFileBold = value; }
    inline void SetFontFileBold(Aws::String&& value) { m_fontFileBoldHasBeenSet = true; m_fontFileBold = std::move(value); }
    inline void SetFontFileBold(const char* value) { m_fontFileBoldHasBeenSet = true; m_fontFileBold.assign(value); }
    inline DvbSubDestinationSettings& WithFontFileBold(const Aws::String& value) { SetFontFileBold(value); return *this;}
    inline DvbSubDestinationSettings& WithFontFileBold(Aws::String&& value) { SetFontFileBold(std::move(value)); return *this;}
    inline DvbSubDestinationSettings& WithFontFileBold(const char* value) { SetFontFileBold(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify a bold italic TrueType font file to use when rendering your output
     * captions.
Enter an S3, HTTP, or HTTPS URL.
When you do, you must also separately
     * specify a regular, a bold, and an italic font file.
     */
    inline const Aws::String& GetFontFileBoldItalic() const{ return m_fontFileBoldItalic; }
    inline bool FontFileBoldItalicHasBeenSet() const { return m_fontFileBoldItalicHasBeenSet; }
    inline void SetFontFileBoldItalic(const Aws::String& value) { m_fontFileBoldItalicHasBeenSet = true; m_fontFileBoldItalic = value; }
    inline void SetFontFileBoldItalic(Aws::String&& value) { m_fontFileBoldItalicHasBeenSet = true; m_fontFileBoldItalic = std::move(value); }
    inline void SetFontFileBoldItalic(const char* value) { m_fontFileBoldItalicHasBeenSet = true; m_fontFileBoldItalic.assign(value); }
    inline DvbSubDestinationSettings& WithFontFileBoldItalic(const Aws::String& value) { SetFontFileBoldItalic(value); return *this;}
    inline DvbSubDestinationSettings& WithFontFileBoldItalic(Aws::String&& value) { SetFontFileBoldItalic(std::move(value)); return *this;}
    inline DvbSubDestinationSettings& WithFontFileBoldItalic(const char* value) { SetFontFileBoldItalic(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify an italic TrueType font file to use when rendering your output captions.
     * Enter an S3, HTTP, or HTTPS URL. When you do, you must also separately specify a
     * regular, a bold, and a bold italic font file.
     */
    inline const Aws::String& GetFontFileItalic() const{ return m_fontFileItalic; }
    inline bool FontFileItalicHasBeenSet() const { return m_fontFileItalicHasBeenSet; }
    inline void SetFontFileItalic(const Aws::String& value) { m_fontFileItalicHasBeenSet = true; m_fontFileItalic = value; }
    inline void SetFontFileItalic(Aws::String&& value) { m_fontFileItalicHasBeenSet = true; m_fontFileItalic = std::move(value); }
    inline void SetFontFileItalic(const char* value) { m_fontFileItalicHasBeenSet = true; m_fontFileItalic.assign(value); }
    inline DvbSubDestinationSettings& WithFontFileItalic(const Aws::String& value) { SetFontFileItalic(value); return *this;}
    inline DvbSubDestinationSettings& WithFontFileItalic(Aws::String&& value) { SetFontFileItalic(std::move(value)); return *this;}
    inline DvbSubDestinationSettings& WithFontFileItalic(const char* value) { SetFontFileItalic(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify a regular TrueType font file to use when rendering your output captions.
     * Enter an S3, HTTP, or HTTPS URL. When you do, you must also separately specify a
     * bold, an italic, and a bold italic font file.
     */
    inline const Aws::String& GetFontFileRegular() const{ return m_fontFileRegular; }
    inline bool FontFileRegularHasBeenSet() const { return m_fontFileRegularHasBeenSet; }
    inline void SetFontFileRegular(const Aws::String& value) { m_fontFileRegularHasBeenSet = true; m_fontFileRegular = value; }
    inline void SetFontFileRegular(Aws::String&& value) { m_fontFileRegularHasBeenSet = true; m_fontFileRegular = std::move(value); }
    inline void SetFontFileRegular(const char* value) { m_fontFileRegularHasBeenSet = true; m_fontFileRegular.assign(value); }
    inline DvbSubDestinationSettings& WithFontFileRegular(const Aws::String& value) { SetFontFileRegular(value); return *this;}
    inline DvbSubDestinationSettings& WithFontFileRegular(Aws::String&& value) { SetFontFileRegular(std::move(value)); return *this;}
    inline DvbSubDestinationSettings& WithFontFileRegular(const char* value) { SetFontFileRegular(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the opacity of the burned-in captions. 255 is opaque; 0 is
     * transparent.
Within your job settings, all of your DVB-Sub settings must be
     * identical.
     */
    inline int GetFontOpacity() const{ return m_fontOpacity; }
    inline bool FontOpacityHasBeenSet() const { return m_fontOpacityHasBeenSet; }
    inline void SetFontOpacity(int value) { m_fontOpacityHasBeenSet = true; m_fontOpacity = value; }
    inline DvbSubDestinationSettings& WithFontOpacity(int value) { SetFontOpacity(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the Font resolution in DPI (dots per inch).
Within your job settings,
     * all of your DVB-Sub settings must be identical.
     */
    inline int GetFontResolution() const{ return m_fontResolution; }
    inline bool FontResolutionHasBeenSet() const { return m_fontResolutionHasBeenSet; }
    inline void SetFontResolution(int value) { m_fontResolutionHasBeenSet = true; m_fontResolution = value; }
    inline DvbSubDestinationSettings& WithFontResolution(int value) { SetFontResolution(value); return *this;}
    ///@}

    ///@{
    /**
     * Set Font script to Automatically determined, or leave blank, to automatically
     * determine the font script in your input captions. Otherwise, set to Simplified
     * Chinese (HANS) or Traditional Chinese (HANT) if your input font script uses
     * Simplified or Traditional Chinese. Within your job settings, all of your DVB-Sub
     * settings must be identical.
     */
    inline const FontScript& GetFontScript() const{ return m_fontScript; }
    inline bool FontScriptHasBeenSet() const { return m_fontScriptHasBeenSet; }
    inline void SetFontScript(const FontScript& value) { m_fontScriptHasBeenSet = true; m_fontScript = value; }
    inline void SetFontScript(FontScript&& value) { m_fontScriptHasBeenSet = true; m_fontScript = std::move(value); }
    inline DvbSubDestinationSettings& WithFontScript(const FontScript& value) { SetFontScript(value); return *this;}
    inline DvbSubDestinationSettings& WithFontScript(FontScript&& value) { SetFontScript(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the Font size in pixels. Must be a positive integer. Set to 0, or leave
     * blank, for automatic font size. Within your job settings, all of your DVB-Sub
     * settings must be identical.
     */
    inline int GetFontSize() const{ return m_fontSize; }
    inline bool FontSizeHasBeenSet() const { return m_fontSizeHasBeenSet; }
    inline void SetFontSize(int value) { m_fontSizeHasBeenSet = true; m_fontSize = value; }
    inline DvbSubDestinationSettings& WithFontSize(int value) { SetFontSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the height, in pixels, of this set of DVB-Sub captions. The default
     * value is 576 pixels. Related setting: When you use this setting, you must set
     * DDS handling to a value other than None. All burn-in and DVB-Sub font settings
     * must match.
     */
    inline int GetHeight() const{ return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline DvbSubDestinationSettings& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * Ignore this setting unless your Font color is set to Hex. Enter either six or
     * eight hexidecimal digits, representing red, green, and blue, with two optional
     * extra digits for alpha. For example a value of 1122AABB is a red value of 0x11,
     * a green value of 0x22, a blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline const Aws::String& GetHexFontColor() const{ return m_hexFontColor; }
    inline bool HexFontColorHasBeenSet() const { return m_hexFontColorHasBeenSet; }
    inline void SetHexFontColor(const Aws::String& value) { m_hexFontColorHasBeenSet = true; m_hexFontColor = value; }
    inline void SetHexFontColor(Aws::String&& value) { m_hexFontColorHasBeenSet = true; m_hexFontColor = std::move(value); }
    inline void SetHexFontColor(const char* value) { m_hexFontColorHasBeenSet = true; m_hexFontColor.assign(value); }
    inline DvbSubDestinationSettings& WithHexFontColor(const Aws::String& value) { SetHexFontColor(value); return *this;}
    inline DvbSubDestinationSettings& WithHexFontColor(Aws::String&& value) { SetHexFontColor(std::move(value)); return *this;}
    inline DvbSubDestinationSettings& WithHexFontColor(const char* value) { SetHexFontColor(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify font outline color. Leave Outline color blank and set Style passthrough
     * to enabled to use the font outline color data from your input captions, if
     * present. Within your job settings, all of your DVB-Sub settings must be
     * identical.
     */
    inline const DvbSubtitleOutlineColor& GetOutlineColor() const{ return m_outlineColor; }
    inline bool OutlineColorHasBeenSet() const { return m_outlineColorHasBeenSet; }
    inline void SetOutlineColor(const DvbSubtitleOutlineColor& value) { m_outlineColorHasBeenSet = true; m_outlineColor = value; }
    inline void SetOutlineColor(DvbSubtitleOutlineColor&& value) { m_outlineColorHasBeenSet = true; m_outlineColor = std::move(value); }
    inline DvbSubDestinationSettings& WithOutlineColor(const DvbSubtitleOutlineColor& value) { SetOutlineColor(value); return *this;}
    inline DvbSubDestinationSettings& WithOutlineColor(DvbSubtitleOutlineColor&& value) { SetOutlineColor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the Outline size of the caption text, in pixels. Leave Outline size
     * blank and set Style passthrough to enabled to use the outline size data from
     * your input captions, if present. Within your job settings, all of your DVB-Sub
     * settings must be identical.
     */
    inline int GetOutlineSize() const{ return m_outlineSize; }
    inline bool OutlineSizeHasBeenSet() const { return m_outlineSizeHasBeenSet; }
    inline void SetOutlineSize(int value) { m_outlineSizeHasBeenSet = true; m_outlineSize = value; }
    inline DvbSubDestinationSettings& WithOutlineSize(int value) { SetOutlineSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the color of the shadow cast by the captions. Leave Shadow color blank
     * and set Style passthrough to enabled to use the shadow color data from your
     * input captions, if present. Within your job settings, all of your DVB-Sub
     * settings must be identical.
     */
    inline const DvbSubtitleShadowColor& GetShadowColor() const{ return m_shadowColor; }
    inline bool ShadowColorHasBeenSet() const { return m_shadowColorHasBeenSet; }
    inline void SetShadowColor(const DvbSubtitleShadowColor& value) { m_shadowColorHasBeenSet = true; m_shadowColor = value; }
    inline void SetShadowColor(DvbSubtitleShadowColor&& value) { m_shadowColorHasBeenSet = true; m_shadowColor = std::move(value); }
    inline DvbSubDestinationSettings& WithShadowColor(const DvbSubtitleShadowColor& value) { SetShadowColor(value); return *this;}
    inline DvbSubDestinationSettings& WithShadowColor(DvbSubtitleShadowColor&& value) { SetShadowColor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the opacity of the shadow. Enter a value from 0 to 255, where 0 is
     * transparent and 255 is opaque. If Style passthrough is set to Enabled, leave
     * Shadow opacity blank to pass through the shadow style information in your input
     * captions to your output captions. If Style passthrough is set to disabled, leave
     * blank to use a value of 0 and remove all shadows from your output captions.
     * Within your job settings, all of your DVB-Sub settings must be identical.
     */
    inline int GetShadowOpacity() const{ return m_shadowOpacity; }
    inline bool ShadowOpacityHasBeenSet() const { return m_shadowOpacityHasBeenSet; }
    inline void SetShadowOpacity(int value) { m_shadowOpacityHasBeenSet = true; m_shadowOpacity = value; }
    inline DvbSubDestinationSettings& WithShadowOpacity(int value) { SetShadowOpacity(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the horizontal offset of the shadow, relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels to the left. Within your
     * job settings, all of your DVB-Sub settings must be identical.
     */
    inline int GetShadowXOffset() const{ return m_shadowXOffset; }
    inline bool ShadowXOffsetHasBeenSet() const { return m_shadowXOffsetHasBeenSet; }
    inline void SetShadowXOffset(int value) { m_shadowXOffsetHasBeenSet = true; m_shadowXOffset = value; }
    inline DvbSubDestinationSettings& WithShadowXOffset(int value) { SetShadowXOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the vertical offset of the shadow relative to the captions in pixels. A
     * value of -2 would result in a shadow offset 2 pixels above the text. Leave
     * Shadow y-offset blank and set Style passthrough to enabled to use the shadow
     * y-offset data from your input captions, if present. Within your job settings,
     * all of your DVB-Sub settings must be identical.
     */
    inline int GetShadowYOffset() const{ return m_shadowYOffset; }
    inline bool ShadowYOffsetHasBeenSet() const { return m_shadowYOffsetHasBeenSet; }
    inline void SetShadowYOffset(int value) { m_shadowYOffsetHasBeenSet = true; m_shadowYOffset = value; }
    inline DvbSubDestinationSettings& WithShadowYOffset(int value) { SetShadowYOffset(value); return *this;}
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
    inline const DvbSubtitleStylePassthrough& GetStylePassthrough() const{ return m_stylePassthrough; }
    inline bool StylePassthroughHasBeenSet() const { return m_stylePassthroughHasBeenSet; }
    inline void SetStylePassthrough(const DvbSubtitleStylePassthrough& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = value; }
    inline void SetStylePassthrough(DvbSubtitleStylePassthrough&& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = std::move(value); }
    inline DvbSubDestinationSettings& WithStylePassthrough(const DvbSubtitleStylePassthrough& value) { SetStylePassthrough(value); return *this;}
    inline DvbSubDestinationSettings& WithStylePassthrough(DvbSubtitleStylePassthrough&& value) { SetStylePassthrough(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether your DVB subtitles are standard or for hearing impaired. Choose
     * hearing impaired if your subtitles include audio descriptions and dialogue.
     * Choose standard if your subtitles include only dialogue.
     */
    inline const DvbSubtitlingType& GetSubtitlingType() const{ return m_subtitlingType; }
    inline bool SubtitlingTypeHasBeenSet() const { return m_subtitlingTypeHasBeenSet; }
    inline void SetSubtitlingType(const DvbSubtitlingType& value) { m_subtitlingTypeHasBeenSet = true; m_subtitlingType = value; }
    inline void SetSubtitlingType(DvbSubtitlingType&& value) { m_subtitlingTypeHasBeenSet = true; m_subtitlingType = std::move(value); }
    inline DvbSubDestinationSettings& WithSubtitlingType(const DvbSubtitlingType& value) { SetSubtitlingType(value); return *this;}
    inline DvbSubDestinationSettings& WithSubtitlingType(DvbSubtitlingType&& value) { SetSubtitlingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether the Text spacing in your captions is set by the captions grid,
     * or varies depending on letter width. Choose fixed grid to conform to the spacing
     * specified in the captions file more accurately. Choose proportional to make the
     * text easier to read for closed captions. Within your job settings, all of your
     * DVB-Sub settings must be identical.
     */
    inline const DvbSubtitleTeletextSpacing& GetTeletextSpacing() const{ return m_teletextSpacing; }
    inline bool TeletextSpacingHasBeenSet() const { return m_teletextSpacingHasBeenSet; }
    inline void SetTeletextSpacing(const DvbSubtitleTeletextSpacing& value) { m_teletextSpacingHasBeenSet = true; m_teletextSpacing = value; }
    inline void SetTeletextSpacing(DvbSubtitleTeletextSpacing&& value) { m_teletextSpacingHasBeenSet = true; m_teletextSpacing = std::move(value); }
    inline DvbSubDestinationSettings& WithTeletextSpacing(const DvbSubtitleTeletextSpacing& value) { SetTeletextSpacing(value); return *this;}
    inline DvbSubDestinationSettings& WithTeletextSpacing(DvbSubtitleTeletextSpacing&& value) { SetTeletextSpacing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the width, in pixels, of this set of DVB-Sub captions. The default value
     * is 720 pixels. Related setting: When you use this setting, you must set DDS
     * handling to a value other than None. All burn-in and DVB-Sub font settings must
     * match.
     */
    inline int GetWidth() const{ return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline DvbSubDestinationSettings& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the horizontal position of the captions, relative to the left side of
     * the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the left of the output. If no explicit x_position is provided, the
     * horizontal caption position will be determined by the alignment parameter.
     * Within your job settings, all of your DVB-Sub settings must be identical.
     */
    inline int GetXPosition() const{ return m_xPosition; }
    inline bool XPositionHasBeenSet() const { return m_xPositionHasBeenSet; }
    inline void SetXPosition(int value) { m_xPositionHasBeenSet = true; m_xPosition = value; }
    inline DvbSubDestinationSettings& WithXPosition(int value) { SetXPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the vertical position of the captions, relative to the top of the output
     * in pixels. A value of 10 would result in the captions starting 10 pixels from
     * the top of the output. If no explicit y_position is provided, the caption will
     * be positioned towards the bottom of the output. Within your job settings, all of
     * your DVB-Sub settings must be identical.
     */
    inline int GetYPosition() const{ return m_yPosition; }
    inline bool YPositionHasBeenSet() const { return m_yPositionHasBeenSet; }
    inline void SetYPosition(int value) { m_yPositionHasBeenSet = true; m_yPosition = value; }
    inline DvbSubDestinationSettings& WithYPosition(int value) { SetYPosition(value); return *this;}
    ///@}
  private:

    DvbSubtitleAlignment m_alignment;
    bool m_alignmentHasBeenSet = false;

    DvbSubtitleApplyFontColor m_applyFontColor;
    bool m_applyFontColorHasBeenSet = false;

    DvbSubtitleBackgroundColor m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;

    int m_backgroundOpacity;
    bool m_backgroundOpacityHasBeenSet = false;

    DvbddsHandling m_ddsHandling;
    bool m_ddsHandlingHasBeenSet = false;

    int m_ddsXCoordinate;
    bool m_ddsXCoordinateHasBeenSet = false;

    int m_ddsYCoordinate;
    bool m_ddsYCoordinateHasBeenSet = false;

    DvbSubSubtitleFallbackFont m_fallbackFont;
    bool m_fallbackFontHasBeenSet = false;

    DvbSubtitleFontColor m_fontColor;
    bool m_fontColorHasBeenSet = false;

    Aws::String m_fontFileBold;
    bool m_fontFileBoldHasBeenSet = false;

    Aws::String m_fontFileBoldItalic;
    bool m_fontFileBoldItalicHasBeenSet = false;

    Aws::String m_fontFileItalic;
    bool m_fontFileItalicHasBeenSet = false;

    Aws::String m_fontFileRegular;
    bool m_fontFileRegularHasBeenSet = false;

    int m_fontOpacity;
    bool m_fontOpacityHasBeenSet = false;

    int m_fontResolution;
    bool m_fontResolutionHasBeenSet = false;

    FontScript m_fontScript;
    bool m_fontScriptHasBeenSet = false;

    int m_fontSize;
    bool m_fontSizeHasBeenSet = false;

    int m_height;
    bool m_heightHasBeenSet = false;

    Aws::String m_hexFontColor;
    bool m_hexFontColorHasBeenSet = false;

    DvbSubtitleOutlineColor m_outlineColor;
    bool m_outlineColorHasBeenSet = false;

    int m_outlineSize;
    bool m_outlineSizeHasBeenSet = false;

    DvbSubtitleShadowColor m_shadowColor;
    bool m_shadowColorHasBeenSet = false;

    int m_shadowOpacity;
    bool m_shadowOpacityHasBeenSet = false;

    int m_shadowXOffset;
    bool m_shadowXOffsetHasBeenSet = false;

    int m_shadowYOffset;
    bool m_shadowYOffsetHasBeenSet = false;

    DvbSubtitleStylePassthrough m_stylePassthrough;
    bool m_stylePassthroughHasBeenSet = false;

    DvbSubtitlingType m_subtitlingType;
    bool m_subtitlingTypeHasBeenSet = false;

    DvbSubtitleTeletextSpacing m_teletextSpacing;
    bool m_teletextSpacingHasBeenSet = false;

    int m_width;
    bool m_widthHasBeenSet = false;

    int m_xPosition;
    bool m_xPositionHasBeenSet = false;

    int m_yPosition;
    bool m_yPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
