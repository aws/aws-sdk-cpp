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
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/ttml-and-webvtt-output-captions.html.<p><h3>See
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
     * If the WebVTT captions track is intended to provide accessibility for people who
     * are deaf or hard of hearing: Set Accessibility subtitles to Enabled. When you
     * do, MediaConvert adds accessibility attributes to your output HLS or DASH
     * manifest. For HLS manifests, MediaConvert adds the following accessibility
     * attributes under EXT-X-MEDIA for this track:
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES". For DASH manifests, MediaConvert adds the following in the
     * adaptation set for this track: <Accessibility
     * schemeIdUri="urn:mpeg:dash:role:2011" value="caption"/>. If the captions track
     * is not intended to provide such accessibility: Keep the default value, Disabled.
     * When you do, for DASH manifests, MediaConvert instead adds the following in the
     * adaptation set for this track: <Role schemeIDUri="urn:mpeg:dash:role:2011"
     * value="subtitle"/>.
     */
    inline const WebvttAccessibilitySubs& GetAccessibility() const{ return m_accessibility; }

    /**
     * If the WebVTT captions track is intended to provide accessibility for people who
     * are deaf or hard of hearing: Set Accessibility subtitles to Enabled. When you
     * do, MediaConvert adds accessibility attributes to your output HLS or DASH
     * manifest. For HLS manifests, MediaConvert adds the following accessibility
     * attributes under EXT-X-MEDIA for this track:
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES". For DASH manifests, MediaConvert adds the following in the
     * adaptation set for this track: <Accessibility
     * schemeIdUri="urn:mpeg:dash:role:2011" value="caption"/>. If the captions track
     * is not intended to provide such accessibility: Keep the default value, Disabled.
     * When you do, for DASH manifests, MediaConvert instead adds the following in the
     * adaptation set for this track: <Role schemeIDUri="urn:mpeg:dash:role:2011"
     * value="subtitle"/>.
     */
    inline bool AccessibilityHasBeenSet() const { return m_accessibilityHasBeenSet; }

    /**
     * If the WebVTT captions track is intended to provide accessibility for people who
     * are deaf or hard of hearing: Set Accessibility subtitles to Enabled. When you
     * do, MediaConvert adds accessibility attributes to your output HLS or DASH
     * manifest. For HLS manifests, MediaConvert adds the following accessibility
     * attributes under EXT-X-MEDIA for this track:
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES". For DASH manifests, MediaConvert adds the following in the
     * adaptation set for this track: <Accessibility
     * schemeIdUri="urn:mpeg:dash:role:2011" value="caption"/>. If the captions track
     * is not intended to provide such accessibility: Keep the default value, Disabled.
     * When you do, for DASH manifests, MediaConvert instead adds the following in the
     * adaptation set for this track: <Role schemeIDUri="urn:mpeg:dash:role:2011"
     * value="subtitle"/>.
     */
    inline void SetAccessibility(const WebvttAccessibilitySubs& value) { m_accessibilityHasBeenSet = true; m_accessibility = value; }

    /**
     * If the WebVTT captions track is intended to provide accessibility for people who
     * are deaf or hard of hearing: Set Accessibility subtitles to Enabled. When you
     * do, MediaConvert adds accessibility attributes to your output HLS or DASH
     * manifest. For HLS manifests, MediaConvert adds the following accessibility
     * attributes under EXT-X-MEDIA for this track:
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES". For DASH manifests, MediaConvert adds the following in the
     * adaptation set for this track: <Accessibility
     * schemeIdUri="urn:mpeg:dash:role:2011" value="caption"/>. If the captions track
     * is not intended to provide such accessibility: Keep the default value, Disabled.
     * When you do, for DASH manifests, MediaConvert instead adds the following in the
     * adaptation set for this track: <Role schemeIDUri="urn:mpeg:dash:role:2011"
     * value="subtitle"/>.
     */
    inline void SetAccessibility(WebvttAccessibilitySubs&& value) { m_accessibilityHasBeenSet = true; m_accessibility = std::move(value); }

    /**
     * If the WebVTT captions track is intended to provide accessibility for people who
     * are deaf or hard of hearing: Set Accessibility subtitles to Enabled. When you
     * do, MediaConvert adds accessibility attributes to your output HLS or DASH
     * manifest. For HLS manifests, MediaConvert adds the following accessibility
     * attributes under EXT-X-MEDIA for this track:
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES". For DASH manifests, MediaConvert adds the following in the
     * adaptation set for this track: <Accessibility
     * schemeIdUri="urn:mpeg:dash:role:2011" value="caption"/>. If the captions track
     * is not intended to provide such accessibility: Keep the default value, Disabled.
     * When you do, for DASH manifests, MediaConvert instead adds the following in the
     * adaptation set for this track: <Role schemeIDUri="urn:mpeg:dash:role:2011"
     * value="subtitle"/>.
     */
    inline WebvttDestinationSettings& WithAccessibility(const WebvttAccessibilitySubs& value) { SetAccessibility(value); return *this;}

    /**
     * If the WebVTT captions track is intended to provide accessibility for people who
     * are deaf or hard of hearing: Set Accessibility subtitles to Enabled. When you
     * do, MediaConvert adds accessibility attributes to your output HLS or DASH
     * manifest. For HLS manifests, MediaConvert adds the following accessibility
     * attributes under EXT-X-MEDIA for this track:
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES". For DASH manifests, MediaConvert adds the following in the
     * adaptation set for this track: <Accessibility
     * schemeIdUri="urn:mpeg:dash:role:2011" value="caption"/>. If the captions track
     * is not intended to provide such accessibility: Keep the default value, Disabled.
     * When you do, for DASH manifests, MediaConvert instead adds the following in the
     * adaptation set for this track: <Role schemeIDUri="urn:mpeg:dash:role:2011"
     * value="subtitle"/>.
     */
    inline WebvttDestinationSettings& WithAccessibility(WebvttAccessibilitySubs&& value) { SetAccessibility(std::move(value)); return *this;}


    /**
     * To use the available style, color, and position information from your input
     * captions: Set Style passthrough to Enabled. MediaConvert uses default settings
     * when style and position information is missing from your input captions. To
     * recreate the input captions exactly: Set Style passthrough to Strict.
     * MediaConvert automatically applies timing adjustments, including adjustments for
     * frame rate conversion, ad avails, and input clipping. Your input captions format
     * must be WebVTT. To ignore the style and position information from your input
     * captions and use simplified output captions: Set Style passthrough to Disabled,
     * or leave blank.
     */
    inline const WebvttStylePassthrough& GetStylePassthrough() const{ return m_stylePassthrough; }

    /**
     * To use the available style, color, and position information from your input
     * captions: Set Style passthrough to Enabled. MediaConvert uses default settings
     * when style and position information is missing from your input captions. To
     * recreate the input captions exactly: Set Style passthrough to Strict.
     * MediaConvert automatically applies timing adjustments, including adjustments for
     * frame rate conversion, ad avails, and input clipping. Your input captions format
     * must be WebVTT. To ignore the style and position information from your input
     * captions and use simplified output captions: Set Style passthrough to Disabled,
     * or leave blank.
     */
    inline bool StylePassthroughHasBeenSet() const { return m_stylePassthroughHasBeenSet; }

    /**
     * To use the available style, color, and position information from your input
     * captions: Set Style passthrough to Enabled. MediaConvert uses default settings
     * when style and position information is missing from your input captions. To
     * recreate the input captions exactly: Set Style passthrough to Strict.
     * MediaConvert automatically applies timing adjustments, including adjustments for
     * frame rate conversion, ad avails, and input clipping. Your input captions format
     * must be WebVTT. To ignore the style and position information from your input
     * captions and use simplified output captions: Set Style passthrough to Disabled,
     * or leave blank.
     */
    inline void SetStylePassthrough(const WebvttStylePassthrough& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = value; }

    /**
     * To use the available style, color, and position information from your input
     * captions: Set Style passthrough to Enabled. MediaConvert uses default settings
     * when style and position information is missing from your input captions. To
     * recreate the input captions exactly: Set Style passthrough to Strict.
     * MediaConvert automatically applies timing adjustments, including adjustments for
     * frame rate conversion, ad avails, and input clipping. Your input captions format
     * must be WebVTT. To ignore the style and position information from your input
     * captions and use simplified output captions: Set Style passthrough to Disabled,
     * or leave blank.
     */
    inline void SetStylePassthrough(WebvttStylePassthrough&& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = std::move(value); }

    /**
     * To use the available style, color, and position information from your input
     * captions: Set Style passthrough to Enabled. MediaConvert uses default settings
     * when style and position information is missing from your input captions. To
     * recreate the input captions exactly: Set Style passthrough to Strict.
     * MediaConvert automatically applies timing adjustments, including adjustments for
     * frame rate conversion, ad avails, and input clipping. Your input captions format
     * must be WebVTT. To ignore the style and position information from your input
     * captions and use simplified output captions: Set Style passthrough to Disabled,
     * or leave blank.
     */
    inline WebvttDestinationSettings& WithStylePassthrough(const WebvttStylePassthrough& value) { SetStylePassthrough(value); return *this;}

    /**
     * To use the available style, color, and position information from your input
     * captions: Set Style passthrough to Enabled. MediaConvert uses default settings
     * when style and position information is missing from your input captions. To
     * recreate the input captions exactly: Set Style passthrough to Strict.
     * MediaConvert automatically applies timing adjustments, including adjustments for
     * frame rate conversion, ad avails, and input clipping. Your input captions format
     * must be WebVTT. To ignore the style and position information from your input
     * captions and use simplified output captions: Set Style passthrough to Disabled,
     * or leave blank.
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
