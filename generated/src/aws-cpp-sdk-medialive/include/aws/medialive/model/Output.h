/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/OutputSettings.h>
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
   * Output settings. There can be multiple outputs within a group.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Output">AWS
   * API Reference</a></p>
   */
  class Output
  {
  public:
    AWS_MEDIALIVE_API Output() = default;
    AWS_MEDIALIVE_API Output(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The names of the AudioDescriptions used as audio sources for this output.
     */
    inline const Aws::Vector<Aws::String>& GetAudioDescriptionNames() const { return m_audioDescriptionNames; }
    inline bool AudioDescriptionNamesHasBeenSet() const { return m_audioDescriptionNamesHasBeenSet; }
    template<typename AudioDescriptionNamesT = Aws::Vector<Aws::String>>
    void SetAudioDescriptionNames(AudioDescriptionNamesT&& value) { m_audioDescriptionNamesHasBeenSet = true; m_audioDescriptionNames = std::forward<AudioDescriptionNamesT>(value); }
    template<typename AudioDescriptionNamesT = Aws::Vector<Aws::String>>
    Output& WithAudioDescriptionNames(AudioDescriptionNamesT&& value) { SetAudioDescriptionNames(std::forward<AudioDescriptionNamesT>(value)); return *this;}
    template<typename AudioDescriptionNamesT = Aws::String>
    Output& AddAudioDescriptionNames(AudioDescriptionNamesT&& value) { m_audioDescriptionNamesHasBeenSet = true; m_audioDescriptionNames.emplace_back(std::forward<AudioDescriptionNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The names of the CaptionDescriptions used as caption sources for this output.
     */
    inline const Aws::Vector<Aws::String>& GetCaptionDescriptionNames() const { return m_captionDescriptionNames; }
    inline bool CaptionDescriptionNamesHasBeenSet() const { return m_captionDescriptionNamesHasBeenSet; }
    template<typename CaptionDescriptionNamesT = Aws::Vector<Aws::String>>
    void SetCaptionDescriptionNames(CaptionDescriptionNamesT&& value) { m_captionDescriptionNamesHasBeenSet = true; m_captionDescriptionNames = std::forward<CaptionDescriptionNamesT>(value); }
    template<typename CaptionDescriptionNamesT = Aws::Vector<Aws::String>>
    Output& WithCaptionDescriptionNames(CaptionDescriptionNamesT&& value) { SetCaptionDescriptionNames(std::forward<CaptionDescriptionNamesT>(value)); return *this;}
    template<typename CaptionDescriptionNamesT = Aws::String>
    Output& AddCaptionDescriptionNames(CaptionDescriptionNamesT&& value) { m_captionDescriptionNamesHasBeenSet = true; m_captionDescriptionNames.emplace_back(std::forward<CaptionDescriptionNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The name used to identify an output.
     */
    inline const Aws::String& GetOutputName() const { return m_outputName; }
    inline bool OutputNameHasBeenSet() const { return m_outputNameHasBeenSet; }
    template<typename OutputNameT = Aws::String>
    void SetOutputName(OutputNameT&& value) { m_outputNameHasBeenSet = true; m_outputName = std::forward<OutputNameT>(value); }
    template<typename OutputNameT = Aws::String>
    Output& WithOutputName(OutputNameT&& value) { SetOutputName(std::forward<OutputNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Output type-specific settings.
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
     * The name of the VideoDescription used as the source for this output.
     */
    inline const Aws::String& GetVideoDescriptionName() const { return m_videoDescriptionName; }
    inline bool VideoDescriptionNameHasBeenSet() const { return m_videoDescriptionNameHasBeenSet; }
    template<typename VideoDescriptionNameT = Aws::String>
    void SetVideoDescriptionName(VideoDescriptionNameT&& value) { m_videoDescriptionNameHasBeenSet = true; m_videoDescriptionName = std::forward<VideoDescriptionNameT>(value); }
    template<typename VideoDescriptionNameT = Aws::String>
    Output& WithVideoDescriptionName(VideoDescriptionNameT&& value) { SetVideoDescriptionName(std::forward<VideoDescriptionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_audioDescriptionNames;
    bool m_audioDescriptionNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_captionDescriptionNames;
    bool m_captionDescriptionNamesHasBeenSet = false;

    Aws::String m_outputName;
    bool m_outputNameHasBeenSet = false;

    OutputSettings m_outputSettings;
    bool m_outputSettingsHasBeenSet = false;

    Aws::String m_videoDescriptionName;
    bool m_videoDescriptionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
