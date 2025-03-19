/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/HlsId3SegmentTaggingScheduleActionSettings.h>
#include <aws/medialive/model/HlsTimedMetadataScheduleActionSettings.h>
#include <aws/medialive/model/InputPrepareScheduleActionSettings.h>
#include <aws/medialive/model/InputSwitchScheduleActionSettings.h>
#include <aws/medialive/model/MotionGraphicsActivateScheduleActionSettings.h>
#include <aws/medialive/model/MotionGraphicsDeactivateScheduleActionSettings.h>
#include <aws/medialive/model/PauseStateScheduleActionSettings.h>
#include <aws/medialive/model/Scte35InputScheduleActionSettings.h>
#include <aws/medialive/model/Scte35ReturnToNetworkScheduleActionSettings.h>
#include <aws/medialive/model/Scte35SpliceInsertScheduleActionSettings.h>
#include <aws/medialive/model/Scte35TimeSignalScheduleActionSettings.h>
#include <aws/medialive/model/StaticImageActivateScheduleActionSettings.h>
#include <aws/medialive/model/StaticImageDeactivateScheduleActionSettings.h>
#include <aws/medialive/model/StaticImageOutputActivateScheduleActionSettings.h>
#include <aws/medialive/model/StaticImageOutputDeactivateScheduleActionSettings.h>
#include <aws/medialive/model/Id3SegmentTaggingScheduleActionSettings.h>
#include <aws/medialive/model/TimedMetadataScheduleActionSettings.h>
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
   * Holds the settings for a single schedule action.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class ScheduleActionSettings
  {
  public:
    AWS_MEDIALIVE_API ScheduleActionSettings() = default;
    AWS_MEDIALIVE_API ScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Action to insert ID3 metadata in every segment, in HLS output groups
     */
    inline const HlsId3SegmentTaggingScheduleActionSettings& GetHlsId3SegmentTaggingSettings() const { return m_hlsId3SegmentTaggingSettings; }
    inline bool HlsId3SegmentTaggingSettingsHasBeenSet() const { return m_hlsId3SegmentTaggingSettingsHasBeenSet; }
    template<typename HlsId3SegmentTaggingSettingsT = HlsId3SegmentTaggingScheduleActionSettings>
    void SetHlsId3SegmentTaggingSettings(HlsId3SegmentTaggingSettingsT&& value) { m_hlsId3SegmentTaggingSettingsHasBeenSet = true; m_hlsId3SegmentTaggingSettings = std::forward<HlsId3SegmentTaggingSettingsT>(value); }
    template<typename HlsId3SegmentTaggingSettingsT = HlsId3SegmentTaggingScheduleActionSettings>
    ScheduleActionSettings& WithHlsId3SegmentTaggingSettings(HlsId3SegmentTaggingSettingsT&& value) { SetHlsId3SegmentTaggingSettings(std::forward<HlsId3SegmentTaggingSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to insert ID3 metadata once, in HLS output groups
     */
    inline const HlsTimedMetadataScheduleActionSettings& GetHlsTimedMetadataSettings() const { return m_hlsTimedMetadataSettings; }
    inline bool HlsTimedMetadataSettingsHasBeenSet() const { return m_hlsTimedMetadataSettingsHasBeenSet; }
    template<typename HlsTimedMetadataSettingsT = HlsTimedMetadataScheduleActionSettings>
    void SetHlsTimedMetadataSettings(HlsTimedMetadataSettingsT&& value) { m_hlsTimedMetadataSettingsHasBeenSet = true; m_hlsTimedMetadataSettings = std::forward<HlsTimedMetadataSettingsT>(value); }
    template<typename HlsTimedMetadataSettingsT = HlsTimedMetadataScheduleActionSettings>
    ScheduleActionSettings& WithHlsTimedMetadataSettings(HlsTimedMetadataSettingsT&& value) { SetHlsTimedMetadataSettings(std::forward<HlsTimedMetadataSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to prepare an input for a future immediate input switch
     */
    inline const InputPrepareScheduleActionSettings& GetInputPrepareSettings() const { return m_inputPrepareSettings; }
    inline bool InputPrepareSettingsHasBeenSet() const { return m_inputPrepareSettingsHasBeenSet; }
    template<typename InputPrepareSettingsT = InputPrepareScheduleActionSettings>
    void SetInputPrepareSettings(InputPrepareSettingsT&& value) { m_inputPrepareSettingsHasBeenSet = true; m_inputPrepareSettings = std::forward<InputPrepareSettingsT>(value); }
    template<typename InputPrepareSettingsT = InputPrepareScheduleActionSettings>
    ScheduleActionSettings& WithInputPrepareSettings(InputPrepareSettingsT&& value) { SetInputPrepareSettings(std::forward<InputPrepareSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to switch the input
     */
    inline const InputSwitchScheduleActionSettings& GetInputSwitchSettings() const { return m_inputSwitchSettings; }
    inline bool InputSwitchSettingsHasBeenSet() const { return m_inputSwitchSettingsHasBeenSet; }
    template<typename InputSwitchSettingsT = InputSwitchScheduleActionSettings>
    void SetInputSwitchSettings(InputSwitchSettingsT&& value) { m_inputSwitchSettingsHasBeenSet = true; m_inputSwitchSettings = std::forward<InputSwitchSettingsT>(value); }
    template<typename InputSwitchSettingsT = InputSwitchScheduleActionSettings>
    ScheduleActionSettings& WithInputSwitchSettings(InputSwitchSettingsT&& value) { SetInputSwitchSettings(std::forward<InputSwitchSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to activate a motion graphics image overlay
     */
    inline const MotionGraphicsActivateScheduleActionSettings& GetMotionGraphicsImageActivateSettings() const { return m_motionGraphicsImageActivateSettings; }
    inline bool MotionGraphicsImageActivateSettingsHasBeenSet() const { return m_motionGraphicsImageActivateSettingsHasBeenSet; }
    template<typename MotionGraphicsImageActivateSettingsT = MotionGraphicsActivateScheduleActionSettings>
    void SetMotionGraphicsImageActivateSettings(MotionGraphicsImageActivateSettingsT&& value) { m_motionGraphicsImageActivateSettingsHasBeenSet = true; m_motionGraphicsImageActivateSettings = std::forward<MotionGraphicsImageActivateSettingsT>(value); }
    template<typename MotionGraphicsImageActivateSettingsT = MotionGraphicsActivateScheduleActionSettings>
    ScheduleActionSettings& WithMotionGraphicsImageActivateSettings(MotionGraphicsImageActivateSettingsT&& value) { SetMotionGraphicsImageActivateSettings(std::forward<MotionGraphicsImageActivateSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to deactivate a motion graphics image overlay
     */
    inline const MotionGraphicsDeactivateScheduleActionSettings& GetMotionGraphicsImageDeactivateSettings() const { return m_motionGraphicsImageDeactivateSettings; }
    inline bool MotionGraphicsImageDeactivateSettingsHasBeenSet() const { return m_motionGraphicsImageDeactivateSettingsHasBeenSet; }
    template<typename MotionGraphicsImageDeactivateSettingsT = MotionGraphicsDeactivateScheduleActionSettings>
    void SetMotionGraphicsImageDeactivateSettings(MotionGraphicsImageDeactivateSettingsT&& value) { m_motionGraphicsImageDeactivateSettingsHasBeenSet = true; m_motionGraphicsImageDeactivateSettings = std::forward<MotionGraphicsImageDeactivateSettingsT>(value); }
    template<typename MotionGraphicsImageDeactivateSettingsT = MotionGraphicsDeactivateScheduleActionSettings>
    ScheduleActionSettings& WithMotionGraphicsImageDeactivateSettings(MotionGraphicsImageDeactivateSettingsT&& value) { SetMotionGraphicsImageDeactivateSettings(std::forward<MotionGraphicsImageDeactivateSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to pause or unpause one or both channel pipelines
     */
    inline const PauseStateScheduleActionSettings& GetPauseStateSettings() const { return m_pauseStateSettings; }
    inline bool PauseStateSettingsHasBeenSet() const { return m_pauseStateSettingsHasBeenSet; }
    template<typename PauseStateSettingsT = PauseStateScheduleActionSettings>
    void SetPauseStateSettings(PauseStateSettingsT&& value) { m_pauseStateSettingsHasBeenSet = true; m_pauseStateSettings = std::forward<PauseStateSettingsT>(value); }
    template<typename PauseStateSettingsT = PauseStateScheduleActionSettings>
    ScheduleActionSettings& WithPauseStateSettings(PauseStateSettingsT&& value) { SetPauseStateSettings(std::forward<PauseStateSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to specify scte35 input
     */
    inline const Scte35InputScheduleActionSettings& GetScte35InputSettings() const { return m_scte35InputSettings; }
    inline bool Scte35InputSettingsHasBeenSet() const { return m_scte35InputSettingsHasBeenSet; }
    template<typename Scte35InputSettingsT = Scte35InputScheduleActionSettings>
    void SetScte35InputSettings(Scte35InputSettingsT&& value) { m_scte35InputSettingsHasBeenSet = true; m_scte35InputSettings = std::forward<Scte35InputSettingsT>(value); }
    template<typename Scte35InputSettingsT = Scte35InputScheduleActionSettings>
    ScheduleActionSettings& WithScte35InputSettings(Scte35InputSettingsT&& value) { SetScte35InputSettings(std::forward<Scte35InputSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to insert SCTE-35 return_to_network message
     */
    inline const Scte35ReturnToNetworkScheduleActionSettings& GetScte35ReturnToNetworkSettings() const { return m_scte35ReturnToNetworkSettings; }
    inline bool Scte35ReturnToNetworkSettingsHasBeenSet() const { return m_scte35ReturnToNetworkSettingsHasBeenSet; }
    template<typename Scte35ReturnToNetworkSettingsT = Scte35ReturnToNetworkScheduleActionSettings>
    void SetScte35ReturnToNetworkSettings(Scte35ReturnToNetworkSettingsT&& value) { m_scte35ReturnToNetworkSettingsHasBeenSet = true; m_scte35ReturnToNetworkSettings = std::forward<Scte35ReturnToNetworkSettingsT>(value); }
    template<typename Scte35ReturnToNetworkSettingsT = Scte35ReturnToNetworkScheduleActionSettings>
    ScheduleActionSettings& WithScte35ReturnToNetworkSettings(Scte35ReturnToNetworkSettingsT&& value) { SetScte35ReturnToNetworkSettings(std::forward<Scte35ReturnToNetworkSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to insert SCTE-35 splice_insert message
     */
    inline const Scte35SpliceInsertScheduleActionSettings& GetScte35SpliceInsertSettings() const { return m_scte35SpliceInsertSettings; }
    inline bool Scte35SpliceInsertSettingsHasBeenSet() const { return m_scte35SpliceInsertSettingsHasBeenSet; }
    template<typename Scte35SpliceInsertSettingsT = Scte35SpliceInsertScheduleActionSettings>
    void SetScte35SpliceInsertSettings(Scte35SpliceInsertSettingsT&& value) { m_scte35SpliceInsertSettingsHasBeenSet = true; m_scte35SpliceInsertSettings = std::forward<Scte35SpliceInsertSettingsT>(value); }
    template<typename Scte35SpliceInsertSettingsT = Scte35SpliceInsertScheduleActionSettings>
    ScheduleActionSettings& WithScte35SpliceInsertSettings(Scte35SpliceInsertSettingsT&& value) { SetScte35SpliceInsertSettings(std::forward<Scte35SpliceInsertSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to insert SCTE-35 time_signal message
     */
    inline const Scte35TimeSignalScheduleActionSettings& GetScte35TimeSignalSettings() const { return m_scte35TimeSignalSettings; }
    inline bool Scte35TimeSignalSettingsHasBeenSet() const { return m_scte35TimeSignalSettingsHasBeenSet; }
    template<typename Scte35TimeSignalSettingsT = Scte35TimeSignalScheduleActionSettings>
    void SetScte35TimeSignalSettings(Scte35TimeSignalSettingsT&& value) { m_scte35TimeSignalSettingsHasBeenSet = true; m_scte35TimeSignalSettings = std::forward<Scte35TimeSignalSettingsT>(value); }
    template<typename Scte35TimeSignalSettingsT = Scte35TimeSignalScheduleActionSettings>
    ScheduleActionSettings& WithScte35TimeSignalSettings(Scte35TimeSignalSettingsT&& value) { SetScte35TimeSignalSettings(std::forward<Scte35TimeSignalSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to activate a static image overlay
     */
    inline const StaticImageActivateScheduleActionSettings& GetStaticImageActivateSettings() const { return m_staticImageActivateSettings; }
    inline bool StaticImageActivateSettingsHasBeenSet() const { return m_staticImageActivateSettingsHasBeenSet; }
    template<typename StaticImageActivateSettingsT = StaticImageActivateScheduleActionSettings>
    void SetStaticImageActivateSettings(StaticImageActivateSettingsT&& value) { m_staticImageActivateSettingsHasBeenSet = true; m_staticImageActivateSettings = std::forward<StaticImageActivateSettingsT>(value); }
    template<typename StaticImageActivateSettingsT = StaticImageActivateScheduleActionSettings>
    ScheduleActionSettings& WithStaticImageActivateSettings(StaticImageActivateSettingsT&& value) { SetStaticImageActivateSettings(std::forward<StaticImageActivateSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to deactivate a static image overlay
     */
    inline const StaticImageDeactivateScheduleActionSettings& GetStaticImageDeactivateSettings() const { return m_staticImageDeactivateSettings; }
    inline bool StaticImageDeactivateSettingsHasBeenSet() const { return m_staticImageDeactivateSettingsHasBeenSet; }
    template<typename StaticImageDeactivateSettingsT = StaticImageDeactivateScheduleActionSettings>
    void SetStaticImageDeactivateSettings(StaticImageDeactivateSettingsT&& value) { m_staticImageDeactivateSettingsHasBeenSet = true; m_staticImageDeactivateSettings = std::forward<StaticImageDeactivateSettingsT>(value); }
    template<typename StaticImageDeactivateSettingsT = StaticImageDeactivateScheduleActionSettings>
    ScheduleActionSettings& WithStaticImageDeactivateSettings(StaticImageDeactivateSettingsT&& value) { SetStaticImageDeactivateSettings(std::forward<StaticImageDeactivateSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to activate a static image overlay in one or more specified outputs
     */
    inline const StaticImageOutputActivateScheduleActionSettings& GetStaticImageOutputActivateSettings() const { return m_staticImageOutputActivateSettings; }
    inline bool StaticImageOutputActivateSettingsHasBeenSet() const { return m_staticImageOutputActivateSettingsHasBeenSet; }
    template<typename StaticImageOutputActivateSettingsT = StaticImageOutputActivateScheduleActionSettings>
    void SetStaticImageOutputActivateSettings(StaticImageOutputActivateSettingsT&& value) { m_staticImageOutputActivateSettingsHasBeenSet = true; m_staticImageOutputActivateSettings = std::forward<StaticImageOutputActivateSettingsT>(value); }
    template<typename StaticImageOutputActivateSettingsT = StaticImageOutputActivateScheduleActionSettings>
    ScheduleActionSettings& WithStaticImageOutputActivateSettings(StaticImageOutputActivateSettingsT&& value) { SetStaticImageOutputActivateSettings(std::forward<StaticImageOutputActivateSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to deactivate a static image overlay in one or more specified outputs
     */
    inline const StaticImageOutputDeactivateScheduleActionSettings& GetStaticImageOutputDeactivateSettings() const { return m_staticImageOutputDeactivateSettings; }
    inline bool StaticImageOutputDeactivateSettingsHasBeenSet() const { return m_staticImageOutputDeactivateSettingsHasBeenSet; }
    template<typename StaticImageOutputDeactivateSettingsT = StaticImageOutputDeactivateScheduleActionSettings>
    void SetStaticImageOutputDeactivateSettings(StaticImageOutputDeactivateSettingsT&& value) { m_staticImageOutputDeactivateSettingsHasBeenSet = true; m_staticImageOutputDeactivateSettings = std::forward<StaticImageOutputDeactivateSettingsT>(value); }
    template<typename StaticImageOutputDeactivateSettingsT = StaticImageOutputDeactivateScheduleActionSettings>
    ScheduleActionSettings& WithStaticImageOutputDeactivateSettings(StaticImageOutputDeactivateSettingsT&& value) { SetStaticImageOutputDeactivateSettings(std::forward<StaticImageOutputDeactivateSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to insert ID3 metadata in every segment, in applicable output groups
     */
    inline const Id3SegmentTaggingScheduleActionSettings& GetId3SegmentTaggingSettings() const { return m_id3SegmentTaggingSettings; }
    inline bool Id3SegmentTaggingSettingsHasBeenSet() const { return m_id3SegmentTaggingSettingsHasBeenSet; }
    template<typename Id3SegmentTaggingSettingsT = Id3SegmentTaggingScheduleActionSettings>
    void SetId3SegmentTaggingSettings(Id3SegmentTaggingSettingsT&& value) { m_id3SegmentTaggingSettingsHasBeenSet = true; m_id3SegmentTaggingSettings = std::forward<Id3SegmentTaggingSettingsT>(value); }
    template<typename Id3SegmentTaggingSettingsT = Id3SegmentTaggingScheduleActionSettings>
    ScheduleActionSettings& WithId3SegmentTaggingSettings(Id3SegmentTaggingSettingsT&& value) { SetId3SegmentTaggingSettings(std::forward<Id3SegmentTaggingSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to insert ID3 metadata once, in applicable output groups
     */
    inline const TimedMetadataScheduleActionSettings& GetTimedMetadataSettings() const { return m_timedMetadataSettings; }
    inline bool TimedMetadataSettingsHasBeenSet() const { return m_timedMetadataSettingsHasBeenSet; }
    template<typename TimedMetadataSettingsT = TimedMetadataScheduleActionSettings>
    void SetTimedMetadataSettings(TimedMetadataSettingsT&& value) { m_timedMetadataSettingsHasBeenSet = true; m_timedMetadataSettings = std::forward<TimedMetadataSettingsT>(value); }
    template<typename TimedMetadataSettingsT = TimedMetadataScheduleActionSettings>
    ScheduleActionSettings& WithTimedMetadataSettings(TimedMetadataSettingsT&& value) { SetTimedMetadataSettings(std::forward<TimedMetadataSettingsT>(value)); return *this;}
    ///@}
  private:

    HlsId3SegmentTaggingScheduleActionSettings m_hlsId3SegmentTaggingSettings;
    bool m_hlsId3SegmentTaggingSettingsHasBeenSet = false;

    HlsTimedMetadataScheduleActionSettings m_hlsTimedMetadataSettings;
    bool m_hlsTimedMetadataSettingsHasBeenSet = false;

    InputPrepareScheduleActionSettings m_inputPrepareSettings;
    bool m_inputPrepareSettingsHasBeenSet = false;

    InputSwitchScheduleActionSettings m_inputSwitchSettings;
    bool m_inputSwitchSettingsHasBeenSet = false;

    MotionGraphicsActivateScheduleActionSettings m_motionGraphicsImageActivateSettings;
    bool m_motionGraphicsImageActivateSettingsHasBeenSet = false;

    MotionGraphicsDeactivateScheduleActionSettings m_motionGraphicsImageDeactivateSettings;
    bool m_motionGraphicsImageDeactivateSettingsHasBeenSet = false;

    PauseStateScheduleActionSettings m_pauseStateSettings;
    bool m_pauseStateSettingsHasBeenSet = false;

    Scte35InputScheduleActionSettings m_scte35InputSettings;
    bool m_scte35InputSettingsHasBeenSet = false;

    Scte35ReturnToNetworkScheduleActionSettings m_scte35ReturnToNetworkSettings;
    bool m_scte35ReturnToNetworkSettingsHasBeenSet = false;

    Scte35SpliceInsertScheduleActionSettings m_scte35SpliceInsertSettings;
    bool m_scte35SpliceInsertSettingsHasBeenSet = false;

    Scte35TimeSignalScheduleActionSettings m_scte35TimeSignalSettings;
    bool m_scte35TimeSignalSettingsHasBeenSet = false;

    StaticImageActivateScheduleActionSettings m_staticImageActivateSettings;
    bool m_staticImageActivateSettingsHasBeenSet = false;

    StaticImageDeactivateScheduleActionSettings m_staticImageDeactivateSettings;
    bool m_staticImageDeactivateSettingsHasBeenSet = false;

    StaticImageOutputActivateScheduleActionSettings m_staticImageOutputActivateSettings;
    bool m_staticImageOutputActivateSettingsHasBeenSet = false;

    StaticImageOutputDeactivateScheduleActionSettings m_staticImageOutputDeactivateSettings;
    bool m_staticImageOutputDeactivateSettingsHasBeenSet = false;

    Id3SegmentTaggingScheduleActionSettings m_id3SegmentTaggingSettings;
    bool m_id3SegmentTaggingSettingsHasBeenSet = false;

    TimedMetadataScheduleActionSettings m_timedMetadataSettings;
    bool m_timedMetadataSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
