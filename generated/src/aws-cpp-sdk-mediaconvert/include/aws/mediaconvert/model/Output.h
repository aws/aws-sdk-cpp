/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/ContainerSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/OutputSettings.h>
#include <aws/mediaconvert/model/VideoDescription.h>
#include <aws/mediaconvert/model/AudioDescription.h>
#include <aws/mediaconvert/model/CaptionDescription.h>
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
   * Each output in your job is a collection of settings that describes how you want
   * MediaConvert to encode a single output file or stream. For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/create-outputs.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Output">AWS
   * API Reference</a></p>
   */
  class Output
  {
  public:
    AWS_MEDIACONVERT_API Output() = default;
    AWS_MEDIACONVERT_API Output(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Output& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    Output& WithAudioDescriptions(AudioDescriptionsT&& value) { SetAudioDescriptions(std::forward<AudioDescriptionsT>(value)); return *this;}
    template<typename AudioDescriptionsT = AudioDescription>
    Output& AddAudioDescriptions(AudioDescriptionsT&& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions.emplace_back(std::forward<AudioDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Contains groups of captions settings. For each output that has captions, include
     * one instance of CaptionDescriptions. Can contain multiple groups of captions
     * settings.
     */
    inline const Aws::Vector<CaptionDescription>& GetCaptionDescriptions() const { return m_captionDescriptions; }
    inline bool CaptionDescriptionsHasBeenSet() const { return m_captionDescriptionsHasBeenSet; }
    template<typename CaptionDescriptionsT = Aws::Vector<CaptionDescription>>
    void SetCaptionDescriptions(CaptionDescriptionsT&& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions = std::forward<CaptionDescriptionsT>(value); }
    template<typename CaptionDescriptionsT = Aws::Vector<CaptionDescription>>
    Output& WithCaptionDescriptions(CaptionDescriptionsT&& value) { SetCaptionDescriptions(std::forward<CaptionDescriptionsT>(value)); return *this;}
    template<typename CaptionDescriptionsT = CaptionDescription>
    Output& AddCaptionDescriptions(CaptionDescriptionsT&& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions.emplace_back(std::forward<CaptionDescriptionsT>(value)); return *this; }
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
    Output& WithContainerSettings(ContainerSettingsT&& value) { SetContainerSettings(std::forward<ContainerSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use Extension to specify the file extension for outputs in File output groups.
     * If you do not specify a value, the service will use default extensions by
     * container type as follows * MPEG-2 transport stream, m2ts * Quicktime, mov * MXF
     * container, mxf * MPEG-4 container, mp4 * WebM container, webm * Animated GIF
     * container, gif * No Container, the service will use codec extensions (e.g. AAC,
     * H265, H265, AC3)
     */
    inline const Aws::String& GetExtension() const { return m_extension; }
    inline bool ExtensionHasBeenSet() const { return m_extensionHasBeenSet; }
    template<typename ExtensionT = Aws::String>
    void SetExtension(ExtensionT&& value) { m_extensionHasBeenSet = true; m_extension = std::forward<ExtensionT>(value); }
    template<typename ExtensionT = Aws::String>
    Output& WithExtension(ExtensionT&& value) { SetExtension(std::forward<ExtensionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use Name modifier to have the service add a string to the end of each output
     * filename. You specify the base filename as part of your destination URI. When
     * you create multiple outputs in the same output group, Name modifier is required.
     * Name modifier also accepts format identifiers. For DASH ISO outputs, if you use
     * the format identifiers $Number$ or $Time$ in one output, you must use them in
     * the same way in all outputs of the output group.
     */
    inline const Aws::String& GetNameModifier() const { return m_nameModifier; }
    inline bool NameModifierHasBeenSet() const { return m_nameModifierHasBeenSet; }
    template<typename NameModifierT = Aws::String>
    void SetNameModifier(NameModifierT&& value) { m_nameModifierHasBeenSet = true; m_nameModifier = std::forward<NameModifierT>(value); }
    template<typename NameModifierT = Aws::String>
    Output& WithNameModifier(NameModifierT&& value) { SetNameModifier(std::forward<NameModifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specific settings for this type of output.
     */
    inline const OutputSettings& GetOutputSettings() const { return m_outputSettings; }
    inline bool OutputSettingsHasBeenSet() const { return m_outputSettingsHasBeenSet; }
    template<typename OutputSettingsT = OutputSettings>
    void SetOutputSettings(OutputSettingsT&& value) { m_outputSettingsHasBeenSet = true; m_outputSettings = std::forward<OutputSettingsT>(value); }
    template<typename OutputSettingsT = OutputSettings>
    Output& WithOutputSettings(OutputSettingsT&& value) { SetOutputSettings(std::forward<OutputSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use Preset to specify a preset for your transcoding settings. Provide the system
     * or custom preset name. You can specify either Preset or Container settings, but
     * not both.
     */
    inline const Aws::String& GetPreset() const { return m_preset; }
    inline bool PresetHasBeenSet() const { return m_presetHasBeenSet; }
    template<typename PresetT = Aws::String>
    void SetPreset(PresetT&& value) { m_presetHasBeenSet = true; m_preset = std::forward<PresetT>(value); }
    template<typename PresetT = Aws::String>
    Output& WithPreset(PresetT&& value) { SetPreset(std::forward<PresetT>(value)); return *this;}
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
    Output& WithVideoDescription(VideoDescriptionT&& value) { SetVideoDescription(std::forward<VideoDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AudioDescription> m_audioDescriptions;
    bool m_audioDescriptionsHasBeenSet = false;

    Aws::Vector<CaptionDescription> m_captionDescriptions;
    bool m_captionDescriptionsHasBeenSet = false;

    ContainerSettings m_containerSettings;
    bool m_containerSettingsHasBeenSet = false;

    Aws::String m_extension;
    bool m_extensionHasBeenSet = false;

    Aws::String m_nameModifier;
    bool m_nameModifierHasBeenSet = false;

    OutputSettings m_outputSettings;
    bool m_outputSettingsHasBeenSet = false;

    Aws::String m_preset;
    bool m_presetHasBeenSet = false;

    VideoDescription m_videoDescription;
    bool m_videoDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
