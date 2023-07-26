/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/ImscAccessibilitySubs.h>
#include <aws/mediaconvert/model/ImscStylePassthrough.h>
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
   * Settings related to IMSC captions. IMSC is a sidecar format that holds captions
   * in a file that is separate from the video container. Set up sidecar captions in
   * the same output group, but different output from your video. For more
   * information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/ttml-and-webvtt-output-captions.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ImscDestinationSettings">AWS
   * API Reference</a></p>
   */
  class ImscDestinationSettings
  {
  public:
    AWS_MEDIACONVERT_API ImscDestinationSettings();
    AWS_MEDIACONVERT_API ImscDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ImscDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * If the IMSC captions track is intended to provide accessibility for people who
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
    inline const ImscAccessibilitySubs& GetAccessibility() const{ return m_accessibility; }

    /**
     * If the IMSC captions track is intended to provide accessibility for people who
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
     * If the IMSC captions track is intended to provide accessibility for people who
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
    inline void SetAccessibility(const ImscAccessibilitySubs& value) { m_accessibilityHasBeenSet = true; m_accessibility = value; }

    /**
     * If the IMSC captions track is intended to provide accessibility for people who
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
    inline void SetAccessibility(ImscAccessibilitySubs&& value) { m_accessibilityHasBeenSet = true; m_accessibility = std::move(value); }

    /**
     * If the IMSC captions track is intended to provide accessibility for people who
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
    inline ImscDestinationSettings& WithAccessibility(const ImscAccessibilitySubs& value) { SetAccessibility(value); return *this;}

    /**
     * If the IMSC captions track is intended to provide accessibility for people who
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
    inline ImscDestinationSettings& WithAccessibility(ImscAccessibilitySubs&& value) { SetAccessibility(std::move(value)); return *this;}


    /**
     * Keep this setting enabled to have MediaConvert use the font style and position
     * information from the captions source in the output. This option is available
     * only when your input captions are IMSC, SMPTE-TT, or TTML. Disable this setting
     * for simplified output captions.
     */
    inline const ImscStylePassthrough& GetStylePassthrough() const{ return m_stylePassthrough; }

    /**
     * Keep this setting enabled to have MediaConvert use the font style and position
     * information from the captions source in the output. This option is available
     * only when your input captions are IMSC, SMPTE-TT, or TTML. Disable this setting
     * for simplified output captions.
     */
    inline bool StylePassthroughHasBeenSet() const { return m_stylePassthroughHasBeenSet; }

    /**
     * Keep this setting enabled to have MediaConvert use the font style and position
     * information from the captions source in the output. This option is available
     * only when your input captions are IMSC, SMPTE-TT, or TTML. Disable this setting
     * for simplified output captions.
     */
    inline void SetStylePassthrough(const ImscStylePassthrough& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = value; }

    /**
     * Keep this setting enabled to have MediaConvert use the font style and position
     * information from the captions source in the output. This option is available
     * only when your input captions are IMSC, SMPTE-TT, or TTML. Disable this setting
     * for simplified output captions.
     */
    inline void SetStylePassthrough(ImscStylePassthrough&& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = std::move(value); }

    /**
     * Keep this setting enabled to have MediaConvert use the font style and position
     * information from the captions source in the output. This option is available
     * only when your input captions are IMSC, SMPTE-TT, or TTML. Disable this setting
     * for simplified output captions.
     */
    inline ImscDestinationSettings& WithStylePassthrough(const ImscStylePassthrough& value) { SetStylePassthrough(value); return *this;}

    /**
     * Keep this setting enabled to have MediaConvert use the font style and position
     * information from the captions source in the output. This option is available
     * only when your input captions are IMSC, SMPTE-TT, or TTML. Disable this setting
     * for simplified output captions.
     */
    inline ImscDestinationSettings& WithStylePassthrough(ImscStylePassthrough&& value) { SetStylePassthrough(std::move(value)); return *this;}

  private:

    ImscAccessibilitySubs m_accessibility;
    bool m_accessibilityHasBeenSet = false;

    ImscStylePassthrough m_stylePassthrough;
    bool m_stylePassthroughHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
