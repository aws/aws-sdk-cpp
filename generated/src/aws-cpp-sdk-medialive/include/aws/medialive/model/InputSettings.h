/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InputDeblockFilter.h>
#include <aws/medialive/model/InputDenoiseFilter.h>
#include <aws/medialive/model/InputFilter.h>
#include <aws/medialive/model/NetworkInputSettings.h>
#include <aws/medialive/model/Smpte2038DataPreference.h>
#include <aws/medialive/model/InputSourceEndBehavior.h>
#include <aws/medialive/model/VideoSelector.h>
#include <aws/medialive/model/AudioSelector.h>
#include <aws/medialive/model/CaptionSelector.h>
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
   * Live Event input parameters. There can be multiple inputs in a single Live
   * Event.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputSettings">AWS
   * API Reference</a></p>
   */
  class InputSettings
  {
  public:
    AWS_MEDIALIVE_API InputSettings() = default;
    AWS_MEDIALIVE_API InputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Used to select the audio stream to decode for inputs that have multiple
     * available.
     */
    inline const Aws::Vector<AudioSelector>& GetAudioSelectors() const { return m_audioSelectors; }
    inline bool AudioSelectorsHasBeenSet() const { return m_audioSelectorsHasBeenSet; }
    template<typename AudioSelectorsT = Aws::Vector<AudioSelector>>
    void SetAudioSelectors(AudioSelectorsT&& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors = std::forward<AudioSelectorsT>(value); }
    template<typename AudioSelectorsT = Aws::Vector<AudioSelector>>
    InputSettings& WithAudioSelectors(AudioSelectorsT&& value) { SetAudioSelectors(std::forward<AudioSelectorsT>(value)); return *this;}
    template<typename AudioSelectorsT = AudioSelector>
    InputSettings& AddAudioSelectors(AudioSelectorsT&& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace_back(std::forward<AudioSelectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Used to select the caption input to use for inputs that have multiple available.
     */
    inline const Aws::Vector<CaptionSelector>& GetCaptionSelectors() const { return m_captionSelectors; }
    inline bool CaptionSelectorsHasBeenSet() const { return m_captionSelectorsHasBeenSet; }
    template<typename CaptionSelectorsT = Aws::Vector<CaptionSelector>>
    void SetCaptionSelectors(CaptionSelectorsT&& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors = std::forward<CaptionSelectorsT>(value); }
    template<typename CaptionSelectorsT = Aws::Vector<CaptionSelector>>
    InputSettings& WithCaptionSelectors(CaptionSelectorsT&& value) { SetCaptionSelectors(std::forward<CaptionSelectorsT>(value)); return *this;}
    template<typename CaptionSelectorsT = CaptionSelector>
    InputSettings& AddCaptionSelectors(CaptionSelectorsT&& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace_back(std::forward<CaptionSelectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Enable or disable the deblock filter when filtering.
     */
    inline InputDeblockFilter GetDeblockFilter() const { return m_deblockFilter; }
    inline bool DeblockFilterHasBeenSet() const { return m_deblockFilterHasBeenSet; }
    inline void SetDeblockFilter(InputDeblockFilter value) { m_deblockFilterHasBeenSet = true; m_deblockFilter = value; }
    inline InputSettings& WithDeblockFilter(InputDeblockFilter value) { SetDeblockFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * Enable or disable the denoise filter when filtering.
     */
    inline InputDenoiseFilter GetDenoiseFilter() const { return m_denoiseFilter; }
    inline bool DenoiseFilterHasBeenSet() const { return m_denoiseFilterHasBeenSet; }
    inline void SetDenoiseFilter(InputDenoiseFilter value) { m_denoiseFilterHasBeenSet = true; m_denoiseFilter = value; }
    inline InputSettings& WithDenoiseFilter(InputDenoiseFilter value) { SetDenoiseFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * Adjusts the magnitude of filtering from 1 (minimal) to 5 (strongest).
     */
    inline int GetFilterStrength() const { return m_filterStrength; }
    inline bool FilterStrengthHasBeenSet() const { return m_filterStrengthHasBeenSet; }
    inline void SetFilterStrength(int value) { m_filterStrengthHasBeenSet = true; m_filterStrength = value; }
    inline InputSettings& WithFilterStrength(int value) { SetFilterStrength(value); return *this;}
    ///@}

    ///@{
    /**
     * Turns on the filter for this input. MPEG-2 inputs have the deblocking filter
     * enabled by default.
1) auto - filtering will be applied depending on input
     * type/quality
2) disabled - no filtering will be applied to the input
3) forced -
     * filtering will be applied regardless of input type
     */
    inline InputFilter GetInputFilter() const { return m_inputFilter; }
    inline bool InputFilterHasBeenSet() const { return m_inputFilterHasBeenSet; }
    inline void SetInputFilter(InputFilter value) { m_inputFilterHasBeenSet = true; m_inputFilter = value; }
    inline InputSettings& WithInputFilter(InputFilter value) { SetInputFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * Input settings.
     */
    inline const NetworkInputSettings& GetNetworkInputSettings() const { return m_networkInputSettings; }
    inline bool NetworkInputSettingsHasBeenSet() const { return m_networkInputSettingsHasBeenSet; }
    template<typename NetworkInputSettingsT = NetworkInputSettings>
    void SetNetworkInputSettings(NetworkInputSettingsT&& value) { m_networkInputSettingsHasBeenSet = true; m_networkInputSettings = std::forward<NetworkInputSettingsT>(value); }
    template<typename NetworkInputSettingsT = NetworkInputSettings>
    InputSettings& WithNetworkInputSettings(NetworkInputSettingsT&& value) { SetNetworkInputSettings(std::forward<NetworkInputSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * PID from which to read SCTE-35 messages. If left undefined, EML will select the
     * first SCTE-35 PID found in the input.
     */
    inline int GetScte35Pid() const { return m_scte35Pid; }
    inline bool Scte35PidHasBeenSet() const { return m_scte35PidHasBeenSet; }
    inline void SetScte35Pid(int value) { m_scte35PidHasBeenSet = true; m_scte35Pid = value; }
    inline InputSettings& WithScte35Pid(int value) { SetScte35Pid(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies whether to extract applicable ancillary data from a SMPTE-2038 source
     * in this input. Applicable data types are captions, timecode, AFD, and SCTE-104
     * messages.
- PREFER: Extract from SMPTE-2038 if present in this input, otherwise
     * extract from another source (if any).
- IGNORE: Never extract any ancillary data
     * from SMPTE-2038.
     */
    inline Smpte2038DataPreference GetSmpte2038DataPreference() const { return m_smpte2038DataPreference; }
    inline bool Smpte2038DataPreferenceHasBeenSet() const { return m_smpte2038DataPreferenceHasBeenSet; }
    inline void SetSmpte2038DataPreference(Smpte2038DataPreference value) { m_smpte2038DataPreferenceHasBeenSet = true; m_smpte2038DataPreference = value; }
    inline InputSettings& WithSmpte2038DataPreference(Smpte2038DataPreference value) { SetSmpte2038DataPreference(value); return *this;}
    ///@}

    ///@{
    /**
     * Loop input if it is a file. This allows a file input to be streamed
     * indefinitely.
     */
    inline InputSourceEndBehavior GetSourceEndBehavior() const { return m_sourceEndBehavior; }
    inline bool SourceEndBehaviorHasBeenSet() const { return m_sourceEndBehaviorHasBeenSet; }
    inline void SetSourceEndBehavior(InputSourceEndBehavior value) { m_sourceEndBehaviorHasBeenSet = true; m_sourceEndBehavior = value; }
    inline InputSettings& WithSourceEndBehavior(InputSourceEndBehavior value) { SetSourceEndBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * Informs which video elementary stream to decode for input types that have
     * multiple available.
     */
    inline const VideoSelector& GetVideoSelector() const { return m_videoSelector; }
    inline bool VideoSelectorHasBeenSet() const { return m_videoSelectorHasBeenSet; }
    template<typename VideoSelectorT = VideoSelector>
    void SetVideoSelector(VideoSelectorT&& value) { m_videoSelectorHasBeenSet = true; m_videoSelector = std::forward<VideoSelectorT>(value); }
    template<typename VideoSelectorT = VideoSelector>
    InputSettings& WithVideoSelector(VideoSelectorT&& value) { SetVideoSelector(std::forward<VideoSelectorT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AudioSelector> m_audioSelectors;
    bool m_audioSelectorsHasBeenSet = false;

    Aws::Vector<CaptionSelector> m_captionSelectors;
    bool m_captionSelectorsHasBeenSet = false;

    InputDeblockFilter m_deblockFilter{InputDeblockFilter::NOT_SET};
    bool m_deblockFilterHasBeenSet = false;

    InputDenoiseFilter m_denoiseFilter{InputDenoiseFilter::NOT_SET};
    bool m_denoiseFilterHasBeenSet = false;

    int m_filterStrength{0};
    bool m_filterStrengthHasBeenSet = false;

    InputFilter m_inputFilter{InputFilter::NOT_SET};
    bool m_inputFilterHasBeenSet = false;

    NetworkInputSettings m_networkInputSettings;
    bool m_networkInputSettingsHasBeenSet = false;

    int m_scte35Pid{0};
    bool m_scte35PidHasBeenSet = false;

    Smpte2038DataPreference m_smpte2038DataPreference{Smpte2038DataPreference::NOT_SET};
    bool m_smpte2038DataPreferenceHasBeenSet = false;

    InputSourceEndBehavior m_sourceEndBehavior{InputSourceEndBehavior::NOT_SET};
    bool m_sourceEndBehaviorHasBeenSet = false;

    VideoSelector m_videoSelector;
    bool m_videoSelectorHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
