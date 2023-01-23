/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/Fmp4NielsenId3Behavior.h>
#include <aws/medialive/model/Fmp4TimedMetadataBehavior.h>
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
   * Fmp4 Hls Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Fmp4HlsSettings">AWS
   * API Reference</a></p>
   */
  class Fmp4HlsSettings
  {
  public:
    AWS_MEDIALIVE_API Fmp4HlsSettings();
    AWS_MEDIALIVE_API Fmp4HlsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Fmp4HlsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline const Aws::String& GetAudioRenditionSets() const{ return m_audioRenditionSets; }

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline bool AudioRenditionSetsHasBeenSet() const { return m_audioRenditionSetsHasBeenSet; }

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline void SetAudioRenditionSets(const Aws::String& value) { m_audioRenditionSetsHasBeenSet = true; m_audioRenditionSets = value; }

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline void SetAudioRenditionSets(Aws::String&& value) { m_audioRenditionSetsHasBeenSet = true; m_audioRenditionSets = std::move(value); }

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline void SetAudioRenditionSets(const char* value) { m_audioRenditionSetsHasBeenSet = true; m_audioRenditionSets.assign(value); }

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline Fmp4HlsSettings& WithAudioRenditionSets(const Aws::String& value) { SetAudioRenditionSets(value); return *this;}

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline Fmp4HlsSettings& WithAudioRenditionSets(Aws::String&& value) { SetAudioRenditionSets(std::move(value)); return *this;}

    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline Fmp4HlsSettings& WithAudioRenditionSets(const char* value) { SetAudioRenditionSets(value); return *this;}


    /**
     * If set to passthrough, Nielsen inaudible tones for media tracking will be
     * detected in the input audio and an equivalent ID3 tag will be inserted in the
     * output.
     */
    inline const Fmp4NielsenId3Behavior& GetNielsenId3Behavior() const{ return m_nielsenId3Behavior; }

    /**
     * If set to passthrough, Nielsen inaudible tones for media tracking will be
     * detected in the input audio and an equivalent ID3 tag will be inserted in the
     * output.
     */
    inline bool NielsenId3BehaviorHasBeenSet() const { return m_nielsenId3BehaviorHasBeenSet; }

    /**
     * If set to passthrough, Nielsen inaudible tones for media tracking will be
     * detected in the input audio and an equivalent ID3 tag will be inserted in the
     * output.
     */
    inline void SetNielsenId3Behavior(const Fmp4NielsenId3Behavior& value) { m_nielsenId3BehaviorHasBeenSet = true; m_nielsenId3Behavior = value; }

    /**
     * If set to passthrough, Nielsen inaudible tones for media tracking will be
     * detected in the input audio and an equivalent ID3 tag will be inserted in the
     * output.
     */
    inline void SetNielsenId3Behavior(Fmp4NielsenId3Behavior&& value) { m_nielsenId3BehaviorHasBeenSet = true; m_nielsenId3Behavior = std::move(value); }

    /**
     * If set to passthrough, Nielsen inaudible tones for media tracking will be
     * detected in the input audio and an equivalent ID3 tag will be inserted in the
     * output.
     */
    inline Fmp4HlsSettings& WithNielsenId3Behavior(const Fmp4NielsenId3Behavior& value) { SetNielsenId3Behavior(value); return *this;}

    /**
     * If set to passthrough, Nielsen inaudible tones for media tracking will be
     * detected in the input audio and an equivalent ID3 tag will be inserted in the
     * output.
     */
    inline Fmp4HlsSettings& WithNielsenId3Behavior(Fmp4NielsenId3Behavior&& value) { SetNielsenId3Behavior(std::move(value)); return *this;}


    /**
     * When set to passthrough, timed metadata is passed through from input to output.
     */
    inline const Fmp4TimedMetadataBehavior& GetTimedMetadataBehavior() const{ return m_timedMetadataBehavior; }

    /**
     * When set to passthrough, timed metadata is passed through from input to output.
     */
    inline bool TimedMetadataBehaviorHasBeenSet() const { return m_timedMetadataBehaviorHasBeenSet; }

    /**
     * When set to passthrough, timed metadata is passed through from input to output.
     */
    inline void SetTimedMetadataBehavior(const Fmp4TimedMetadataBehavior& value) { m_timedMetadataBehaviorHasBeenSet = true; m_timedMetadataBehavior = value; }

    /**
     * When set to passthrough, timed metadata is passed through from input to output.
     */
    inline void SetTimedMetadataBehavior(Fmp4TimedMetadataBehavior&& value) { m_timedMetadataBehaviorHasBeenSet = true; m_timedMetadataBehavior = std::move(value); }

    /**
     * When set to passthrough, timed metadata is passed through from input to output.
     */
    inline Fmp4HlsSettings& WithTimedMetadataBehavior(const Fmp4TimedMetadataBehavior& value) { SetTimedMetadataBehavior(value); return *this;}

    /**
     * When set to passthrough, timed metadata is passed through from input to output.
     */
    inline Fmp4HlsSettings& WithTimedMetadataBehavior(Fmp4TimedMetadataBehavior&& value) { SetTimedMetadataBehavior(std::move(value)); return *this;}

  private:

    Aws::String m_audioRenditionSets;
    bool m_audioRenditionSetsHasBeenSet = false;

    Fmp4NielsenId3Behavior m_nielsenId3Behavior;
    bool m_nielsenId3BehaviorHasBeenSet = false;

    Fmp4TimedMetadataBehavior m_timedMetadataBehavior;
    bool m_timedMetadataBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
