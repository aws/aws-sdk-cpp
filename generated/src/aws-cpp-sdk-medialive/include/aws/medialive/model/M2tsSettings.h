/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/M2tsAbsentInputAudioBehavior.h>
#include <aws/medialive/model/M2tsArib.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/M2tsAribCaptionsPidControl.h>
#include <aws/medialive/model/M2tsAudioBufferModel.h>
#include <aws/medialive/model/M2tsAudioStreamType.h>
#include <aws/medialive/model/M2tsBufferModel.h>
#include <aws/medialive/model/M2tsCcDescriptor.h>
#include <aws/medialive/model/DvbNitSettings.h>
#include <aws/medialive/model/DvbSdtSettings.h>
#include <aws/medialive/model/DvbTdtSettings.h>
#include <aws/medialive/model/M2tsEbifControl.h>
#include <aws/medialive/model/M2tsAudioInterval.h>
#include <aws/medialive/model/M2tsEbpPlacement.h>
#include <aws/medialive/model/M2tsEsRateInPes.h>
#include <aws/medialive/model/M2tsKlv.h>
#include <aws/medialive/model/M2tsNielsenId3Behavior.h>
#include <aws/medialive/model/M2tsPcrControl.h>
#include <aws/medialive/model/M2tsRateMode.h>
#include <aws/medialive/model/M2tsScte35Control.h>
#include <aws/medialive/model/M2tsSegmentationMarkers.h>
#include <aws/medialive/model/M2tsSegmentationStyle.h>
#include <aws/medialive/model/M2tsTimedMetadataBehavior.h>
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
   * M2ts Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/M2tsSettings">AWS
   * API Reference</a></p>
   */
  class M2tsSettings
  {
  public:
    AWS_MEDIALIVE_API M2tsSettings() = default;
    AWS_MEDIALIVE_API M2tsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API M2tsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * When set to drop, output audio streams will be removed from the program if the
     * selected input audio stream is removed from the input. This allows the output
     * audio configuration to dynamically change based on input configuration. If this
     * is set to encodeSilence, all output audio streams will output encoded silence
     * when not connected to an active input stream.
     */
    inline M2tsAbsentInputAudioBehavior GetAbsentInputAudioBehavior() const { return m_absentInputAudioBehavior; }
    inline bool AbsentInputAudioBehaviorHasBeenSet() const { return m_absentInputAudioBehaviorHasBeenSet; }
    inline void SetAbsentInputAudioBehavior(M2tsAbsentInputAudioBehavior value) { m_absentInputAudioBehaviorHasBeenSet = true; m_absentInputAudioBehavior = value; }
    inline M2tsSettings& WithAbsentInputAudioBehavior(M2tsAbsentInputAudioBehavior value) { SetAbsentInputAudioBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to enabled, uses ARIB-compliant field muxing and removes video
     * descriptor.
     */
    inline M2tsArib GetArib() const { return m_arib; }
    inline bool AribHasBeenSet() const { return m_aribHasBeenSet; }
    inline void SetArib(M2tsArib value) { m_aribHasBeenSet = true; m_arib = value; }
    inline M2tsSettings& WithArib(M2tsArib value) { SetArib(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) for ARIB Captions in the transport stream. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline const Aws::String& GetAribCaptionsPid() const { return m_aribCaptionsPid; }
    inline bool AribCaptionsPidHasBeenSet() const { return m_aribCaptionsPidHasBeenSet; }
    template<typename AribCaptionsPidT = Aws::String>
    void SetAribCaptionsPid(AribCaptionsPidT&& value) { m_aribCaptionsPidHasBeenSet = true; m_aribCaptionsPid = std::forward<AribCaptionsPidT>(value); }
    template<typename AribCaptionsPidT = Aws::String>
    M2tsSettings& WithAribCaptionsPid(AribCaptionsPidT&& value) { SetAribCaptionsPid(std::forward<AribCaptionsPidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If set to auto, pid number used for ARIB Captions will be auto-selected from
     * unused pids.  If set to useConfigured, ARIB Captions will be on the configured
     * pid number.
     */
    inline M2tsAribCaptionsPidControl GetAribCaptionsPidControl() const { return m_aribCaptionsPidControl; }
    inline bool AribCaptionsPidControlHasBeenSet() const { return m_aribCaptionsPidControlHasBeenSet; }
    inline void SetAribCaptionsPidControl(M2tsAribCaptionsPidControl value) { m_aribCaptionsPidControlHasBeenSet = true; m_aribCaptionsPidControl = value; }
    inline M2tsSettings& WithAribCaptionsPidControl(M2tsAribCaptionsPidControl value) { SetAribCaptionsPidControl(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to dvb, uses DVB buffer model for Dolby Digital audio.  When set to
     * atsc, the ATSC model is used.
     */
    inline M2tsAudioBufferModel GetAudioBufferModel() const { return m_audioBufferModel; }
    inline bool AudioBufferModelHasBeenSet() const { return m_audioBufferModelHasBeenSet; }
    inline void SetAudioBufferModel(M2tsAudioBufferModel value) { m_audioBufferModelHasBeenSet = true; m_audioBufferModel = value; }
    inline M2tsSettings& WithAudioBufferModel(M2tsAudioBufferModel value) { SetAudioBufferModel(value); return *this;}
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
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation. Can be entered as decimal or hexadecimal values. Each PID
     * specified must be in the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetAudioPids() const { return m_audioPids; }
    inline bool AudioPidsHasBeenSet() const { return m_audioPidsHasBeenSet; }
    template<typename AudioPidsT = Aws::String>
    void SetAudioPids(AudioPidsT&& value) { m_audioPidsHasBeenSet = true; m_audioPids = std::forward<AudioPidsT>(value); }
    template<typename AudioPidsT = Aws::String>
    M2tsSettings& WithAudioPids(AudioPidsT&& value) { SetAudioPids(std::forward<AudioPidsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * When set to atsc, uses stream type = 0x81 for AC3 and stream type = 0x87 for
     * EAC3. When set to dvb, uses stream type = 0x06.
     */
    inline M2tsAudioStreamType GetAudioStreamType() const { return m_audioStreamType; }
    inline bool AudioStreamTypeHasBeenSet() const { return m_audioStreamTypeHasBeenSet; }
    inline void SetAudioStreamType(M2tsAudioStreamType value) { m_audioStreamTypeHasBeenSet = true; m_audioStreamType = value; }
    inline M2tsSettings& WithAudioStreamType(M2tsAudioStreamType value) { SetAudioStreamType(value); return *this;}
    ///@}

    ///@{
    /**
     * The output bitrate of the transport stream in bits per second. Setting to 0 lets
     * the muxer automatically determine the appropriate bitrate.
     */
    inline int GetBitrate() const { return m_bitrate; }
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }
    inline M2tsSettings& WithBitrate(int value) { SetBitrate(value); return *this;}
    ///@}

    ///@{
    /**
     * Controls the timing accuracy for output network traffic. Leave as MULTIPLEX to
     * ensure accurate network packet timing. Or set to NONE, which might result in
     * lower latency but will result in more variability in output network packet
     * timing. This variability might cause interruptions, jitter, or bursty behavior
     * in your playback or receiving devices.
     */
    inline M2tsBufferModel GetBufferModel() const { return m_bufferModel; }
    inline bool BufferModelHasBeenSet() const { return m_bufferModelHasBeenSet; }
    inline void SetBufferModel(M2tsBufferModel value) { m_bufferModelHasBeenSet = true; m_bufferModel = value; }
    inline M2tsSettings& WithBufferModel(M2tsBufferModel value) { SetBufferModel(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to enabled, generates captionServiceDescriptor in PMT.
     */
    inline M2tsCcDescriptor GetCcDescriptor() const { return m_ccDescriptor; }
    inline bool CcDescriptorHasBeenSet() const { return m_ccDescriptorHasBeenSet; }
    inline void SetCcDescriptor(M2tsCcDescriptor value) { m_ccDescriptorHasBeenSet = true; m_ccDescriptor = value; }
    inline M2tsSettings& WithCcDescriptor(M2tsCcDescriptor value) { SetCcDescriptor(value); return *this;}
    ///@}

    ///@{
    /**
     * Inserts DVB Network Information Table (NIT) at the specified table repetition
     * interval.
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
     * Inserts DVB Service Description Table (SDT) at the specified table repetition
     * interval.
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
     * Packet Identifier (PID) for input source DVB Subtitle data to this output.
     * Multiple values are accepted, and can be entered in ranges and/or by comma
     * separation. Can be entered as decimal or hexadecimal values.  Each PID specified
     * must be in the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetDvbSubPids() const { return m_dvbSubPids; }
    inline bool DvbSubPidsHasBeenSet() const { return m_dvbSubPidsHasBeenSet; }
    template<typename DvbSubPidsT = Aws::String>
    void SetDvbSubPids(DvbSubPidsT&& value) { m_dvbSubPidsHasBeenSet = true; m_dvbSubPids = std::forward<DvbSubPidsT>(value); }
    template<typename DvbSubPidsT = Aws::String>
    M2tsSettings& WithDvbSubPids(DvbSubPidsT&& value) { SetDvbSubPids(std::forward<DvbSubPidsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Inserts DVB Time and Date Table (TDT) at the specified table repetition
     * interval.
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
     * Packet Identifier (PID) for input source DVB Teletext data to this output. Can
     * be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetDvbTeletextPid() const { return m_dvbTeletextPid; }
    inline bool DvbTeletextPidHasBeenSet() const { return m_dvbTeletextPidHasBeenSet; }
    template<typename DvbTeletextPidT = Aws::String>
    void SetDvbTeletextPid(DvbTeletextPidT&& value) { m_dvbTeletextPidHasBeenSet = true; m_dvbTeletextPid = std::forward<DvbTeletextPidT>(value); }
    template<typename DvbTeletextPidT = Aws::String>
    M2tsSettings& WithDvbTeletextPid(DvbTeletextPidT&& value) { SetDvbTeletextPid(std::forward<DvbTeletextPidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If set to passthrough, passes any EBIF data from the input source to this
     * output.
     */
    inline M2tsEbifControl GetEbif() const { return m_ebif; }
    inline bool EbifHasBeenSet() const { return m_ebifHasBeenSet; }
    inline void SetEbif(M2tsEbifControl value) { m_ebifHasBeenSet = true; m_ebif = value; }
    inline M2tsSettings& WithEbif(M2tsEbifControl value) { SetEbif(value); return *this;}
    ///@}

    ///@{
    /**
     * When videoAndFixedIntervals is selected, audio EBP markers will be added to
     * partitions 3 and 4. The interval between these additional markers will be fixed,
     * and will be slightly shorter than the video EBP marker interval. Only available
     * when EBP Cablelabs segmentation markers are selected.  Partitions 1 and 2 will
     * always follow the video interval.
     */
    inline M2tsAudioInterval GetEbpAudioInterval() const { return m_ebpAudioInterval; }
    inline bool EbpAudioIntervalHasBeenSet() const { return m_ebpAudioIntervalHasBeenSet; }
    inline void SetEbpAudioInterval(M2tsAudioInterval value) { m_ebpAudioIntervalHasBeenSet = true; m_ebpAudioInterval = value; }
    inline M2tsSettings& WithEbpAudioInterval(M2tsAudioInterval value) { SetEbpAudioInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * When set, enforces that Encoder Boundary Points do not come within the specified
     * time interval of each other by looking ahead at input video. If another EBP is
     * going to come in within the specified time interval, the current EBP is not
     * emitted, and the segment is "stretched" to the next marker.  The lookahead value
     * does not add latency to the system. The Live Event must be configured elsewhere
     * to create sufficient latency to make the lookahead accurate.
     */
    inline int GetEbpLookaheadMs() const { return m_ebpLookaheadMs; }
    inline bool EbpLookaheadMsHasBeenSet() const { return m_ebpLookaheadMsHasBeenSet; }
    inline void SetEbpLookaheadMs(int value) { m_ebpLookaheadMsHasBeenSet = true; m_ebpLookaheadMs = value; }
    inline M2tsSettings& WithEbpLookaheadMs(int value) { SetEbpLookaheadMs(value); return *this;}
    ///@}

    ///@{
    /**
     * Controls placement of EBP on Audio PIDs. If set to videoAndAudioPids, EBP
     * markers will be placed on the video PID and all audio PIDs.  If set to videoPid,
     * EBP markers will be placed on only the video PID.
     */
    inline M2tsEbpPlacement GetEbpPlacement() const { return m_ebpPlacement; }
    inline bool EbpPlacementHasBeenSet() const { return m_ebpPlacementHasBeenSet; }
    inline void SetEbpPlacement(M2tsEbpPlacement value) { m_ebpPlacementHasBeenSet = true; m_ebpPlacement = value; }
    inline M2tsSettings& WithEbpPlacement(M2tsEbpPlacement value) { SetEbpPlacement(value); return *this;}
    ///@}

    ///@{
    /**
     * This field is unused and deprecated.
     */
    inline const Aws::String& GetEcmPid() const { return m_ecmPid; }
    inline bool EcmPidHasBeenSet() const { return m_ecmPidHasBeenSet; }
    template<typename EcmPidT = Aws::String>
    void SetEcmPid(EcmPidT&& value) { m_ecmPidHasBeenSet = true; m_ecmPid = std::forward<EcmPidT>(value); }
    template<typename EcmPidT = Aws::String>
    M2tsSettings& WithEcmPid(EcmPidT&& value) { SetEcmPid(std::forward<EcmPidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Include or exclude the ES Rate field in the PES header.
     */
    inline M2tsEsRateInPes GetEsRateInPes() const { return m_esRateInPes; }
    inline bool EsRateInPesHasBeenSet() const { return m_esRateInPesHasBeenSet; }
    inline void SetEsRateInPes(M2tsEsRateInPes value) { m_esRateInPesHasBeenSet = true; m_esRateInPes = value; }
    inline M2tsSettings& WithEsRateInPes(M2tsEsRateInPes value) { SetEsRateInPes(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) for input source ETV Platform data to this output. Can
     * be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetEtvPlatformPid() const { return m_etvPlatformPid; }
    inline bool EtvPlatformPidHasBeenSet() const { return m_etvPlatformPidHasBeenSet; }
    template<typename EtvPlatformPidT = Aws::String>
    void SetEtvPlatformPid(EtvPlatformPidT&& value) { m_etvPlatformPidHasBeenSet = true; m_etvPlatformPid = std::forward<EtvPlatformPidT>(value); }
    template<typename EtvPlatformPidT = Aws::String>
    M2tsSettings& WithEtvPlatformPid(EtvPlatformPidT&& value) { SetEtvPlatformPid(std::forward<EtvPlatformPidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) for input source ETV Signal data to this output. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline const Aws::String& GetEtvSignalPid() const { return m_etvSignalPid; }
    inline bool EtvSignalPidHasBeenSet() const { return m_etvSignalPidHasBeenSet; }
    template<typename EtvSignalPidT = Aws::String>
    void SetEtvSignalPid(EtvSignalPidT&& value) { m_etvSignalPidHasBeenSet = true; m_etvSignalPid = std::forward<EtvSignalPidT>(value); }
    template<typename EtvSignalPidT = Aws::String>
    M2tsSettings& WithEtvSignalPid(EtvSignalPidT&& value) { SetEtvSignalPid(std::forward<EtvSignalPidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The length in seconds of each fragment. Only used with EBP markers.
     */
    inline double GetFragmentTime() const { return m_fragmentTime; }
    inline bool FragmentTimeHasBeenSet() const { return m_fragmentTimeHasBeenSet; }
    inline void SetFragmentTime(double value) { m_fragmentTimeHasBeenSet = true; m_fragmentTime = value; }
    inline M2tsSettings& WithFragmentTime(double value) { SetFragmentTime(value); return *this;}
    ///@}

    ///@{
    /**
     * If set to passthrough, passes any KLV data from the input source to this output.
     */
    inline M2tsKlv GetKlv() const { return m_klv; }
    inline bool KlvHasBeenSet() const { return m_klvHasBeenSet; }
    inline void SetKlv(M2tsKlv value) { m_klvHasBeenSet = true; m_klv = value; }
    inline M2tsSettings& WithKlv(M2tsKlv value) { SetKlv(value); return *this;}
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
    M2tsSettings& WithKlvDataPids(KlvDataPidsT&& value) { SetKlvDataPids(std::forward<KlvDataPidsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If set to passthrough, Nielsen inaudible tones for media tracking will be
     * detected in the input audio and an equivalent ID3 tag will be inserted in the
     * output.
     */
    inline M2tsNielsenId3Behavior GetNielsenId3Behavior() const { return m_nielsenId3Behavior; }
    inline bool NielsenId3BehaviorHasBeenSet() const { return m_nielsenId3BehaviorHasBeenSet; }
    inline void SetNielsenId3Behavior(M2tsNielsenId3Behavior value) { m_nielsenId3BehaviorHasBeenSet = true; m_nielsenId3Behavior = value; }
    inline M2tsSettings& WithNielsenId3Behavior(M2tsNielsenId3Behavior value) { SetNielsenId3Behavior(value); return *this;}
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
     * transport stream.  Valid values are 0, 10..1000.
     */
    inline int GetPatInterval() const { return m_patInterval; }
    inline bool PatIntervalHasBeenSet() const { return m_patIntervalHasBeenSet; }
    inline void SetPatInterval(int value) { m_patIntervalHasBeenSet = true; m_patInterval = value; }
    inline M2tsSettings& WithPatInterval(int value) { SetPatInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to pcrEveryPesPacket, a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline M2tsPcrControl GetPcrControl() const { return m_pcrControl; }
    inline bool PcrControlHasBeenSet() const { return m_pcrControlHasBeenSet; }
    inline void SetPcrControl(M2tsPcrControl value) { m_pcrControlHasBeenSet = true; m_pcrControl = value; }
    inline M2tsSettings& WithPcrControl(M2tsPcrControl value) { SetPcrControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Maximum time in milliseconds between Program Clock Reference (PCRs) inserted
     * into the transport stream.
     */
    inline int GetPcrPeriod() const { return m_pcrPeriod; }
    inline bool PcrPeriodHasBeenSet() const { return m_pcrPeriodHasBeenSet; }
    inline void SetPcrPeriod(int value) { m_pcrPeriodHasBeenSet = true; m_pcrPeriod = value; }
    inline M2tsSettings& WithPcrPeriod(int value) { SetPcrPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID. Can be entered as a decimal or hexadecimal value.  Valid values are
     * 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetPcrPid() const { return m_pcrPid; }
    inline bool PcrPidHasBeenSet() const { return m_pcrPidHasBeenSet; }
    template<typename PcrPidT = Aws::String>
    void SetPcrPid(PcrPidT&& value) { m_pcrPidHasBeenSet = true; m_pcrPid = std::forward<PcrPidT>(value); }
    template<typename PcrPidT = Aws::String>
    M2tsSettings& WithPcrPid(PcrPidT&& value) { SetPcrPid(std::forward<PcrPidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream. Valid values are 0, 10..1000.
     */
    inline int GetPmtInterval() const { return m_pmtInterval; }
    inline bool PmtIntervalHasBeenSet() const { return m_pmtIntervalHasBeenSet; }
    inline void SetPmtInterval(int value) { m_pmtIntervalHasBeenSet = true; m_pmtInterval = value; }
    inline M2tsSettings& WithPmtInterval(int value) { SetPmtInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value. Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetPmtPid() const { return m_pmtPid; }
    inline bool PmtPidHasBeenSet() const { return m_pmtPidHasBeenSet; }
    template<typename PmtPidT = Aws::String>
    void SetPmtPid(PmtPidT&& value) { m_pmtPidHasBeenSet = true; m_pmtPid = std::forward<PmtPidT>(value); }
    template<typename PmtPidT = Aws::String>
    M2tsSettings& WithPmtPid(PmtPidT&& value) { SetPmtPid(std::forward<PmtPidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The value of the program number field in the Program Map Table.
     */
    inline int GetProgramNum() const { return m_programNum; }
    inline bool ProgramNumHasBeenSet() const { return m_programNumHasBeenSet; }
    inline void SetProgramNum(int value) { m_programNumHasBeenSet = true; m_programNum = value; }
    inline M2tsSettings& WithProgramNum(int value) { SetProgramNum(value); return *this;}
    ///@}

    ///@{
    /**
     * When vbr, does not insert null packets into transport stream to fill specified
     * bitrate. The bitrate setting acts as the maximum bitrate when vbr is set.
     */
    inline M2tsRateMode GetRateMode() const { return m_rateMode; }
    inline bool RateModeHasBeenSet() const { return m_rateModeHasBeenSet; }
    inline void SetRateMode(M2tsRateMode value) { m_rateModeHasBeenSet = true; m_rateMode = value; }
    inline M2tsSettings& WithRateMode(M2tsRateMode value) { SetRateMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) for input source SCTE-27 data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetScte27Pids() const { return m_scte27Pids; }
    inline bool Scte27PidsHasBeenSet() const { return m_scte27PidsHasBeenSet; }
    template<typename Scte27PidsT = Aws::String>
    void SetScte27Pids(Scte27PidsT&& value) { m_scte27PidsHasBeenSet = true; m_scte27Pids = std::forward<Scte27PidsT>(value); }
    template<typename Scte27PidsT = Aws::String>
    M2tsSettings& WithScte27Pids(Scte27PidsT&& value) { SetScte27Pids(std::forward<Scte27PidsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optionally pass SCTE-35 signals from the input source to this output.
     */
    inline M2tsScte35Control GetScte35Control() const { return m_scte35Control; }
    inline bool Scte35ControlHasBeenSet() const { return m_scte35ControlHasBeenSet; }
    inline void SetScte35Control(M2tsScte35Control value) { m_scte35ControlHasBeenSet = true; m_scte35Control = value; }
    inline M2tsSettings& WithScte35Control(M2tsScte35Control value) { SetScte35Control(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline const Aws::String& GetScte35Pid() const { return m_scte35Pid; }
    inline bool Scte35PidHasBeenSet() const { return m_scte35PidHasBeenSet; }
    template<typename Scte35PidT = Aws::String>
    void SetScte35Pid(Scte35PidT&& value) { m_scte35PidHasBeenSet = true; m_scte35Pid = std::forward<Scte35PidT>(value); }
    template<typename Scte35PidT = Aws::String>
    M2tsSettings& WithScte35Pid(Scte35PidT&& value) { SetScte35Pid(std::forward<Scte35PidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Inserts segmentation markers at each segmentationTime period. raiSegstart sets
     * the Random Access Indicator bit in the adaptation field. raiAdapt sets the RAI
     * bit and adds the current timecode in the private data bytes. psiSegstart inserts
     * PAT and PMT tables at the start of segments. ebp adds Encoder Boundary Point
     * information to the adaptation field as per OpenCable specification
     * OC-SP-EBP-I01-130118. ebpLegacy adds Encoder Boundary Point information to the
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
     * truncated, which can influence where future segmentation markers are
     * inserted.

When a segmentation style of "resetCadence" is selected and a segment
     * is truncated due to an avail, we will reset the segmentation cadence. This means
     * the subsequent segment will have a duration of $segmentationTime seconds.

When
     * a segmentation style of "maintainCadence" is selected and a segment is truncated
     * due to an avail, we will not reset the segmentation cadence. This means the
     * subsequent segment will likely be truncated as well. However, all segments after
     * that will have a duration of $segmentationTime seconds. Note that EBP lookahead
     * is a slight exception to this rule.
     */
    inline M2tsSegmentationStyle GetSegmentationStyle() const { return m_segmentationStyle; }
    inline bool SegmentationStyleHasBeenSet() const { return m_segmentationStyleHasBeenSet; }
    inline void SetSegmentationStyle(M2tsSegmentationStyle value) { m_segmentationStyleHasBeenSet = true; m_segmentationStyle = value; }
    inline M2tsSettings& WithSegmentationStyle(M2tsSegmentationStyle value) { SetSegmentationStyle(value); return *this;}
    ///@}

    ///@{
    /**
     * The length in seconds of each segment. Required unless markers is set to _none_.
     */
    inline double GetSegmentationTime() const { return m_segmentationTime; }
    inline bool SegmentationTimeHasBeenSet() const { return m_segmentationTimeHasBeenSet; }
    inline void SetSegmentationTime(double value) { m_segmentationTimeHasBeenSet = true; m_segmentationTime = value; }
    inline M2tsSettings& WithSegmentationTime(double value) { SetSegmentationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to passthrough, timed metadata will be passed through from input to
     * output.
     */
    inline M2tsTimedMetadataBehavior GetTimedMetadataBehavior() const { return m_timedMetadataBehavior; }
    inline bool TimedMetadataBehaviorHasBeenSet() const { return m_timedMetadataBehaviorHasBeenSet; }
    inline void SetTimedMetadataBehavior(M2tsTimedMetadataBehavior value) { m_timedMetadataBehaviorHasBeenSet = true; m_timedMetadataBehavior = value; }
    inline M2tsSettings& WithTimedMetadataBehavior(M2tsTimedMetadataBehavior value) { SetTimedMetadataBehavior(value); return *this;}
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
    M2tsSettings& WithTimedMetadataPid(TimedMetadataPidT&& value) { SetTimedMetadataPid(std::forward<TimedMetadataPidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The value of the transport stream ID field in the Program Map Table.
     */
    inline int GetTransportStreamId() const { return m_transportStreamId; }
    inline bool TransportStreamIdHasBeenSet() const { return m_transportStreamIdHasBeenSet; }
    inline void SetTransportStreamId(int value) { m_transportStreamIdHasBeenSet = true; m_transportStreamId = value; }
    inline M2tsSettings& WithTransportStreamId(int value) { SetTransportStreamId(value); return *this;}
    ///@}

    ///@{
    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetVideoPid() const { return m_videoPid; }
    inline bool VideoPidHasBeenSet() const { return m_videoPidHasBeenSet; }
    template<typename VideoPidT = Aws::String>
    void SetVideoPid(VideoPidT&& value) { m_videoPidHasBeenSet = true; m_videoPid = std::forward<VideoPidT>(value); }
    template<typename VideoPidT = Aws::String>
    M2tsSettings& WithVideoPid(VideoPidT&& value) { SetVideoPid(std::forward<VideoPidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Defines the amount SCTE-35 preroll will be increased (in milliseconds) on the
     * output. Preroll is the amount of time between the presence of a SCTE-35
     * indication in a transport stream and the PTS of the video frame it references.
     * Zero means don't add pullup (it doesn't mean set the preroll to zero). Negative
     * pullup is not supported, which means that you can't make the preroll shorter. Be
     * aware that latency in the output will increase by the pullup amount.
     */
    inline double GetScte35PrerollPullupMilliseconds() const { return m_scte35PrerollPullupMilliseconds; }
    inline bool Scte35PrerollPullupMillisecondsHasBeenSet() const { return m_scte35PrerollPullupMillisecondsHasBeenSet; }
    inline void SetScte35PrerollPullupMilliseconds(double value) { m_scte35PrerollPullupMillisecondsHasBeenSet = true; m_scte35PrerollPullupMilliseconds = value; }
    inline M2tsSettings& WithScte35PrerollPullupMilliseconds(double value) { SetScte35PrerollPullupMilliseconds(value); return *this;}
    ///@}
  private:

    M2tsAbsentInputAudioBehavior m_absentInputAudioBehavior{M2tsAbsentInputAudioBehavior::NOT_SET};
    bool m_absentInputAudioBehaviorHasBeenSet = false;

    M2tsArib m_arib{M2tsArib::NOT_SET};
    bool m_aribHasBeenSet = false;

    Aws::String m_aribCaptionsPid;
    bool m_aribCaptionsPidHasBeenSet = false;

    M2tsAribCaptionsPidControl m_aribCaptionsPidControl{M2tsAribCaptionsPidControl::NOT_SET};
    bool m_aribCaptionsPidControlHasBeenSet = false;

    M2tsAudioBufferModel m_audioBufferModel{M2tsAudioBufferModel::NOT_SET};
    bool m_audioBufferModelHasBeenSet = false;

    int m_audioFramesPerPes{0};
    bool m_audioFramesPerPesHasBeenSet = false;

    Aws::String m_audioPids;
    bool m_audioPidsHasBeenSet = false;

    M2tsAudioStreamType m_audioStreamType{M2tsAudioStreamType::NOT_SET};
    bool m_audioStreamTypeHasBeenSet = false;

    int m_bitrate{0};
    bool m_bitrateHasBeenSet = false;

    M2tsBufferModel m_bufferModel{M2tsBufferModel::NOT_SET};
    bool m_bufferModelHasBeenSet = false;

    M2tsCcDescriptor m_ccDescriptor{M2tsCcDescriptor::NOT_SET};
    bool m_ccDescriptorHasBeenSet = false;

    DvbNitSettings m_dvbNitSettings;
    bool m_dvbNitSettingsHasBeenSet = false;

    DvbSdtSettings m_dvbSdtSettings;
    bool m_dvbSdtSettingsHasBeenSet = false;

    Aws::String m_dvbSubPids;
    bool m_dvbSubPidsHasBeenSet = false;

    DvbTdtSettings m_dvbTdtSettings;
    bool m_dvbTdtSettingsHasBeenSet = false;

    Aws::String m_dvbTeletextPid;
    bool m_dvbTeletextPidHasBeenSet = false;

    M2tsEbifControl m_ebif{M2tsEbifControl::NOT_SET};
    bool m_ebifHasBeenSet = false;

    M2tsAudioInterval m_ebpAudioInterval{M2tsAudioInterval::NOT_SET};
    bool m_ebpAudioIntervalHasBeenSet = false;

    int m_ebpLookaheadMs{0};
    bool m_ebpLookaheadMsHasBeenSet = false;

    M2tsEbpPlacement m_ebpPlacement{M2tsEbpPlacement::NOT_SET};
    bool m_ebpPlacementHasBeenSet = false;

    Aws::String m_ecmPid;
    bool m_ecmPidHasBeenSet = false;

    M2tsEsRateInPes m_esRateInPes{M2tsEsRateInPes::NOT_SET};
    bool m_esRateInPesHasBeenSet = false;

    Aws::String m_etvPlatformPid;
    bool m_etvPlatformPidHasBeenSet = false;

    Aws::String m_etvSignalPid;
    bool m_etvSignalPidHasBeenSet = false;

    double m_fragmentTime{0.0};
    bool m_fragmentTimeHasBeenSet = false;

    M2tsKlv m_klv{M2tsKlv::NOT_SET};
    bool m_klvHasBeenSet = false;

    Aws::String m_klvDataPids;
    bool m_klvDataPidsHasBeenSet = false;

    M2tsNielsenId3Behavior m_nielsenId3Behavior{M2tsNielsenId3Behavior::NOT_SET};
    bool m_nielsenId3BehaviorHasBeenSet = false;

    double m_nullPacketBitrate{0.0};
    bool m_nullPacketBitrateHasBeenSet = false;

    int m_patInterval{0};
    bool m_patIntervalHasBeenSet = false;

    M2tsPcrControl m_pcrControl{M2tsPcrControl::NOT_SET};
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

    M2tsRateMode m_rateMode{M2tsRateMode::NOT_SET};
    bool m_rateModeHasBeenSet = false;

    Aws::String m_scte27Pids;
    bool m_scte27PidsHasBeenSet = false;

    M2tsScte35Control m_scte35Control{M2tsScte35Control::NOT_SET};
    bool m_scte35ControlHasBeenSet = false;

    Aws::String m_scte35Pid;
    bool m_scte35PidHasBeenSet = false;

    M2tsSegmentationMarkers m_segmentationMarkers{M2tsSegmentationMarkers::NOT_SET};
    bool m_segmentationMarkersHasBeenSet = false;

    M2tsSegmentationStyle m_segmentationStyle{M2tsSegmentationStyle::NOT_SET};
    bool m_segmentationStyleHasBeenSet = false;

    double m_segmentationTime{0.0};
    bool m_segmentationTimeHasBeenSet = false;

    M2tsTimedMetadataBehavior m_timedMetadataBehavior{M2tsTimedMetadataBehavior::NOT_SET};
    bool m_timedMetadataBehaviorHasBeenSet = false;

    Aws::String m_timedMetadataPid;
    bool m_timedMetadataPidHasBeenSet = false;

    int m_transportStreamId{0};
    bool m_transportStreamIdHasBeenSet = false;

    Aws::String m_videoPid;
    bool m_videoPidHasBeenSet = false;

    double m_scte35PrerollPullupMilliseconds{0.0};
    bool m_scte35PrerollPullupMillisecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
