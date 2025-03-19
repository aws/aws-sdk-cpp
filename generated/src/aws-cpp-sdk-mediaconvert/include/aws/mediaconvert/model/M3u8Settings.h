/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/M3u8AudioDuration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/M3u8DataPtsControl.h>
#include <aws/mediaconvert/model/M3u8NielsenId3.h>
#include <aws/mediaconvert/model/M3u8PcrControl.h>
#include <aws/mediaconvert/model/TsPtsOffset.h>
#include <aws/mediaconvert/model/M3u8Scte35Source.h>
#include <aws/mediaconvert/model/TimedMetadata.h>
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
   * These settings relate to the MPEG-2 transport stream (MPEG2-TS) container for
   * the MPEG2-TS segments in your HLS outputs.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/M3u8Settings">AWS
   * API Reference</a></p>
   */
  class M3u8Settings
  {
  public:
    AWS_MEDIACONVERT_API M3u8Settings() = default;
    AWS_MEDIACONVERT_API M3u8Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API M3u8Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify this setting only when your output will be consumed by a downstream
     * repackaging workflow that is sensitive to very small duration differences
     * between video and audio. For this situation, choose Match video duration. In all
     * other cases, keep the default value, Default codec duration. When you choose
     * Match video duration, MediaConvert pads the output audio streams with silence or
     * trims them to ensure that the total duration of each audio stream is at least as
     * long as the total duration of the video stream. After padding or trimming, the
     * audio stream duration is no more than one frame longer than the video stream.
     * MediaConvert applies audio padding or trimming only to the end of the last
     * segment of the output. For unsegmented outputs, MediaConvert adds padding only
     * to the end of the file. When you keep the default value, any minor discrepancies
     * between audio and video duration will depend on your output audio codec.
     */
    inline M3u8AudioDuration GetAudioDuration() const { return m_audioDuration; }
    inline bool AudioDurationHasBeenSet() const { return m_audioDurationHasBeenSet; }
    inline void SetAudioDuration(M3u8AudioDuration value) { m_audioDurationHasBeenSet = true; m_audioDuration = value; }
    inline M3u8Settings& WithAudioDuration(M3u8AudioDuration value) { SetAudioDuration(value); return *this;}
    ///@}

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
     * comma separation.
     */
    inline const Aws::Vector<int>& GetAudioPids() const { return m_audioPids; }
    inline bool AudioPidsHasBeenSet() const { return m_audioPidsHasBeenSet; }
    template<typename AudioPidsT = Aws::Vector<int>>
    void SetAudioPids(AudioPidsT&& value) { m_audioPidsHasBeenSet = true; m_audioPids = std::forward<AudioPidsT>(value); }
    template<typename AudioPidsT = Aws::Vector<int>>
    M3u8Settings& WithAudioPids(AudioPidsT&& value) { SetAudioPids(std::forward<AudioPidsT>(value)); return *this;}
    inline M3u8Settings& AddAudioPids(int value) { m_audioPidsHasBeenSet = true; m_audioPids.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * Manually specify the difference in PTS offset that will be applied to the audio
     * track, in seconds or milliseconds, when you set PTS offset to Seconds or
     * Milliseconds. Enter an integer from -10000 to 10000. Leave blank to keep the
     * default value 0.
     */
    inline int GetAudioPtsOffsetDelta() const { return m_audioPtsOffsetDelta; }
    inline bool AudioPtsOffsetDeltaHasBeenSet() const { return m_audioPtsOffsetDeltaHasBeenSet; }
    inline void SetAudioPtsOffsetDelta(int value) { m_audioPtsOffsetDeltaHasBeenSet = true; m_audioPtsOffsetDelta = value; }
    inline M3u8Settings& WithAudioPtsOffsetDelta(int value) { SetAudioPtsOffsetDelta(value); return *this;}
    ///@}

    ///@{
    /**
     * If you select ALIGN_TO_VIDEO, MediaConvert writes captions and data packets with
     * Presentation Timestamp (PTS) values greater than or equal to the first video
     * packet PTS (MediaConvert drops captions and data packets with lesser PTS
     * values). Keep the default value AUTO to allow all PTS values.
     */
    inline M3u8DataPtsControl GetDataPTSControl() const { return m_dataPTSControl; }
    inline bool DataPTSControlHasBeenSet() const { return m_dataPTSControlHasBeenSet; }
    inline void SetDataPTSControl(M3u8DataPtsControl value) { m_dataPTSControlHasBeenSet = true; m_dataPTSControl = value; }
    inline M3u8Settings& WithDataPTSControl(M3u8DataPtsControl value) { SetDataPTSControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the maximum time, in milliseconds, between Program Clock References
     * (PCRs) inserted into the transport stream.
     */
    inline int GetMaxPcrInterval() const { return m_maxPcrInterval; }
    inline bool MaxPcrIntervalHasBeenSet() const { return m_maxPcrIntervalHasBeenSet; }
    inline void SetMaxPcrInterval(int value) { m_maxPcrIntervalHasBeenSet = true; m_maxPcrInterval = value; }
    inline M3u8Settings& WithMaxPcrInterval(int value) { SetMaxPcrInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline M3u8NielsenId3 GetNielsenId3() const { return m_nielsenId3; }
    inline bool NielsenId3HasBeenSet() const { return m_nielsenId3HasBeenSet; }
    inline void SetNielsenId3(M3u8NielsenId3 value) { m_nielsenId3HasBeenSet = true; m_nielsenId3 = value; }
    inline M3u8Settings& WithNielsenId3(M3u8NielsenId3 value) { SetNielsenId3(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline int GetPatInterval() const { return m_patInterval; }
    inline bool PatIntervalHasBeenSet() const { return m_patIntervalHasBeenSet; }
    inline void SetPatInterval(int value) { m_patIntervalHasBeenSet = true; m_patInterval = value; }
    inline M3u8Settings& WithPatInterval(int value) { SetPatInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to PCR_EVERY_PES_PACKET a Program Clock Reference value is inserted for
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
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID.
     */
    inline int GetPcrPid() const { return m_pcrPid; }
    inline bool PcrPidHasBeenSet() const { return m_pcrPidHasBeenSet; }
    inline void SetPcrPid(int value) { m_pcrPidHasBeenSet = true; m_pcrPid = value; }
    inline M3u8Settings& WithPcrPid(int value) { SetPcrPid(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline int GetPmtInterval() const { return m_pmtInterval; }
    inline bool PmtIntervalHasBeenSet() const { return m_pmtIntervalHasBeenSet; }
    inline void SetPmtInterval(int value) { m_pmtIntervalHasBeenSet = true; m_pmtInterval = value; }
    inline M3u8Settings& WithPmtInterval(int value) { SetPmtInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     */
    inline int GetPmtPid() const { return m_pmtPid; }
    inline bool PmtPidHasBeenSet() const { return m_pmtPidHasBeenSet; }
    inline void SetPmtPid(int value) { m_pmtPidHasBeenSet = true; m_pmtPid = value; }
    inline M3u8Settings& WithPmtPid(int value) { SetPmtPid(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) of the private metadata stream in the transport stream.
     */
    inline int GetPrivateMetadataPid() const { return m_privateMetadataPid; }
    inline bool PrivateMetadataPidHasBeenSet() const { return m_privateMetadataPidHasBeenSet; }
    inline void SetPrivateMetadataPid(int value) { m_privateMetadataPidHasBeenSet = true; m_privateMetadataPid = value; }
    inline M3u8Settings& WithPrivateMetadataPid(int value) { SetPrivateMetadataPid(value); return *this;}
    ///@}

    ///@{
    /**
     * The value of the program number field in the Program Map Table.
     */
    inline int GetProgramNumber() const { return m_programNumber; }
    inline bool ProgramNumberHasBeenSet() const { return m_programNumberHasBeenSet; }
    inline void SetProgramNumber(int value) { m_programNumberHasBeenSet = true; m_programNumber = value; }
    inline M3u8Settings& WithProgramNumber(int value) { SetProgramNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * Manually specify the initial PTS offset, in seconds, when you set PTS offset to
     * Seconds. Enter an integer from 0 to 3600. Leave blank to keep the default value
     * 2.
     */
    inline int GetPtsOffset() const { return m_ptsOffset; }
    inline bool PtsOffsetHasBeenSet() const { return m_ptsOffsetHasBeenSet; }
    inline void SetPtsOffset(int value) { m_ptsOffsetHasBeenSet = true; m_ptsOffset = value; }
    inline M3u8Settings& WithPtsOffset(int value) { SetPtsOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the initial presentation timestamp (PTS) offset for your transport
     * stream output. To let MediaConvert automatically determine the initial PTS
     * offset: Keep the default value, Auto. We recommend that you choose Auto for the
     * widest player compatibility. The initial PTS will be at least two seconds and
     * vary depending on your output's bitrate, HRD buffer size and HRD buffer initial
     * fill percentage. To manually specify an initial PTS offset: Choose Seconds or
     * Milliseconds. Then specify the number of seconds or milliseconds with PTS
     * offset.
     */
    inline TsPtsOffset GetPtsOffsetMode() const { return m_ptsOffsetMode; }
    inline bool PtsOffsetModeHasBeenSet() const { return m_ptsOffsetModeHasBeenSet; }
    inline void SetPtsOffsetMode(TsPtsOffset value) { m_ptsOffsetModeHasBeenSet = true; m_ptsOffsetMode = value; }
    inline M3u8Settings& WithPtsOffsetMode(TsPtsOffset value) { SetPtsOffsetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream.
     */
    inline int GetScte35Pid() const { return m_scte35Pid; }
    inline bool Scte35PidHasBeenSet() const { return m_scte35PidHasBeenSet; }
    inline void SetScte35Pid(int value) { m_scte35PidHasBeenSet = true; m_scte35Pid = value; }
    inline M3u8Settings& WithScte35Pid(int value) { SetScte35Pid(value); return *this;}
    ///@}

    ///@{
    /**
     * For SCTE-35 markers from your input-- Choose Passthrough if you want SCTE-35
     * markers that appear in your input to also appear in this output. Choose None if
     * you don't want SCTE-35 markers in this output. For SCTE-35 markers from an ESAM
     * XML document-- Choose None if you don't want manifest conditioning. Choose
     * Passthrough and choose Ad markers if you do want manifest conditioning. In both
     * cases, also provide the ESAM XML as a string in the setting Signal processing
     * notification XML.
     */
    inline M3u8Scte35Source GetScte35Source() const { return m_scte35Source; }
    inline bool Scte35SourceHasBeenSet() const { return m_scte35SourceHasBeenSet; }
    inline void SetScte35Source(M3u8Scte35Source value) { m_scte35SourceHasBeenSet = true; m_scte35Source = value; }
    inline M3u8Settings& WithScte35Source(M3u8Scte35Source value) { SetScte35Source(value); return *this;}
    ///@}

    ///@{
    /**
     * Set ID3 metadata to Passthrough to include ID3 metadata in this output. This
     * includes ID3 metadata from the following features: ID3 timestamp period, and
     * Custom ID3 metadata inserter. To exclude this ID3 metadata in this output: set
     * ID3 metadata to None or leave blank.
     */
    inline TimedMetadata GetTimedMetadata() const { return m_timedMetadata; }
    inline bool TimedMetadataHasBeenSet() const { return m_timedMetadataHasBeenSet; }
    inline void SetTimedMetadata(TimedMetadata value) { m_timedMetadataHasBeenSet = true; m_timedMetadata = value; }
    inline M3u8Settings& WithTimedMetadata(TimedMetadata value) { SetTimedMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) of the ID3 metadata stream in the transport stream.
     */
    inline int GetTimedMetadataPid() const { return m_timedMetadataPid; }
    inline bool TimedMetadataPidHasBeenSet() const { return m_timedMetadataPidHasBeenSet; }
    inline void SetTimedMetadataPid(int value) { m_timedMetadataPidHasBeenSet = true; m_timedMetadataPid = value; }
    inline M3u8Settings& WithTimedMetadataPid(int value) { SetTimedMetadataPid(value); return *this;}
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
     */
    inline int GetVideoPid() const { return m_videoPid; }
    inline bool VideoPidHasBeenSet() const { return m_videoPidHasBeenSet; }
    inline void SetVideoPid(int value) { m_videoPidHasBeenSet = true; m_videoPid = value; }
    inline M3u8Settings& WithVideoPid(int value) { SetVideoPid(value); return *this;}
    ///@}
  private:

    M3u8AudioDuration m_audioDuration{M3u8AudioDuration::NOT_SET};
    bool m_audioDurationHasBeenSet = false;

    int m_audioFramesPerPes{0};
    bool m_audioFramesPerPesHasBeenSet = false;

    Aws::Vector<int> m_audioPids;
    bool m_audioPidsHasBeenSet = false;

    int m_audioPtsOffsetDelta{0};
    bool m_audioPtsOffsetDeltaHasBeenSet = false;

    M3u8DataPtsControl m_dataPTSControl{M3u8DataPtsControl::NOT_SET};
    bool m_dataPTSControlHasBeenSet = false;

    int m_maxPcrInterval{0};
    bool m_maxPcrIntervalHasBeenSet = false;

    M3u8NielsenId3 m_nielsenId3{M3u8NielsenId3::NOT_SET};
    bool m_nielsenId3HasBeenSet = false;

    int m_patInterval{0};
    bool m_patIntervalHasBeenSet = false;

    M3u8PcrControl m_pcrControl{M3u8PcrControl::NOT_SET};
    bool m_pcrControlHasBeenSet = false;

    int m_pcrPid{0};
    bool m_pcrPidHasBeenSet = false;

    int m_pmtInterval{0};
    bool m_pmtIntervalHasBeenSet = false;

    int m_pmtPid{0};
    bool m_pmtPidHasBeenSet = false;

    int m_privateMetadataPid{0};
    bool m_privateMetadataPidHasBeenSet = false;

    int m_programNumber{0};
    bool m_programNumberHasBeenSet = false;

    int m_ptsOffset{0};
    bool m_ptsOffsetHasBeenSet = false;

    TsPtsOffset m_ptsOffsetMode{TsPtsOffset::NOT_SET};
    bool m_ptsOffsetModeHasBeenSet = false;

    int m_scte35Pid{0};
    bool m_scte35PidHasBeenSet = false;

    M3u8Scte35Source m_scte35Source{M3u8Scte35Source::NOT_SET};
    bool m_scte35SourceHasBeenSet = false;

    TimedMetadata m_timedMetadata{TimedMetadata::NOT_SET};
    bool m_timedMetadataHasBeenSet = false;

    int m_timedMetadataPid{0};
    bool m_timedMetadataPidHasBeenSet = false;

    int m_transportStreamId{0};
    bool m_transportStreamIdHasBeenSet = false;

    int m_videoPid{0};
    bool m_videoPidHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
