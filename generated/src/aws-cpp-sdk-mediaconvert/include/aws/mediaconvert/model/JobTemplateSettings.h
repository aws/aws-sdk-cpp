/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AvailBlanking.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/EsamSettings.h>
#include <aws/mediaconvert/model/ExtendedDataServices.h>
#include <aws/mediaconvert/model/KantarWatermarkSettings.h>
#include <aws/mediaconvert/model/MotionImageInserter.h>
#include <aws/mediaconvert/model/NielsenConfiguration.h>
#include <aws/mediaconvert/model/NielsenNonLinearWatermarkSettings.h>
#include <aws/mediaconvert/model/TimecodeConfig.h>
#include <aws/mediaconvert/model/TimedMetadataInsertion.h>
#include <aws/mediaconvert/model/ColorConversion3DLUTSetting.h>
#include <aws/mediaconvert/model/InputTemplate.h>
#include <aws/mediaconvert/model/OutputGroup.h>
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
   * JobTemplateSettings contains all the transcode settings saved in the template
   * that will be applied to jobs created from it.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/JobTemplateSettings">AWS
   * API Reference</a></p>
   */
  class JobTemplateSettings
  {
  public:
    AWS_MEDIACONVERT_API JobTemplateSettings() = default;
    AWS_MEDIACONVERT_API JobTemplateSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API JobTemplateSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time.
     */
    inline int GetAdAvailOffset() const { return m_adAvailOffset; }
    inline bool AdAvailOffsetHasBeenSet() const { return m_adAvailOffsetHasBeenSet; }
    inline void SetAdAvailOffset(int value) { m_adAvailOffsetHasBeenSet = true; m_adAvailOffset = value; }
    inline JobTemplateSettings& WithAdAvailOffset(int value) { SetAdAvailOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings for ad avail blanking. Video can be blanked or overlaid with an image,
     * and audio muted during SCTE-35 triggered ad avails.
     */
    inline const AvailBlanking& GetAvailBlanking() const { return m_availBlanking; }
    inline bool AvailBlankingHasBeenSet() const { return m_availBlankingHasBeenSet; }
    template<typename AvailBlankingT = AvailBlanking>
    void SetAvailBlanking(AvailBlankingT&& value) { m_availBlankingHasBeenSet = true; m_availBlanking = std::forward<AvailBlankingT>(value); }
    template<typename AvailBlankingT = AvailBlanking>
    JobTemplateSettings& WithAvailBlanking(AvailBlankingT&& value) { SetAvailBlanking(std::forward<AvailBlankingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use 3D LUTs to specify custom color mapping behavior when you convert from one
     * color space into another. You can include up to 8 different 3D LUTs. For more
     * information, see:
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/3d-luts.html
     */
    inline const Aws::Vector<ColorConversion3DLUTSetting>& GetColorConversion3DLUTSettings() const { return m_colorConversion3DLUTSettings; }
    inline bool ColorConversion3DLUTSettingsHasBeenSet() const { return m_colorConversion3DLUTSettingsHasBeenSet; }
    template<typename ColorConversion3DLUTSettingsT = Aws::Vector<ColorConversion3DLUTSetting>>
    void SetColorConversion3DLUTSettings(ColorConversion3DLUTSettingsT&& value) { m_colorConversion3DLUTSettingsHasBeenSet = true; m_colorConversion3DLUTSettings = std::forward<ColorConversion3DLUTSettingsT>(value); }
    template<typename ColorConversion3DLUTSettingsT = Aws::Vector<ColorConversion3DLUTSetting>>
    JobTemplateSettings& WithColorConversion3DLUTSettings(ColorConversion3DLUTSettingsT&& value) { SetColorConversion3DLUTSettings(std::forward<ColorConversion3DLUTSettingsT>(value)); return *this;}
    template<typename ColorConversion3DLUTSettingsT = ColorConversion3DLUTSetting>
    JobTemplateSettings& AddColorConversion3DLUTSettings(ColorConversion3DLUTSettingsT&& value) { m_colorConversion3DLUTSettingsHasBeenSet = true; m_colorConversion3DLUTSettings.emplace_back(std::forward<ColorConversion3DLUTSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Settings for Event Signaling And Messaging (ESAM). If you don't do ad insertion,
     * you can ignore these settings.
     */
    inline const EsamSettings& GetEsam() const { return m_esam; }
    inline bool EsamHasBeenSet() const { return m_esamHasBeenSet; }
    template<typename EsamT = EsamSettings>
    void SetEsam(EsamT&& value) { m_esamHasBeenSet = true; m_esam = std::forward<EsamT>(value); }
    template<typename EsamT = EsamSettings>
    JobTemplateSettings& WithEsam(EsamT&& value) { SetEsam(std::forward<EsamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If your source content has EIA-608 Line 21 Data Services, enable this feature to
     * specify what MediaConvert does with the Extended Data Services (XDS) packets.
     * You can choose to pass through XDS packets, or remove them from the output. For
     * more information about XDS, see EIA-608 Line Data Services, section 9.5.1.5 05h
     * Content Advisory.
     */
    inline const ExtendedDataServices& GetExtendedDataServices() const { return m_extendedDataServices; }
    inline bool ExtendedDataServicesHasBeenSet() const { return m_extendedDataServicesHasBeenSet; }
    template<typename ExtendedDataServicesT = ExtendedDataServices>
    void SetExtendedDataServices(ExtendedDataServicesT&& value) { m_extendedDataServicesHasBeenSet = true; m_extendedDataServices = std::forward<ExtendedDataServicesT>(value); }
    template<typename ExtendedDataServicesT = ExtendedDataServices>
    JobTemplateSettings& WithExtendedDataServices(ExtendedDataServicesT&& value) { SetExtendedDataServices(std::forward<ExtendedDataServicesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the input that MediaConvert references for your default output settings.
     * MediaConvert uses this input's Resolution, Frame rate, and Pixel aspect ratio
     * for all  outputs that you don't manually specify different output settings for.
     * Enabling this setting will disable "Follow source" for all other inputs.  If
     * MediaConvert cannot follow your source, for example if you specify an audio-only
     * input,  MediaConvert uses the first followable input instead. In your JSON job
     * specification, enter an integer from 1 to 150 corresponding  to the order of
     * your inputs.
     */
    inline int GetFollowSource() const { return m_followSource; }
    inline bool FollowSourceHasBeenSet() const { return m_followSourceHasBeenSet; }
    inline void SetFollowSource(int value) { m_followSourceHasBeenSet = true; m_followSource = value; }
    inline JobTemplateSettings& WithFollowSource(int value) { SetFollowSource(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Inputs to define the source file used in the transcode job. There can only
     * be one input in a job template. Using the API, you can include multiple inputs
     * when referencing a job template.
     */
    inline const Aws::Vector<InputTemplate>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<InputTemplate>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<InputTemplate>>
    JobTemplateSettings& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = InputTemplate>
    JobTemplateSettings& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Use these settings only when you use Kantar watermarking. Specify the values
     * that MediaConvert uses to generate and place Kantar watermarks in your output
     * audio. These settings apply to every output in your job. In addition to
     * specifying these values, you also need to store your Kantar credentials in AWS
     * Secrets Manager. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/kantar-watermarking.html.
     */
    inline const KantarWatermarkSettings& GetKantarWatermark() const { return m_kantarWatermark; }
    inline bool KantarWatermarkHasBeenSet() const { return m_kantarWatermarkHasBeenSet; }
    template<typename KantarWatermarkT = KantarWatermarkSettings>
    void SetKantarWatermark(KantarWatermarkT&& value) { m_kantarWatermarkHasBeenSet = true; m_kantarWatermark = std::forward<KantarWatermarkT>(value); }
    template<typename KantarWatermarkT = KantarWatermarkSettings>
    JobTemplateSettings& WithKantarWatermark(KantarWatermarkT&& value) { SetKantarWatermark(std::forward<KantarWatermarkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Overlay motion graphics on top of your video. The motion graphics that you
     * specify here appear on all outputs in all output groups. For more information,
     * see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/motion-graphic-overlay.html.
     */
    inline const MotionImageInserter& GetMotionImageInserter() const { return m_motionImageInserter; }
    inline bool MotionImageInserterHasBeenSet() const { return m_motionImageInserterHasBeenSet; }
    template<typename MotionImageInserterT = MotionImageInserter>
    void SetMotionImageInserter(MotionImageInserterT&& value) { m_motionImageInserterHasBeenSet = true; m_motionImageInserter = std::forward<MotionImageInserterT>(value); }
    template<typename MotionImageInserterT = MotionImageInserter>
    JobTemplateSettings& WithMotionImageInserter(MotionImageInserterT&& value) { SetMotionImageInserter(std::forward<MotionImageInserterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings for your Nielsen configuration. If you don't do Nielsen measurement and
     * analytics, ignore these settings. When you enable Nielsen configuration,
     * MediaConvert enables PCM to ID3 tagging for all outputs in the job.
     */
    inline const NielsenConfiguration& GetNielsenConfiguration() const { return m_nielsenConfiguration; }
    inline bool NielsenConfigurationHasBeenSet() const { return m_nielsenConfigurationHasBeenSet; }
    template<typename NielsenConfigurationT = NielsenConfiguration>
    void SetNielsenConfiguration(NielsenConfigurationT&& value) { m_nielsenConfigurationHasBeenSet = true; m_nielsenConfiguration = std::forward<NielsenConfigurationT>(value); }
    template<typename NielsenConfigurationT = NielsenConfiguration>
    JobTemplateSettings& WithNielsenConfiguration(NielsenConfigurationT&& value) { SetNielsenConfiguration(std::forward<NielsenConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Ignore these settings unless you are using Nielsen non-linear watermarking.
     * Specify the values that MediaConvert uses to generate and place Nielsen
     * watermarks in your output audio. In addition to specifying these values, you
     * also need to set up your cloud TIC server. These settings apply to every output
     * in your job. The MediaConvert implementation is currently with the following
     * Nielsen versions: Nielsen Watermark SDK Version 6.0.13 Nielsen NLM Watermark
     * Engine Version 1.3.3 Nielsen Watermark Authenticator [SID_TIC] Version [7.0.0]
     */
    inline const NielsenNonLinearWatermarkSettings& GetNielsenNonLinearWatermark() const { return m_nielsenNonLinearWatermark; }
    inline bool NielsenNonLinearWatermarkHasBeenSet() const { return m_nielsenNonLinearWatermarkHasBeenSet; }
    template<typename NielsenNonLinearWatermarkT = NielsenNonLinearWatermarkSettings>
    void SetNielsenNonLinearWatermark(NielsenNonLinearWatermarkT&& value) { m_nielsenNonLinearWatermarkHasBeenSet = true; m_nielsenNonLinearWatermark = std::forward<NielsenNonLinearWatermarkT>(value); }
    template<typename NielsenNonLinearWatermarkT = NielsenNonLinearWatermarkSettings>
    JobTemplateSettings& WithNielsenNonLinearWatermark(NielsenNonLinearWatermarkT&& value) { SetNielsenNonLinearWatermark(std::forward<NielsenNonLinearWatermarkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Contains one group of settings for each set of outputs that share a common
     * package type. All unpackaged files (MPEG-4, MPEG-2 TS, Quicktime, MXF, and no
     * container) are grouped in a single output group as well. Required in is a group
     * of settings that apply to the whole group. This required object depends on the
     * value you set for Type. Type, settings object pairs are as follows. *
     * FILE_GROUP_SETTINGS, FileGroupSettings * HLS_GROUP_SETTINGS, HlsGroupSettings *
     * DASH_ISO_GROUP_SETTINGS, DashIsoGroupSettings * MS_SMOOTH_GROUP_SETTINGS,
     * MsSmoothGroupSettings * CMAF_GROUP_SETTINGS, CmafGroupSettings
     */
    inline const Aws::Vector<OutputGroup>& GetOutputGroups() const { return m_outputGroups; }
    inline bool OutputGroupsHasBeenSet() const { return m_outputGroupsHasBeenSet; }
    template<typename OutputGroupsT = Aws::Vector<OutputGroup>>
    void SetOutputGroups(OutputGroupsT&& value) { m_outputGroupsHasBeenSet = true; m_outputGroups = std::forward<OutputGroupsT>(value); }
    template<typename OutputGroupsT = Aws::Vector<OutputGroup>>
    JobTemplateSettings& WithOutputGroups(OutputGroupsT&& value) { SetOutputGroups(std::forward<OutputGroupsT>(value)); return *this;}
    template<typename OutputGroupsT = OutputGroup>
    JobTemplateSettings& AddOutputGroups(OutputGroupsT&& value) { m_outputGroupsHasBeenSet = true; m_outputGroups.emplace_back(std::forward<OutputGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * These settings control how the service handles timecodes throughout the job.
     * These settings don't affect input clipping.
     */
    inline const TimecodeConfig& GetTimecodeConfig() const { return m_timecodeConfig; }
    inline bool TimecodeConfigHasBeenSet() const { return m_timecodeConfigHasBeenSet; }
    template<typename TimecodeConfigT = TimecodeConfig>
    void SetTimecodeConfig(TimecodeConfigT&& value) { m_timecodeConfigHasBeenSet = true; m_timecodeConfig = std::forward<TimecodeConfigT>(value); }
    template<typename TimecodeConfigT = TimecodeConfig>
    JobTemplateSettings& WithTimecodeConfig(TimecodeConfigT&& value) { SetTimecodeConfig(std::forward<TimecodeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Insert user-defined custom ID3 metadata at timecodes that you specify. In each
     * output that you want to include this metadata, you must set ID3 metadata to
     * Passthrough.
     */
    inline const TimedMetadataInsertion& GetTimedMetadataInsertion() const { return m_timedMetadataInsertion; }
    inline bool TimedMetadataInsertionHasBeenSet() const { return m_timedMetadataInsertionHasBeenSet; }
    template<typename TimedMetadataInsertionT = TimedMetadataInsertion>
    void SetTimedMetadataInsertion(TimedMetadataInsertionT&& value) { m_timedMetadataInsertionHasBeenSet = true; m_timedMetadataInsertion = std::forward<TimedMetadataInsertionT>(value); }
    template<typename TimedMetadataInsertionT = TimedMetadataInsertion>
    JobTemplateSettings& WithTimedMetadataInsertion(TimedMetadataInsertionT&& value) { SetTimedMetadataInsertion(std::forward<TimedMetadataInsertionT>(value)); return *this;}
    ///@}
  private:

    int m_adAvailOffset{0};
    bool m_adAvailOffsetHasBeenSet = false;

    AvailBlanking m_availBlanking;
    bool m_availBlankingHasBeenSet = false;

    Aws::Vector<ColorConversion3DLUTSetting> m_colorConversion3DLUTSettings;
    bool m_colorConversion3DLUTSettingsHasBeenSet = false;

    EsamSettings m_esam;
    bool m_esamHasBeenSet = false;

    ExtendedDataServices m_extendedDataServices;
    bool m_extendedDataServicesHasBeenSet = false;

    int m_followSource{0};
    bool m_followSourceHasBeenSet = false;

    Aws::Vector<InputTemplate> m_inputs;
    bool m_inputsHasBeenSet = false;

    KantarWatermarkSettings m_kantarWatermark;
    bool m_kantarWatermarkHasBeenSet = false;

    MotionImageInserter m_motionImageInserter;
    bool m_motionImageInserterHasBeenSet = false;

    NielsenConfiguration m_nielsenConfiguration;
    bool m_nielsenConfigurationHasBeenSet = false;

    NielsenNonLinearWatermarkSettings m_nielsenNonLinearWatermark;
    bool m_nielsenNonLinearWatermarkHasBeenSet = false;

    Aws::Vector<OutputGroup> m_outputGroups;
    bool m_outputGroupsHasBeenSet = false;

    TimecodeConfig m_timecodeConfig;
    bool m_timecodeConfigHasBeenSet = false;

    TimedMetadataInsertion m_timedMetadataInsertion;
    bool m_timedMetadataInsertionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
