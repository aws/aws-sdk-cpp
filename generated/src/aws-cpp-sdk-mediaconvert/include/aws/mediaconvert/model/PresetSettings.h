/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/ContainerSettings.h>
#include <aws/mediaconvert/model/VideoDescription.h>
#include <aws/mediaconvert/model/AudioDescription.h>
#include <aws/mediaconvert/model/CaptionDescriptionPreset.h>
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
   * Settings for preset<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/PresetSettings">AWS
   * API Reference</a></p>
   */
  class PresetSettings
  {
  public:
    AWS_MEDIACONVERT_API PresetSettings() = default;
    AWS_MEDIACONVERT_API PresetSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API PresetSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Contains groups of audio encoding settings organized by audio codec. Include one
     * instance of per output. Can contain multiple groups of encoding settings.
     */
    inline const Aws::Vector<AudioDescription>& GetAudioDescriptions() const { return m_audioDescriptions; }
    inline bool AudioDescriptionsHasBeenSet() const { return m_audioDescriptionsHasBeenSet; }
    template<typename AudioDescriptionsT = Aws::Vector<AudioDescription>>
    void SetAudioDescriptions(AudioDescriptionsT&& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions = std::forward<AudioDescriptionsT>(value); }
    template<typename AudioDescriptionsT = Aws::Vector<AudioDescription>>
    PresetSettings& WithAudioDescriptions(AudioDescriptionsT&& value) { SetAudioDescriptions(std::forward<AudioDescriptionsT>(value)); return *this;}
    template<typename AudioDescriptionsT = AudioDescription>
    PresetSettings& AddAudioDescriptions(AudioDescriptionsT&& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions.emplace_back(std::forward<AudioDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * This object holds groups of settings related to captions for one output. For
     * each output that has captions, include one instance of CaptionDescriptions.
     */
    inline const Aws::Vector<CaptionDescriptionPreset>& GetCaptionDescriptions() const { return m_captionDescriptions; }
    inline bool CaptionDescriptionsHasBeenSet() const { return m_captionDescriptionsHasBeenSet; }
    template<typename CaptionDescriptionsT = Aws::Vector<CaptionDescriptionPreset>>
    void SetCaptionDescriptions(CaptionDescriptionsT&& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions = std::forward<CaptionDescriptionsT>(value); }
    template<typename CaptionDescriptionsT = Aws::Vector<CaptionDescriptionPreset>>
    PresetSettings& WithCaptionDescriptions(CaptionDescriptionsT&& value) { SetCaptionDescriptions(std::forward<CaptionDescriptionsT>(value)); return *this;}
    template<typename CaptionDescriptionsT = CaptionDescriptionPreset>
    PresetSettings& AddCaptionDescriptions(CaptionDescriptionsT&& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions.emplace_back(std::forward<CaptionDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Container specific settings.
     */
    inline const ContainerSettings& GetContainerSettings() const { return m_containerSettings; }
    inline bool ContainerSettingsHasBeenSet() const { return m_containerSettingsHasBeenSet; }
    template<typename ContainerSettingsT = ContainerSettings>
    void SetContainerSettings(ContainerSettingsT&& value) { m_containerSettingsHasBeenSet = true; m_containerSettings = std::forward<ContainerSettingsT>(value); }
    template<typename ContainerSettingsT = ContainerSettings>
    PresetSettings& WithContainerSettings(ContainerSettingsT&& value) { SetContainerSettings(std::forward<ContainerSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * VideoDescription contains a group of video encoding settings. The specific video
     * settings depend on the video codec that you choose for the property codec.
     * Include one instance of VideoDescription per output.
     */
    inline const VideoDescription& GetVideoDescription() const { return m_videoDescription; }
    inline bool VideoDescriptionHasBeenSet() const { return m_videoDescriptionHasBeenSet; }
    template<typename VideoDescriptionT = VideoDescription>
    void SetVideoDescription(VideoDescriptionT&& value) { m_videoDescriptionHasBeenSet = true; m_videoDescription = std::forward<VideoDescriptionT>(value); }
    template<typename VideoDescriptionT = VideoDescription>
    PresetSettings& WithVideoDescription(VideoDescriptionT&& value) { SetVideoDescription(std::forward<VideoDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AudioDescription> m_audioDescriptions;
    bool m_audioDescriptionsHasBeenSet = false;

    Aws::Vector<CaptionDescriptionPreset> m_captionDescriptions;
    bool m_captionDescriptionsHasBeenSet = false;

    ContainerSettings m_containerSettings;
    bool m_containerSettingsHasBeenSet = false;

    VideoDescription m_videoDescription;
    bool m_videoDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
