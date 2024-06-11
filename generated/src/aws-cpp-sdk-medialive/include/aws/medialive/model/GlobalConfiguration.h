﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/GlobalConfigurationInputEndAction.h>
#include <aws/medialive/model/InputLossBehavior.h>
#include <aws/medialive/model/GlobalConfigurationOutputLockingMode.h>
#include <aws/medialive/model/GlobalConfigurationOutputTimingSource.h>
#include <aws/medialive/model/GlobalConfigurationLowFramerateInputs.h>
#include <aws/medialive/model/OutputLockingSettings.h>
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
   * Global Configuration<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/GlobalConfiguration">AWS
   * API Reference</a></p>
   */
  class GlobalConfiguration
  {
  public:
    AWS_MEDIALIVE_API GlobalConfiguration();
    AWS_MEDIALIVE_API GlobalConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API GlobalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Value to set the initial audio gain for the Live Event.
     */
    inline int GetInitialAudioGain() const{ return m_initialAudioGain; }
    inline bool InitialAudioGainHasBeenSet() const { return m_initialAudioGainHasBeenSet; }
    inline void SetInitialAudioGain(int value) { m_initialAudioGainHasBeenSet = true; m_initialAudioGain = value; }
    inline GlobalConfiguration& WithInitialAudioGain(int value) { SetInitialAudioGain(value); return *this;}
    ///@}

    ///@{
    /**
     * Indicates the action to take when the current input completes (e.g.
     * end-of-file). When switchAndLoopInputs is configured the encoder will restart at
     * the beginning of the first input.  When "none" is configured the encoder will
     * transcode either black, a solid color, or a user specified slate images per the
     * "Input Loss Behavior" configuration until the next input switch occurs (which is
     * controlled through the Channel Schedule API).
     */
    inline const GlobalConfigurationInputEndAction& GetInputEndAction() const{ return m_inputEndAction; }
    inline bool InputEndActionHasBeenSet() const { return m_inputEndActionHasBeenSet; }
    inline void SetInputEndAction(const GlobalConfigurationInputEndAction& value) { m_inputEndActionHasBeenSet = true; m_inputEndAction = value; }
    inline void SetInputEndAction(GlobalConfigurationInputEndAction&& value) { m_inputEndActionHasBeenSet = true; m_inputEndAction = std::move(value); }
    inline GlobalConfiguration& WithInputEndAction(const GlobalConfigurationInputEndAction& value) { SetInputEndAction(value); return *this;}
    inline GlobalConfiguration& WithInputEndAction(GlobalConfigurationInputEndAction&& value) { SetInputEndAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings for system actions when input is lost.
     */
    inline const InputLossBehavior& GetInputLossBehavior() const{ return m_inputLossBehavior; }
    inline bool InputLossBehaviorHasBeenSet() const { return m_inputLossBehaviorHasBeenSet; }
    inline void SetInputLossBehavior(const InputLossBehavior& value) { m_inputLossBehaviorHasBeenSet = true; m_inputLossBehavior = value; }
    inline void SetInputLossBehavior(InputLossBehavior&& value) { m_inputLossBehaviorHasBeenSet = true; m_inputLossBehavior = std::move(value); }
    inline GlobalConfiguration& WithInputLossBehavior(const InputLossBehavior& value) { SetInputLossBehavior(value); return *this;}
    inline GlobalConfiguration& WithInputLossBehavior(InputLossBehavior&& value) { SetInputLossBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Indicates how MediaLive pipelines are synchronized.

PIPELINE_LOCKING -
     * MediaLive will attempt to synchronize the output of each pipeline to the
     * other.
EPOCH_LOCKING - MediaLive will attempt to synchronize the output of each
     * pipeline to the Unix epoch.
     */
    inline const GlobalConfigurationOutputLockingMode& GetOutputLockingMode() const{ return m_outputLockingMode; }
    inline bool OutputLockingModeHasBeenSet() const { return m_outputLockingModeHasBeenSet; }
    inline void SetOutputLockingMode(const GlobalConfigurationOutputLockingMode& value) { m_outputLockingModeHasBeenSet = true; m_outputLockingMode = value; }
    inline void SetOutputLockingMode(GlobalConfigurationOutputLockingMode&& value) { m_outputLockingModeHasBeenSet = true; m_outputLockingMode = std::move(value); }
    inline GlobalConfiguration& WithOutputLockingMode(const GlobalConfigurationOutputLockingMode& value) { SetOutputLockingMode(value); return *this;}
    inline GlobalConfiguration& WithOutputLockingMode(GlobalConfigurationOutputLockingMode&& value) { SetOutputLockingMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Indicates whether the rate of frames emitted by the Live encoder should be paced
     * by its system clock (which optionally may be locked to another source via NTP)
     * or should be locked to the clock of the source that is providing the input
     * stream.
     */
    inline const GlobalConfigurationOutputTimingSource& GetOutputTimingSource() const{ return m_outputTimingSource; }
    inline bool OutputTimingSourceHasBeenSet() const { return m_outputTimingSourceHasBeenSet; }
    inline void SetOutputTimingSource(const GlobalConfigurationOutputTimingSource& value) { m_outputTimingSourceHasBeenSet = true; m_outputTimingSource = value; }
    inline void SetOutputTimingSource(GlobalConfigurationOutputTimingSource&& value) { m_outputTimingSourceHasBeenSet = true; m_outputTimingSource = std::move(value); }
    inline GlobalConfiguration& WithOutputTimingSource(const GlobalConfigurationOutputTimingSource& value) { SetOutputTimingSource(value); return *this;}
    inline GlobalConfiguration& WithOutputTimingSource(GlobalConfigurationOutputTimingSource&& value) { SetOutputTimingSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Adjusts video input buffer for streams with very low video framerates. This is
     * commonly set to enabled for music channels with less than one video frame per
     * second.
     */
    inline const GlobalConfigurationLowFramerateInputs& GetSupportLowFramerateInputs() const{ return m_supportLowFramerateInputs; }
    inline bool SupportLowFramerateInputsHasBeenSet() const { return m_supportLowFramerateInputsHasBeenSet; }
    inline void SetSupportLowFramerateInputs(const GlobalConfigurationLowFramerateInputs& value) { m_supportLowFramerateInputsHasBeenSet = true; m_supportLowFramerateInputs = value; }
    inline void SetSupportLowFramerateInputs(GlobalConfigurationLowFramerateInputs&& value) { m_supportLowFramerateInputsHasBeenSet = true; m_supportLowFramerateInputs = std::move(value); }
    inline GlobalConfiguration& WithSupportLowFramerateInputs(const GlobalConfigurationLowFramerateInputs& value) { SetSupportLowFramerateInputs(value); return *this;}
    inline GlobalConfiguration& WithSupportLowFramerateInputs(GlobalConfigurationLowFramerateInputs&& value) { SetSupportLowFramerateInputs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Advanced output locking settings
     */
    inline const OutputLockingSettings& GetOutputLockingSettings() const{ return m_outputLockingSettings; }
    inline bool OutputLockingSettingsHasBeenSet() const { return m_outputLockingSettingsHasBeenSet; }
    inline void SetOutputLockingSettings(const OutputLockingSettings& value) { m_outputLockingSettingsHasBeenSet = true; m_outputLockingSettings = value; }
    inline void SetOutputLockingSettings(OutputLockingSettings&& value) { m_outputLockingSettingsHasBeenSet = true; m_outputLockingSettings = std::move(value); }
    inline GlobalConfiguration& WithOutputLockingSettings(const OutputLockingSettings& value) { SetOutputLockingSettings(value); return *this;}
    inline GlobalConfiguration& WithOutputLockingSettings(OutputLockingSettings&& value) { SetOutputLockingSettings(std::move(value)); return *this;}
    ///@}
  private:

    int m_initialAudioGain;
    bool m_initialAudioGainHasBeenSet = false;

    GlobalConfigurationInputEndAction m_inputEndAction;
    bool m_inputEndActionHasBeenSet = false;

    InputLossBehavior m_inputLossBehavior;
    bool m_inputLossBehaviorHasBeenSet = false;

    GlobalConfigurationOutputLockingMode m_outputLockingMode;
    bool m_outputLockingModeHasBeenSet = false;

    GlobalConfigurationOutputTimingSource m_outputTimingSource;
    bool m_outputTimingSourceHasBeenSet = false;

    GlobalConfigurationLowFramerateInputs m_supportLowFramerateInputs;
    bool m_supportLowFramerateInputsHasBeenSet = false;

    OutputLockingSettings m_outputLockingSettings;
    bool m_outputLockingSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
