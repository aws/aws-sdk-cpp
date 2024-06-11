﻿/**
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
    AWS_MEDIALIVE_API ScheduleActionSettings();
    AWS_MEDIALIVE_API ScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Action to insert HLS ID3 segment tagging
     */
    inline const HlsId3SegmentTaggingScheduleActionSettings& GetHlsId3SegmentTaggingSettings() const{ return m_hlsId3SegmentTaggingSettings; }
    inline bool HlsId3SegmentTaggingSettingsHasBeenSet() const { return m_hlsId3SegmentTaggingSettingsHasBeenSet; }
    inline void SetHlsId3SegmentTaggingSettings(const HlsId3SegmentTaggingScheduleActionSettings& value) { m_hlsId3SegmentTaggingSettingsHasBeenSet = true; m_hlsId3SegmentTaggingSettings = value; }
    inline void SetHlsId3SegmentTaggingSettings(HlsId3SegmentTaggingScheduleActionSettings&& value) { m_hlsId3SegmentTaggingSettingsHasBeenSet = true; m_hlsId3SegmentTaggingSettings = std::move(value); }
    inline ScheduleActionSettings& WithHlsId3SegmentTaggingSettings(const HlsId3SegmentTaggingScheduleActionSettings& value) { SetHlsId3SegmentTaggingSettings(value); return *this;}
    inline ScheduleActionSettings& WithHlsId3SegmentTaggingSettings(HlsId3SegmentTaggingScheduleActionSettings&& value) { SetHlsId3SegmentTaggingSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to insert HLS metadata
     */
    inline const HlsTimedMetadataScheduleActionSettings& GetHlsTimedMetadataSettings() const{ return m_hlsTimedMetadataSettings; }
    inline bool HlsTimedMetadataSettingsHasBeenSet() const { return m_hlsTimedMetadataSettingsHasBeenSet; }
    inline void SetHlsTimedMetadataSettings(const HlsTimedMetadataScheduleActionSettings& value) { m_hlsTimedMetadataSettingsHasBeenSet = true; m_hlsTimedMetadataSettings = value; }
    inline void SetHlsTimedMetadataSettings(HlsTimedMetadataScheduleActionSettings&& value) { m_hlsTimedMetadataSettingsHasBeenSet = true; m_hlsTimedMetadataSettings = std::move(value); }
    inline ScheduleActionSettings& WithHlsTimedMetadataSettings(const HlsTimedMetadataScheduleActionSettings& value) { SetHlsTimedMetadataSettings(value); return *this;}
    inline ScheduleActionSettings& WithHlsTimedMetadataSettings(HlsTimedMetadataScheduleActionSettings&& value) { SetHlsTimedMetadataSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to prepare an input for a future immediate input switch
     */
    inline const InputPrepareScheduleActionSettings& GetInputPrepareSettings() const{ return m_inputPrepareSettings; }
    inline bool InputPrepareSettingsHasBeenSet() const { return m_inputPrepareSettingsHasBeenSet; }
    inline void SetInputPrepareSettings(const InputPrepareScheduleActionSettings& value) { m_inputPrepareSettingsHasBeenSet = true; m_inputPrepareSettings = value; }
    inline void SetInputPrepareSettings(InputPrepareScheduleActionSettings&& value) { m_inputPrepareSettingsHasBeenSet = true; m_inputPrepareSettings = std::move(value); }
    inline ScheduleActionSettings& WithInputPrepareSettings(const InputPrepareScheduleActionSettings& value) { SetInputPrepareSettings(value); return *this;}
    inline ScheduleActionSettings& WithInputPrepareSettings(InputPrepareScheduleActionSettings&& value) { SetInputPrepareSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to switch the input
     */
    inline const InputSwitchScheduleActionSettings& GetInputSwitchSettings() const{ return m_inputSwitchSettings; }
    inline bool InputSwitchSettingsHasBeenSet() const { return m_inputSwitchSettingsHasBeenSet; }
    inline void SetInputSwitchSettings(const InputSwitchScheduleActionSettings& value) { m_inputSwitchSettingsHasBeenSet = true; m_inputSwitchSettings = value; }
    inline void SetInputSwitchSettings(InputSwitchScheduleActionSettings&& value) { m_inputSwitchSettingsHasBeenSet = true; m_inputSwitchSettings = std::move(value); }
    inline ScheduleActionSettings& WithInputSwitchSettings(const InputSwitchScheduleActionSettings& value) { SetInputSwitchSettings(value); return *this;}
    inline ScheduleActionSettings& WithInputSwitchSettings(InputSwitchScheduleActionSettings&& value) { SetInputSwitchSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to activate a motion graphics image overlay
     */
    inline const MotionGraphicsActivateScheduleActionSettings& GetMotionGraphicsImageActivateSettings() const{ return m_motionGraphicsImageActivateSettings; }
    inline bool MotionGraphicsImageActivateSettingsHasBeenSet() const { return m_motionGraphicsImageActivateSettingsHasBeenSet; }
    inline void SetMotionGraphicsImageActivateSettings(const MotionGraphicsActivateScheduleActionSettings& value) { m_motionGraphicsImageActivateSettingsHasBeenSet = true; m_motionGraphicsImageActivateSettings = value; }
    inline void SetMotionGraphicsImageActivateSettings(MotionGraphicsActivateScheduleActionSettings&& value) { m_motionGraphicsImageActivateSettingsHasBeenSet = true; m_motionGraphicsImageActivateSettings = std::move(value); }
    inline ScheduleActionSettings& WithMotionGraphicsImageActivateSettings(const MotionGraphicsActivateScheduleActionSettings& value) { SetMotionGraphicsImageActivateSettings(value); return *this;}
    inline ScheduleActionSettings& WithMotionGraphicsImageActivateSettings(MotionGraphicsActivateScheduleActionSettings&& value) { SetMotionGraphicsImageActivateSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to deactivate a motion graphics image overlay
     */
    inline const MotionGraphicsDeactivateScheduleActionSettings& GetMotionGraphicsImageDeactivateSettings() const{ return m_motionGraphicsImageDeactivateSettings; }
    inline bool MotionGraphicsImageDeactivateSettingsHasBeenSet() const { return m_motionGraphicsImageDeactivateSettingsHasBeenSet; }
    inline void SetMotionGraphicsImageDeactivateSettings(const MotionGraphicsDeactivateScheduleActionSettings& value) { m_motionGraphicsImageDeactivateSettingsHasBeenSet = true; m_motionGraphicsImageDeactivateSettings = value; }
    inline void SetMotionGraphicsImageDeactivateSettings(MotionGraphicsDeactivateScheduleActionSettings&& value) { m_motionGraphicsImageDeactivateSettingsHasBeenSet = true; m_motionGraphicsImageDeactivateSettings = std::move(value); }
    inline ScheduleActionSettings& WithMotionGraphicsImageDeactivateSettings(const MotionGraphicsDeactivateScheduleActionSettings& value) { SetMotionGraphicsImageDeactivateSettings(value); return *this;}
    inline ScheduleActionSettings& WithMotionGraphicsImageDeactivateSettings(MotionGraphicsDeactivateScheduleActionSettings&& value) { SetMotionGraphicsImageDeactivateSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to pause or unpause one or both channel pipelines
     */
    inline const PauseStateScheduleActionSettings& GetPauseStateSettings() const{ return m_pauseStateSettings; }
    inline bool PauseStateSettingsHasBeenSet() const { return m_pauseStateSettingsHasBeenSet; }
    inline void SetPauseStateSettings(const PauseStateScheduleActionSettings& value) { m_pauseStateSettingsHasBeenSet = true; m_pauseStateSettings = value; }
    inline void SetPauseStateSettings(PauseStateScheduleActionSettings&& value) { m_pauseStateSettingsHasBeenSet = true; m_pauseStateSettings = std::move(value); }
    inline ScheduleActionSettings& WithPauseStateSettings(const PauseStateScheduleActionSettings& value) { SetPauseStateSettings(value); return *this;}
    inline ScheduleActionSettings& WithPauseStateSettings(PauseStateScheduleActionSettings&& value) { SetPauseStateSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to specify scte35 input
     */
    inline const Scte35InputScheduleActionSettings& GetScte35InputSettings() const{ return m_scte35InputSettings; }
    inline bool Scte35InputSettingsHasBeenSet() const { return m_scte35InputSettingsHasBeenSet; }
    inline void SetScte35InputSettings(const Scte35InputScheduleActionSettings& value) { m_scte35InputSettingsHasBeenSet = true; m_scte35InputSettings = value; }
    inline void SetScte35InputSettings(Scte35InputScheduleActionSettings&& value) { m_scte35InputSettingsHasBeenSet = true; m_scte35InputSettings = std::move(value); }
    inline ScheduleActionSettings& WithScte35InputSettings(const Scte35InputScheduleActionSettings& value) { SetScte35InputSettings(value); return *this;}
    inline ScheduleActionSettings& WithScte35InputSettings(Scte35InputScheduleActionSettings&& value) { SetScte35InputSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to insert SCTE-35 return_to_network message
     */
    inline const Scte35ReturnToNetworkScheduleActionSettings& GetScte35ReturnToNetworkSettings() const{ return m_scte35ReturnToNetworkSettings; }
    inline bool Scte35ReturnToNetworkSettingsHasBeenSet() const { return m_scte35ReturnToNetworkSettingsHasBeenSet; }
    inline void SetScte35ReturnToNetworkSettings(const Scte35ReturnToNetworkScheduleActionSettings& value) { m_scte35ReturnToNetworkSettingsHasBeenSet = true; m_scte35ReturnToNetworkSettings = value; }
    inline void SetScte35ReturnToNetworkSettings(Scte35ReturnToNetworkScheduleActionSettings&& value) { m_scte35ReturnToNetworkSettingsHasBeenSet = true; m_scte35ReturnToNetworkSettings = std::move(value); }
    inline ScheduleActionSettings& WithScte35ReturnToNetworkSettings(const Scte35ReturnToNetworkScheduleActionSettings& value) { SetScte35ReturnToNetworkSettings(value); return *this;}
    inline ScheduleActionSettings& WithScte35ReturnToNetworkSettings(Scte35ReturnToNetworkScheduleActionSettings&& value) { SetScte35ReturnToNetworkSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to insert SCTE-35 splice_insert message
     */
    inline const Scte35SpliceInsertScheduleActionSettings& GetScte35SpliceInsertSettings() const{ return m_scte35SpliceInsertSettings; }
    inline bool Scte35SpliceInsertSettingsHasBeenSet() const { return m_scte35SpliceInsertSettingsHasBeenSet; }
    inline void SetScte35SpliceInsertSettings(const Scte35SpliceInsertScheduleActionSettings& value) { m_scte35SpliceInsertSettingsHasBeenSet = true; m_scte35SpliceInsertSettings = value; }
    inline void SetScte35SpliceInsertSettings(Scte35SpliceInsertScheduleActionSettings&& value) { m_scte35SpliceInsertSettingsHasBeenSet = true; m_scte35SpliceInsertSettings = std::move(value); }
    inline ScheduleActionSettings& WithScte35SpliceInsertSettings(const Scte35SpliceInsertScheduleActionSettings& value) { SetScte35SpliceInsertSettings(value); return *this;}
    inline ScheduleActionSettings& WithScte35SpliceInsertSettings(Scte35SpliceInsertScheduleActionSettings&& value) { SetScte35SpliceInsertSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to insert SCTE-35 time_signal message
     */
    inline const Scte35TimeSignalScheduleActionSettings& GetScte35TimeSignalSettings() const{ return m_scte35TimeSignalSettings; }
    inline bool Scte35TimeSignalSettingsHasBeenSet() const { return m_scte35TimeSignalSettingsHasBeenSet; }
    inline void SetScte35TimeSignalSettings(const Scte35TimeSignalScheduleActionSettings& value) { m_scte35TimeSignalSettingsHasBeenSet = true; m_scte35TimeSignalSettings = value; }
    inline void SetScte35TimeSignalSettings(Scte35TimeSignalScheduleActionSettings&& value) { m_scte35TimeSignalSettingsHasBeenSet = true; m_scte35TimeSignalSettings = std::move(value); }
    inline ScheduleActionSettings& WithScte35TimeSignalSettings(const Scte35TimeSignalScheduleActionSettings& value) { SetScte35TimeSignalSettings(value); return *this;}
    inline ScheduleActionSettings& WithScte35TimeSignalSettings(Scte35TimeSignalScheduleActionSettings&& value) { SetScte35TimeSignalSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to activate a static image overlay
     */
    inline const StaticImageActivateScheduleActionSettings& GetStaticImageActivateSettings() const{ return m_staticImageActivateSettings; }
    inline bool StaticImageActivateSettingsHasBeenSet() const { return m_staticImageActivateSettingsHasBeenSet; }
    inline void SetStaticImageActivateSettings(const StaticImageActivateScheduleActionSettings& value) { m_staticImageActivateSettingsHasBeenSet = true; m_staticImageActivateSettings = value; }
    inline void SetStaticImageActivateSettings(StaticImageActivateScheduleActionSettings&& value) { m_staticImageActivateSettingsHasBeenSet = true; m_staticImageActivateSettings = std::move(value); }
    inline ScheduleActionSettings& WithStaticImageActivateSettings(const StaticImageActivateScheduleActionSettings& value) { SetStaticImageActivateSettings(value); return *this;}
    inline ScheduleActionSettings& WithStaticImageActivateSettings(StaticImageActivateScheduleActionSettings&& value) { SetStaticImageActivateSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to deactivate a static image overlay
     */
    inline const StaticImageDeactivateScheduleActionSettings& GetStaticImageDeactivateSettings() const{ return m_staticImageDeactivateSettings; }
    inline bool StaticImageDeactivateSettingsHasBeenSet() const { return m_staticImageDeactivateSettingsHasBeenSet; }
    inline void SetStaticImageDeactivateSettings(const StaticImageDeactivateScheduleActionSettings& value) { m_staticImageDeactivateSettingsHasBeenSet = true; m_staticImageDeactivateSettings = value; }
    inline void SetStaticImageDeactivateSettings(StaticImageDeactivateScheduleActionSettings&& value) { m_staticImageDeactivateSettingsHasBeenSet = true; m_staticImageDeactivateSettings = std::move(value); }
    inline ScheduleActionSettings& WithStaticImageDeactivateSettings(const StaticImageDeactivateScheduleActionSettings& value) { SetStaticImageDeactivateSettings(value); return *this;}
    inline ScheduleActionSettings& WithStaticImageDeactivateSettings(StaticImageDeactivateScheduleActionSettings&& value) { SetStaticImageDeactivateSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to activate a static image overlay in one or more specified outputs
     */
    inline const StaticImageOutputActivateScheduleActionSettings& GetStaticImageOutputActivateSettings() const{ return m_staticImageOutputActivateSettings; }
    inline bool StaticImageOutputActivateSettingsHasBeenSet() const { return m_staticImageOutputActivateSettingsHasBeenSet; }
    inline void SetStaticImageOutputActivateSettings(const StaticImageOutputActivateScheduleActionSettings& value) { m_staticImageOutputActivateSettingsHasBeenSet = true; m_staticImageOutputActivateSettings = value; }
    inline void SetStaticImageOutputActivateSettings(StaticImageOutputActivateScheduleActionSettings&& value) { m_staticImageOutputActivateSettingsHasBeenSet = true; m_staticImageOutputActivateSettings = std::move(value); }
    inline ScheduleActionSettings& WithStaticImageOutputActivateSettings(const StaticImageOutputActivateScheduleActionSettings& value) { SetStaticImageOutputActivateSettings(value); return *this;}
    inline ScheduleActionSettings& WithStaticImageOutputActivateSettings(StaticImageOutputActivateScheduleActionSettings&& value) { SetStaticImageOutputActivateSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Action to deactivate a static image overlay in one or more specified outputs
     */
    inline const StaticImageOutputDeactivateScheduleActionSettings& GetStaticImageOutputDeactivateSettings() const{ return m_staticImageOutputDeactivateSettings; }
    inline bool StaticImageOutputDeactivateSettingsHasBeenSet() const { return m_staticImageOutputDeactivateSettingsHasBeenSet; }
    inline void SetStaticImageOutputDeactivateSettings(const StaticImageOutputDeactivateScheduleActionSettings& value) { m_staticImageOutputDeactivateSettingsHasBeenSet = true; m_staticImageOutputDeactivateSettings = value; }
    inline void SetStaticImageOutputDeactivateSettings(StaticImageOutputDeactivateScheduleActionSettings&& value) { m_staticImageOutputDeactivateSettingsHasBeenSet = true; m_staticImageOutputDeactivateSettings = std::move(value); }
    inline ScheduleActionSettings& WithStaticImageOutputDeactivateSettings(const StaticImageOutputDeactivateScheduleActionSettings& value) { SetStaticImageOutputDeactivateSettings(value); return *this;}
    inline ScheduleActionSettings& WithStaticImageOutputDeactivateSettings(StaticImageOutputDeactivateScheduleActionSettings&& value) { SetStaticImageOutputDeactivateSettings(std::move(value)); return *this;}
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
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
