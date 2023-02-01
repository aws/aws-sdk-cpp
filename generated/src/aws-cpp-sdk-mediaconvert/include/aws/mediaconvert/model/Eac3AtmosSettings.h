/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Eac3AtmosBitstreamMode.h>
#include <aws/mediaconvert/model/Eac3AtmosCodingMode.h>
#include <aws/mediaconvert/model/Eac3AtmosDialogueIntelligence.h>
#include <aws/mediaconvert/model/Eac3AtmosDownmixControl.h>
#include <aws/mediaconvert/model/Eac3AtmosDynamicRangeCompressionLine.h>
#include <aws/mediaconvert/model/Eac3AtmosDynamicRangeCompressionRf.h>
#include <aws/mediaconvert/model/Eac3AtmosDynamicRangeControl.h>
#include <aws/mediaconvert/model/Eac3AtmosMeteringMode.h>
#include <aws/mediaconvert/model/Eac3AtmosStereoDownmix.h>
#include <aws/mediaconvert/model/Eac3AtmosSurroundExMode.h>
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
   * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
   * value EAC3_ATMOS.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Eac3AtmosSettings">AWS
   * API Reference</a></p>
   */
  class Eac3AtmosSettings
  {
  public:
    AWS_MEDIACONVERT_API Eac3AtmosSettings();
    AWS_MEDIACONVERT_API Eac3AtmosSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Eac3AtmosSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the average bitrate for this output in bits per second. Valid values:
     * 384k, 448k, 576k, 640k, 768k, 1024k Default value: 448k Note that MediaConvert
     * supports 384k only with channel-based immersive (CBI) 7.1.4 and 5.1.4 inputs.
     * For CBI 9.1.6 and other input types, MediaConvert automatically increases your
     * output bitrate to 448k.
     */
    inline int GetBitrate() const{ return m_bitrate; }

    /**
     * Specify the average bitrate for this output in bits per second. Valid values:
     * 384k, 448k, 576k, 640k, 768k, 1024k Default value: 448k Note that MediaConvert
     * supports 384k only with channel-based immersive (CBI) 7.1.4 and 5.1.4 inputs.
     * For CBI 9.1.6 and other input types, MediaConvert automatically increases your
     * output bitrate to 448k.
     */
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }

    /**
     * Specify the average bitrate for this output in bits per second. Valid values:
     * 384k, 448k, 576k, 640k, 768k, 1024k Default value: 448k Note that MediaConvert
     * supports 384k only with channel-based immersive (CBI) 7.1.4 and 5.1.4 inputs.
     * For CBI 9.1.6 and other input types, MediaConvert automatically increases your
     * output bitrate to 448k.
     */
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Specify the average bitrate for this output in bits per second. Valid values:
     * 384k, 448k, 576k, 640k, 768k, 1024k Default value: 448k Note that MediaConvert
     * supports 384k only with channel-based immersive (CBI) 7.1.4 and 5.1.4 inputs.
     * For CBI 9.1.6 and other input types, MediaConvert automatically increases your
     * output bitrate to 448k.
     */
    inline Eac3AtmosSettings& WithBitrate(int value) { SetBitrate(value); return *this;}


    /**
     * Specify the bitstream mode for the E-AC-3 stream that the encoder emits. For
     * more information about the EAC3 bitstream mode, see ATSC A/52-2012 (Annex E).
     */
    inline const Eac3AtmosBitstreamMode& GetBitstreamMode() const{ return m_bitstreamMode; }

    /**
     * Specify the bitstream mode for the E-AC-3 stream that the encoder emits. For
     * more information about the EAC3 bitstream mode, see ATSC A/52-2012 (Annex E).
     */
    inline bool BitstreamModeHasBeenSet() const { return m_bitstreamModeHasBeenSet; }

    /**
     * Specify the bitstream mode for the E-AC-3 stream that the encoder emits. For
     * more information about the EAC3 bitstream mode, see ATSC A/52-2012 (Annex E).
     */
    inline void SetBitstreamMode(const Eac3AtmosBitstreamMode& value) { m_bitstreamModeHasBeenSet = true; m_bitstreamMode = value; }

    /**
     * Specify the bitstream mode for the E-AC-3 stream that the encoder emits. For
     * more information about the EAC3 bitstream mode, see ATSC A/52-2012 (Annex E).
     */
    inline void SetBitstreamMode(Eac3AtmosBitstreamMode&& value) { m_bitstreamModeHasBeenSet = true; m_bitstreamMode = std::move(value); }

    /**
     * Specify the bitstream mode for the E-AC-3 stream that the encoder emits. For
     * more information about the EAC3 bitstream mode, see ATSC A/52-2012 (Annex E).
     */
    inline Eac3AtmosSettings& WithBitstreamMode(const Eac3AtmosBitstreamMode& value) { SetBitstreamMode(value); return *this;}

    /**
     * Specify the bitstream mode for the E-AC-3 stream that the encoder emits. For
     * more information about the EAC3 bitstream mode, see ATSC A/52-2012 (Annex E).
     */
    inline Eac3AtmosSettings& WithBitstreamMode(Eac3AtmosBitstreamMode&& value) { SetBitstreamMode(std::move(value)); return *this;}


    /**
     * The coding mode for Dolby Digital Plus JOC (Atmos).
     */
    inline const Eac3AtmosCodingMode& GetCodingMode() const{ return m_codingMode; }

    /**
     * The coding mode for Dolby Digital Plus JOC (Atmos).
     */
    inline bool CodingModeHasBeenSet() const { return m_codingModeHasBeenSet; }

    /**
     * The coding mode for Dolby Digital Plus JOC (Atmos).
     */
    inline void SetCodingMode(const Eac3AtmosCodingMode& value) { m_codingModeHasBeenSet = true; m_codingMode = value; }

    /**
     * The coding mode for Dolby Digital Plus JOC (Atmos).
     */
    inline void SetCodingMode(Eac3AtmosCodingMode&& value) { m_codingModeHasBeenSet = true; m_codingMode = std::move(value); }

    /**
     * The coding mode for Dolby Digital Plus JOC (Atmos).
     */
    inline Eac3AtmosSettings& WithCodingMode(const Eac3AtmosCodingMode& value) { SetCodingMode(value); return *this;}

    /**
     * The coding mode for Dolby Digital Plus JOC (Atmos).
     */
    inline Eac3AtmosSettings& WithCodingMode(Eac3AtmosCodingMode&& value) { SetCodingMode(std::move(value)); return *this;}


    /**
     * Enable Dolby Dialogue Intelligence to adjust loudness based on dialogue
     * analysis.
     */
    inline const Eac3AtmosDialogueIntelligence& GetDialogueIntelligence() const{ return m_dialogueIntelligence; }

    /**
     * Enable Dolby Dialogue Intelligence to adjust loudness based on dialogue
     * analysis.
     */
    inline bool DialogueIntelligenceHasBeenSet() const { return m_dialogueIntelligenceHasBeenSet; }

    /**
     * Enable Dolby Dialogue Intelligence to adjust loudness based on dialogue
     * analysis.
     */
    inline void SetDialogueIntelligence(const Eac3AtmosDialogueIntelligence& value) { m_dialogueIntelligenceHasBeenSet = true; m_dialogueIntelligence = value; }

    /**
     * Enable Dolby Dialogue Intelligence to adjust loudness based on dialogue
     * analysis.
     */
    inline void SetDialogueIntelligence(Eac3AtmosDialogueIntelligence&& value) { m_dialogueIntelligenceHasBeenSet = true; m_dialogueIntelligence = std::move(value); }

    /**
     * Enable Dolby Dialogue Intelligence to adjust loudness based on dialogue
     * analysis.
     */
    inline Eac3AtmosSettings& WithDialogueIntelligence(const Eac3AtmosDialogueIntelligence& value) { SetDialogueIntelligence(value); return *this;}

    /**
     * Enable Dolby Dialogue Intelligence to adjust loudness based on dialogue
     * analysis.
     */
    inline Eac3AtmosSettings& WithDialogueIntelligence(Eac3AtmosDialogueIntelligence&& value) { SetDialogueIntelligence(std::move(value)); return *this;}


    /**
     * Specify whether MediaConvert should use any downmix metadata from your input
     * file. Keep the default value, Custom (SPECIFIED) to provide downmix values in
     * your job settings. Choose Follow source (INITIALIZE_FROM_SOURCE) to use the
     * metadata from your input. Related settings--Use these settings to specify your
     * downmix values: Left only/Right only surround (LoRoSurroundMixLevel), Left
     * total/Right total surround (LtRtSurroundMixLevel), Left total/Right total center
     * (LtRtCenterMixLevel), Left only/Right only center (LoRoCenterMixLevel),  and
     * Stereo downmix (StereoDownmix). When you keep Custom (SPECIFIED) for Downmix
     * control (DownmixControl) and you don't specify values for the related settings,
     * MediaConvert uses default values for those settings.
     */
    inline const Eac3AtmosDownmixControl& GetDownmixControl() const{ return m_downmixControl; }

    /**
     * Specify whether MediaConvert should use any downmix metadata from your input
     * file. Keep the default value, Custom (SPECIFIED) to provide downmix values in
     * your job settings. Choose Follow source (INITIALIZE_FROM_SOURCE) to use the
     * metadata from your input. Related settings--Use these settings to specify your
     * downmix values: Left only/Right only surround (LoRoSurroundMixLevel), Left
     * total/Right total surround (LtRtSurroundMixLevel), Left total/Right total center
     * (LtRtCenterMixLevel), Left only/Right only center (LoRoCenterMixLevel),  and
     * Stereo downmix (StereoDownmix). When you keep Custom (SPECIFIED) for Downmix
     * control (DownmixControl) and you don't specify values for the related settings,
     * MediaConvert uses default values for those settings.
     */
    inline bool DownmixControlHasBeenSet() const { return m_downmixControlHasBeenSet; }

    /**
     * Specify whether MediaConvert should use any downmix metadata from your input
     * file. Keep the default value, Custom (SPECIFIED) to provide downmix values in
     * your job settings. Choose Follow source (INITIALIZE_FROM_SOURCE) to use the
     * metadata from your input. Related settings--Use these settings to specify your
     * downmix values: Left only/Right only surround (LoRoSurroundMixLevel), Left
     * total/Right total surround (LtRtSurroundMixLevel), Left total/Right total center
     * (LtRtCenterMixLevel), Left only/Right only center (LoRoCenterMixLevel),  and
     * Stereo downmix (StereoDownmix). When you keep Custom (SPECIFIED) for Downmix
     * control (DownmixControl) and you don't specify values for the related settings,
     * MediaConvert uses default values for those settings.
     */
    inline void SetDownmixControl(const Eac3AtmosDownmixControl& value) { m_downmixControlHasBeenSet = true; m_downmixControl = value; }

    /**
     * Specify whether MediaConvert should use any downmix metadata from your input
     * file. Keep the default value, Custom (SPECIFIED) to provide downmix values in
     * your job settings. Choose Follow source (INITIALIZE_FROM_SOURCE) to use the
     * metadata from your input. Related settings--Use these settings to specify your
     * downmix values: Left only/Right only surround (LoRoSurroundMixLevel), Left
     * total/Right total surround (LtRtSurroundMixLevel), Left total/Right total center
     * (LtRtCenterMixLevel), Left only/Right only center (LoRoCenterMixLevel),  and
     * Stereo downmix (StereoDownmix). When you keep Custom (SPECIFIED) for Downmix
     * control (DownmixControl) and you don't specify values for the related settings,
     * MediaConvert uses default values for those settings.
     */
    inline void SetDownmixControl(Eac3AtmosDownmixControl&& value) { m_downmixControlHasBeenSet = true; m_downmixControl = std::move(value); }

    /**
     * Specify whether MediaConvert should use any downmix metadata from your input
     * file. Keep the default value, Custom (SPECIFIED) to provide downmix values in
     * your job settings. Choose Follow source (INITIALIZE_FROM_SOURCE) to use the
     * metadata from your input. Related settings--Use these settings to specify your
     * downmix values: Left only/Right only surround (LoRoSurroundMixLevel), Left
     * total/Right total surround (LtRtSurroundMixLevel), Left total/Right total center
     * (LtRtCenterMixLevel), Left only/Right only center (LoRoCenterMixLevel),  and
     * Stereo downmix (StereoDownmix). When you keep Custom (SPECIFIED) for Downmix
     * control (DownmixControl) and you don't specify values for the related settings,
     * MediaConvert uses default values for those settings.
     */
    inline Eac3AtmosSettings& WithDownmixControl(const Eac3AtmosDownmixControl& value) { SetDownmixControl(value); return *this;}

    /**
     * Specify whether MediaConvert should use any downmix metadata from your input
     * file. Keep the default value, Custom (SPECIFIED) to provide downmix values in
     * your job settings. Choose Follow source (INITIALIZE_FROM_SOURCE) to use the
     * metadata from your input. Related settings--Use these settings to specify your
     * downmix values: Left only/Right only surround (LoRoSurroundMixLevel), Left
     * total/Right total surround (LtRtSurroundMixLevel), Left total/Right total center
     * (LtRtCenterMixLevel), Left only/Right only center (LoRoCenterMixLevel),  and
     * Stereo downmix (StereoDownmix). When you keep Custom (SPECIFIED) for Downmix
     * control (DownmixControl) and you don't specify values for the related settings,
     * MediaConvert uses default values for those settings.
     */
    inline Eac3AtmosSettings& WithDownmixControl(Eac3AtmosDownmixControl&& value) { SetDownmixControl(std::move(value)); return *this;}


    /**
     * Choose the Dolby dynamic range control (DRC) profile that MediaConvert uses when
     * encoding the metadata in the Dolby stream for the line operating mode. Default
     * value: Film light (ATMOS_STORAGE_DDP_COMPR_FILM_LIGHT) Related setting: To have
     * MediaConvert use the value you specify here, keep the default value, Custom
     * (SPECIFIED) for the setting Dynamic range control (DynamicRangeControl).
     * Otherwise, MediaConvert ignores Dynamic range compression line
     * (DynamicRangeCompressionLine). For information about the Dolby DRC operating
     * modes and profiles, see the Dynamic Range Control chapter of the Dolby Metadata
     * Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline const Eac3AtmosDynamicRangeCompressionLine& GetDynamicRangeCompressionLine() const{ return m_dynamicRangeCompressionLine; }

    /**
     * Choose the Dolby dynamic range control (DRC) profile that MediaConvert uses when
     * encoding the metadata in the Dolby stream for the line operating mode. Default
     * value: Film light (ATMOS_STORAGE_DDP_COMPR_FILM_LIGHT) Related setting: To have
     * MediaConvert use the value you specify here, keep the default value, Custom
     * (SPECIFIED) for the setting Dynamic range control (DynamicRangeControl).
     * Otherwise, MediaConvert ignores Dynamic range compression line
     * (DynamicRangeCompressionLine). For information about the Dolby DRC operating
     * modes and profiles, see the Dynamic Range Control chapter of the Dolby Metadata
     * Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline bool DynamicRangeCompressionLineHasBeenSet() const { return m_dynamicRangeCompressionLineHasBeenSet; }

    /**
     * Choose the Dolby dynamic range control (DRC) profile that MediaConvert uses when
     * encoding the metadata in the Dolby stream for the line operating mode. Default
     * value: Film light (ATMOS_STORAGE_DDP_COMPR_FILM_LIGHT) Related setting: To have
     * MediaConvert use the value you specify here, keep the default value, Custom
     * (SPECIFIED) for the setting Dynamic range control (DynamicRangeControl).
     * Otherwise, MediaConvert ignores Dynamic range compression line
     * (DynamicRangeCompressionLine). For information about the Dolby DRC operating
     * modes and profiles, see the Dynamic Range Control chapter of the Dolby Metadata
     * Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline void SetDynamicRangeCompressionLine(const Eac3AtmosDynamicRangeCompressionLine& value) { m_dynamicRangeCompressionLineHasBeenSet = true; m_dynamicRangeCompressionLine = value; }

    /**
     * Choose the Dolby dynamic range control (DRC) profile that MediaConvert uses when
     * encoding the metadata in the Dolby stream for the line operating mode. Default
     * value: Film light (ATMOS_STORAGE_DDP_COMPR_FILM_LIGHT) Related setting: To have
     * MediaConvert use the value you specify here, keep the default value, Custom
     * (SPECIFIED) for the setting Dynamic range control (DynamicRangeControl).
     * Otherwise, MediaConvert ignores Dynamic range compression line
     * (DynamicRangeCompressionLine). For information about the Dolby DRC operating
     * modes and profiles, see the Dynamic Range Control chapter of the Dolby Metadata
     * Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline void SetDynamicRangeCompressionLine(Eac3AtmosDynamicRangeCompressionLine&& value) { m_dynamicRangeCompressionLineHasBeenSet = true; m_dynamicRangeCompressionLine = std::move(value); }

    /**
     * Choose the Dolby dynamic range control (DRC) profile that MediaConvert uses when
     * encoding the metadata in the Dolby stream for the line operating mode. Default
     * value: Film light (ATMOS_STORAGE_DDP_COMPR_FILM_LIGHT) Related setting: To have
     * MediaConvert use the value you specify here, keep the default value, Custom
     * (SPECIFIED) for the setting Dynamic range control (DynamicRangeControl).
     * Otherwise, MediaConvert ignores Dynamic range compression line
     * (DynamicRangeCompressionLine). For information about the Dolby DRC operating
     * modes and profiles, see the Dynamic Range Control chapter of the Dolby Metadata
     * Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline Eac3AtmosSettings& WithDynamicRangeCompressionLine(const Eac3AtmosDynamicRangeCompressionLine& value) { SetDynamicRangeCompressionLine(value); return *this;}

    /**
     * Choose the Dolby dynamic range control (DRC) profile that MediaConvert uses when
     * encoding the metadata in the Dolby stream for the line operating mode. Default
     * value: Film light (ATMOS_STORAGE_DDP_COMPR_FILM_LIGHT) Related setting: To have
     * MediaConvert use the value you specify here, keep the default value, Custom
     * (SPECIFIED) for the setting Dynamic range control (DynamicRangeControl).
     * Otherwise, MediaConvert ignores Dynamic range compression line
     * (DynamicRangeCompressionLine). For information about the Dolby DRC operating
     * modes and profiles, see the Dynamic Range Control chapter of the Dolby Metadata
     * Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline Eac3AtmosSettings& WithDynamicRangeCompressionLine(Eac3AtmosDynamicRangeCompressionLine&& value) { SetDynamicRangeCompressionLine(std::move(value)); return *this;}


    /**
     * Choose the Dolby dynamic range control (DRC) profile that MediaConvert uses when
     * encoding the metadata in the Dolby stream for the RF operating mode. Default
     * value: Film light (ATMOS_STORAGE_DDP_COMPR_FILM_LIGHT) Related setting: To have
     * MediaConvert use the value you specify here, keep the default value, Custom
     * (SPECIFIED) for the setting Dynamic range control (DynamicRangeControl).
     * Otherwise, MediaConvert ignores Dynamic range compression RF
     * (DynamicRangeCompressionRf). For information about the Dolby DRC operating modes
     * and profiles, see the Dynamic Range Control chapter of the Dolby Metadata Guide
     * at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline const Eac3AtmosDynamicRangeCompressionRf& GetDynamicRangeCompressionRf() const{ return m_dynamicRangeCompressionRf; }

    /**
     * Choose the Dolby dynamic range control (DRC) profile that MediaConvert uses when
     * encoding the metadata in the Dolby stream for the RF operating mode. Default
     * value: Film light (ATMOS_STORAGE_DDP_COMPR_FILM_LIGHT) Related setting: To have
     * MediaConvert use the value you specify here, keep the default value, Custom
     * (SPECIFIED) for the setting Dynamic range control (DynamicRangeControl).
     * Otherwise, MediaConvert ignores Dynamic range compression RF
     * (DynamicRangeCompressionRf). For information about the Dolby DRC operating modes
     * and profiles, see the Dynamic Range Control chapter of the Dolby Metadata Guide
     * at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline bool DynamicRangeCompressionRfHasBeenSet() const { return m_dynamicRangeCompressionRfHasBeenSet; }

    /**
     * Choose the Dolby dynamic range control (DRC) profile that MediaConvert uses when
     * encoding the metadata in the Dolby stream for the RF operating mode. Default
     * value: Film light (ATMOS_STORAGE_DDP_COMPR_FILM_LIGHT) Related setting: To have
     * MediaConvert use the value you specify here, keep the default value, Custom
     * (SPECIFIED) for the setting Dynamic range control (DynamicRangeControl).
     * Otherwise, MediaConvert ignores Dynamic range compression RF
     * (DynamicRangeCompressionRf). For information about the Dolby DRC operating modes
     * and profiles, see the Dynamic Range Control chapter of the Dolby Metadata Guide
     * at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline void SetDynamicRangeCompressionRf(const Eac3AtmosDynamicRangeCompressionRf& value) { m_dynamicRangeCompressionRfHasBeenSet = true; m_dynamicRangeCompressionRf = value; }

    /**
     * Choose the Dolby dynamic range control (DRC) profile that MediaConvert uses when
     * encoding the metadata in the Dolby stream for the RF operating mode. Default
     * value: Film light (ATMOS_STORAGE_DDP_COMPR_FILM_LIGHT) Related setting: To have
     * MediaConvert use the value you specify here, keep the default value, Custom
     * (SPECIFIED) for the setting Dynamic range control (DynamicRangeControl).
     * Otherwise, MediaConvert ignores Dynamic range compression RF
     * (DynamicRangeCompressionRf). For information about the Dolby DRC operating modes
     * and profiles, see the Dynamic Range Control chapter of the Dolby Metadata Guide
     * at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline void SetDynamicRangeCompressionRf(Eac3AtmosDynamicRangeCompressionRf&& value) { m_dynamicRangeCompressionRfHasBeenSet = true; m_dynamicRangeCompressionRf = std::move(value); }

    /**
     * Choose the Dolby dynamic range control (DRC) profile that MediaConvert uses when
     * encoding the metadata in the Dolby stream for the RF operating mode. Default
     * value: Film light (ATMOS_STORAGE_DDP_COMPR_FILM_LIGHT) Related setting: To have
     * MediaConvert use the value you specify here, keep the default value, Custom
     * (SPECIFIED) for the setting Dynamic range control (DynamicRangeControl).
     * Otherwise, MediaConvert ignores Dynamic range compression RF
     * (DynamicRangeCompressionRf). For information about the Dolby DRC operating modes
     * and profiles, see the Dynamic Range Control chapter of the Dolby Metadata Guide
     * at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline Eac3AtmosSettings& WithDynamicRangeCompressionRf(const Eac3AtmosDynamicRangeCompressionRf& value) { SetDynamicRangeCompressionRf(value); return *this;}

    /**
     * Choose the Dolby dynamic range control (DRC) profile that MediaConvert uses when
     * encoding the metadata in the Dolby stream for the RF operating mode. Default
     * value: Film light (ATMOS_STORAGE_DDP_COMPR_FILM_LIGHT) Related setting: To have
     * MediaConvert use the value you specify here, keep the default value, Custom
     * (SPECIFIED) for the setting Dynamic range control (DynamicRangeControl).
     * Otherwise, MediaConvert ignores Dynamic range compression RF
     * (DynamicRangeCompressionRf). For information about the Dolby DRC operating modes
     * and profiles, see the Dynamic Range Control chapter of the Dolby Metadata Guide
     * at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline Eac3AtmosSettings& WithDynamicRangeCompressionRf(Eac3AtmosDynamicRangeCompressionRf&& value) { SetDynamicRangeCompressionRf(std::move(value)); return *this;}


    /**
     * Specify whether MediaConvert should use any dynamic range control metadata from
     * your input file. Keep the default value, Custom (SPECIFIED), to provide dynamic
     * range control values in your job settings. Choose Follow source
     * (INITIALIZE_FROM_SOURCE) to use the metadata from your input. Related
     * settings--Use these settings to specify your dynamic range control values:
     * Dynamic range compression line (DynamicRangeCompressionLine) and Dynamic range
     * compression RF (DynamicRangeCompressionRf). When you keep the value Custom
     * (SPECIFIED) for Dynamic range control (DynamicRangeControl) and you don't
     * specify values for the related settings, MediaConvert uses default values for
     * those settings.
     */
    inline const Eac3AtmosDynamicRangeControl& GetDynamicRangeControl() const{ return m_dynamicRangeControl; }

    /**
     * Specify whether MediaConvert should use any dynamic range control metadata from
     * your input file. Keep the default value, Custom (SPECIFIED), to provide dynamic
     * range control values in your job settings. Choose Follow source
     * (INITIALIZE_FROM_SOURCE) to use the metadata from your input. Related
     * settings--Use these settings to specify your dynamic range control values:
     * Dynamic range compression line (DynamicRangeCompressionLine) and Dynamic range
     * compression RF (DynamicRangeCompressionRf). When you keep the value Custom
     * (SPECIFIED) for Dynamic range control (DynamicRangeControl) and you don't
     * specify values for the related settings, MediaConvert uses default values for
     * those settings.
     */
    inline bool DynamicRangeControlHasBeenSet() const { return m_dynamicRangeControlHasBeenSet; }

    /**
     * Specify whether MediaConvert should use any dynamic range control metadata from
     * your input file. Keep the default value, Custom (SPECIFIED), to provide dynamic
     * range control values in your job settings. Choose Follow source
     * (INITIALIZE_FROM_SOURCE) to use the metadata from your input. Related
     * settings--Use these settings to specify your dynamic range control values:
     * Dynamic range compression line (DynamicRangeCompressionLine) and Dynamic range
     * compression RF (DynamicRangeCompressionRf). When you keep the value Custom
     * (SPECIFIED) for Dynamic range control (DynamicRangeControl) and you don't
     * specify values for the related settings, MediaConvert uses default values for
     * those settings.
     */
    inline void SetDynamicRangeControl(const Eac3AtmosDynamicRangeControl& value) { m_dynamicRangeControlHasBeenSet = true; m_dynamicRangeControl = value; }

    /**
     * Specify whether MediaConvert should use any dynamic range control metadata from
     * your input file. Keep the default value, Custom (SPECIFIED), to provide dynamic
     * range control values in your job settings. Choose Follow source
     * (INITIALIZE_FROM_SOURCE) to use the metadata from your input. Related
     * settings--Use these settings to specify your dynamic range control values:
     * Dynamic range compression line (DynamicRangeCompressionLine) and Dynamic range
     * compression RF (DynamicRangeCompressionRf). When you keep the value Custom
     * (SPECIFIED) for Dynamic range control (DynamicRangeControl) and you don't
     * specify values for the related settings, MediaConvert uses default values for
     * those settings.
     */
    inline void SetDynamicRangeControl(Eac3AtmosDynamicRangeControl&& value) { m_dynamicRangeControlHasBeenSet = true; m_dynamicRangeControl = std::move(value); }

    /**
     * Specify whether MediaConvert should use any dynamic range control metadata from
     * your input file. Keep the default value, Custom (SPECIFIED), to provide dynamic
     * range control values in your job settings. Choose Follow source
     * (INITIALIZE_FROM_SOURCE) to use the metadata from your input. Related
     * settings--Use these settings to specify your dynamic range control values:
     * Dynamic range compression line (DynamicRangeCompressionLine) and Dynamic range
     * compression RF (DynamicRangeCompressionRf). When you keep the value Custom
     * (SPECIFIED) for Dynamic range control (DynamicRangeControl) and you don't
     * specify values for the related settings, MediaConvert uses default values for
     * those settings.
     */
    inline Eac3AtmosSettings& WithDynamicRangeControl(const Eac3AtmosDynamicRangeControl& value) { SetDynamicRangeControl(value); return *this;}

    /**
     * Specify whether MediaConvert should use any dynamic range control metadata from
     * your input file. Keep the default value, Custom (SPECIFIED), to provide dynamic
     * range control values in your job settings. Choose Follow source
     * (INITIALIZE_FROM_SOURCE) to use the metadata from your input. Related
     * settings--Use these settings to specify your dynamic range control values:
     * Dynamic range compression line (DynamicRangeCompressionLine) and Dynamic range
     * compression RF (DynamicRangeCompressionRf). When you keep the value Custom
     * (SPECIFIED) for Dynamic range control (DynamicRangeControl) and you don't
     * specify values for the related settings, MediaConvert uses default values for
     * those settings.
     */
    inline Eac3AtmosSettings& WithDynamicRangeControl(Eac3AtmosDynamicRangeControl&& value) { SetDynamicRangeControl(std::move(value)); return *this;}


    /**
     * Specify a value for the following Dolby Atmos setting: Left only/Right only
     * center mix (Lo/Ro center). MediaConvert uses this value for downmixing. Default
     * value: -3 dB (ATMOS_STORAGE_DDP_MIXLEV_MINUS_3_DB). Valid values: 3.0, 1.5, 0.0,
     * -1.5, -3.0, -4.5, and -6.0. Related setting: How the service uses this value
     * depends on the value that you choose for Stereo downmix
     * (Eac3AtmosStereoDownmix). Related setting: To have MediaConvert use this value,
     * keep the default value, Custom (SPECIFIED) for the setting Downmix control
     * (DownmixControl). Otherwise, MediaConvert ignores Left only/Right only center
     * (LoRoCenterMixLevel).
     */
    inline double GetLoRoCenterMixLevel() const{ return m_loRoCenterMixLevel; }

    /**
     * Specify a value for the following Dolby Atmos setting: Left only/Right only
     * center mix (Lo/Ro center). MediaConvert uses this value for downmixing. Default
     * value: -3 dB (ATMOS_STORAGE_DDP_MIXLEV_MINUS_3_DB). Valid values: 3.0, 1.5, 0.0,
     * -1.5, -3.0, -4.5, and -6.0. Related setting: How the service uses this value
     * depends on the value that you choose for Stereo downmix
     * (Eac3AtmosStereoDownmix). Related setting: To have MediaConvert use this value,
     * keep the default value, Custom (SPECIFIED) for the setting Downmix control
     * (DownmixControl). Otherwise, MediaConvert ignores Left only/Right only center
     * (LoRoCenterMixLevel).
     */
    inline bool LoRoCenterMixLevelHasBeenSet() const { return m_loRoCenterMixLevelHasBeenSet; }

    /**
     * Specify a value for the following Dolby Atmos setting: Left only/Right only
     * center mix (Lo/Ro center). MediaConvert uses this value for downmixing. Default
     * value: -3 dB (ATMOS_STORAGE_DDP_MIXLEV_MINUS_3_DB). Valid values: 3.0, 1.5, 0.0,
     * -1.5, -3.0, -4.5, and -6.0. Related setting: How the service uses this value
     * depends on the value that you choose for Stereo downmix
     * (Eac3AtmosStereoDownmix). Related setting: To have MediaConvert use this value,
     * keep the default value, Custom (SPECIFIED) for the setting Downmix control
     * (DownmixControl). Otherwise, MediaConvert ignores Left only/Right only center
     * (LoRoCenterMixLevel).
     */
    inline void SetLoRoCenterMixLevel(double value) { m_loRoCenterMixLevelHasBeenSet = true; m_loRoCenterMixLevel = value; }

    /**
     * Specify a value for the following Dolby Atmos setting: Left only/Right only
     * center mix (Lo/Ro center). MediaConvert uses this value for downmixing. Default
     * value: -3 dB (ATMOS_STORAGE_DDP_MIXLEV_MINUS_3_DB). Valid values: 3.0, 1.5, 0.0,
     * -1.5, -3.0, -4.5, and -6.0. Related setting: How the service uses this value
     * depends on the value that you choose for Stereo downmix
     * (Eac3AtmosStereoDownmix). Related setting: To have MediaConvert use this value,
     * keep the default value, Custom (SPECIFIED) for the setting Downmix control
     * (DownmixControl). Otherwise, MediaConvert ignores Left only/Right only center
     * (LoRoCenterMixLevel).
     */
    inline Eac3AtmosSettings& WithLoRoCenterMixLevel(double value) { SetLoRoCenterMixLevel(value); return *this;}


    /**
     * Specify a value for the following Dolby Atmos setting: Left only/Right only
     * (Lo/Ro surround). MediaConvert uses this value for downmixing. Default value: -3
     * dB (ATMOS_STORAGE_DDP_MIXLEV_MINUS_3_DB). Valid values: -1.5, -3.0, -4.5, -6.0,
     * and -60. The value -60 mutes the channel. Related setting: How the service uses
     * this value depends on the value that you choose for Stereo downmix
     * (Eac3AtmosStereoDownmix). Related setting: To have MediaConvert use this value,
     * keep the default value, Custom (SPECIFIED) for the setting Downmix control
     * (DownmixControl). Otherwise, MediaConvert ignores Left only/Right only surround
     * (LoRoSurroundMixLevel).
     */
    inline double GetLoRoSurroundMixLevel() const{ return m_loRoSurroundMixLevel; }

    /**
     * Specify a value for the following Dolby Atmos setting: Left only/Right only
     * (Lo/Ro surround). MediaConvert uses this value for downmixing. Default value: -3
     * dB (ATMOS_STORAGE_DDP_MIXLEV_MINUS_3_DB). Valid values: -1.5, -3.0, -4.5, -6.0,
     * and -60. The value -60 mutes the channel. Related setting: How the service uses
     * this value depends on the value that you choose for Stereo downmix
     * (Eac3AtmosStereoDownmix). Related setting: To have MediaConvert use this value,
     * keep the default value, Custom (SPECIFIED) for the setting Downmix control
     * (DownmixControl). Otherwise, MediaConvert ignores Left only/Right only surround
     * (LoRoSurroundMixLevel).
     */
    inline bool LoRoSurroundMixLevelHasBeenSet() const { return m_loRoSurroundMixLevelHasBeenSet; }

    /**
     * Specify a value for the following Dolby Atmos setting: Left only/Right only
     * (Lo/Ro surround). MediaConvert uses this value for downmixing. Default value: -3
     * dB (ATMOS_STORAGE_DDP_MIXLEV_MINUS_3_DB). Valid values: -1.5, -3.0, -4.5, -6.0,
     * and -60. The value -60 mutes the channel. Related setting: How the service uses
     * this value depends on the value that you choose for Stereo downmix
     * (Eac3AtmosStereoDownmix). Related setting: To have MediaConvert use this value,
     * keep the default value, Custom (SPECIFIED) for the setting Downmix control
     * (DownmixControl). Otherwise, MediaConvert ignores Left only/Right only surround
     * (LoRoSurroundMixLevel).
     */
    inline void SetLoRoSurroundMixLevel(double value) { m_loRoSurroundMixLevelHasBeenSet = true; m_loRoSurroundMixLevel = value; }

    /**
     * Specify a value for the following Dolby Atmos setting: Left only/Right only
     * (Lo/Ro surround). MediaConvert uses this value for downmixing. Default value: -3
     * dB (ATMOS_STORAGE_DDP_MIXLEV_MINUS_3_DB). Valid values: -1.5, -3.0, -4.5, -6.0,
     * and -60. The value -60 mutes the channel. Related setting: How the service uses
     * this value depends on the value that you choose for Stereo downmix
     * (Eac3AtmosStereoDownmix). Related setting: To have MediaConvert use this value,
     * keep the default value, Custom (SPECIFIED) for the setting Downmix control
     * (DownmixControl). Otherwise, MediaConvert ignores Left only/Right only surround
     * (LoRoSurroundMixLevel).
     */
    inline Eac3AtmosSettings& WithLoRoSurroundMixLevel(double value) { SetLoRoSurroundMixLevel(value); return *this;}


    /**
     * Specify a value for the following Dolby Atmos setting: Left total/Right total
     * center mix (Lt/Rt center). MediaConvert uses this value for downmixing. Default
     * value: -3 dB (ATMOS_STORAGE_DDP_MIXLEV_MINUS_3_DB) Valid values: 3.0, 1.5, 0.0,
     * -1.5, -3.0, -4.5, and -6.0. Related setting: How the service uses this value
     * depends on the value that you choose for Stereo downmix
     * (Eac3AtmosStereoDownmix). Related setting: To have MediaConvert use this value,
     * keep the default value, Custom (SPECIFIED) for the setting Downmix control
     * (DownmixControl). Otherwise, MediaConvert ignores Left total/Right total center
     * (LtRtCenterMixLevel).
     */
    inline double GetLtRtCenterMixLevel() const{ return m_ltRtCenterMixLevel; }

    /**
     * Specify a value for the following Dolby Atmos setting: Left total/Right total
     * center mix (Lt/Rt center). MediaConvert uses this value for downmixing. Default
     * value: -3 dB (ATMOS_STORAGE_DDP_MIXLEV_MINUS_3_DB) Valid values: 3.0, 1.5, 0.0,
     * -1.5, -3.0, -4.5, and -6.0. Related setting: How the service uses this value
     * depends on the value that you choose for Stereo downmix
     * (Eac3AtmosStereoDownmix). Related setting: To have MediaConvert use this value,
     * keep the default value, Custom (SPECIFIED) for the setting Downmix control
     * (DownmixControl). Otherwise, MediaConvert ignores Left total/Right total center
     * (LtRtCenterMixLevel).
     */
    inline bool LtRtCenterMixLevelHasBeenSet() const { return m_ltRtCenterMixLevelHasBeenSet; }

    /**
     * Specify a value for the following Dolby Atmos setting: Left total/Right total
     * center mix (Lt/Rt center). MediaConvert uses this value for downmixing. Default
     * value: -3 dB (ATMOS_STORAGE_DDP_MIXLEV_MINUS_3_DB) Valid values: 3.0, 1.5, 0.0,
     * -1.5, -3.0, -4.5, and -6.0. Related setting: How the service uses this value
     * depends on the value that you choose for Stereo downmix
     * (Eac3AtmosStereoDownmix). Related setting: To have MediaConvert use this value,
     * keep the default value, Custom (SPECIFIED) for the setting Downmix control
     * (DownmixControl). Otherwise, MediaConvert ignores Left total/Right total center
     * (LtRtCenterMixLevel).
     */
    inline void SetLtRtCenterMixLevel(double value) { m_ltRtCenterMixLevelHasBeenSet = true; m_ltRtCenterMixLevel = value; }

    /**
     * Specify a value for the following Dolby Atmos setting: Left total/Right total
     * center mix (Lt/Rt center). MediaConvert uses this value for downmixing. Default
     * value: -3 dB (ATMOS_STORAGE_DDP_MIXLEV_MINUS_3_DB) Valid values: 3.0, 1.5, 0.0,
     * -1.5, -3.0, -4.5, and -6.0. Related setting: How the service uses this value
     * depends on the value that you choose for Stereo downmix
     * (Eac3AtmosStereoDownmix). Related setting: To have MediaConvert use this value,
     * keep the default value, Custom (SPECIFIED) for the setting Downmix control
     * (DownmixControl). Otherwise, MediaConvert ignores Left total/Right total center
     * (LtRtCenterMixLevel).
     */
    inline Eac3AtmosSettings& WithLtRtCenterMixLevel(double value) { SetLtRtCenterMixLevel(value); return *this;}


    /**
     * Specify a value for the following Dolby Atmos setting: Left total/Right total
     * surround mix (Lt/Rt surround). MediaConvert uses this value for downmixing.
     * Default value: -3 dB (ATMOS_STORAGE_DDP_MIXLEV_MINUS_3_DB) Valid values: -1.5,
     * -3.0, -4.5, -6.0, and -60. The value -60 mutes the channel. Related setting: How
     * the service uses this value depends on the value that you choose for Stereo
     * downmix (Eac3AtmosStereoDownmix). Related setting: To have MediaConvert use this
     * value, keep the default value, Custom (SPECIFIED) for the setting Downmix
     * control (DownmixControl). Otherwise, the service ignores Left total/Right total
     * surround (LtRtSurroundMixLevel).
     */
    inline double GetLtRtSurroundMixLevel() const{ return m_ltRtSurroundMixLevel; }

    /**
     * Specify a value for the following Dolby Atmos setting: Left total/Right total
     * surround mix (Lt/Rt surround). MediaConvert uses this value for downmixing.
     * Default value: -3 dB (ATMOS_STORAGE_DDP_MIXLEV_MINUS_3_DB) Valid values: -1.5,
     * -3.0, -4.5, -6.0, and -60. The value -60 mutes the channel. Related setting: How
     * the service uses this value depends on the value that you choose for Stereo
     * downmix (Eac3AtmosStereoDownmix). Related setting: To have MediaConvert use this
     * value, keep the default value, Custom (SPECIFIED) for the setting Downmix
     * control (DownmixControl). Otherwise, the service ignores Left total/Right total
     * surround (LtRtSurroundMixLevel).
     */
    inline bool LtRtSurroundMixLevelHasBeenSet() const { return m_ltRtSurroundMixLevelHasBeenSet; }

    /**
     * Specify a value for the following Dolby Atmos setting: Left total/Right total
     * surround mix (Lt/Rt surround). MediaConvert uses this value for downmixing.
     * Default value: -3 dB (ATMOS_STORAGE_DDP_MIXLEV_MINUS_3_DB) Valid values: -1.5,
     * -3.0, -4.5, -6.0, and -60. The value -60 mutes the channel. Related setting: How
     * the service uses this value depends on the value that you choose for Stereo
     * downmix (Eac3AtmosStereoDownmix). Related setting: To have MediaConvert use this
     * value, keep the default value, Custom (SPECIFIED) for the setting Downmix
     * control (DownmixControl). Otherwise, the service ignores Left total/Right total
     * surround (LtRtSurroundMixLevel).
     */
    inline void SetLtRtSurroundMixLevel(double value) { m_ltRtSurroundMixLevelHasBeenSet = true; m_ltRtSurroundMixLevel = value; }

    /**
     * Specify a value for the following Dolby Atmos setting: Left total/Right total
     * surround mix (Lt/Rt surround). MediaConvert uses this value for downmixing.
     * Default value: -3 dB (ATMOS_STORAGE_DDP_MIXLEV_MINUS_3_DB) Valid values: -1.5,
     * -3.0, -4.5, -6.0, and -60. The value -60 mutes the channel. Related setting: How
     * the service uses this value depends on the value that you choose for Stereo
     * downmix (Eac3AtmosStereoDownmix). Related setting: To have MediaConvert use this
     * value, keep the default value, Custom (SPECIFIED) for the setting Downmix
     * control (DownmixControl). Otherwise, the service ignores Left total/Right total
     * surround (LtRtSurroundMixLevel).
     */
    inline Eac3AtmosSettings& WithLtRtSurroundMixLevel(double value) { SetLtRtSurroundMixLevel(value); return *this;}


    /**
     * Choose how the service meters the loudness of your audio.
     */
    inline const Eac3AtmosMeteringMode& GetMeteringMode() const{ return m_meteringMode; }

    /**
     * Choose how the service meters the loudness of your audio.
     */
    inline bool MeteringModeHasBeenSet() const { return m_meteringModeHasBeenSet; }

    /**
     * Choose how the service meters the loudness of your audio.
     */
    inline void SetMeteringMode(const Eac3AtmosMeteringMode& value) { m_meteringModeHasBeenSet = true; m_meteringMode = value; }

    /**
     * Choose how the service meters the loudness of your audio.
     */
    inline void SetMeteringMode(Eac3AtmosMeteringMode&& value) { m_meteringModeHasBeenSet = true; m_meteringMode = std::move(value); }

    /**
     * Choose how the service meters the loudness of your audio.
     */
    inline Eac3AtmosSettings& WithMeteringMode(const Eac3AtmosMeteringMode& value) { SetMeteringMode(value); return *this;}

    /**
     * Choose how the service meters the loudness of your audio.
     */
    inline Eac3AtmosSettings& WithMeteringMode(Eac3AtmosMeteringMode&& value) { SetMeteringMode(std::move(value)); return *this;}


    /**
     * This value is always 48000. It represents the sample rate in Hz.
     */
    inline int GetSampleRate() const{ return m_sampleRate; }

    /**
     * This value is always 48000. It represents the sample rate in Hz.
     */
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }

    /**
     * This value is always 48000. It represents the sample rate in Hz.
     */
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }

    /**
     * This value is always 48000. It represents the sample rate in Hz.
     */
    inline Eac3AtmosSettings& WithSampleRate(int value) { SetSampleRate(value); return *this;}


    /**
     * Specify the percentage of audio content, from 0% to 100%, that must be speech in
     * order for the encoder to use the measured speech loudness as the overall program
     * loudness. Default value: 15%
     */
    inline int GetSpeechThreshold() const{ return m_speechThreshold; }

    /**
     * Specify the percentage of audio content, from 0% to 100%, that must be speech in
     * order for the encoder to use the measured speech loudness as the overall program
     * loudness. Default value: 15%
     */
    inline bool SpeechThresholdHasBeenSet() const { return m_speechThresholdHasBeenSet; }

    /**
     * Specify the percentage of audio content, from 0% to 100%, that must be speech in
     * order for the encoder to use the measured speech loudness as the overall program
     * loudness. Default value: 15%
     */
    inline void SetSpeechThreshold(int value) { m_speechThresholdHasBeenSet = true; m_speechThreshold = value; }

    /**
     * Specify the percentage of audio content, from 0% to 100%, that must be speech in
     * order for the encoder to use the measured speech loudness as the overall program
     * loudness. Default value: 15%
     */
    inline Eac3AtmosSettings& WithSpeechThreshold(int value) { SetSpeechThreshold(value); return *this;}


    /**
     * Choose how the service does stereo downmixing. Default value: Not indicated
     * (ATMOS_STORAGE_DDP_DMIXMOD_NOT_INDICATED) Related setting: To have MediaConvert
     * use this value, keep the default value, Custom (SPECIFIED) for the setting
     * Downmix control (DownmixControl). Otherwise, MediaConvert ignores Stereo downmix
     * (StereoDownmix).
     */
    inline const Eac3AtmosStereoDownmix& GetStereoDownmix() const{ return m_stereoDownmix; }

    /**
     * Choose how the service does stereo downmixing. Default value: Not indicated
     * (ATMOS_STORAGE_DDP_DMIXMOD_NOT_INDICATED) Related setting: To have MediaConvert
     * use this value, keep the default value, Custom (SPECIFIED) for the setting
     * Downmix control (DownmixControl). Otherwise, MediaConvert ignores Stereo downmix
     * (StereoDownmix).
     */
    inline bool StereoDownmixHasBeenSet() const { return m_stereoDownmixHasBeenSet; }

    /**
     * Choose how the service does stereo downmixing. Default value: Not indicated
     * (ATMOS_STORAGE_DDP_DMIXMOD_NOT_INDICATED) Related setting: To have MediaConvert
     * use this value, keep the default value, Custom (SPECIFIED) for the setting
     * Downmix control (DownmixControl). Otherwise, MediaConvert ignores Stereo downmix
     * (StereoDownmix).
     */
    inline void SetStereoDownmix(const Eac3AtmosStereoDownmix& value) { m_stereoDownmixHasBeenSet = true; m_stereoDownmix = value; }

    /**
     * Choose how the service does stereo downmixing. Default value: Not indicated
     * (ATMOS_STORAGE_DDP_DMIXMOD_NOT_INDICATED) Related setting: To have MediaConvert
     * use this value, keep the default value, Custom (SPECIFIED) for the setting
     * Downmix control (DownmixControl). Otherwise, MediaConvert ignores Stereo downmix
     * (StereoDownmix).
     */
    inline void SetStereoDownmix(Eac3AtmosStereoDownmix&& value) { m_stereoDownmixHasBeenSet = true; m_stereoDownmix = std::move(value); }

    /**
     * Choose how the service does stereo downmixing. Default value: Not indicated
     * (ATMOS_STORAGE_DDP_DMIXMOD_NOT_INDICATED) Related setting: To have MediaConvert
     * use this value, keep the default value, Custom (SPECIFIED) for the setting
     * Downmix control (DownmixControl). Otherwise, MediaConvert ignores Stereo downmix
     * (StereoDownmix).
     */
    inline Eac3AtmosSettings& WithStereoDownmix(const Eac3AtmosStereoDownmix& value) { SetStereoDownmix(value); return *this;}

    /**
     * Choose how the service does stereo downmixing. Default value: Not indicated
     * (ATMOS_STORAGE_DDP_DMIXMOD_NOT_INDICATED) Related setting: To have MediaConvert
     * use this value, keep the default value, Custom (SPECIFIED) for the setting
     * Downmix control (DownmixControl). Otherwise, MediaConvert ignores Stereo downmix
     * (StereoDownmix).
     */
    inline Eac3AtmosSettings& WithStereoDownmix(Eac3AtmosStereoDownmix&& value) { SetStereoDownmix(std::move(value)); return *this;}


    /**
     * Specify whether your input audio has an additional center rear surround channel
     * matrix encoded into your left and right surround channels.
     */
    inline const Eac3AtmosSurroundExMode& GetSurroundExMode() const{ return m_surroundExMode; }

    /**
     * Specify whether your input audio has an additional center rear surround channel
     * matrix encoded into your left and right surround channels.
     */
    inline bool SurroundExModeHasBeenSet() const { return m_surroundExModeHasBeenSet; }

    /**
     * Specify whether your input audio has an additional center rear surround channel
     * matrix encoded into your left and right surround channels.
     */
    inline void SetSurroundExMode(const Eac3AtmosSurroundExMode& value) { m_surroundExModeHasBeenSet = true; m_surroundExMode = value; }

    /**
     * Specify whether your input audio has an additional center rear surround channel
     * matrix encoded into your left and right surround channels.
     */
    inline void SetSurroundExMode(Eac3AtmosSurroundExMode&& value) { m_surroundExModeHasBeenSet = true; m_surroundExMode = std::move(value); }

    /**
     * Specify whether your input audio has an additional center rear surround channel
     * matrix encoded into your left and right surround channels.
     */
    inline Eac3AtmosSettings& WithSurroundExMode(const Eac3AtmosSurroundExMode& value) { SetSurroundExMode(value); return *this;}

    /**
     * Specify whether your input audio has an additional center rear surround channel
     * matrix encoded into your left and right surround channels.
     */
    inline Eac3AtmosSettings& WithSurroundExMode(Eac3AtmosSurroundExMode&& value) { SetSurroundExMode(std::move(value)); return *this;}

  private:

    int m_bitrate;
    bool m_bitrateHasBeenSet = false;

    Eac3AtmosBitstreamMode m_bitstreamMode;
    bool m_bitstreamModeHasBeenSet = false;

    Eac3AtmosCodingMode m_codingMode;
    bool m_codingModeHasBeenSet = false;

    Eac3AtmosDialogueIntelligence m_dialogueIntelligence;
    bool m_dialogueIntelligenceHasBeenSet = false;

    Eac3AtmosDownmixControl m_downmixControl;
    bool m_downmixControlHasBeenSet = false;

    Eac3AtmosDynamicRangeCompressionLine m_dynamicRangeCompressionLine;
    bool m_dynamicRangeCompressionLineHasBeenSet = false;

    Eac3AtmosDynamicRangeCompressionRf m_dynamicRangeCompressionRf;
    bool m_dynamicRangeCompressionRfHasBeenSet = false;

    Eac3AtmosDynamicRangeControl m_dynamicRangeControl;
    bool m_dynamicRangeControlHasBeenSet = false;

    double m_loRoCenterMixLevel;
    bool m_loRoCenterMixLevelHasBeenSet = false;

    double m_loRoSurroundMixLevel;
    bool m_loRoSurroundMixLevelHasBeenSet = false;

    double m_ltRtCenterMixLevel;
    bool m_ltRtCenterMixLevelHasBeenSet = false;

    double m_ltRtSurroundMixLevel;
    bool m_ltRtSurroundMixLevelHasBeenSet = false;

    Eac3AtmosMeteringMode m_meteringMode;
    bool m_meteringModeHasBeenSet = false;

    int m_sampleRate;
    bool m_sampleRateHasBeenSet = false;

    int m_speechThreshold;
    bool m_speechThresholdHasBeenSet = false;

    Eac3AtmosStereoDownmix m_stereoDownmix;
    bool m_stereoDownmixHasBeenSet = false;

    Eac3AtmosSurroundExMode m_surroundExMode;
    bool m_surroundExModeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
