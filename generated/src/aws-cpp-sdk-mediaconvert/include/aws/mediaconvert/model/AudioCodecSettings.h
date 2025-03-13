/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AacSettings.h>
#include <aws/mediaconvert/model/Ac3Settings.h>
#include <aws/mediaconvert/model/AiffSettings.h>
#include <aws/mediaconvert/model/AudioCodec.h>
#include <aws/mediaconvert/model/Eac3AtmosSettings.h>
#include <aws/mediaconvert/model/Eac3Settings.h>
#include <aws/mediaconvert/model/FlacSettings.h>
#include <aws/mediaconvert/model/Mp2Settings.h>
#include <aws/mediaconvert/model/Mp3Settings.h>
#include <aws/mediaconvert/model/OpusSettings.h>
#include <aws/mediaconvert/model/VorbisSettings.h>
#include <aws/mediaconvert/model/WavSettings.h>
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
   * Settings related to audio encoding. The settings in this group vary depending on
   * the value that you choose for your audio codec.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AudioCodecSettings">AWS
   * API Reference</a></p>
   */
  class AudioCodecSettings
  {
  public:
    AWS_MEDIACONVERT_API AudioCodecSettings() = default;
    AWS_MEDIACONVERT_API AudioCodecSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AudioCodecSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Required when you set Codec to the value AAC. The service accepts one of two
     * mutually exclusive groups of AAC settings--VBR and CBR. To select one of these
     * modes, set the value of Bitrate control mode to "VBR" or "CBR". In VBR mode, you
     * control the audio quality with the setting VBR quality. In CBR mode, you use the
     * setting Bitrate. Defaults and valid values depend on the rate control mode.
     */
    inline const AacSettings& GetAacSettings() const { return m_aacSettings; }
    inline bool AacSettingsHasBeenSet() const { return m_aacSettingsHasBeenSet; }
    template<typename AacSettingsT = AacSettings>
    void SetAacSettings(AacSettingsT&& value) { m_aacSettingsHasBeenSet = true; m_aacSettings = std::forward<AacSettingsT>(value); }
    template<typename AacSettingsT = AacSettings>
    AudioCodecSettings& WithAacSettings(AacSettingsT&& value) { SetAacSettings(std::forward<AacSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value AC3.
     */
    inline const Ac3Settings& GetAc3Settings() const { return m_ac3Settings; }
    inline bool Ac3SettingsHasBeenSet() const { return m_ac3SettingsHasBeenSet; }
    template<typename Ac3SettingsT = Ac3Settings>
    void SetAc3Settings(Ac3SettingsT&& value) { m_ac3SettingsHasBeenSet = true; m_ac3Settings = std::forward<Ac3SettingsT>(value); }
    template<typename Ac3SettingsT = Ac3Settings>
    AudioCodecSettings& WithAc3Settings(Ac3SettingsT&& value) { SetAc3Settings(std::forward<Ac3SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value AIFF.
     */
    inline const AiffSettings& GetAiffSettings() const { return m_aiffSettings; }
    inline bool AiffSettingsHasBeenSet() const { return m_aiffSettingsHasBeenSet; }
    template<typename AiffSettingsT = AiffSettings>
    void SetAiffSettings(AiffSettingsT&& value) { m_aiffSettingsHasBeenSet = true; m_aiffSettings = std::forward<AiffSettingsT>(value); }
    template<typename AiffSettingsT = AiffSettings>
    AudioCodecSettings& WithAiffSettings(AiffSettingsT&& value) { SetAiffSettings(std::forward<AiffSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Choose the audio codec for this output. Note that the option Dolby Digital
     * passthrough applies only to Dolby Digital and Dolby Digital Plus audio inputs.
     * Make sure that you choose a codec that's supported with your output container:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers.html#reference-codecs-containers-output-audio
     * For audio-only outputs, make sure that both your input audio codec and your
     * output audio codec are supported for audio-only workflows. For more information,
     * see:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers-input.html#reference-codecs-containers-input-audio-only
     * and
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers.html#audio-only-output
     */
    inline AudioCodec GetCodec() const { return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    inline void SetCodec(AudioCodec value) { m_codecHasBeenSet = true; m_codec = value; }
    inline AudioCodecSettings& WithCodec(AudioCodec value) { SetCodec(value); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value EAC3_ATMOS.
     */
    inline const Eac3AtmosSettings& GetEac3AtmosSettings() const { return m_eac3AtmosSettings; }
    inline bool Eac3AtmosSettingsHasBeenSet() const { return m_eac3AtmosSettingsHasBeenSet; }
    template<typename Eac3AtmosSettingsT = Eac3AtmosSettings>
    void SetEac3AtmosSettings(Eac3AtmosSettingsT&& value) { m_eac3AtmosSettingsHasBeenSet = true; m_eac3AtmosSettings = std::forward<Eac3AtmosSettingsT>(value); }
    template<typename Eac3AtmosSettingsT = Eac3AtmosSettings>
    AudioCodecSettings& WithEac3AtmosSettings(Eac3AtmosSettingsT&& value) { SetEac3AtmosSettings(std::forward<Eac3AtmosSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value EAC3.
     */
    inline const Eac3Settings& GetEac3Settings() const { return m_eac3Settings; }
    inline bool Eac3SettingsHasBeenSet() const { return m_eac3SettingsHasBeenSet; }
    template<typename Eac3SettingsT = Eac3Settings>
    void SetEac3Settings(Eac3SettingsT&& value) { m_eac3SettingsHasBeenSet = true; m_eac3Settings = std::forward<Eac3SettingsT>(value); }
    template<typename Eac3SettingsT = Eac3Settings>
    AudioCodecSettings& WithEac3Settings(Eac3SettingsT&& value) { SetEac3Settings(std::forward<Eac3SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * FLAC.
     */
    inline const FlacSettings& GetFlacSettings() const { return m_flacSettings; }
    inline bool FlacSettingsHasBeenSet() const { return m_flacSettingsHasBeenSet; }
    template<typename FlacSettingsT = FlacSettings>
    void SetFlacSettings(FlacSettingsT&& value) { m_flacSettingsHasBeenSet = true; m_flacSettings = std::forward<FlacSettingsT>(value); }
    template<typename FlacSettingsT = FlacSettings>
    AudioCodecSettings& WithFlacSettings(FlacSettingsT&& value) { SetFlacSettings(std::forward<FlacSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value MP2.
     */
    inline const Mp2Settings& GetMp2Settings() const { return m_mp2Settings; }
    inline bool Mp2SettingsHasBeenSet() const { return m_mp2SettingsHasBeenSet; }
    template<typename Mp2SettingsT = Mp2Settings>
    void SetMp2Settings(Mp2SettingsT&& value) { m_mp2SettingsHasBeenSet = true; m_mp2Settings = std::forward<Mp2SettingsT>(value); }
    template<typename Mp2SettingsT = Mp2Settings>
    AudioCodecSettings& WithMp2Settings(Mp2SettingsT&& value) { SetMp2Settings(std::forward<Mp2SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * MP3.
     */
    inline const Mp3Settings& GetMp3Settings() const { return m_mp3Settings; }
    inline bool Mp3SettingsHasBeenSet() const { return m_mp3SettingsHasBeenSet; }
    template<typename Mp3SettingsT = Mp3Settings>
    void SetMp3Settings(Mp3SettingsT&& value) { m_mp3SettingsHasBeenSet = true; m_mp3Settings = std::forward<Mp3SettingsT>(value); }
    template<typename Mp3SettingsT = Mp3Settings>
    AudioCodecSettings& WithMp3Settings(Mp3SettingsT&& value) { SetMp3Settings(std::forward<Mp3SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * OPUS.
     */
    inline const OpusSettings& GetOpusSettings() const { return m_opusSettings; }
    inline bool OpusSettingsHasBeenSet() const { return m_opusSettingsHasBeenSet; }
    template<typename OpusSettingsT = OpusSettings>
    void SetOpusSettings(OpusSettingsT&& value) { m_opusSettingsHasBeenSet = true; m_opusSettings = std::forward<OpusSettingsT>(value); }
    template<typename OpusSettingsT = OpusSettings>
    AudioCodecSettings& WithOpusSettings(OpusSettingsT&& value) { SetOpusSettings(std::forward<OpusSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * Vorbis.
     */
    inline const VorbisSettings& GetVorbisSettings() const { return m_vorbisSettings; }
    inline bool VorbisSettingsHasBeenSet() const { return m_vorbisSettingsHasBeenSet; }
    template<typename VorbisSettingsT = VorbisSettings>
    void SetVorbisSettings(VorbisSettingsT&& value) { m_vorbisSettingsHasBeenSet = true; m_vorbisSettings = std::forward<VorbisSettingsT>(value); }
    template<typename VorbisSettingsT = VorbisSettings>
    AudioCodecSettings& WithVorbisSettings(VorbisSettingsT&& value) { SetVorbisSettings(std::forward<VorbisSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Required when you set Codec to the value WAV.
     */
    inline const WavSettings& GetWavSettings() const { return m_wavSettings; }
    inline bool WavSettingsHasBeenSet() const { return m_wavSettingsHasBeenSet; }
    template<typename WavSettingsT = WavSettings>
    void SetWavSettings(WavSettingsT&& value) { m_wavSettingsHasBeenSet = true; m_wavSettings = std::forward<WavSettingsT>(value); }
    template<typename WavSettingsT = WavSettings>
    AudioCodecSettings& WithWavSettings(WavSettingsT&& value) { SetWavSettings(std::forward<WavSettingsT>(value)); return *this;}
    ///@}
  private:

    AacSettings m_aacSettings;
    bool m_aacSettingsHasBeenSet = false;

    Ac3Settings m_ac3Settings;
    bool m_ac3SettingsHasBeenSet = false;

    AiffSettings m_aiffSettings;
    bool m_aiffSettingsHasBeenSet = false;

    AudioCodec m_codec{AudioCodec::NOT_SET};
    bool m_codecHasBeenSet = false;

    Eac3AtmosSettings m_eac3AtmosSettings;
    bool m_eac3AtmosSettingsHasBeenSet = false;

    Eac3Settings m_eac3Settings;
    bool m_eac3SettingsHasBeenSet = false;

    FlacSettings m_flacSettings;
    bool m_flacSettingsHasBeenSet = false;

    Mp2Settings m_mp2Settings;
    bool m_mp2SettingsHasBeenSet = false;

    Mp3Settings m_mp3Settings;
    bool m_mp3SettingsHasBeenSet = false;

    OpusSettings m_opusSettings;
    bool m_opusSettingsHasBeenSet = false;

    VorbisSettings m_vorbisSettings;
    bool m_vorbisSettingsHasBeenSet = false;

    WavSettings m_wavSettings;
    bool m_wavSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
