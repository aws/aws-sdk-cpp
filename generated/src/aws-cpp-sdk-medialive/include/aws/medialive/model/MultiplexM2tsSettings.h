/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/M2tsAbsentInputAudioBehavior.h>
#include <aws/medialive/model/M2tsArib.h>
#include <aws/medialive/model/M2tsAudioBufferModel.h>
#include <aws/medialive/model/M2tsAudioStreamType.h>
#include <aws/medialive/model/M2tsCcDescriptor.h>
#include <aws/medialive/model/M2tsEbifControl.h>
#include <aws/medialive/model/M2tsEsRateInPes.h>
#include <aws/medialive/model/M2tsKlv.h>
#include <aws/medialive/model/M2tsNielsenId3Behavior.h>
#include <aws/medialive/model/M2tsPcrControl.h>
#include <aws/medialive/model/M2tsScte35Control.h>
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
   * Multiplex M2ts Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexM2tsSettings">AWS
   * API Reference</a></p>
   */
  class MultiplexM2tsSettings
  {
  public:
    AWS_MEDIALIVE_API MultiplexM2tsSettings() = default;
    AWS_MEDIALIVE_API MultiplexM2tsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexM2tsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline MultiplexM2tsSettings& WithAbsentInputAudioBehavior(M2tsAbsentInputAudioBehavior value) { SetAbsentInputAudioBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to enabled, uses ARIB-compliant field muxing and removes video
     * descriptor.
     */
    inline M2tsArib GetArib() const { return m_arib; }
    inline bool AribHasBeenSet() const { return m_aribHasBeenSet; }
    inline void SetArib(M2tsArib value) { m_aribHasBeenSet = true; m_arib = value; }
    inline MultiplexM2tsSettings& WithArib(M2tsArib value) { SetArib(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to dvb, uses DVB buffer model for Dolby Digital audio.  When set to
     * atsc, the ATSC model is used.
     */
    inline M2tsAudioBufferModel GetAudioBufferModel() const { return m_audioBufferModel; }
    inline bool AudioBufferModelHasBeenSet() const { return m_audioBufferModelHasBeenSet; }
    inline void SetAudioBufferModel(M2tsAudioBufferModel value) { m_audioBufferModelHasBeenSet = true; m_audioBufferModel = value; }
    inline MultiplexM2tsSettings& WithAudioBufferModel(M2tsAudioBufferModel value) { SetAudioBufferModel(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of audio frames to insert for each PES packet.
     */
    inline int GetAudioFramesPerPes() const { return m_audioFramesPerPes; }
    inline bool AudioFramesPerPesHasBeenSet() const { return m_audioFramesPerPesHasBeenSet; }
    inline void SetAudioFramesPerPes(int value) { m_audioFramesPerPesHasBeenSet = true; m_audioFramesPerPes = value; }
    inline MultiplexM2tsSettings& WithAudioFramesPerPes(int value) { SetAudioFramesPerPes(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to atsc, uses stream type = 0x81 for AC3 and stream type = 0x87 for
     * EAC3. When set to dvb, uses stream type = 0x06.
     */
    inline M2tsAudioStreamType GetAudioStreamType() const { return m_audioStreamType; }
    inline bool AudioStreamTypeHasBeenSet() const { return m_audioStreamTypeHasBeenSet; }
    inline void SetAudioStreamType(M2tsAudioStreamType value) { m_audioStreamTypeHasBeenSet = true; m_audioStreamType = value; }
    inline MultiplexM2tsSettings& WithAudioStreamType(M2tsAudioStreamType value) { SetAudioStreamType(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to enabled, generates captionServiceDescriptor in PMT.
     */
    inline M2tsCcDescriptor GetCcDescriptor() const { return m_ccDescriptor; }
    inline bool CcDescriptorHasBeenSet() const { return m_ccDescriptorHasBeenSet; }
    inline void SetCcDescriptor(M2tsCcDescriptor value) { m_ccDescriptorHasBeenSet = true; m_ccDescriptor = value; }
    inline MultiplexM2tsSettings& WithCcDescriptor(M2tsCcDescriptor value) { SetCcDescriptor(value); return *this;}
    ///@}

    ///@{
    /**
     * If set to passthrough, passes any EBIF data from the input source to this
     * output.
     */
    inline M2tsEbifControl GetEbif() const { return m_ebif; }
    inline bool EbifHasBeenSet() const { return m_ebifHasBeenSet; }
    inline void SetEbif(M2tsEbifControl value) { m_ebifHasBeenSet = true; m_ebif = value; }
    inline MultiplexM2tsSettings& WithEbif(M2tsEbifControl value) { SetEbif(value); return *this;}
    ///@}

    ///@{
    /**
     * Include or exclude the ES Rate field in the PES header.
     */
    inline M2tsEsRateInPes GetEsRateInPes() const { return m_esRateInPes; }
    inline bool EsRateInPesHasBeenSet() const { return m_esRateInPesHasBeenSet; }
    inline void SetEsRateInPes(M2tsEsRateInPes value) { m_esRateInPesHasBeenSet = true; m_esRateInPes = value; }
    inline MultiplexM2tsSettings& WithEsRateInPes(M2tsEsRateInPes value) { SetEsRateInPes(value); return *this;}
    ///@}

    ///@{
    /**
     * If set to passthrough, passes any KLV data from the input source to this output.
     */
    inline M2tsKlv GetKlv() const { return m_klv; }
    inline bool KlvHasBeenSet() const { return m_klvHasBeenSet; }
    inline void SetKlv(M2tsKlv value) { m_klvHasBeenSet = true; m_klv = value; }
    inline MultiplexM2tsSettings& WithKlv(M2tsKlv value) { SetKlv(value); return *this;}
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
    inline MultiplexM2tsSettings& WithNielsenId3Behavior(M2tsNielsenId3Behavior value) { SetNielsenId3Behavior(value); return *this;}
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
    inline MultiplexM2tsSettings& WithPcrControl(M2tsPcrControl value) { SetPcrControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Maximum time in milliseconds between Program Clock Reference (PCRs) inserted
     * into the transport stream.
     */
    inline int GetPcrPeriod() const { return m_pcrPeriod; }
    inline bool PcrPeriodHasBeenSet() const { return m_pcrPeriodHasBeenSet; }
    inline void SetPcrPeriod(int value) { m_pcrPeriodHasBeenSet = true; m_pcrPeriod = value; }
    inline MultiplexM2tsSettings& WithPcrPeriod(int value) { SetPcrPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * Optionally pass SCTE-35 signals from the input source to this output.
     */
    inline M2tsScte35Control GetScte35Control() const { return m_scte35Control; }
    inline bool Scte35ControlHasBeenSet() const { return m_scte35ControlHasBeenSet; }
    inline void SetScte35Control(M2tsScte35Control value) { m_scte35ControlHasBeenSet = true; m_scte35Control = value; }
    inline MultiplexM2tsSettings& WithScte35Control(M2tsScte35Control value) { SetScte35Control(value); return *this;}
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
    inline MultiplexM2tsSettings& WithScte35PrerollPullupMilliseconds(double value) { SetScte35PrerollPullupMilliseconds(value); return *this;}
    ///@}
  private:

    M2tsAbsentInputAudioBehavior m_absentInputAudioBehavior{M2tsAbsentInputAudioBehavior::NOT_SET};
    bool m_absentInputAudioBehaviorHasBeenSet = false;

    M2tsArib m_arib{M2tsArib::NOT_SET};
    bool m_aribHasBeenSet = false;

    M2tsAudioBufferModel m_audioBufferModel{M2tsAudioBufferModel::NOT_SET};
    bool m_audioBufferModelHasBeenSet = false;

    int m_audioFramesPerPes{0};
    bool m_audioFramesPerPesHasBeenSet = false;

    M2tsAudioStreamType m_audioStreamType{M2tsAudioStreamType::NOT_SET};
    bool m_audioStreamTypeHasBeenSet = false;

    M2tsCcDescriptor m_ccDescriptor{M2tsCcDescriptor::NOT_SET};
    bool m_ccDescriptorHasBeenSet = false;

    M2tsEbifControl m_ebif{M2tsEbifControl::NOT_SET};
    bool m_ebifHasBeenSet = false;

    M2tsEsRateInPes m_esRateInPes{M2tsEsRateInPes::NOT_SET};
    bool m_esRateInPesHasBeenSet = false;

    M2tsKlv m_klv{M2tsKlv::NOT_SET};
    bool m_klvHasBeenSet = false;

    M2tsNielsenId3Behavior m_nielsenId3Behavior{M2tsNielsenId3Behavior::NOT_SET};
    bool m_nielsenId3BehaviorHasBeenSet = false;

    M2tsPcrControl m_pcrControl{M2tsPcrControl::NOT_SET};
    bool m_pcrControlHasBeenSet = false;

    int m_pcrPeriod{0};
    bool m_pcrPeriodHasBeenSet = false;

    M2tsScte35Control m_scte35Control{M2tsScte35Control::NOT_SET};
    bool m_scte35ControlHasBeenSet = false;

    double m_scte35PrerollPullupMilliseconds{0.0};
    bool m_scte35PrerollPullupMillisecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
