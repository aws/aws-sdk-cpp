/**
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
    AWS_MEDIALIVE_API M3u8Settings() = default;
    AWS_MEDIALIVE_API M3u8Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API M3u8Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The number of audio frames to insert for each PES packet.
     */
    inline int GetAudioFramesPerPes() const { return m_audioFramesPerPes; }
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
    inline const Aws::String& GetAudioPids() const { return m_audioPids; }
    inline bool AudioPidsHasBeenSet() const { return m_audioPidsHasBeenSet; }
    template<typename AudioPidsT = Aws::String>
    void SetAudioPids(AudioPidsT&& value) { m_audioPidsHasBeenSet = true; m_audioPids = std::forward<AudioPidsT>(value); }
    template<typename AudioPidsT = Aws::String>
    M3u8Settings& WithAudioPids(AudioPidsT&& value) { SetAudioPids(std::forward<AudioPidsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * This parameter is unused and deprecated.
     */
    inline const Aws::String& GetEcmPid() const { return m_ecmPid; }
    inline bool EcmPidHasBeenSet() const { return m_ecmPidHasBeenSet; }
    template<typename EcmPidT = Aws::String>
    void SetEcmPid(EcmPidT&& value) { m_ecmPidHasBeenSet = true; m_ecmPid = std::forward<EcmPidT>(value); }
    template<typename EcmPidT = Aws::String>
    M3u8Settings& WithEcmPid(EcmPidT&& value) { SetEcmPid(std::forward<EcmPidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If set to passthrough, Nielsen inaudible tones for media tracking will be
     * detected in the input audio and an equivalent ID3 tag will be inserted in the
     * output.
     */
    inline M3u8NielsenId3Behavior GetNielsenId3Behavior() const { return m_nielsenId3Behavior; }
    inline bool NielsenId3BehaviorHasBeenSet() const { return m_nielsenId3BehaviorHasBeenSet; }
    inline void SetNielsenId3Behavior(M3u8NielsenId3Behavior value) { m_nielsenId3BehaviorHasBeenSet = true; m_nielsenId3Behavior = value; }
    inline M3u8Settings& WithNielsenId3Behavior(M3u8NielsenId3Behavior value) { SetNielsenId3Behavior(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream. A value of \"0\" writes out the PMT once per segment file.
     */
    inline int GetPatInterval() const { return m_patInterval; }
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
    inline M3u8PcrControl GetPcrControl() const { return m_pcrControl; }
    inline bool PcrControlHasBeenSet() const { return m_pcrControlHasBeenSet; }
    inline void SetPcrControl(M3u8PcrControl value) { m_pcrControlHasBeenSet = true; m_pcrControl = value; }
    inline M3u8Settings& WithPcrControl(M3u8PcrControl value) { SetPcrControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Maximum time in milliseconds between Program Clock References (PCRs) inserted
     * into the transport stream.
     */
    inline int GetPcrPeriod() const { return m_pcrPeriod; }
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
    inline const Aws::String& GetPcrPid() const { return m_pcrPid; }
    inline bool PcrPidHasBeenSet() const { return m_pcrPidHasBeenSet; }
    template<typename PcrPidT = Aws::String>
    void SetPcrPid(PcrPidT&& value) { m_pcrPidHasBeenSet = true; m_pcrPid = std::forward<PcrPidT>(value); }
    template<typename PcrPidT = Aws::String>
    M3u8Settings& WithPcrPid(PcrPidT&& value) { SetPcrPid(std::forward<PcrPidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream. A value of \"0\" writes out the PMT once per segment file.
     */
    inline int GetPmtInterval() const { return m_pmtInterval; }
    inline bool PmtIntervalHasBeenSet() const { return m_pmtIntervalHasBeenSet; }
    inline void SetPmtInterval(int value) { m_pmtIntervalHasBeenSet = true; m_pmtInterval = value; }
    inline M3u8Settings& WithPmtInterval(int value) { SetPmtInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline const Aws::String& GetPmtPid() const { return m_pmtPid; }
    inline bool PmtPidHasBeenSet() const { return m_pmtPidHasBeenSet; }
    template<typename PmtPidT = Aws::String>
    void SetPmtPid(PmtPidT&& value) { m_pmtPidHasBeenSet = true; m_pmtPid = std::forward<PmtPidT>(value); }
    template<typename PmtPidT = Aws::String>
    M3u8Settings& WithPmtPid(PmtPidT&& value) { SetPmtPid(std::forward<PmtPidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The value of the program number field in the Program Map Table.
     */
    inline int GetProgramNum() const { return m_programNum; }
    inline bool ProgramNumHasBeenSet() const { return m_programNumHasBeenSet; }
    inline void SetProgramNum(int value) { m_programNumHasBeenSet = true; m_programNum = value; }
    inline M3u8Settings& WithProgramNum(int value) { SetProgramNum(value); return *this;}
    ///@}

    ///@{
    /**
     * If set to passthrough, passes any SCTE-35 signals from the input source to this
     * output.
     */
    inline M3u8Scte35Behavior GetScte35Behavior() const { return m_scte35Behavior; }
    inline bool Scte35BehaviorHasBeenSet() const { return m_scte35BehaviorHasBeenSet; }
    inline void SetScte35Behavior(M3u8Scte35Behavior value) { m_scte35BehaviorHasBeenSet = true; m_scte35Behavior = value; }
    inline M3u8Settings& WithScte35Behavior(M3u8Scte35Behavior value) { SetScte35Behavior(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.
     */
    inline const Aws::String& GetScte35Pid() const { return m_scte35Pid; }
    inline bool Scte35PidHasBeenSet() const { return m_scte35PidHasBeenSet; }
    template<typename Scte35PidT = Aws::String>
    void SetScte35Pid(Scte35PidT&& value) { m_scte35PidHasBeenSet = true; m_scte35Pid = std::forward<Scte35PidT>(value); }
    template<typename Scte35PidT = Aws::String>
    M3u8Settings& WithScte35Pid(Scte35PidT&& value) { SetScte35Pid(std::forward<Scte35PidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Set to PASSTHROUGH to enable ID3 metadata insertion. To include metadata, you
     * configure other parameters in the output group or individual outputs, or you add
     * an ID3 action to the channel schedule.
     */
    inline M3u8TimedMetadataBehavior GetTimedMetadataBehavior() const { return m_timedMetadataBehavior; }
    inline bool TimedMetadataBehaviorHasBeenSet() const { return m_timedMetadataBehaviorHasBeenSet; }
    inline void SetTimedMetadataBehavior(M3u8TimedMetadataBehavior value) { m_timedMetadataBehaviorHasBeenSet = true; m_timedMetadataBehavior = value; }
    inline M3u8Settings& WithTimedMetadataBehavior(M3u8TimedMetadataBehavior value) { SetTimedMetadataBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetTimedMetadataPid() const { return m_timedMetadataPid; }
    inline bool TimedMetadataPidHasBeenSet() const { return m_timedMetadataPidHasBeenSet; }
    template<typename TimedMetadataPidT = Aws::String>
    void SetTimedMetadataPid(TimedMetadataPidT&& value) { m_timedMetadataPidHasBeenSet = true; m_timedMetadataPid = std::forward<TimedMetadataPidT>(value); }
    template<typename TimedMetadataPidT = Aws::String>
    M3u8Settings& WithTimedMetadataPid(TimedMetadataPidT&& value) { SetTimedMetadataPid(std::forward<TimedMetadataPidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The value of the transport stream ID field in the Program Map Table.
     */
    inline int GetTransportStreamId() const { return m_transportStreamId; }
    inline bool TransportStreamIdHasBeenSet() const { return m_transportStreamIdHasBeenSet; }
    inline void SetTransportStreamId(int value) { m_transportStreamIdHasBeenSet = true; m_transportStreamId = value; }
    inline M3u8Settings& WithTransportStreamId(int value) { SetTransportStreamId(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline const Aws::String& GetVideoPid() const { return m_videoPid; }
    inline bool VideoPidHasBeenSet() const { return m_videoPidHasBeenSet; }
    template<typename VideoPidT = Aws::String>
    void SetVideoPid(VideoPidT&& value) { m_videoPidHasBeenSet = true; m_videoPid = std::forward<VideoPidT>(value); }
    template<typename VideoPidT = Aws::String>
    M3u8Settings& WithVideoPid(VideoPidT&& value) { SetVideoPid(std::forward<VideoPidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If set to passthrough, passes any KLV data from the input source to this output.
     */
    inline M3u8KlvBehavior GetKlvBehavior() const { return m_klvBehavior; }
    inline bool KlvBehaviorHasBeenSet() const { return m_klvBehaviorHasBeenSet; }
    inline void SetKlvBehavior(M3u8KlvBehavior value) { m_klvBehaviorHasBeenSet = true; m_klvBehavior = value; }
    inline M3u8Settings& WithKlvBehavior(M3u8KlvBehavior value) { SetKlvBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) for input source KLV data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetKlvDataPids() const { return m_klvDataPids; }
    inline bool KlvDataPidsHasBeenSet() const { return m_klvDataPidsHasBeenSet; }
    template<typename KlvDataPidsT = Aws::String>
    void SetKlvDataPids(KlvDataPidsT&& value) { m_klvDataPidsHasBeenSet = true; m_klvDataPids = std::forward<KlvDataPidsT>(value); }
    template<typename KlvDataPidsT = Aws::String>
    M3u8Settings& WithKlvDataPids(KlvDataPidsT&& value) { SetKlvDataPids(std::forward<KlvDataPidsT>(value)); return *this;}
    ///@}
  private:

    int m_audioFramesPerPes{0};
    bool m_audioFramesPerPesHasBeenSet = false;

    Aws::String m_audioPids;
    bool m_audioPidsHasBeenSet = false;

    Aws::String m_ecmPid;
    bool m_ecmPidHasBeenSet = false;

    M3u8NielsenId3Behavior m_nielsenId3Behavior{M3u8NielsenId3Behavior::NOT_SET};
    bool m_nielsenId3BehaviorHasBeenSet = false;

    int m_patInterval{0};
    bool m_patIntervalHasBeenSet = false;

    M3u8PcrControl m_pcrControl{M3u8PcrControl::NOT_SET};
    bool m_pcrControlHasBeenSet = false;

    int m_pcrPeriod{0};
    bool m_pcrPeriodHasBeenSet = false;

    Aws::String m_pcrPid;
    bool m_pcrPidHasBeenSet = false;

    int m_pmtInterval{0};
    bool m_pmtIntervalHasBeenSet = false;

    Aws::String m_pmtPid;
    bool m_pmtPidHasBeenSet = false;

    int m_programNum{0};
    bool m_programNumHasBeenSet = false;

    M3u8Scte35Behavior m_scte35Behavior{M3u8Scte35Behavior::NOT_SET};
    bool m_scte35BehaviorHasBeenSet = false;

    Aws::String m_scte35Pid;
    bool m_scte35PidHasBeenSet = false;

    M3u8TimedMetadataBehavior m_timedMetadataBehavior{M3u8TimedMetadataBehavior::NOT_SET};
    bool m_timedMetadataBehaviorHasBeenSet = false;

    Aws::String m_timedMetadataPid;
    bool m_timedMetadataPidHasBeenSet = false;

    int m_transportStreamId{0};
    bool m_transportStreamIdHasBeenSet = false;

    Aws::String m_videoPid;
    bool m_videoPidHasBeenSet = false;

    M3u8KlvBehavior m_klvBehavior{M3u8KlvBehavior::NOT_SET};
    bool m_klvBehaviorHasBeenSet = false;

    Aws::String m_klvDataPids;
    bool m_klvDataPidsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
