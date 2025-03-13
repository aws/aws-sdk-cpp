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
    AWS_MEDIALIVE_API Fmp4HlsSettings() = default;
    AWS_MEDIALIVE_API Fmp4HlsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Fmp4HlsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline const Aws::String& GetAudioRenditionSets() const { return m_audioRenditionSets; }
    inline bool AudioRenditionSetsHasBeenSet() const { return m_audioRenditionSetsHasBeenSet; }
    template<typename AudioRenditionSetsT = Aws::String>
    void SetAudioRenditionSets(AudioRenditionSetsT&& value) { m_audioRenditionSetsHasBeenSet = true; m_audioRenditionSets = std::forward<AudioRenditionSetsT>(value); }
    template<typename AudioRenditionSetsT = Aws::String>
    Fmp4HlsSettings& WithAudioRenditionSets(AudioRenditionSetsT&& value) { SetAudioRenditionSets(std::forward<AudioRenditionSetsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If set to passthrough, Nielsen inaudible tones for media tracking will be
     * detected in the input audio and an equivalent ID3 tag will be inserted in the
     * output.
     */
    inline Fmp4NielsenId3Behavior GetNielsenId3Behavior() const { return m_nielsenId3Behavior; }
    inline bool NielsenId3BehaviorHasBeenSet() const { return m_nielsenId3BehaviorHasBeenSet; }
    inline void SetNielsenId3Behavior(Fmp4NielsenId3Behavior value) { m_nielsenId3BehaviorHasBeenSet = true; m_nielsenId3Behavior = value; }
    inline Fmp4HlsSettings& WithNielsenId3Behavior(Fmp4NielsenId3Behavior value) { SetNielsenId3Behavior(value); return *this;}
    ///@}

    ///@{
    /**
     * Set to PASSTHROUGH to enable ID3 metadata insertion. To include metadata, you
     * configure other parameters in the output group or individual outputs, or you add
     * an ID3 action to the channel schedule.
     */
    inline Fmp4TimedMetadataBehavior GetTimedMetadataBehavior() const { return m_timedMetadataBehavior; }
    inline bool TimedMetadataBehaviorHasBeenSet() const { return m_timedMetadataBehaviorHasBeenSet; }
    inline void SetTimedMetadataBehavior(Fmp4TimedMetadataBehavior value) { m_timedMetadataBehaviorHasBeenSet = true; m_timedMetadataBehavior = value; }
    inline Fmp4HlsSettings& WithTimedMetadataBehavior(Fmp4TimedMetadataBehavior value) { SetTimedMetadataBehavior(value); return *this;}
    ///@}
  private:

    Aws::String m_audioRenditionSets;
    bool m_audioRenditionSetsHasBeenSet = false;

    Fmp4NielsenId3Behavior m_nielsenId3Behavior{Fmp4NielsenId3Behavior::NOT_SET};
    bool m_nielsenId3BehaviorHasBeenSet = false;

    Fmp4TimedMetadataBehavior m_timedMetadataBehavior{Fmp4TimedMetadataBehavior::NOT_SET};
    bool m_timedMetadataBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
