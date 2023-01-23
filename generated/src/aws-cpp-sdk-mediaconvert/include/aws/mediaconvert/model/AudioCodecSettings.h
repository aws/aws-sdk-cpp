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
    AWS_MEDIACONVERT_API AudioCodecSettings();
    AWS_MEDIACONVERT_API AudioCodecSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AudioCodecSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AAC. The service accepts one of two mutually exclusive groups of AAC
     * settings--VBR and CBR. To select one of these modes, set the value of Bitrate
     * control mode (rateControlMode) to "VBR" or "CBR".  In VBR mode, you control the
     * audio quality with the setting VBR quality (vbrQuality). In CBR mode, you use
     * the setting Bitrate (bitrate). Defaults and valid values depend on the rate
     * control mode.
     */
    inline const AacSettings& GetAacSettings() const{ return m_aacSettings; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AAC. The service accepts one of two mutually exclusive groups of AAC
     * settings--VBR and CBR. To select one of these modes, set the value of Bitrate
     * control mode (rateControlMode) to "VBR" or "CBR".  In VBR mode, you control the
     * audio quality with the setting VBR quality (vbrQuality). In CBR mode, you use
     * the setting Bitrate (bitrate). Defaults and valid values depend on the rate
     * control mode.
     */
    inline bool AacSettingsHasBeenSet() const { return m_aacSettingsHasBeenSet; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AAC. The service accepts one of two mutually exclusive groups of AAC
     * settings--VBR and CBR. To select one of these modes, set the value of Bitrate
     * control mode (rateControlMode) to "VBR" or "CBR".  In VBR mode, you control the
     * audio quality with the setting VBR quality (vbrQuality). In CBR mode, you use
     * the setting Bitrate (bitrate). Defaults and valid values depend on the rate
     * control mode.
     */
    inline void SetAacSettings(const AacSettings& value) { m_aacSettingsHasBeenSet = true; m_aacSettings = value; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AAC. The service accepts one of two mutually exclusive groups of AAC
     * settings--VBR and CBR. To select one of these modes, set the value of Bitrate
     * control mode (rateControlMode) to "VBR" or "CBR".  In VBR mode, you control the
     * audio quality with the setting VBR quality (vbrQuality). In CBR mode, you use
     * the setting Bitrate (bitrate). Defaults and valid values depend on the rate
     * control mode.
     */
    inline void SetAacSettings(AacSettings&& value) { m_aacSettingsHasBeenSet = true; m_aacSettings = std::move(value); }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AAC. The service accepts one of two mutually exclusive groups of AAC
     * settings--VBR and CBR. To select one of these modes, set the value of Bitrate
     * control mode (rateControlMode) to "VBR" or "CBR".  In VBR mode, you control the
     * audio quality with the setting VBR quality (vbrQuality). In CBR mode, you use
     * the setting Bitrate (bitrate). Defaults and valid values depend on the rate
     * control mode.
     */
    inline AudioCodecSettings& WithAacSettings(const AacSettings& value) { SetAacSettings(value); return *this;}

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AAC. The service accepts one of two mutually exclusive groups of AAC
     * settings--VBR and CBR. To select one of these modes, set the value of Bitrate
     * control mode (rateControlMode) to "VBR" or "CBR".  In VBR mode, you control the
     * audio quality with the setting VBR quality (vbrQuality). In CBR mode, you use
     * the setting Bitrate (bitrate). Defaults and valid values depend on the rate
     * control mode.
     */
    inline AudioCodecSettings& WithAacSettings(AacSettings&& value) { SetAacSettings(std::move(value)); return *this;}


    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AC3.
     */
    inline const Ac3Settings& GetAc3Settings() const{ return m_ac3Settings; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AC3.
     */
    inline bool Ac3SettingsHasBeenSet() const { return m_ac3SettingsHasBeenSet; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AC3.
     */
    inline void SetAc3Settings(const Ac3Settings& value) { m_ac3SettingsHasBeenSet = true; m_ac3Settings = value; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AC3.
     */
    inline void SetAc3Settings(Ac3Settings&& value) { m_ac3SettingsHasBeenSet = true; m_ac3Settings = std::move(value); }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AC3.
     */
    inline AudioCodecSettings& WithAc3Settings(const Ac3Settings& value) { SetAc3Settings(value); return *this;}

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AC3.
     */
    inline AudioCodecSettings& WithAc3Settings(Ac3Settings&& value) { SetAc3Settings(std::move(value)); return *this;}


    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AIFF.
     */
    inline const AiffSettings& GetAiffSettings() const{ return m_aiffSettings; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AIFF.
     */
    inline bool AiffSettingsHasBeenSet() const { return m_aiffSettingsHasBeenSet; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AIFF.
     */
    inline void SetAiffSettings(const AiffSettings& value) { m_aiffSettingsHasBeenSet = true; m_aiffSettings = value; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AIFF.
     */
    inline void SetAiffSettings(AiffSettings&& value) { m_aiffSettingsHasBeenSet = true; m_aiffSettings = std::move(value); }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AIFF.
     */
    inline AudioCodecSettings& WithAiffSettings(const AiffSettings& value) { SetAiffSettings(value); return *this;}

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value AIFF.
     */
    inline AudioCodecSettings& WithAiffSettings(AiffSettings&& value) { SetAiffSettings(std::move(value)); return *this;}


    /**
     * Choose the audio codec for this output. Note that the option Dolby Digital
     * passthrough (PASSTHROUGH) applies only to Dolby Digital and Dolby Digital Plus
     * audio inputs. Make sure that you choose a codec that's supported with your
     * output container:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers.html#reference-codecs-containers-output-audio
     * For audio-only outputs, make sure that both your input audio codec and your
     * output audio codec are supported for audio-only workflows. For more information,
     * see:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers-input.html#reference-codecs-containers-input-audio-only
     * and
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers.html#audio-only-output
     */
    inline const AudioCodec& GetCodec() const{ return m_codec; }

    /**
     * Choose the audio codec for this output. Note that the option Dolby Digital
     * passthrough (PASSTHROUGH) applies only to Dolby Digital and Dolby Digital Plus
     * audio inputs. Make sure that you choose a codec that's supported with your
     * output container:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers.html#reference-codecs-containers-output-audio
     * For audio-only outputs, make sure that both your input audio codec and your
     * output audio codec are supported for audio-only workflows. For more information,
     * see:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers-input.html#reference-codecs-containers-input-audio-only
     * and
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers.html#audio-only-output
     */
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }

    /**
     * Choose the audio codec for this output. Note that the option Dolby Digital
     * passthrough (PASSTHROUGH) applies only to Dolby Digital and Dolby Digital Plus
     * audio inputs. Make sure that you choose a codec that's supported with your
     * output container:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers.html#reference-codecs-containers-output-audio
     * For audio-only outputs, make sure that both your input audio codec and your
     * output audio codec are supported for audio-only workflows. For more information,
     * see:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers-input.html#reference-codecs-containers-input-audio-only
     * and
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers.html#audio-only-output
     */
    inline void SetCodec(const AudioCodec& value) { m_codecHasBeenSet = true; m_codec = value; }

    /**
     * Choose the audio codec for this output. Note that the option Dolby Digital
     * passthrough (PASSTHROUGH) applies only to Dolby Digital and Dolby Digital Plus
     * audio inputs. Make sure that you choose a codec that's supported with your
     * output container:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers.html#reference-codecs-containers-output-audio
     * For audio-only outputs, make sure that both your input audio codec and your
     * output audio codec are supported for audio-only workflows. For more information,
     * see:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers-input.html#reference-codecs-containers-input-audio-only
     * and
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers.html#audio-only-output
     */
    inline void SetCodec(AudioCodec&& value) { m_codecHasBeenSet = true; m_codec = std::move(value); }

    /**
     * Choose the audio codec for this output. Note that the option Dolby Digital
     * passthrough (PASSTHROUGH) applies only to Dolby Digital and Dolby Digital Plus
     * audio inputs. Make sure that you choose a codec that's supported with your
     * output container:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers.html#reference-codecs-containers-output-audio
     * For audio-only outputs, make sure that both your input audio codec and your
     * output audio codec are supported for audio-only workflows. For more information,
     * see:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers-input.html#reference-codecs-containers-input-audio-only
     * and
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers.html#audio-only-output
     */
    inline AudioCodecSettings& WithCodec(const AudioCodec& value) { SetCodec(value); return *this;}

    /**
     * Choose the audio codec for this output. Note that the option Dolby Digital
     * passthrough (PASSTHROUGH) applies only to Dolby Digital and Dolby Digital Plus
     * audio inputs. Make sure that you choose a codec that's supported with your
     * output container:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers.html#reference-codecs-containers-output-audio
     * For audio-only outputs, make sure that both your input audio codec and your
     * output audio codec are supported for audio-only workflows. For more information,
     * see:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers-input.html#reference-codecs-containers-input-audio-only
     * and
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/reference-codecs-containers.html#audio-only-output
     */
    inline AudioCodecSettings& WithCodec(AudioCodec&& value) { SetCodec(std::move(value)); return *this;}


    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value EAC3_ATMOS.
     */
    inline const Eac3AtmosSettings& GetEac3AtmosSettings() const{ return m_eac3AtmosSettings; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value EAC3_ATMOS.
     */
    inline bool Eac3AtmosSettingsHasBeenSet() const { return m_eac3AtmosSettingsHasBeenSet; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value EAC3_ATMOS.
     */
    inline void SetEac3AtmosSettings(const Eac3AtmosSettings& value) { m_eac3AtmosSettingsHasBeenSet = true; m_eac3AtmosSettings = value; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value EAC3_ATMOS.
     */
    inline void SetEac3AtmosSettings(Eac3AtmosSettings&& value) { m_eac3AtmosSettingsHasBeenSet = true; m_eac3AtmosSettings = std::move(value); }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value EAC3_ATMOS.
     */
    inline AudioCodecSettings& WithEac3AtmosSettings(const Eac3AtmosSettings& value) { SetEac3AtmosSettings(value); return *this;}

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value EAC3_ATMOS.
     */
    inline AudioCodecSettings& WithEac3AtmosSettings(Eac3AtmosSettings&& value) { SetEac3AtmosSettings(std::move(value)); return *this;}


    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value EAC3.
     */
    inline const Eac3Settings& GetEac3Settings() const{ return m_eac3Settings; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value EAC3.
     */
    inline bool Eac3SettingsHasBeenSet() const { return m_eac3SettingsHasBeenSet; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value EAC3.
     */
    inline void SetEac3Settings(const Eac3Settings& value) { m_eac3SettingsHasBeenSet = true; m_eac3Settings = value; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value EAC3.
     */
    inline void SetEac3Settings(Eac3Settings&& value) { m_eac3SettingsHasBeenSet = true; m_eac3Settings = std::move(value); }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value EAC3.
     */
    inline AudioCodecSettings& WithEac3Settings(const Eac3Settings& value) { SetEac3Settings(value); return *this;}

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value EAC3.
     */
    inline AudioCodecSettings& WithEac3Settings(Eac3Settings&& value) { SetEac3Settings(std::move(value)); return *this;}


    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value MP2.
     */
    inline const Mp2Settings& GetMp2Settings() const{ return m_mp2Settings; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value MP2.
     */
    inline bool Mp2SettingsHasBeenSet() const { return m_mp2SettingsHasBeenSet; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value MP2.
     */
    inline void SetMp2Settings(const Mp2Settings& value) { m_mp2SettingsHasBeenSet = true; m_mp2Settings = value; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value MP2.
     */
    inline void SetMp2Settings(Mp2Settings&& value) { m_mp2SettingsHasBeenSet = true; m_mp2Settings = std::move(value); }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value MP2.
     */
    inline AudioCodecSettings& WithMp2Settings(const Mp2Settings& value) { SetMp2Settings(value); return *this;}

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value MP2.
     */
    inline AudioCodecSettings& WithMp2Settings(Mp2Settings&& value) { SetMp2Settings(std::move(value)); return *this;}


    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * MP3.
     */
    inline const Mp3Settings& GetMp3Settings() const{ return m_mp3Settings; }

    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * MP3.
     */
    inline bool Mp3SettingsHasBeenSet() const { return m_mp3SettingsHasBeenSet; }

    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * MP3.
     */
    inline void SetMp3Settings(const Mp3Settings& value) { m_mp3SettingsHasBeenSet = true; m_mp3Settings = value; }

    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * MP3.
     */
    inline void SetMp3Settings(Mp3Settings&& value) { m_mp3SettingsHasBeenSet = true; m_mp3Settings = std::move(value); }

    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * MP3.
     */
    inline AudioCodecSettings& WithMp3Settings(const Mp3Settings& value) { SetMp3Settings(value); return *this;}

    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * MP3.
     */
    inline AudioCodecSettings& WithMp3Settings(Mp3Settings&& value) { SetMp3Settings(std::move(value)); return *this;}


    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * OPUS.
     */
    inline const OpusSettings& GetOpusSettings() const{ return m_opusSettings; }

    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * OPUS.
     */
    inline bool OpusSettingsHasBeenSet() const { return m_opusSettingsHasBeenSet; }

    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * OPUS.
     */
    inline void SetOpusSettings(const OpusSettings& value) { m_opusSettingsHasBeenSet = true; m_opusSettings = value; }

    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * OPUS.
     */
    inline void SetOpusSettings(OpusSettings&& value) { m_opusSettingsHasBeenSet = true; m_opusSettings = std::move(value); }

    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * OPUS.
     */
    inline AudioCodecSettings& WithOpusSettings(const OpusSettings& value) { SetOpusSettings(value); return *this;}

    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * OPUS.
     */
    inline AudioCodecSettings& WithOpusSettings(OpusSettings&& value) { SetOpusSettings(std::move(value)); return *this;}


    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * Vorbis.
     */
    inline const VorbisSettings& GetVorbisSettings() const{ return m_vorbisSettings; }

    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * Vorbis.
     */
    inline bool VorbisSettingsHasBeenSet() const { return m_vorbisSettingsHasBeenSet; }

    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * Vorbis.
     */
    inline void SetVorbisSettings(const VorbisSettings& value) { m_vorbisSettingsHasBeenSet = true; m_vorbisSettings = value; }

    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * Vorbis.
     */
    inline void SetVorbisSettings(VorbisSettings&& value) { m_vorbisSettingsHasBeenSet = true; m_vorbisSettings = std::move(value); }

    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * Vorbis.
     */
    inline AudioCodecSettings& WithVorbisSettings(const VorbisSettings& value) { SetVorbisSettings(value); return *this;}

    /**
     * Required when you set Codec, under AudioDescriptions>CodecSettings, to the value
     * Vorbis.
     */
    inline AudioCodecSettings& WithVorbisSettings(VorbisSettings&& value) { SetVorbisSettings(std::move(value)); return *this;}


    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value WAV.
     */
    inline const WavSettings& GetWavSettings() const{ return m_wavSettings; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value WAV.
     */
    inline bool WavSettingsHasBeenSet() const { return m_wavSettingsHasBeenSet; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value WAV.
     */
    inline void SetWavSettings(const WavSettings& value) { m_wavSettingsHasBeenSet = true; m_wavSettings = value; }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value WAV.
     */
    inline void SetWavSettings(WavSettings&& value) { m_wavSettingsHasBeenSet = true; m_wavSettings = std::move(value); }

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value WAV.
     */
    inline AudioCodecSettings& WithWavSettings(const WavSettings& value) { SetWavSettings(value); return *this;}

    /**
     * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
     * value WAV.
     */
    inline AudioCodecSettings& WithWavSettings(WavSettings&& value) { SetWavSettings(std::move(value)); return *this;}

  private:

    AacSettings m_aacSettings;
    bool m_aacSettingsHasBeenSet = false;

    Ac3Settings m_ac3Settings;
    bool m_ac3SettingsHasBeenSet = false;

    AiffSettings m_aiffSettings;
    bool m_aiffSettingsHasBeenSet = false;

    AudioCodec m_codec;
    bool m_codecHasBeenSet = false;

    Eac3AtmosSettings m_eac3AtmosSettings;
    bool m_eac3AtmosSettingsHasBeenSet = false;

    Eac3Settings m_eac3Settings;
    bool m_eac3SettingsHasBeenSet = false;

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
