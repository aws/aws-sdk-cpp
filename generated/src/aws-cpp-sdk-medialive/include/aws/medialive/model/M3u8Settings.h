﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/M3u8NielsenId3Behavior.h>
#include <aws/medialive/model/M3u8PcrControl.h>
#include <aws/medialive/model/M3u8Scte35Behavior.h>
#include <aws/medialive/model/M3u8TimedMetadataBehavior.h>
#include <aws/medialive/model/M3u8KlvBehavior.h>
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
   * Settings information for the .m3u8 container<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/M3u8Settings">AWS
   * API Reference</a></p>
   */
  class M3u8Settings
  {
  public:
    AWS_MEDIALIVE_API M3u8Settings();
    AWS_MEDIALIVE_API M3u8Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API M3u8Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The number of audio frames to insert for each PES packet.
     */
    inline int GetAudioFramesPerPes() const{ return m_audioFramesPerPes; }
    inline bool AudioFramesPerPesHasBeenSet() const { return m_audioFramesPerPesHasBeenSet; }
    inline void SetAudioFramesPerPes(int value) { m_audioFramesPerPesHasBeenSet = true; m_audioFramesPerPes = value; }
    inline M3u8Settings& WithAudioFramesPerPes(int value) { SetAudioFramesPerPes(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation. Can be entered as decimal or hexadecimal values.
     */
    inline const Aws::String& GetAudioPids() const{ return m_audioPids; }
    inline bool AudioPidsHasBeenSet() const { return m_audioPidsHasBeenSet; }
    inline void SetAudioPids(const Aws::String& value) { m_audioPidsHasBeenSet = true; m_audioPids = value; }
    inline void SetAudioPids(Aws::String&& value) { m_audioPidsHasBeenSet = true; m_audioPids = std::move(value); }
    inline void SetAudioPids(const char* value) { m_audioPidsHasBeenSet = true; m_audioPids.assign(value); }
    inline M3u8Settings& WithAudioPids(const Aws::String& value) { SetAudioPids(value); return *this;}
    inline M3u8Settings& WithAudioPids(Aws::String&& value) { SetAudioPids(std::move(value)); return *this;}
    inline M3u8Settings& WithAudioPids(const char* value) { SetAudioPids(value); return *this;}
    ///@}

    ///@{
    /**
     * This parameter is unused and deprecated.
     */
    inline const Aws::String& GetEcmPid() const{ return m_ecmPid; }
    inline bool EcmPidHasBeenSet() const { return m_ecmPidHasBeenSet; }
    inline void SetEcmPid(const Aws::String& value) { m_ecmPidHasBeenSet = true; m_ecmPid = value; }
    inline void SetEcmPid(Aws::String&& value) { m_ecmPidHasBeenSet = true; m_ecmPid = std::move(value); }
    inline void SetEcmPid(const char* value) { m_ecmPidHasBeenSet = true; m_ecmPid.assign(value); }
    inline M3u8Settings& WithEcmPid(const Aws::String& value) { SetEcmPid(value); return *this;}
    inline M3u8Settings& WithEcmPid(Aws::String&& value) { SetEcmPid(std::move(value)); return *this;}
    inline M3u8Settings& WithEcmPid(const char* value) { SetEcmPid(value); return *this;}
    ///@}

    ///@{
    /**
     * If set to passthrough, Nielsen inaudible tones for media tracking will be
     * detected in the input audio and an equivalent ID3 tag will be inserted in the
     * output.
     */
    inline const M3u8NielsenId3Behavior& GetNielsenId3Behavior() const{ return m_nielsenId3Behavior; }
    inline bool NielsenId3BehaviorHasBeenSet() const { return m_nielsenId3BehaviorHasBeenSet; }
    inline void SetNielsenId3Behavior(const M3u8NielsenId3Behavior& value) { m_nielsenId3BehaviorHasBeenSet = true; m_nielsenId3Behavior = value; }
    inline void SetNielsenId3Behavior(M3u8NielsenId3Behavior&& value) { m_nielsenId3BehaviorHasBeenSet = true; m_nielsenId3Behavior = std::move(value); }
    inline M3u8Settings& WithNielsenId3Behavior(const M3u8NielsenId3Behavior& value) { SetNielsenId3Behavior(value); return *this;}
    inline M3u8Settings& WithNielsenId3Behavior(M3u8NielsenId3Behavior&& value) { SetNielsenId3Behavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream. A value of \"0\" writes out the PMT once per segment file.
     */
    inline int GetPatInterval() const{ return m_patInterval; }
    inline bool PatIntervalHasBeenSet() const { return m_patIntervalHasBeenSet; }
    inline void SetPatInterval(int value) { m_patIntervalHasBeenSet = true; m_patInterval = value; }
    inline M3u8Settings& WithPatInterval(int value) { SetPatInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to pcrEveryPesPacket, a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline const M3u8PcrControl& GetPcrControl() const{ return m_pcrControl; }
    inline bool PcrControlHasBeenSet() const { return m_pcrControlHasBeenSet; }
    inline void SetPcrControl(const M3u8PcrControl& value) { m_pcrControlHasBeenSet = true; m_pcrControl = value; }
    inline void SetPcrControl(M3u8PcrControl&& value) { m_pcrControlHasBeenSet = true; m_pcrControl = std::move(value); }
    inline M3u8Settings& WithPcrControl(const M3u8PcrControl& value) { SetPcrControl(value); return *this;}
    inline M3u8Settings& WithPcrControl(M3u8PcrControl&& value) { SetPcrControl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Maximum time in milliseconds between Program Clock References (PCRs) inserted
     * into the transport stream.
     */
    inline int GetPcrPeriod() const{ return m_pcrPeriod; }
    inline bool PcrPeriodHasBeenSet() const { return m_pcrPeriodHasBeenSet; }
    inline void SetPcrPeriod(int value) { m_pcrPeriodHasBeenSet = true; m_pcrPeriod = value; }
    inline M3u8Settings& WithPcrPeriod(int value) { SetPcrPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID. Can be entered as a decimal or hexadecimal value.
     */
    inline const Aws::String& GetPcrPid() const{ return m_pcrPid; }
    inline bool PcrPidHasBeenSet() const { return m_pcrPidHasBeenSet; }
    inline void SetPcrPid(const Aws::String& value) { m_pcrPidHasBeenSet = true; m_pcrPid = value; }
    inline void SetPcrPid(Aws::String&& value) { m_pcrPidHasBeenSet = true; m_pcrPid = std::move(value); }
    inline void SetPcrPid(const char* value) { m_pcrPidHasBeenSet = true; m_pcrPid.assign(value); }
    inline M3u8Settings& WithPcrPid(const Aws::String& value) { SetPcrPid(value); return *this;}
    inline M3u8Settings& WithPcrPid(Aws::String&& value) { SetPcrPid(std::move(value)); return *this;}
    inline M3u8Settings& WithPcrPid(const char* value) { SetPcrPid(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream. A value of \"0\" writes out the PMT once per segment file.
     */
    inline int GetPmtInterval() const{ return m_pmtInterval; }
    inline bool PmtIntervalHasBeenSet() const { return m_pmtIntervalHasBeenSet; }
    inline void SetPmtInterval(int value) { m_pmtIntervalHasBeenSet = true; m_pmtInterval = value; }
    inline M3u8Settings& WithPmtInterval(int value) { SetPmtInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline const Aws::String& GetPmtPid() const{ return m_pmtPid; }
    inline bool PmtPidHasBeenSet() const { return m_pmtPidHasBeenSet; }
    inline void SetPmtPid(const Aws::String& value) { m_pmtPidHasBeenSet = true; m_pmtPid = value; }
    inline void SetPmtPid(Aws::String&& value) { m_pmtPidHasBeenSet = true; m_pmtPid = std::move(value); }
    inline void SetPmtPid(const char* value) { m_pmtPidHasBeenSet = true; m_pmtPid.assign(value); }
    inline M3u8Settings& WithPmtPid(const Aws::String& value) { SetPmtPid(value); return *this;}
    inline M3u8Settings& WithPmtPid(Aws::String&& value) { SetPmtPid(std::move(value)); return *this;}
    inline M3u8Settings& WithPmtPid(const char* value) { SetPmtPid(value); return *this;}
    ///@}

    ///@{
    /**
     * The value of the program number field in the Program Map Table.
     */
    inline int GetProgramNum() const{ return m_programNum; }
    inline bool ProgramNumHasBeenSet() const { return m_programNumHasBeenSet; }
    inline void SetProgramNum(int value) { m_programNumHasBeenSet = true; m_programNum = value; }
    inline M3u8Settings& WithProgramNum(int value) { SetProgramNum(value); return *this;}
    ///@}

    ///@{
    /**
     * If set to passthrough, passes any SCTE-35 signals from the input source to this
     * output.
     */
    inline const M3u8Scte35Behavior& GetScte35Behavior() const{ return m_scte35Behavior; }
    inline bool Scte35BehaviorHasBeenSet() const { return m_scte35BehaviorHasBeenSet; }
    inline void SetScte35Behavior(const M3u8Scte35Behavior& value) { m_scte35BehaviorHasBeenSet = true; m_scte35Behavior = value; }
    inline void SetScte35Behavior(M3u8Scte35Behavior&& value) { m_scte35BehaviorHasBeenSet = true; m_scte35Behavior = std::move(value); }
    inline M3u8Settings& WithScte35Behavior(const M3u8Scte35Behavior& value) { SetScte35Behavior(value); return *this;}
    inline M3u8Settings& WithScte35Behavior(M3u8Scte35Behavior&& value) { SetScte35Behavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.
     */
    inline const Aws::String& GetScte35Pid() const{ return m_scte35Pid; }
    inline bool Scte35PidHasBeenSet() const { return m_scte35PidHasBeenSet; }
    inline void SetScte35Pid(const Aws::String& value) { m_scte35PidHasBeenSet = true; m_scte35Pid = value; }
    inline void SetScte35Pid(Aws::String&& value) { m_scte35PidHasBeenSet = true; m_scte35Pid = std::move(value); }
    inline void SetScte35Pid(const char* value) { m_scte35PidHasBeenSet = true; m_scte35Pid.assign(value); }
    inline M3u8Settings& WithScte35Pid(const Aws::String& value) { SetScte35Pid(value); return *this;}
    inline M3u8Settings& WithScte35Pid(Aws::String&& value) { SetScte35Pid(std::move(value)); return *this;}
    inline M3u8Settings& WithScte35Pid(const char* value) { SetScte35Pid(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to passthrough, timed metadata is passed through from input to output.
     */
    inline const M3u8TimedMetadataBehavior& GetTimedMetadataBehavior() const{ return m_timedMetadataBehavior; }
    inline bool TimedMetadataBehaviorHasBeenSet() const { return m_timedMetadataBehaviorHasBeenSet; }
    inline void SetTimedMetadataBehavior(const M3u8TimedMetadataBehavior& value) { m_timedMetadataBehaviorHasBeenSet = true; m_timedMetadataBehavior = value; }
    inline void SetTimedMetadataBehavior(M3u8TimedMetadataBehavior&& value) { m_timedMetadataBehaviorHasBeenSet = true; m_timedMetadataBehavior = std::move(value); }
    inline M3u8Settings& WithTimedMetadataBehavior(const M3u8TimedMetadataBehavior& value) { SetTimedMetadataBehavior(value); return *this;}
    inline M3u8Settings& WithTimedMetadataBehavior(M3u8TimedMetadataBehavior&& value) { SetTimedMetadataBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetTimedMetadataPid() const{ return m_timedMetadataPid; }
    inline bool TimedMetadataPidHasBeenSet() const { return m_timedMetadataPidHasBeenSet; }
    inline void SetTimedMetadataPid(const Aws::String& value) { m_timedMetadataPidHasBeenSet = true; m_timedMetadataPid = value; }
    inline void SetTimedMetadataPid(Aws::String&& value) { m_timedMetadataPidHasBeenSet = true; m_timedMetadataPid = std::move(value); }
    inline void SetTimedMetadataPid(const char* value) { m_timedMetadataPidHasBeenSet = true; m_timedMetadataPid.assign(value); }
    inline M3u8Settings& WithTimedMetadataPid(const Aws::String& value) { SetTimedMetadataPid(value); return *this;}
    inline M3u8Settings& WithTimedMetadataPid(Aws::String&& value) { SetTimedMetadataPid(std::move(value)); return *this;}
    inline M3u8Settings& WithTimedMetadataPid(const char* value) { SetTimedMetadataPid(value); return *this;}
    ///@}

    ///@{
    /**
     * The value of the transport stream ID field in the Program Map Table.
     */
    inline int GetTransportStreamId() const{ return m_transportStreamId; }
    inline bool TransportStreamIdHasBeenSet() const { return m_transportStreamIdHasBeenSet; }
    inline void SetTransportStreamId(int value) { m_transportStreamIdHasBeenSet = true; m_transportStreamId = value; }
    inline M3u8Settings& WithTransportStreamId(int value) { SetTransportStreamId(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline const Aws::String& GetVideoPid() const{ return m_videoPid; }
    inline bool VideoPidHasBeenSet() const { return m_videoPidHasBeenSet; }
    inline void SetVideoPid(const Aws::String& value) { m_videoPidHasBeenSet = true; m_videoPid = value; }
    inline void SetVideoPid(Aws::String&& value) { m_videoPidHasBeenSet = true; m_videoPid = std::move(value); }
    inline void SetVideoPid(const char* value) { m_videoPidHasBeenSet = true; m_videoPid.assign(value); }
    inline M3u8Settings& WithVideoPid(const Aws::String& value) { SetVideoPid(value); return *this;}
    inline M3u8Settings& WithVideoPid(Aws::String&& value) { SetVideoPid(std::move(value)); return *this;}
    inline M3u8Settings& WithVideoPid(const char* value) { SetVideoPid(value); return *this;}
    ///@}

    ///@{
    /**
     * If set to passthrough, passes any KLV data from the input source to this output.
     */
    inline const M3u8KlvBehavior& GetKlvBehavior() const{ return m_klvBehavior; }
    inline bool KlvBehaviorHasBeenSet() const { return m_klvBehaviorHasBeenSet; }
    inline void SetKlvBehavior(const M3u8KlvBehavior& value) { m_klvBehaviorHasBeenSet = true; m_klvBehavior = value; }
    inline void SetKlvBehavior(M3u8KlvBehavior&& value) { m_klvBehaviorHasBeenSet = true; m_klvBehavior = std::move(value); }
    inline M3u8Settings& WithKlvBehavior(const M3u8KlvBehavior& value) { SetKlvBehavior(value); return *this;}
    inline M3u8Settings& WithKlvBehavior(M3u8KlvBehavior&& value) { SetKlvBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) for input source KLV data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetKlvDataPids() const{ return m_klvDataPids; }
    inline bool KlvDataPidsHasBeenSet() const { return m_klvDataPidsHasBeenSet; }
    inline void SetKlvDataPids(const Aws::String& value) { m_klvDataPidsHasBeenSet = true; m_klvDataPids = value; }
    inline void SetKlvDataPids(Aws::String&& value) { m_klvDataPidsHasBeenSet = true; m_klvDataPids = std::move(value); }
    inline void SetKlvDataPids(const char* value) { m_klvDataPidsHasBeenSet = true; m_klvDataPids.assign(value); }
    inline M3u8Settings& WithKlvDataPids(const Aws::String& value) { SetKlvDataPids(value); return *this;}
    inline M3u8Settings& WithKlvDataPids(Aws::String&& value) { SetKlvDataPids(std::move(value)); return *this;}
    inline M3u8Settings& WithKlvDataPids(const char* value) { SetKlvDataPids(value); return *this;}
    ///@}
  private:

    int m_audioFramesPerPes;
    bool m_audioFramesPerPesHasBeenSet = false;

    Aws::String m_audioPids;
    bool m_audioPidsHasBeenSet = false;

    Aws::String m_ecmPid;
    bool m_ecmPidHasBeenSet = false;

    M3u8NielsenId3Behavior m_nielsenId3Behavior;
    bool m_nielsenId3BehaviorHasBeenSet = false;

    int m_patInterval;
    bool m_patIntervalHasBeenSet = false;

    M3u8PcrControl m_pcrControl;
    bool m_pcrControlHasBeenSet = false;

    int m_pcrPeriod;
    bool m_pcrPeriodHasBeenSet = false;

    Aws::String m_pcrPid;
    bool m_pcrPidHasBeenSet = false;

    int m_pmtInterval;
    bool m_pmtIntervalHasBeenSet = false;

    Aws::String m_pmtPid;
    bool m_pmtPidHasBeenSet = false;

    int m_programNum;
    bool m_programNumHasBeenSet = false;

    M3u8Scte35Behavior m_scte35Behavior;
    bool m_scte35BehaviorHasBeenSet = false;

    Aws::String m_scte35Pid;
    bool m_scte35PidHasBeenSet = false;

    M3u8TimedMetadataBehavior m_timedMetadataBehavior;
    bool m_timedMetadataBehaviorHasBeenSet = false;

    Aws::String m_timedMetadataPid;
    bool m_timedMetadataPidHasBeenSet = false;

    int m_transportStreamId;
    bool m_transportStreamIdHasBeenSet = false;

    Aws::String m_videoPid;
    bool m_videoPidHasBeenSet = false;

    M3u8KlvBehavior m_klvBehavior;
    bool m_klvBehaviorHasBeenSet = false;

    Aws::String m_klvDataPids;
    bool m_klvDataPidsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
