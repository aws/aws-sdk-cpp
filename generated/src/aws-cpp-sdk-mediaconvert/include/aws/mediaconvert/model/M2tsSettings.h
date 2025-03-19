/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/M2tsAudioBufferModel.h>
#include <aws/mediaconvert/model/M2tsAudioDuration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/M2tsBufferModel.h>
#include <aws/mediaconvert/model/M2tsDataPtsControl.h>
#include <aws/mediaconvert/model/DvbNitSettings.h>
#include <aws/mediaconvert/model/DvbSdtSettings.h>
#include <aws/mediaconvert/model/DvbTdtSettings.h>
#include <aws/mediaconvert/model/M2tsEbpAudioInterval.h>
#include <aws/mediaconvert/model/M2tsEbpPlacement.h>
#include <aws/mediaconvert/model/M2tsEsRateInPes.h>
#include <aws/mediaconvert/model/M2tsForceTsVideoEbpOrder.h>
#include <aws/mediaconvert/model/M2tsKlvMetadata.h>
#include <aws/mediaconvert/model/M2tsNielsenId3.h>
#include <aws/mediaconvert/model/M2tsPcrControl.h>
#include <aws/mediaconvert/model/M2tsPreventBufferUnderflow.h>
#include <aws/mediaconvert/model/TsPtsOffset.h>
#include <aws/mediaconvert/model/M2tsRateMode.h>
#include <aws/mediaconvert/model/M2tsScte35Esam.h>
#include <aws/mediaconvert/model/M2tsScte35Source.h>
#include <aws/mediaconvert/model/M2tsSegmentationMarkers.h>
#include <aws/mediaconvert/model/M2tsSegmentationStyle.h>
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
   * MPEG-2 TS container settings. These apply to outputs in a File output group when
   * the output's container is MPEG-2 Transport Stream (M2TS). In these assets, data
   * is organized by the program map table (PMT). Each transport stream program
   * contains subsets of data, including audio, video, and metadata. Each of these
   * subsets of data has a numerical label called a packet identifier (PID). Each
   * transport stream program corresponds to one MediaConvert output. The PMT lists
   * the types of data in a program along with their PID. Downstream systems and
   * players use the program map table to look up the PID for each type of data it
   * accesses and then uses the PIDs to locate specific data within the
   * asset.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/M2tsSettings">AWS
   * API Reference</a></p>
   */
  class M2tsSettings
  {
  public:
    AWS_MEDIACONVERT_API M2tsSettings() = default;
    AWS_MEDIACONVERT_API M2tsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API M2tsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Selects between the DVB and ATSC buffer models for Dolby Digital audio.
     */
    inline M2tsAudioBufferModel GetAudioBufferModel() const { return m_audioBufferModel; }
    inline bool AudioBufferModelHasBeenSet() const { return m_audioBufferModelHasBeenSet; }
    inline void SetAudioBufferModel(M2tsAudioBufferModel value) { m_audioBufferModelHasBeenSet = true; m_audioBufferModel = value; }
    inline M2tsSettings& WithAudioBufferModel(M2tsAudioBufferModel value) { SetAudioBufferModel(value); return *this;}
    ///@}

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
    inline M2tsAudioDuration GetAudioDuration() const { return m_audioDuration; }
    inline bool AudioDurationHasBeenSet() const { return m_audioDurationHasBeenSet; }
    inline void SetAudioDuration(M2tsAudioDuration value) { m_audioDurationHasBeenSet = true; m_audioDuration = value; }
    inline M2tsSettings& WithAudioDuration(M2tsAudioDuration value) { SetAudioDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of audio frames to insert for each PES packet.
     */
    inline int GetAudioFramesPerPes() const { return m_audioFramesPerPes; }
    inline bool AudioFramesPerPesHasBeenSet() const { return m_audioFramesPerPesHasBeenSet; }
    inline void SetAudioFramesPerPes(int value) { m_audioFramesPerPesHasBeenSet = true; m_audioFramesPerPes = value; }
    inline M2tsSettings& WithAudioFramesPerPes(int value) { SetAudioFramesPerPes(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the packet identifiers (PIDs) for any elementary audio streams you
     * include in this output. Specify multiple PIDs as a JSON array. Default is the
     * range 482-492.
     */
    inline const Aws::Vector<int>& GetAudioPids() const { return m_audioPids; }
    inline bool AudioPidsHasBeenSet() const { return m_audioPidsHasBeenSet; }
    template<typename AudioPidsT = Aws::Vector<int>>
    void SetAudioPids(AudioPidsT&& value) { m_audioPidsHasBeenSet = true; m_audioPids = std::forward<AudioPidsT>(value); }
    template<typename AudioPidsT = Aws::Vector<int>>
    M2tsSettings& WithAudioPids(AudioPidsT&& value) { SetAudioPids(std::forward<AudioPidsT>(value)); return *this;}
    inline M2tsSettings& AddAudioPids(int value) { m_audioPidsHasBeenSet = true; m_audioPids.push_back(value); return *this; }
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
    inline M2tsSettings& WithAudioPtsOffsetDelta(int value) { SetAudioPtsOffsetDelta(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the output bitrate of the transport stream in bits per second. Setting
     * to 0 lets the muxer automatically determine the appropriate bitrate. Other
     * common values are 3750000, 7500000, and 15000000.
     */
    inline int GetBitrate() const { return m_bitrate; }
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }
    inline M2tsSettings& WithBitrate(int value) { SetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Controls what buffer model to use for accurate interleaving. If set to
     * MULTIPLEX, use multiplex buffer model. If set to NONE, this can lead to lower
     * latency, but low-memory devices may not be able to play back the stream without
     * interruptions.
     */
    inline M2tsBufferModel GetBufferModel() const { return m_bufferModel; }
    inline bool BufferModelHasBeenSet() const { return m_bufferModelHasBeenSet; }
    inline void SetBufferModel(M2tsBufferModel value) { m_bufferModelHasBeenSet = true; m_bufferModel = value; }
    inline M2tsSettings& WithBufferModel(M2tsBufferModel value) { SetBufferModel(value); return *this;}
    ///@}

    ///@{
    /**
     * If you select ALIGN_TO_VIDEO, MediaConvert writes captions and data packets with
     * Presentation Timestamp (PTS) values greater than or equal to the first video
     * packet PTS (MediaConvert drops captions and data packets with lesser PTS
     * values). Keep the default value to allow all PTS values.
     */
    inline M2tsDataPtsControl GetDataPTSControl() const { return m_dataPTSControl; }
    inline bool DataPTSControlHasBeenSet() const { return m_dataPTSControlHasBeenSet; }
    inline void SetDataPTSControl(M2tsDataPtsControl value) { m_dataPTSControlHasBeenSet = true; m_dataPTSControl = value; }
    inline M2tsSettings& WithDataPTSControl(M2tsDataPtsControl value) { SetDataPTSControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Use these settings to insert a DVB Network Information Table (NIT) in the
     * transport stream of this output.
     */
    inline const DvbNitSettings& GetDvbNitSettings() const { return m_dvbNitSettings; }
    inline bool DvbNitSettingsHasBeenSet() const { return m_dvbNitSettingsHasBeenSet; }
    template<typename DvbNitSettingsT = DvbNitSettings>
    void SetDvbNitSettings(DvbNitSettingsT&& value) { m_dvbNitSettingsHasBeenSet = true; m_dvbNitSettings = std::forward<DvbNitSettingsT>(value); }
    template<typename DvbNitSettingsT = DvbNitSettings>
    M2tsSettings& WithDvbNitSettings(DvbNitSettingsT&& value) { SetDvbNitSettings(std::forward<DvbNitSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use these settings to insert a DVB Service Description Table (SDT) in the
     * transport stream of this output.
     */
    inline const DvbSdtSettings& GetDvbSdtSettings() const { return m_dvbSdtSettings; }
    inline bool DvbSdtSettingsHasBeenSet() const { return m_dvbSdtSettingsHasBeenSet; }
    template<typename DvbSdtSettingsT = DvbSdtSettings>
    void SetDvbSdtSettings(DvbSdtSettingsT&& value) { m_dvbSdtSettingsHasBeenSet = true; m_dvbSdtSettings = std::forward<DvbSdtSettingsT>(value); }
    template<typename DvbSdtSettingsT = DvbSdtSettings>
    M2tsSettings& WithDvbSdtSettings(DvbSdtSettingsT&& value) { SetDvbSdtSettings(std::forward<DvbSdtSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the packet identifiers (PIDs) for DVB subtitle data included in this
     * output. Specify multiple PIDs as a JSON array. Default is the range 460-479.
     */
    inline const Aws::Vector<int>& GetDvbSubPids() const { return m_dvbSubPids; }
    inline bool DvbSubPidsHasBeenSet() const { return m_dvbSubPidsHasBeenSet; }
    template<typename DvbSubPidsT = Aws::Vector<int>>
    void SetDvbSubPids(DvbSubPidsT&& value) { m_dvbSubPidsHasBeenSet = true; m_dvbSubPids = std::forward<DvbSubPidsT>(value); }
    template<typename DvbSubPidsT = Aws::Vector<int>>
    M2tsSettings& WithDvbSubPids(DvbSubPidsT&& value) { SetDvbSubPids(std::forward<DvbSubPidsT>(value)); return *this;}
    inline M2tsSettings& AddDvbSubPids(int value) { m_dvbSubPidsHasBeenSet = true; m_dvbSubPids.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * Use these settings to insert a DVB Time and Date Table (TDT) in the transport
     * stream of this output.
     */
    inline const DvbTdtSettings& GetDvbTdtSettings() const { return m_dvbTdtSettings; }
    inline bool DvbTdtSettingsHasBeenSet() const { return m_dvbTdtSettingsHasBeenSet; }
    template<typename DvbTdtSettingsT = DvbTdtSettings>
    void SetDvbTdtSettings(DvbTdtSettingsT&& value) { m_dvbTdtSettingsHasBeenSet = true; m_dvbTdtSettings = std::forward<DvbTdtSettingsT>(value); }
    template<typename DvbTdtSettingsT = DvbTdtSettings>
    M2tsSettings& WithDvbTdtSettings(DvbTdtSettingsT&& value) { SetDvbTdtSettings(std::forward<DvbTdtSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the packet identifier (PID) for DVB teletext data you include in this
     * output. Default is 499.
     */
    inline int GetDvbTeletextPid() const { return m_dvbTeletextPid; }
    inline bool DvbTeletextPidHasBeenSet() const { return m_dvbTeletextPidHasBeenSet; }
    inline void SetDvbTeletextPid(int value) { m_dvbTeletextPidHasBeenSet = true; m_dvbTeletextPid = value; }
    inline M2tsSettings& WithDvbTeletextPid(int value) { SetDvbTeletextPid(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to VIDEO_AND_FIXED_INTERVALS, audio EBP markers will be added to
     * partitions 3 and 4. The interval between these additional markers will be fixed,
     * and will be slightly shorter than the video EBP marker interval. When set to
     * VIDEO_INTERVAL, these additional markers will not be inserted. Only applicable
     * when EBP segmentation markers are is selected (segmentationMarkers is EBP or
     * EBP_LEGACY).
     */
    inline M2tsEbpAudioInterval GetEbpAudioInterval() const { return m_ebpAudioInterval; }
    inline bool EbpAudioIntervalHasBeenSet() const { return m_ebpAudioIntervalHasBeenSet; }
    inline void SetEbpAudioInterval(M2tsEbpAudioInterval value) { m_ebpAudioIntervalHasBeenSet = true; m_ebpAudioInterval = value; }
    inline M2tsSettings& WithEbpAudioInterval(M2tsEbpAudioInterval value) { SetEbpAudioInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Selects which PIDs to place EBP markers on. They can either be placed only on
     * the video PID, or on both the video PID and all audio PIDs. Only applicable when
     * EBP segmentation markers are is selected (segmentationMarkers is EBP or
     * EBP_LEGACY).
     */
    inline M2tsEbpPlacement GetEbpPlacement() const { return m_ebpPlacement; }
    inline bool EbpPlacementHasBeenSet() const { return m_ebpPlacementHasBeenSet; }
    inline void SetEbpPlacement(M2tsEbpPlacement value) { m_ebpPlacementHasBeenSet = true; m_ebpPlacement = value; }
    inline M2tsSettings& WithEbpPlacement(M2tsEbpPlacement value) { SetEbpPlacement(value); return *this;}
    ///@}

    ///@{
    /**
     * Controls whether to include the ES Rate field in the PES header.
     */
    inline M2tsEsRateInPes GetEsRateInPes() const { return m_esRateInPes; }
    inline bool EsRateInPesHasBeenSet() const { return m_esRateInPesHasBeenSet; }
    inline void SetEsRateInPes(M2tsEsRateInPes value) { m_esRateInPesHasBeenSet = true; m_esRateInPes = value; }
    inline M2tsSettings& WithEsRateInPes(M2tsEsRateInPes value) { SetEsRateInPes(value); return *this;}
    ///@}

    ///@{
    /**
     * Keep the default value unless you know that your audio EBP markers are
     * incorrectly appearing before your video EBP markers. To correct this problem,
     * set this value to Force.
     */
    inline M2tsForceTsVideoEbpOrder GetForceTsVideoEbpOrder() const { return m_forceTsVideoEbpOrder; }
    inline bool ForceTsVideoEbpOrderHasBeenSet() const { return m_forceTsVideoEbpOrderHasBeenSet; }
    inline void SetForceTsVideoEbpOrder(M2tsForceTsVideoEbpOrder value) { m_forceTsVideoEbpOrderHasBeenSet = true; m_forceTsVideoEbpOrder = value; }
    inline M2tsSettings& WithForceTsVideoEbpOrder(M2tsForceTsVideoEbpOrder value) { SetForceTsVideoEbpOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * The length, in seconds, of each fragment. Only used with EBP markers.
     */
    inline double GetFragmentTime() const { return m_fragmentTime; }
    inline bool FragmentTimeHasBeenSet() const { return m_fragmentTimeHasBeenSet; }
    inline void SetFragmentTime(double value) { m_fragmentTimeHasBeenSet = true; m_fragmentTime = value; }
    inline M2tsSettings& WithFragmentTime(double value) { SetFragmentTime(value); return *this;}
    ///@}

    ///@{
    /**
     * To include key-length-value metadata in this output: Set KLV metadata insertion
     * to Passthrough. MediaConvert reads KLV metadata present in your input and passes
     * it through to the output transport stream. To exclude this KLV metadata: Set KLV
     * metadata insertion to None or leave blank.
     */
    inline M2tsKlvMetadata GetKlvMetadata() const { return m_klvMetadata; }
    inline bool KlvMetadataHasBeenSet() const { return m_klvMetadataHasBeenSet; }
    inline void SetKlvMetadata(M2tsKlvMetadata value) { m_klvMetadataHasBeenSet = true; m_klvMetadata = value; }
    inline M2tsSettings& WithKlvMetadata(M2tsKlvMetadata value) { SetKlvMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the maximum time, in milliseconds, between Program Clock References
     * (PCRs) inserted into the transport stream.
     */
    inline int GetMaxPcrInterval() const { return m_maxPcrInterval; }
    inline bool MaxPcrIntervalHasBeenSet() const { return m_maxPcrIntervalHasBeenSet; }
    inline void SetMaxPcrInterval(int value) { m_maxPcrIntervalHasBeenSet = true; m_maxPcrInterval = value; }
    inline M2tsSettings& WithMaxPcrInterval(int value) { SetMaxPcrInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * When set, enforces that Encoder Boundary Points do not come within the specified
     * time interval of each other by looking ahead at input video. If another EBP is
     * going to come in within the specified time interval, the current EBP is not
     * emitted, and the segment is "stretched" to the next marker. The lookahead value
     * does not add latency to the system. The Live Event must be configured elsewhere
     * to create sufficient latency to make the lookahead accurate.
     */
    inline int GetMinEbpInterval() const { return m_minEbpInterval; }
    inline bool MinEbpIntervalHasBeenSet() const { return m_minEbpIntervalHasBeenSet; }
    inline void SetMinEbpInterval(int value) { m_minEbpIntervalHasBeenSet = true; m_minEbpInterval = value; }
    inline M2tsSettings& WithMinEbpInterval(int value) { SetMinEbpInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline M2tsNielsenId3 GetNielsenId3() const { return m_nielsenId3; }
    inline bool NielsenId3HasBeenSet() const { return m_nielsenId3HasBeenSet; }
    inline void SetNielsenId3(M2tsNielsenId3 value) { m_nielsenId3HasBeenSet = true; m_nielsenId3 = value; }
    inline M2tsSettings& WithNielsenId3(M2tsNielsenId3 value) { SetNielsenId3(value); return *this;}
    ///@}

    ///@{
    /**
     * Value in bits per second of extra null packets to insert into the transport
     * stream. This can be used if a downstream encryption system requires periodic
     * null packets.
     */
    inline double GetNullPacketBitrate() const { return m_nullPacketBitrate; }
    inline bool NullPacketBitrateHasBeenSet() const { return m_nullPacketBitrateHasBeenSet; }
    inline void SetNullPacketBitrate(double value) { m_nullPacketBitrateHasBeenSet = true; m_nullPacketBitrate = value; }
    inline M2tsSettings& WithNullPacketBitrate(double value) { SetNullPacketBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline int GetPatInterval() const { return m_patInterval; }
    inline bool PatIntervalHasBeenSet() const { return m_patIntervalHasBeenSet; }
    inline void SetPatInterval(int value) { m_patIntervalHasBeenSet = true; m_patInterval = value; }
    inline M2tsSettings& WithPatInterval(int value) { SetPatInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to PCR_EVERY_PES_PACKET, a Program Clock Reference value is inserted
     * for every Packetized Elementary Stream (PES) header. This is effective only when
     * the PCR PID is the same as the video or audio elementary stream.
     */
    inline M2tsPcrControl GetPcrControl() const { return m_pcrControl; }
    inline bool PcrControlHasBeenSet() const { return m_pcrControlHasBeenSet; }
    inline void SetPcrControl(M2tsPcrControl value) { m_pcrControlHasBeenSet = true; m_pcrControl = value; }
    inline M2tsSettings& WithPcrControl(M2tsPcrControl value) { SetPcrControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the packet identifier (PID) for the program clock reference (PCR) in
     * this output. If you do not specify a value, the service will use the value for
     * Video PID.
     */
    inline int GetPcrPid() const { return m_pcrPid; }
    inline bool PcrPidHasBeenSet() const { return m_pcrPidHasBeenSet; }
    inline void SetPcrPid(int value) { m_pcrPidHasBeenSet = true; m_pcrPid = value; }
    inline M2tsSettings& WithPcrPid(int value) { SetPcrPid(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the number of milliseconds between instances of the program map table
     * (PMT) in the output transport stream.
     */
    inline int GetPmtInterval() const { return m_pmtInterval; }
    inline bool PmtIntervalHasBeenSet() const { return m_pmtIntervalHasBeenSet; }
    inline void SetPmtInterval(int value) { m_pmtIntervalHasBeenSet = true; m_pmtInterval = value; }
    inline M2tsSettings& WithPmtInterval(int value) { SetPmtInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the packet identifier (PID) for the program map table (PMT) itself.
     * Default is 480.
     */
    inline int GetPmtPid() const { return m_pmtPid; }
    inline bool PmtPidHasBeenSet() const { return m_pmtPidHasBeenSet; }
    inline void SetPmtPid(int value) { m_pmtPidHasBeenSet = true; m_pmtPid = value; }
    inline M2tsSettings& WithPmtPid(int value) { SetPmtPid(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether MediaConvert automatically attempts to prevent decoder buffer
     * underflows in your transport stream output. Use if you are seeing decoder buffer
     * underflows in your output and are unable to increase your transport stream's
     * bitrate. For most workflows: We recommend that you keep the default value,
     * Disabled. To prevent decoder buffer underflows in your output, when possible:
     * Choose Enabled. Note that if MediaConvert prevents a decoder buffer underflow in
     * your output, output video quality is reduced and your job will take longer to
     * complete.
     */
    inline M2tsPreventBufferUnderflow GetPreventBufferUnderflow() const { return m_preventBufferUnderflow; }
    inline bool PreventBufferUnderflowHasBeenSet() const { return m_preventBufferUnderflowHasBeenSet; }
    inline void SetPreventBufferUnderflow(M2tsPreventBufferUnderflow value) { m_preventBufferUnderflowHasBeenSet = true; m_preventBufferUnderflow = value; }
    inline M2tsSettings& WithPreventBufferUnderflow(M2tsPreventBufferUnderflow value) { SetPreventBufferUnderflow(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the packet identifier (PID) of the private metadata stream. Default is
     * 503.
     */
    inline int GetPrivateMetadataPid() const { return m_privateMetadataPid; }
    inline bool PrivateMetadataPidHasBeenSet() const { return m_privateMetadataPidHasBeenSet; }
    inline void SetPrivateMetadataPid(int value) { m_privateMetadataPidHasBeenSet = true; m_privateMetadataPid = value; }
    inline M2tsSettings& WithPrivateMetadataPid(int value) { SetPrivateMetadataPid(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Program number to specify the program number used in the program map table
     * (PMT) for this output. Default is 1. Program numbers and program map tables are
     * parts of MPEG-2 transport stream containers, used for organizing data.
     */
    inline int GetProgramNumber() const { return m_programNumber; }
    inline bool ProgramNumberHasBeenSet() const { return m_programNumberHasBeenSet; }
    inline void SetProgramNumber(int value) { m_programNumberHasBeenSet = true; m_programNumber = value; }
    inline M2tsSettings& WithProgramNumber(int value) { SetProgramNumber(value); return *this;}
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
    inline M2tsSettings& WithPtsOffset(int value) { SetPtsOffset(value); return *this;}
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
    inline M2tsSettings& WithPtsOffsetMode(TsPtsOffset value) { SetPtsOffsetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to CBR, inserts null packets into transport stream to fill specified
     * bitrate. When set to VBR, the bitrate setting acts as the maximum bitrate, but
     * the output will not be padded up to that bitrate.
     */
    inline M2tsRateMode GetRateMode() const { return m_rateMode; }
    inline bool RateModeHasBeenSet() const { return m_rateModeHasBeenSet; }
    inline void SetRateMode(M2tsRateMode value) { m_rateModeHasBeenSet = true; m_rateMode = value; }
    inline M2tsSettings& WithRateMode(M2tsRateMode value) { SetRateMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Include this in your job settings to put SCTE-35 markers in your HLS and
     * transport stream outputs at the insertion points that you specify in an ESAM XML
     * document. Provide the document in the setting SCC XML.
     */
    inline const M2tsScte35Esam& GetScte35Esam() const { return m_scte35Esam; }
    inline bool Scte35EsamHasBeenSet() const { return m_scte35EsamHasBeenSet; }
    template<typename Scte35EsamT = M2tsScte35Esam>
    void SetScte35Esam(Scte35EsamT&& value) { m_scte35EsamHasBeenSet = true; m_scte35Esam = std::forward<Scte35EsamT>(value); }
    template<typename Scte35EsamT = M2tsScte35Esam>
    M2tsSettings& WithScte35Esam(Scte35EsamT&& value) { SetScte35Esam(std::forward<Scte35EsamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the packet identifier (PID) of the SCTE-35 stream in the transport
     * stream.
     */
    inline int GetScte35Pid() const { return m_scte35Pid; }
    inline bool Scte35PidHasBeenSet() const { return m_scte35PidHasBeenSet; }
    inline void SetScte35Pid(int value) { m_scte35PidHasBeenSet = true; m_scte35Pid = value; }
    inline M2tsSettings& WithScte35Pid(int value) { SetScte35Pid(value); return *this;}
    ///@}

    ///@{
    /**
     * For SCTE-35 markers from your input-- Choose Passthrough if you want SCTE-35
     * markers that appear in your input to also appear in this output. Choose None if
     * you don't want SCTE-35 markers in this output. For SCTE-35 markers from an ESAM
     * XML document-- Choose None. Also provide the ESAM XML as a string in the setting
     * Signal processing notification XML. Also enable ESAM SCTE-35 (include the
     * property scte35Esam).
     */
    inline M2tsScte35Source GetScte35Source() const { return m_scte35Source; }
    inline bool Scte35SourceHasBeenSet() const { return m_scte35SourceHasBeenSet; }
    inline void SetScte35Source(M2tsScte35Source value) { m_scte35SourceHasBeenSet = true; m_scte35Source = value; }
    inline M2tsSettings& WithScte35Source(M2tsScte35Source value) { SetScte35Source(value); return *this;}
    ///@}

    ///@{
    /**
     * Inserts segmentation markers at each segmentation_time period. rai_segstart sets
     * the Random Access Indicator bit in the adaptation field. rai_adapt sets the RAI
     * bit and adds the current timecode in the private data bytes. psi_segstart
     * inserts PAT and PMT tables at the start of segments. ebp adds Encoder Boundary
     * Point information to the adaptation field as per OpenCable specification
     * OC-SP-EBP-I01-130118. ebp_legacy adds Encoder Boundary Point information to the
     * adaptation field using a legacy proprietary format.
     */
    inline M2tsSegmentationMarkers GetSegmentationMarkers() const { return m_segmentationMarkers; }
    inline bool SegmentationMarkersHasBeenSet() const { return m_segmentationMarkersHasBeenSet; }
    inline void SetSegmentationMarkers(M2tsSegmentationMarkers value) { m_segmentationMarkersHasBeenSet = true; m_segmentationMarkers = value; }
    inline M2tsSettings& WithSegmentationMarkers(M2tsSegmentationMarkers value) { SetSegmentationMarkers(value); return *this;}
    ///@}

    ///@{
    /**
     * The segmentation style parameter controls how segmentation markers are inserted
     * into the transport stream. With avails, it is possible that segments may be
     * truncated, which can influence where future segmentation markers are inserted.
     * When a segmentation style of "reset_cadence" is selected and a segment is
     * truncated due to an avail, we will reset the segmentation cadence. This means
     * the subsequent segment will have a duration of of $segmentation_time seconds.
     * When a segmentation style of "maintain_cadence" is selected and a segment is
     * truncated due to an avail, we will not reset the segmentation cadence. This
     * means the subsequent segment will likely be truncated as well. However, all
     * segments after that will have a duration of $segmentation_time seconds. Note
     * that EBP lookahead is a slight exception to this rule.
     */
    inline M2tsSegmentationStyle GetSegmentationStyle() const { return m_segmentationStyle; }
    inline bool SegmentationStyleHasBeenSet() const { return m_segmentationStyleHasBeenSet; }
    inline void SetSegmentationStyle(M2tsSegmentationStyle value) { m_segmentationStyleHasBeenSet = true; m_segmentationStyle = value; }
    inline M2tsSettings& WithSegmentationStyle(M2tsSegmentationStyle value) { SetSegmentationStyle(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the length, in seconds, of each segment. Required unless markers is set
     * to _none_.
     */
    inline double GetSegmentationTime() const { return m_segmentationTime; }
    inline bool SegmentationTimeHasBeenSet() const { return m_segmentationTimeHasBeenSet; }
    inline void SetSegmentationTime(double value) { m_segmentationTimeHasBeenSet = true; m_segmentationTime = value; }
    inline M2tsSettings& WithSegmentationTime(double value) { SetSegmentationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) of the ID3 metadata stream in the transport stream.
     */
    inline int GetTimedMetadataPid() const { return m_timedMetadataPid; }
    inline bool TimedMetadataPidHasBeenSet() const { return m_timedMetadataPidHasBeenSet; }
    inline void SetTimedMetadataPid(int value) { m_timedMetadataPidHasBeenSet = true; m_timedMetadataPid = value; }
    inline M2tsSettings& WithTimedMetadataPid(int value) { SetTimedMetadataPid(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the ID for the transport stream itself in the program map table for this
     * output. Transport stream IDs and program map tables are parts of MPEG-2
     * transport stream containers, used for organizing data.
     */
    inline int GetTransportStreamId() const { return m_transportStreamId; }
    inline bool TransportStreamIdHasBeenSet() const { return m_transportStreamIdHasBeenSet; }
    inline void SetTransportStreamId(int value) { m_transportStreamIdHasBeenSet = true; m_transportStreamId = value; }
    inline M2tsSettings& WithTransportStreamId(int value) { SetTransportStreamId(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the packet identifier (PID) of the elementary video stream in the
     * transport stream.
     */
    inline int GetVideoPid() const { return m_videoPid; }
    inline bool VideoPidHasBeenSet() const { return m_videoPidHasBeenSet; }
    inline void SetVideoPid(int value) { m_videoPidHasBeenSet = true; m_videoPid = value; }
    inline M2tsSettings& WithVideoPid(int value) { SetVideoPid(value); return *this;}
    ///@}
  private:

    M2tsAudioBufferModel m_audioBufferModel{M2tsAudioBufferModel::NOT_SET};
    bool m_audioBufferModelHasBeenSet = false;

    M2tsAudioDuration m_audioDuration{M2tsAudioDuration::NOT_SET};
    bool m_audioDurationHasBeenSet = false;

    int m_audioFramesPerPes{0};
    bool m_audioFramesPerPesHasBeenSet = false;

    Aws::Vector<int> m_audioPids;
    bool m_audioPidsHasBeenSet = false;

    int m_audioPtsOffsetDelta{0};
    bool m_audioPtsOffsetDeltaHasBeenSet = false;

    int m_bitrate{0};
    bool m_bitrateHasBeenSet = false;

    M2tsBufferModel m_bufferModel{M2tsBufferModel::NOT_SET};
    bool m_bufferModelHasBeenSet = false;

    M2tsDataPtsControl m_dataPTSControl{M2tsDataPtsControl::NOT_SET};
    bool m_dataPTSControlHasBeenSet = false;

    DvbNitSettings m_dvbNitSettings;
    bool m_dvbNitSettingsHasBeenSet = false;

    DvbSdtSettings m_dvbSdtSettings;
    bool m_dvbSdtSettingsHasBeenSet = false;

    Aws::Vector<int> m_dvbSubPids;
    bool m_dvbSubPidsHasBeenSet = false;

    DvbTdtSettings m_dvbTdtSettings;
    bool m_dvbTdtSettingsHasBeenSet = false;

    int m_dvbTeletextPid{0};
    bool m_dvbTeletextPidHasBeenSet = false;

    M2tsEbpAudioInterval m_ebpAudioInterval{M2tsEbpAudioInterval::NOT_SET};
    bool m_ebpAudioIntervalHasBeenSet = false;

    M2tsEbpPlacement m_ebpPlacement{M2tsEbpPlacement::NOT_SET};
    bool m_ebpPlacementHasBeenSet = false;

    M2tsEsRateInPes m_esRateInPes{M2tsEsRateInPes::NOT_SET};
    bool m_esRateInPesHasBeenSet = false;

    M2tsForceTsVideoEbpOrder m_forceTsVideoEbpOrder{M2tsForceTsVideoEbpOrder::NOT_SET};
    bool m_forceTsVideoEbpOrderHasBeenSet = false;

    double m_fragmentTime{0.0};
    bool m_fragmentTimeHasBeenSet = false;

    M2tsKlvMetadata m_klvMetadata{M2tsKlvMetadata::NOT_SET};
    bool m_klvMetadataHasBeenSet = false;

    int m_maxPcrInterval{0};
    bool m_maxPcrIntervalHasBeenSet = false;

    int m_minEbpInterval{0};
    bool m_minEbpIntervalHasBeenSet = false;

    M2tsNielsenId3 m_nielsenId3{M2tsNielsenId3::NOT_SET};
    bool m_nielsenId3HasBeenSet = false;

    double m_nullPacketBitrate{0.0};
    bool m_nullPacketBitrateHasBeenSet = false;

    int m_patInterval{0};
    bool m_patIntervalHasBeenSet = false;

    M2tsPcrControl m_pcrControl{M2tsPcrControl::NOT_SET};
    bool m_pcrControlHasBeenSet = false;

    int m_pcrPid{0};
    bool m_pcrPidHasBeenSet = false;

    int m_pmtInterval{0};
    bool m_pmtIntervalHasBeenSet = false;

    int m_pmtPid{0};
    bool m_pmtPidHasBeenSet = false;

    M2tsPreventBufferUnderflow m_preventBufferUnderflow{M2tsPreventBufferUnderflow::NOT_SET};
    bool m_preventBufferUnderflowHasBeenSet = false;

    int m_privateMetadataPid{0};
    bool m_privateMetadataPidHasBeenSet = false;

    int m_programNumber{0};
    bool m_programNumberHasBeenSet = false;

    int m_ptsOffset{0};
    bool m_ptsOffsetHasBeenSet = false;

    TsPtsOffset m_ptsOffsetMode{TsPtsOffset::NOT_SET};
    bool m_ptsOffsetModeHasBeenSet = false;

    M2tsRateMode m_rateMode{M2tsRateMode::NOT_SET};
    bool m_rateModeHasBeenSet = false;

    M2tsScte35Esam m_scte35Esam;
    bool m_scte35EsamHasBeenSet = false;

    int m_scte35Pid{0};
    bool m_scte35PidHasBeenSet = false;

    M2tsScte35Source m_scte35Source{M2tsScte35Source::NOT_SET};
    bool m_scte35SourceHasBeenSet = false;

    M2tsSegmentationMarkers m_segmentationMarkers{M2tsSegmentationMarkers::NOT_SET};
    bool m_segmentationMarkersHasBeenSet = false;

    M2tsSegmentationStyle m_segmentationStyle{M2tsSegmentationStyle::NOT_SET};
    bool m_segmentationStyleHasBeenSet = false;

    double m_segmentationTime{0.0};
    bool m_segmentationTimeHasBeenSet = false;

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
