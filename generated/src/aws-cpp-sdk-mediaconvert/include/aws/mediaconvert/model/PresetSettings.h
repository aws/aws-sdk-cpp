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
    AWS_MEDIACONVERT_API PresetSettings();
    AWS_MEDIACONVERT_API PresetSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API PresetSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * (AudioDescriptions) contains groups of audio encoding settings organized by
     * audio codec. Include one instance of (AudioDescriptions) per output.
     * (AudioDescriptions) can contain multiple groups of encoding settings.
     */
    inline const Aws::Vector<AudioDescription>& GetAudioDescriptions() const{ return m_audioDescriptions; }

    /**
     * (AudioDescriptions) contains groups of audio encoding settings organized by
     * audio codec. Include one instance of (AudioDescriptions) per output.
     * (AudioDescriptions) can contain multiple groups of encoding settings.
     */
    inline bool AudioDescriptionsHasBeenSet() const { return m_audioDescriptionsHasBeenSet; }

    /**
     * (AudioDescriptions) contains groups of audio encoding settings organized by
     * audio codec. Include one instance of (AudioDescriptions) per output.
     * (AudioDescriptions) can contain multiple groups of encoding settings.
     */
    inline void SetAudioDescriptions(const Aws::Vector<AudioDescription>& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions = value; }

    /**
     * (AudioDescriptions) contains groups of audio encoding settings organized by
     * audio codec. Include one instance of (AudioDescriptions) per output.
     * (AudioDescriptions) can contain multiple groups of encoding settings.
     */
    inline void SetAudioDescriptions(Aws::Vector<AudioDescription>&& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions = std::move(value); }

    /**
     * (AudioDescriptions) contains groups of audio encoding settings organized by
     * audio codec. Include one instance of (AudioDescriptions) per output.
     * (AudioDescriptions) can contain multiple groups of encoding settings.
     */
    inline PresetSettings& WithAudioDescriptions(const Aws::Vector<AudioDescription>& value) { SetAudioDescriptions(value); return *this;}

    /**
     * (AudioDescriptions) contains groups of audio encoding settings organized by
     * audio codec. Include one instance of (AudioDescriptions) per output.
     * (AudioDescriptions) can contain multiple groups of encoding settings.
     */
    inline PresetSettings& WithAudioDescriptions(Aws::Vector<AudioDescription>&& value) { SetAudioDescriptions(std::move(value)); return *this;}

    /**
     * (AudioDescriptions) contains groups of audio encoding settings organized by
     * audio codec. Include one instance of (AudioDescriptions) per output.
     * (AudioDescriptions) can contain multiple groups of encoding settings.
     */
    inline PresetSettings& AddAudioDescriptions(const AudioDescription& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions.push_back(value); return *this; }

    /**
     * (AudioDescriptions) contains groups of audio encoding settings organized by
     * audio codec. Include one instance of (AudioDescriptions) per output.
     * (AudioDescriptions) can contain multiple groups of encoding settings.
     */
    inline PresetSettings& AddAudioDescriptions(AudioDescription&& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions.push_back(std::move(value)); return *this; }


    /**
     * This object holds groups of settings related to captions for one output. For
     * each output that has captions, include one instance of CaptionDescriptions.
     */
    inline const Aws::Vector<CaptionDescriptionPreset>& GetCaptionDescriptions() const{ return m_captionDescriptions; }

    /**
     * This object holds groups of settings related to captions for one output. For
     * each output that has captions, include one instance of CaptionDescriptions.
     */
    inline bool CaptionDescriptionsHasBeenSet() const { return m_captionDescriptionsHasBeenSet; }

    /**
     * This object holds groups of settings related to captions for one output. For
     * each output that has captions, include one instance of CaptionDescriptions.
     */
    inline void SetCaptionDescriptions(const Aws::Vector<CaptionDescriptionPreset>& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions = value; }

    /**
     * This object holds groups of settings related to captions for one output. For
     * each output that has captions, include one instance of CaptionDescriptions.
     */
    inline void SetCaptionDescriptions(Aws::Vector<CaptionDescriptionPreset>&& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions = std::move(value); }

    /**
     * This object holds groups of settings related to captions for one output. For
     * each output that has captions, include one instance of CaptionDescriptions.
     */
    inline PresetSettings& WithCaptionDescriptions(const Aws::Vector<CaptionDescriptionPreset>& value) { SetCaptionDescriptions(value); return *this;}

    /**
     * This object holds groups of settings related to captions for one output. For
     * each output that has captions, include one instance of CaptionDescriptions.
     */
    inline PresetSettings& WithCaptionDescriptions(Aws::Vector<CaptionDescriptionPreset>&& value) { SetCaptionDescriptions(std::move(value)); return *this;}

    /**
     * This object holds groups of settings related to captions for one output. For
     * each output that has captions, include one instance of CaptionDescriptions.
     */
    inline PresetSettings& AddCaptionDescriptions(const CaptionDescriptionPreset& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions.push_back(value); return *this; }

    /**
     * This object holds groups of settings related to captions for one output. For
     * each output that has captions, include one instance of CaptionDescriptions.
     */
    inline PresetSettings& AddCaptionDescriptions(CaptionDescriptionPreset&& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions.push_back(std::move(value)); return *this; }


    /**
     * Container specific settings.
     */
    inline const ContainerSettings& GetContainerSettings() const{ return m_containerSettings; }

    /**
     * Container specific settings.
     */
    inline bool ContainerSettingsHasBeenSet() const { return m_containerSettingsHasBeenSet; }

    /**
     * Container specific settings.
     */
    inline void SetContainerSettings(const ContainerSettings& value) { m_containerSettingsHasBeenSet = true; m_containerSettings = value; }

    /**
     * Container specific settings.
     */
    inline void SetContainerSettings(ContainerSettings&& value) { m_containerSettingsHasBeenSet = true; m_containerSettings = std::move(value); }

    /**
     * Container specific settings.
     */
    inline PresetSettings& WithContainerSettings(const ContainerSettings& value) { SetContainerSettings(value); return *this;}

    /**
     * Container specific settings.
     */
    inline PresetSettings& WithContainerSettings(ContainerSettings&& value) { SetContainerSettings(std::move(value)); return *this;}


    /**
     * VideoDescription contains a group of video encoding settings. The specific video
     * settings depend on the video codec that you choose for the property codec.
     * Include one instance of VideoDescription per output.
     */
    inline const VideoDescription& GetVideoDescription() const{ return m_videoDescription; }

    /**
     * VideoDescription contains a group of video encoding settings. The specific video
     * settings depend on the video codec that you choose for the property codec.
     * Include one instance of VideoDescription per output.
     */
    inline bool VideoDescriptionHasBeenSet() const { return m_videoDescriptionHasBeenSet; }

    /**
     * VideoDescription contains a group of video encoding settings. The specific video
     * settings depend on the video codec that you choose for the property codec.
     * Include one instance of VideoDescription per output.
     */
    inline void SetVideoDescription(const VideoDescription& value) { m_videoDescriptionHasBeenSet = true; m_videoDescription = value; }

    /**
     * VideoDescription contains a group of video encoding settings. The specific video
     * settings depend on the video codec that you choose for the property codec.
     * Include one instance of VideoDescription per output.
     */
    inline void SetVideoDescription(VideoDescription&& value) { m_videoDescriptionHasBeenSet = true; m_videoDescription = std::move(value); }

    /**
     * VideoDescription contains a group of video encoding settings. The specific video
     * settings depend on the video codec that you choose for the property codec.
     * Include one instance of VideoDescription per output.
     */
    inline PresetSettings& WithVideoDescription(const VideoDescription& value) { SetVideoDescription(value); return *this;}

    /**
     * VideoDescription contains a group of video encoding settings. The specific video
     * settings depend on the video codec that you choose for the property codec.
     * Include one instance of VideoDescription per output.
     */
    inline PresetSettings& WithVideoDescription(VideoDescription&& value) { SetVideoDescription(std::move(value)); return *this;}

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
