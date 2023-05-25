/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/WebvttAccessibilitySubs.h>
#include <aws/mediaconvert/model/WebvttStylePassthrough.h>
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
   * Settings related to WebVTT captions. WebVTT is a sidecar format that holds
   * captions in a file that is separate from the video container. Set up sidecar
   * captions in the same output group, but different output from your video. For
   * more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/ttml-and-webvtt-output-captions.html.
   * When you work directly in your JSON job specification, include this object and
   * any required children when you set destinationType to WebVTT.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/WebvttDestinationSettings">AWS
   * API Reference</a></p>
   */
  class WebvttDestinationSettings
  {
  public:
    AWS_MEDIACONVERT_API WebvttDestinationSettings();
    AWS_MEDIACONVERT_API WebvttDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API WebvttDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Set Accessibility subtitles to Enabled if the ISMC or WebVTT captions track is
     * intended to provide accessibility for people who are deaf or hard of hearing.
     * When you enable this feature, MediaConvert adds the following attributes under
     * EXT-X-MEDIA in the HLS or CMAF manifest for this track:
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES". Keep the default value, Disabled, if the captions track is
     * not intended to provide such accessibility. MediaConvert will not add the above
     * attributes.
     */
    inline const WebvttAccessibilitySubs& GetAccessibility() const{ return m_accessibility; }

    /**
     * Set Accessibility subtitles to Enabled if the ISMC or WebVTT captions track is
     * intended to provide accessibility for people who are deaf or hard of hearing.
     * When you enable this feature, MediaConvert adds the following attributes under
     * EXT-X-MEDIA in the HLS or CMAF manifest for this track:
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES". Keep the default value, Disabled, if the captions track is
     * not intended to provide such accessibility. MediaConvert will not add the above
     * attributes.
     */
    inline bool AccessibilityHasBeenSet() const { return m_accessibilityHasBeenSet; }

    /**
     * Set Accessibility subtitles to Enabled if the ISMC or WebVTT captions track is
     * intended to provide accessibility for people who are deaf or hard of hearing.
     * When you enable this feature, MediaConvert adds the following attributes under
     * EXT-X-MEDIA in the HLS or CMAF manifest for this track:
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES". Keep the default value, Disabled, if the captions track is
     * not intended to provide such accessibility. MediaConvert will not add the above
     * attributes.
     */
    inline void SetAccessibility(const WebvttAccessibilitySubs& value) { m_accessibilityHasBeenSet = true; m_accessibility = value; }

    /**
     * Set Accessibility subtitles to Enabled if the ISMC or WebVTT captions track is
     * intended to provide accessibility for people who are deaf or hard of hearing.
     * When you enable this feature, MediaConvert adds the following attributes under
     * EXT-X-MEDIA in the HLS or CMAF manifest for this track:
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES". Keep the default value, Disabled, if the captions track is
     * not intended to provide such accessibility. MediaConvert will not add the above
     * attributes.
     */
    inline void SetAccessibility(WebvttAccessibilitySubs&& value) { m_accessibilityHasBeenSet = true; m_accessibility = std::move(value); }

    /**
     * Set Accessibility subtitles to Enabled if the ISMC or WebVTT captions track is
     * intended to provide accessibility for people who are deaf or hard of hearing.
     * When you enable this feature, MediaConvert adds the following attributes under
     * EXT-X-MEDIA in the HLS or CMAF manifest for this track:
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES". Keep the default value, Disabled, if the captions track is
     * not intended to provide such accessibility. MediaConvert will not add the above
     * attributes.
     */
    inline WebvttDestinationSettings& WithAccessibility(const WebvttAccessibilitySubs& value) { SetAccessibility(value); return *this;}

    /**
     * Set Accessibility subtitles to Enabled if the ISMC or WebVTT captions track is
     * intended to provide accessibility for people who are deaf or hard of hearing.
     * When you enable this feature, MediaConvert adds the following attributes under
     * EXT-X-MEDIA in the HLS or CMAF manifest for this track:
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES". Keep the default value, Disabled, if the captions track is
     * not intended to provide such accessibility. MediaConvert will not add the above
     * attributes.
     */
    inline WebvttDestinationSettings& WithAccessibility(WebvttAccessibilitySubs&& value) { SetAccessibility(std::move(value)); return *this;}


    /**
     * To use the available style, color, and position information from your input
     * captions: Set Style passthrough (stylePassthrough) to Enabled (ENABLED).
     * MediaConvert uses default settings when style and position information is
     * missing from your input captions. To recreate the input captions exactly: Set
     * Style passthrough to Strict (STRICT). MediaConvert automatically applies timing
     * adjustments, including adjustments for frame rate conversion, ad avails, and
     * input clipping. Your input captions format must be WebVTT. To ignore the style
     * and position information from your input captions and use simplified output
     * captions: Set Style passthrough to Disabled (DISABLED), or leave blank.
     */
    inline const WebvttStylePassthrough& GetStylePassthrough() const{ return m_stylePassthrough; }

    /**
     * To use the available style, color, and position information from your input
     * captions: Set Style passthrough (stylePassthrough) to Enabled (ENABLED).
     * MediaConvert uses default settings when style and position information is
     * missing from your input captions. To recreate the input captions exactly: Set
     * Style passthrough to Strict (STRICT). MediaConvert automatically applies timing
     * adjustments, including adjustments for frame rate conversion, ad avails, and
     * input clipping. Your input captions format must be WebVTT. To ignore the style
     * and position information from your input captions and use simplified output
     * captions: Set Style passthrough to Disabled (DISABLED), or leave blank.
     */
    inline bool StylePassthroughHasBeenSet() const { return m_stylePassthroughHasBeenSet; }

    /**
     * To use the available style, color, and position information from your input
     * captions: Set Style passthrough (stylePassthrough) to Enabled (ENABLED).
     * MediaConvert uses default settings when style and position information is
     * missing from your input captions. To recreate the input captions exactly: Set
     * Style passthrough to Strict (STRICT). MediaConvert automatically applies timing
     * adjustments, including adjustments for frame rate conversion, ad avails, and
     * input clipping. Your input captions format must be WebVTT. To ignore the style
     * and position information from your input captions and use simplified output
     * captions: Set Style passthrough to Disabled (DISABLED), or leave blank.
     */
    inline void SetStylePassthrough(const WebvttStylePassthrough& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = value; }

    /**
     * To use the available style, color, and position information from your input
     * captions: Set Style passthrough (stylePassthrough) to Enabled (ENABLED).
     * MediaConvert uses default settings when style and position information is
     * missing from your input captions. To recreate the input captions exactly: Set
     * Style passthrough to Strict (STRICT). MediaConvert automatically applies timing
     * adjustments, including adjustments for frame rate conversion, ad avails, and
     * input clipping. Your input captions format must be WebVTT. To ignore the style
     * and position information from your input captions and use simplified output
     * captions: Set Style passthrough to Disabled (DISABLED), or leave blank.
     */
    inline void SetStylePassthrough(WebvttStylePassthrough&& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = std::move(value); }

    /**
     * To use the available style, color, and position information from your input
     * captions: Set Style passthrough (stylePassthrough) to Enabled (ENABLED).
     * MediaConvert uses default settings when style and position information is
     * missing from your input captions. To recreate the input captions exactly: Set
     * Style passthrough to Strict (STRICT). MediaConvert automatically applies timing
     * adjustments, including adjustments for frame rate conversion, ad avails, and
     * input clipping. Your input captions format must be WebVTT. To ignore the style
     * and position information from your input captions and use simplified output
     * captions: Set Style passthrough to Disabled (DISABLED), or leave blank.
     */
    inline WebvttDestinationSettings& WithStylePassthrough(const WebvttStylePassthrough& value) { SetStylePassthrough(value); return *this;}

    /**
     * To use the available style, color, and position information from your input
     * captions: Set Style passthrough (stylePassthrough) to Enabled (ENABLED).
     * MediaConvert uses default settings when style and position information is
     * missing from your input captions. To recreate the input captions exactly: Set
     * Style passthrough to Strict (STRICT). MediaConvert automatically applies timing
     * adjustments, including adjustments for frame rate conversion, ad avails, and
     * input clipping. Your input captions format must be WebVTT. To ignore the style
     * and position information from your input captions and use simplified output
     * captions: Set Style passthrough to Disabled (DISABLED), or leave blank.
     */
    inline WebvttDestinationSettings& WithStylePassthrough(WebvttStylePassthrough&& value) { SetStylePassthrough(std::move(value)); return *this;}

  private:

    WebvttAccessibilitySubs m_accessibility;
    bool m_accessibilityHasBeenSet = false;

    WebvttStylePassthrough m_stylePassthrough;
    bool m_stylePassthroughHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
