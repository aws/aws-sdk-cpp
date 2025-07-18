/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AdvancedInputFilter.h>
#include <aws/mediaconvert/model/AdvancedInputFilterSettings.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediaconvert/model/Rectangle.h>
#include <aws/mediaconvert/model/InputDeblockFilter.h>
#include <aws/mediaconvert/model/InputDecryptionSettings.h>
#include <aws/mediaconvert/model/InputDenoiseFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/InputFilterEnable.h>
#include <aws/mediaconvert/model/ImageInserter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/InputScanType.h>
#include <aws/mediaconvert/model/InputPsiControl.h>
#include <aws/mediaconvert/model/InputTamsSettings.h>
#include <aws/mediaconvert/model/InputTimecodeSource.h>
#include <aws/mediaconvert/model/InputVideoGenerator.h>
#include <aws/mediaconvert/model/VideoSelector.h>
#include <aws/mediaconvert/model/AudioSelectorGroup.h>
#include <aws/mediaconvert/model/AudioSelector.h>
#include <aws/mediaconvert/model/CaptionSelector.h>
#include <aws/mediaconvert/model/DynamicAudioSelector.h>
#include <aws/mediaconvert/model/InputClipping.h>
#include <aws/mediaconvert/model/VideoOverlay.h>
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
   * Use inputs to define the source files used in your transcoding job. For more
   * information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/specify-input-settings.html.
   * You can use multiple video inputs to do input stitching. For more information,
   * see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/assembling-multiple-inputs-and-input-clips.html<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Input">AWS
   * API Reference</a></p>
   */
  class Input
  {
  public:
    AWS_MEDIACONVERT_API Input() = default;
    AWS_MEDIACONVERT_API Input(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Input& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Use to remove noise, blocking, blurriness, or ringing from your input as a
     * pre-filter step before encoding. The Advanced input filter removes more types of
     * compression artifacts and is an improvement when compared to basic Deblock and
     * Denoise filters. To remove video compression artifacts from your input and
     * improve the video quality: Choose Enabled. Additionally, this filter can help
     * increase the video quality of your output relative to its bitrate, since noisy
     * inputs are more complex and require more bits to encode. To help restore loss of
     * detail after applying the filter, you can optionally add texture or sharpening
     * as an additional step. Jobs that use this feature incur pro-tier pricing. To not
     * apply advanced input filtering: Choose Disabled. Note that you can still apply
     * basic filtering with Deblock and Denoise.
     */
    inline AdvancedInputFilter GetAdvancedInputFilter() const { return m_advancedInputFilter; }
    inline bool AdvancedInputFilterHasBeenSet() const { return m_advancedInputFilterHasBeenSet; }
    inline void SetAdvancedInputFilter(AdvancedInputFilter value) { m_advancedInputFilterHasBeenSet = true; m_advancedInputFilter = value; }
    inline Input& WithAdvancedInputFilter(AdvancedInputFilter value) { SetAdvancedInputFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * Optional settings for Advanced input filter when you set Advanced input filter
     * to Enabled.
     */
    inline const AdvancedInputFilterSettings& GetAdvancedInputFilterSettings() const { return m_advancedInputFilterSettings; }
    inline bool AdvancedInputFilterSettingsHasBeenSet() const { return m_advancedInputFilterSettingsHasBeenSet; }
    template<typename AdvancedInputFilterSettingsT = AdvancedInputFilterSettings>
    void SetAdvancedInputFilterSettings(AdvancedInputFilterSettingsT&& value) { m_advancedInputFilterSettingsHasBeenSet = true; m_advancedInputFilterSettings = std::forward<AdvancedInputFilterSettingsT>(value); }
    template<typename AdvancedInputFilterSettingsT = AdvancedInputFilterSettings>
    Input& WithAdvancedInputFilterSettings(AdvancedInputFilterSettingsT&& value) { SetAdvancedInputFilterSettings(std::forward<AdvancedInputFilterSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use audio selector groups to combine multiple sidecar audio inputs so that you
     * can assign them to a single output audio tab. Note that, if you're working with
     * embedded audio, it's simpler to assign multiple input tracks into a single audio
     * selector rather than use an audio selector group.
     */
    inline const Aws::Map<Aws::String, AudioSelectorGroup>& GetAudioSelectorGroups() const { return m_audioSelectorGroups; }
    inline bool AudioSelectorGroupsHasBeenSet() const { return m_audioSelectorGroupsHasBeenSet; }
    template<typename AudioSelectorGroupsT = Aws::Map<Aws::String, AudioSelectorGroup>>
    void SetAudioSelectorGroups(AudioSelectorGroupsT&& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups = std::forward<AudioSelectorGroupsT>(value); }
    template<typename AudioSelectorGroupsT = Aws::Map<Aws::String, AudioSelectorGroup>>
    Input& WithAudioSelectorGroups(AudioSelectorGroupsT&& value) { SetAudioSelectorGroups(std::forward<AudioSelectorGroupsT>(value)); return *this;}
    template<typename AudioSelectorGroupsKeyT = Aws::String, typename AudioSelectorGroupsValueT = AudioSelectorGroup>
    Input& AddAudioSelectorGroups(AudioSelectorGroupsKeyT&& key, AudioSelectorGroupsValueT&& value) {
      m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(std::forward<AudioSelectorGroupsKeyT>(key), std::forward<AudioSelectorGroupsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * Use Audio selectors to specify a track or set of tracks from the input that you
     * will use in your outputs. You can use multiple Audio selectors per input.
     */
    inline const Aws::Map<Aws::String, AudioSelector>& GetAudioSelectors() const { return m_audioSelectors; }
    inline bool AudioSelectorsHasBeenSet() const { return m_audioSelectorsHasBeenSet; }
    template<typename AudioSelectorsT = Aws::Map<Aws::String, AudioSelector>>
    void SetAudioSelectors(AudioSelectorsT&& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors = std::forward<AudioSelectorsT>(value); }
    template<typename AudioSelectorsT = Aws::Map<Aws::String, AudioSelector>>
    Input& WithAudioSelectors(AudioSelectorsT&& value) { SetAudioSelectors(std::forward<AudioSelectorsT>(value)); return *this;}
    template<typename AudioSelectorsKeyT = Aws::String, typename AudioSelectorsValueT = AudioSelector>
    Input& AddAudioSelectors(AudioSelectorsKeyT&& key, AudioSelectorsValueT&& value) {
      m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(std::forward<AudioSelectorsKeyT>(key), std::forward<AudioSelectorsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * Use captions selectors to specify the captions data from your input that you use
     * in your outputs. You can use up to 100 captions selectors per input.
     */
    inline const Aws::Map<Aws::String, CaptionSelector>& GetCaptionSelectors() const { return m_captionSelectors; }
    inline bool CaptionSelectorsHasBeenSet() const { return m_captionSelectorsHasBeenSet; }
    template<typename CaptionSelectorsT = Aws::Map<Aws::String, CaptionSelector>>
    void SetCaptionSelectors(CaptionSelectorsT&& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors = std::forward<CaptionSelectorsT>(value); }
    template<typename CaptionSelectorsT = Aws::Map<Aws::String, CaptionSelector>>
    Input& WithCaptionSelectors(CaptionSelectorsT&& value) { SetCaptionSelectors(std::forward<CaptionSelectorsT>(value)); return *this;}
    template<typename CaptionSelectorsKeyT = Aws::String, typename CaptionSelectorsValueT = CaptionSelector>
    Input& AddCaptionSelectors(CaptionSelectorsKeyT&& key, CaptionSelectorsValueT&& value) {
      m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(std::forward<CaptionSelectorsKeyT>(key), std::forward<CaptionSelectorsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * Use Cropping selection to specify the video area that the service will include
     * in the output video frame. If you specify a value here, it will override any
     * value that you specify in the output setting Cropping selection.
     */
    inline const Rectangle& GetCrop() const { return m_crop; }
    inline bool CropHasBeenSet() const { return m_cropHasBeenSet; }
    template<typename CropT = Rectangle>
    void SetCrop(CropT&& value) { m_cropHasBeenSet = true; m_crop = std::forward<CropT>(value); }
    template<typename CropT = Rectangle>
    Input& WithCrop(CropT&& value) { SetCrop(std::forward<CropT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Enable Deblock to produce smoother motion in the output. Default is disabled.
     * Only manually controllable for MPEG2 and uncompressed video inputs.
     */
    inline InputDeblockFilter GetDeblockFilter() const { return m_deblockFilter; }
    inline bool DeblockFilterHasBeenSet() const { return m_deblockFilterHasBeenSet; }
    inline void SetDeblockFilter(InputDeblockFilter value) { m_deblockFilterHasBeenSet = true; m_deblockFilter = value; }
    inline Input& WithDeblockFilter(InputDeblockFilter value) { SetDeblockFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings for decrypting any input files that you encrypt before you upload them
     * to Amazon S3. MediaConvert can decrypt files only when you use AWS Key
     * Management Service (KMS) to encrypt the data key that you use to encrypt your
     * content.
     */
    inline const InputDecryptionSettings& GetDecryptionSettings() const { return m_decryptionSettings; }
    inline bool DecryptionSettingsHasBeenSet() const { return m_decryptionSettingsHasBeenSet; }
    template<typename DecryptionSettingsT = InputDecryptionSettings>
    void SetDecryptionSettings(DecryptionSettingsT&& value) { m_decryptionSettingsHasBeenSet = true; m_decryptionSettings = std::forward<DecryptionSettingsT>(value); }
    template<typename DecryptionSettingsT = InputDecryptionSettings>
    Input& WithDecryptionSettings(DecryptionSettingsT&& value) { SetDecryptionSettings(std::forward<DecryptionSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Enable Denoise to filter noise from the input. Default is disabled. Only
     * applicable to MPEG2, H.264, H.265, and uncompressed video inputs.
     */
    inline InputDenoiseFilter GetDenoiseFilter() const { return m_denoiseFilter; }
    inline bool DenoiseFilterHasBeenSet() const { return m_denoiseFilterHasBeenSet; }
    inline void SetDenoiseFilter(InputDenoiseFilter value) { m_denoiseFilterHasBeenSet = true; m_denoiseFilter = value; }
    inline Input& WithDenoiseFilter(InputDenoiseFilter value) { SetDenoiseFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * Use this setting only when your video source has Dolby Vision studio mastering
     * metadata that is carried in a separate XML file. Specify the Amazon S3 location
     * for the metadata XML file. MediaConvert uses this file to provide global and
     * frame-level metadata for Dolby Vision preprocessing. When you specify a file
     * here and your input also has interleaved global and frame level metadata,
     * MediaConvert ignores the interleaved metadata and uses only the the metadata
     * from this external XML file. Note that your IAM service role must grant
     * MediaConvert read permissions to this file. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html.
     */
    inline const Aws::String& GetDolbyVisionMetadataXml() const { return m_dolbyVisionMetadataXml; }
    inline bool DolbyVisionMetadataXmlHasBeenSet() const { return m_dolbyVisionMetadataXmlHasBeenSet; }
    template<typename DolbyVisionMetadataXmlT = Aws::String>
    void SetDolbyVisionMetadataXml(DolbyVisionMetadataXmlT&& value) { m_dolbyVisionMetadataXmlHasBeenSet = true; m_dolbyVisionMetadataXml = std::forward<DolbyVisionMetadataXmlT>(value); }
    template<typename DolbyVisionMetadataXmlT = Aws::String>
    Input& WithDolbyVisionMetadataXml(DolbyVisionMetadataXmlT&& value) { SetDolbyVisionMetadataXml(std::forward<DolbyVisionMetadataXmlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use Dynamic audio selectors when you do not know the track layout of your source
     * when you submit your job, but want to select multiple audio tracks. When you
     * include an audio track in your output and specify this Dynamic audio selector as
     * the Audio source, MediaConvert creates an output audio track for each
     * dynamically selected track. Note that when you include a Dynamic audio selector
     * for two or more inputs, each input must have the same number of audio tracks and
     * audio channels.
     */
    inline const Aws::Map<Aws::String, DynamicAudioSelector>& GetDynamicAudioSelectors() const { return m_dynamicAudioSelectors; }
    inline bool DynamicAudioSelectorsHasBeenSet() const { return m_dynamicAudioSelectorsHasBeenSet; }
    template<typename DynamicAudioSelectorsT = Aws::Map<Aws::String, DynamicAudioSelector>>
    void SetDynamicAudioSelectors(DynamicAudioSelectorsT&& value) { m_dynamicAudioSelectorsHasBeenSet = true; m_dynamicAudioSelectors = std::forward<DynamicAudioSelectorsT>(value); }
    template<typename DynamicAudioSelectorsT = Aws::Map<Aws::String, DynamicAudioSelector>>
    Input& WithDynamicAudioSelectors(DynamicAudioSelectorsT&& value) { SetDynamicAudioSelectors(std::forward<DynamicAudioSelectorsT>(value)); return *this;}
    template<typename DynamicAudioSelectorsKeyT = Aws::String, typename DynamicAudioSelectorsValueT = DynamicAudioSelector>
    Input& AddDynamicAudioSelectors(DynamicAudioSelectorsKeyT&& key, DynamicAudioSelectorsValueT&& value) {
      m_dynamicAudioSelectorsHasBeenSet = true; m_dynamicAudioSelectors.emplace(std::forward<DynamicAudioSelectorsKeyT>(key), std::forward<DynamicAudioSelectorsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * Specify the source file for your transcoding job. You can use multiple inputs in
     * a single job. The service concatenates these inputs, in the order that you
     * specify them in the job, to create the outputs. For standard inputs, provide the
     * path to your S3, HTTP, or HTTPS source file. For example,
     * s3://amzn-s3-demo-bucket/input.mp4 for an Amazon S3 input or
     * https://example.com/input.mp4 for an HTTPS input. For TAMS inputs, specify the
     * HTTPS endpoint of your TAMS server. For example, https://tams-server.example.com
     * . When you do, also specify Source ID, Timerange, GAP handling, and the
     * Authorization connection ARN under TAMS settings. (Don't include these
     * parameters in the Input file URL.) For IMF inputs, specify your input by
     * providing the path to your CPL. For example, s3://amzn-s3-demo-bucket/vf/cpl.xml
     * . If the CPL is in an incomplete IMP, make sure to use Supplemental IMPsto
     * specify any supplemental IMPs that contain assets referenced by the CPL.
     */
    inline const Aws::String& GetFileInput() const { return m_fileInput; }
    inline bool FileInputHasBeenSet() const { return m_fileInputHasBeenSet; }
    template<typename FileInputT = Aws::String>
    void SetFileInput(FileInputT&& value) { m_fileInputHasBeenSet = true; m_fileInput = std::forward<FileInputT>(value); }
    template<typename FileInputT = Aws::String>
    Input& WithFileInput(FileInputT&& value) { SetFileInput(std::forward<FileInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether to apply input filtering to improve the video quality of your
     * input. To apply filtering depending on your input type and quality: Choose Auto.
     * To apply no filtering: Choose Disable. To apply filtering regardless of your
     * input type and quality: Choose Force. When you do, you must also specify a value
     * for Filter strength.
     */
    inline InputFilterEnable GetFilterEnable() const { return m_filterEnable; }
    inline bool FilterEnableHasBeenSet() const { return m_filterEnableHasBeenSet; }
    inline void SetFilterEnable(InputFilterEnable value) { m_filterEnableHasBeenSet = true; m_filterEnable = value; }
    inline Input& WithFilterEnable(InputFilterEnable value) { SetFilterEnable(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the strength of the input filter. To apply an automatic amount of
     * filtering based the compression artifacts measured in your input: We recommend
     * that you leave Filter strength blank and set Filter enable to Auto. To manually
     * apply filtering: Enter a value from 1 to 5, where 1 is the least amount of
     * filtering and 5 is the most. The value that you enter applies to the strength of
     * the Deblock or Denoise filters, or to the strength of the Advanced input filter.
     */
    inline int GetFilterStrength() const { return m_filterStrength; }
    inline bool FilterStrengthHasBeenSet() const { return m_filterStrengthHasBeenSet; }
    inline void SetFilterStrength(int value) { m_filterStrengthHasBeenSet = true; m_filterStrength = value; }
    inline Input& WithFilterStrength(int value) { SetFilterStrength(value); return *this;}
    ///@}

    ///@{
    /**
     * Enable the image inserter feature to include a graphic overlay on your video.
     * Enable or disable this feature for each input individually. This setting is
     * disabled by default.
     */
    inline const ImageInserter& GetImageInserter() const { return m_imageInserter; }
    inline bool ImageInserterHasBeenSet() const { return m_imageInserterHasBeenSet; }
    template<typename ImageInserterT = ImageInserter>
    void SetImageInserter(ImageInserterT&& value) { m_imageInserterHasBeenSet = true; m_imageInserter = std::forward<ImageInserterT>(value); }
    template<typename ImageInserterT = ImageInserter>
    Input& WithImageInserter(ImageInserterT&& value) { SetImageInserter(std::forward<ImageInserterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Contains sets of start and end times that together specify a portion of the
     * input to be used in the outputs. If you provide only a start time, the clip will
     * be the entire input from that point to the end. If you provide only an end time,
     * it will be the entire input up to that point. When you specify more than one
     * input clip, the transcoding service creates the job outputs by stringing the
     * clips together in the order you specify them.
     */
    inline const Aws::Vector<InputClipping>& GetInputClippings() const { return m_inputClippings; }
    inline bool InputClippingsHasBeenSet() const { return m_inputClippingsHasBeenSet; }
    template<typename InputClippingsT = Aws::Vector<InputClipping>>
    void SetInputClippings(InputClippingsT&& value) { m_inputClippingsHasBeenSet = true; m_inputClippings = std::forward<InputClippingsT>(value); }
    template<typename InputClippingsT = Aws::Vector<InputClipping>>
    Input& WithInputClippings(InputClippingsT&& value) { SetInputClippings(std::forward<InputClippingsT>(value)); return *this;}
    template<typename InputClippingsT = InputClipping>
    Input& AddInputClippings(InputClippingsT&& value) { m_inputClippingsHasBeenSet = true; m_inputClippings.emplace_back(std::forward<InputClippingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * When you have a progressive segmented frame (PsF) input, use this setting to
     * flag the input as PsF. MediaConvert doesn't automatically detect PsF. Therefore,
     * flagging your input as PsF results in better preservation of video quality when
     * you do deinterlacing and frame rate conversion. If you don't specify, the
     * default value is Auto. Auto is the correct setting for all inputs that are not
     * PsF. Don't set this value to PsF when your input is interlaced. Doing so creates
     * horizontal interlacing artifacts.
     */
    inline InputScanType GetInputScanType() const { return m_inputScanType; }
    inline bool InputScanTypeHasBeenSet() const { return m_inputScanTypeHasBeenSet; }
    inline void SetInputScanType(InputScanType value) { m_inputScanTypeHasBeenSet = true; m_inputScanType = value; }
    inline Input& WithInputScanType(InputScanType value) { SetInputScanType(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Selection placement to define the video area in your output frame. The area
     * outside of the rectangle that you specify here is black. If you specify a value
     * here, it will override any value that you specify in the output setting
     * Selection placement. If you specify a value here, this will override any AFD
     * values in your input, even if you set Respond to AFD to Respond. If you specify
     * a value here, this will ignore anything that you specify for the setting Scaling
     * Behavior.
     */
    inline const Rectangle& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = Rectangle>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Rectangle>
    Input& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use Program to select a specific program from within a multi-program transport
     * stream. Note that Quad 4K is not currently supported. Default is the first
     * program within the transport stream. If the program you specify doesn't exist,
     * the transcoding service will use this default.
     */
    inline int GetProgramNumber() const { return m_programNumber; }
    inline bool ProgramNumberHasBeenSet() const { return m_programNumberHasBeenSet; }
    inline void SetProgramNumber(int value) { m_programNumberHasBeenSet = true; m_programNumber = value; }
    inline Input& WithProgramNumber(int value) { SetProgramNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * Set PSI control for transport stream inputs to specify which data the demux
     * process to scans.
* Ignore PSI - Scan all PIDs for audio and video.
* Use PSI -
     * Scan only PSI data.
     */
    inline InputPsiControl GetPsiControl() const { return m_psiControl; }
    inline bool PsiControlHasBeenSet() const { return m_psiControlHasBeenSet; }
    inline void SetPsiControl(InputPsiControl value) { m_psiControlHasBeenSet = true; m_psiControl = value; }
    inline Input& WithPsiControl(InputPsiControl value) { SetPsiControl(value); return *this;}
    ///@}

    ///@{
    /**
     * Provide a list of any necessary supplemental IMPs. You need supplemental IMPs if
     * the CPL that you're using for your input is in an incomplete IMP. Specify either
     * the supplemental IMP directories with a trailing slash or the ASSETMAP.xml
     * files. For example ["s3://bucket/ov/", "s3://bucket/vf2/ASSETMAP.xml"]. You
     * don't need to specify the IMP that contains your input CPL, because the service
     * automatically detects it.
     */
    inline const Aws::Vector<Aws::String>& GetSupplementalImps() const { return m_supplementalImps; }
    inline bool SupplementalImpsHasBeenSet() const { return m_supplementalImpsHasBeenSet; }
    template<typename SupplementalImpsT = Aws::Vector<Aws::String>>
    void SetSupplementalImps(SupplementalImpsT&& value) { m_supplementalImpsHasBeenSet = true; m_supplementalImps = std::forward<SupplementalImpsT>(value); }
    template<typename SupplementalImpsT = Aws::Vector<Aws::String>>
    Input& WithSupplementalImps(SupplementalImpsT&& value) { SetSupplementalImps(std::forward<SupplementalImpsT>(value)); return *this;}
    template<typename SupplementalImpsT = Aws::String>
    Input& AddSupplementalImps(SupplementalImpsT&& value) { m_supplementalImpsHasBeenSet = true; m_supplementalImps.emplace_back(std::forward<SupplementalImpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Specify a Time Addressable Media Store (TAMS) server as an input source. TAMS is
     * an open-source API specification that provides access to time-segmented media
     * content. Use TAMS to retrieve specific time ranges from live or archived media
     * streams. When you specify TAMS settings, MediaConvert connects to your TAMS
     * server, retrieves the media segments for your specified time range, and
     * processes them as a single input. This enables workflows like extracting clips
     * from live streams or processing specific portions of archived content. To use
     * TAMS, you must: 1. Have access to a TAMS-compliant server 2. Specify the server
     * URL in the Input file URL field 3. Provide the required SourceId and Timerange
     * parameters 4. Configure authentication, if your TAMS server requires it
     */
    inline const InputTamsSettings& GetTamsSettings() const { return m_tamsSettings; }
    inline bool TamsSettingsHasBeenSet() const { return m_tamsSettingsHasBeenSet; }
    template<typename TamsSettingsT = InputTamsSettings>
    void SetTamsSettings(TamsSettingsT&& value) { m_tamsSettingsHasBeenSet = true; m_tamsSettings = std::forward<TamsSettingsT>(value); }
    template<typename TamsSettingsT = InputTamsSettings>
    Input& WithTamsSettings(TamsSettingsT&& value) { SetTamsSettings(std::forward<TamsSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use this Timecode source setting, located under the input settings, to specify
     * how the service counts input video frames. This input frame count affects only
     * the behavior of features that apply to a single input at a time, such as input
     * clipping and synchronizing some captions formats. Choose Embedded to use the
     * timecodes in your input video. Choose Start at zero to start the first frame at
     * zero. Choose Specified start to start the first frame at the timecode that you
     * specify in the setting Start timecode. If you don't specify a value for Timecode
     * source, the service will use Embedded by default. For more information about
     * timecodes, see https://docs.aws.amazon.com/console/mediaconvert/timecode.
     */
    inline InputTimecodeSource GetTimecodeSource() const { return m_timecodeSource; }
    inline bool TimecodeSourceHasBeenSet() const { return m_timecodeSourceHasBeenSet; }
    inline void SetTimecodeSource(InputTimecodeSource value) { m_timecodeSourceHasBeenSet = true; m_timecodeSource = value; }
    inline Input& WithTimecodeSource(InputTimecodeSource value) { SetTimecodeSource(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the timecode that you want the service to use for this input's initial
     * frame. To use this setting, you must set the Timecode source setting, located
     * under the input settings, to Specified start. For more information about
     * timecodes, see https://docs.aws.amazon.com/console/mediaconvert/timecode.
     */
    inline const Aws::String& GetTimecodeStart() const { return m_timecodeStart; }
    inline bool TimecodeStartHasBeenSet() const { return m_timecodeStartHasBeenSet; }
    template<typename TimecodeStartT = Aws::String>
    void SetTimecodeStart(TimecodeStartT&& value) { m_timecodeStartHasBeenSet = true; m_timecodeStart = std::forward<TimecodeStartT>(value); }
    template<typename TimecodeStartT = Aws::String>
    Input& WithTimecodeStart(TimecodeStartT&& value) { SetTimecodeStart(std::forward<TimecodeStartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * When you include Video generator, MediaConvert creates a video input with black
     * frames. Use this setting if you do not have a video input or if you want to add
     * black video frames before, or after, other inputs. You can specify Video
     * generator, or you can specify an Input file, but you cannot specify both. For
     * more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/video-generator.html
     */
    inline const InputVideoGenerator& GetVideoGenerator() const { return m_videoGenerator; }
    inline bool VideoGeneratorHasBeenSet() const { return m_videoGeneratorHasBeenSet; }
    template<typename VideoGeneratorT = InputVideoGenerator>
    void SetVideoGenerator(VideoGeneratorT&& value) { m_videoGeneratorHasBeenSet = true; m_videoGenerator = std::forward<VideoGeneratorT>(value); }
    template<typename VideoGeneratorT = InputVideoGenerator>
    Input& WithVideoGenerator(VideoGeneratorT&& value) { SetVideoGenerator(std::forward<VideoGeneratorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Contains an array of video overlays.
     */
    inline const Aws::Vector<VideoOverlay>& GetVideoOverlays() const { return m_videoOverlays; }
    inline bool VideoOverlaysHasBeenSet() const { return m_videoOverlaysHasBeenSet; }
    template<typename VideoOverlaysT = Aws::Vector<VideoOverlay>>
    void SetVideoOverlays(VideoOverlaysT&& value) { m_videoOverlaysHasBeenSet = true; m_videoOverlays = std::forward<VideoOverlaysT>(value); }
    template<typename VideoOverlaysT = Aws::Vector<VideoOverlay>>
    Input& WithVideoOverlays(VideoOverlaysT&& value) { SetVideoOverlays(std::forward<VideoOverlaysT>(value)); return *this;}
    template<typename VideoOverlaysT = VideoOverlay>
    Input& AddVideoOverlays(VideoOverlaysT&& value) { m_videoOverlaysHasBeenSet = true; m_videoOverlays.emplace_back(std::forward<VideoOverlaysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Input video selectors contain the video settings for the input. Each of your
     * inputs can have up to one video selector.
     */
    inline const VideoSelector& GetVideoSelector() const { return m_videoSelector; }
    inline bool VideoSelectorHasBeenSet() const { return m_videoSelectorHasBeenSet; }
    template<typename VideoSelectorT = VideoSelector>
    void SetVideoSelector(VideoSelectorT&& value) { m_videoSelectorHasBeenSet = true; m_videoSelector = std::forward<VideoSelectorT>(value); }
    template<typename VideoSelectorT = VideoSelector>
    Input& WithVideoSelector(VideoSelectorT&& value) { SetVideoSelector(std::forward<VideoSelectorT>(value)); return *this;}
    ///@}
  private:

    AdvancedInputFilter m_advancedInputFilter{AdvancedInputFilter::NOT_SET};
    bool m_advancedInputFilterHasBeenSet = false;

    AdvancedInputFilterSettings m_advancedInputFilterSettings;
    bool m_advancedInputFilterSettingsHasBeenSet = false;

    Aws::Map<Aws::String, AudioSelectorGroup> m_audioSelectorGroups;
    bool m_audioSelectorGroupsHasBeenSet = false;

    Aws::Map<Aws::String, AudioSelector> m_audioSelectors;
    bool m_audioSelectorsHasBeenSet = false;

    Aws::Map<Aws::String, CaptionSelector> m_captionSelectors;
    bool m_captionSelectorsHasBeenSet = false;

    Rectangle m_crop;
    bool m_cropHasBeenSet = false;

    InputDeblockFilter m_deblockFilter{InputDeblockFilter::NOT_SET};
    bool m_deblockFilterHasBeenSet = false;

    InputDecryptionSettings m_decryptionSettings;
    bool m_decryptionSettingsHasBeenSet = false;

    InputDenoiseFilter m_denoiseFilter{InputDenoiseFilter::NOT_SET};
    bool m_denoiseFilterHasBeenSet = false;

    Aws::String m_dolbyVisionMetadataXml;
    bool m_dolbyVisionMetadataXmlHasBeenSet = false;

    Aws::Map<Aws::String, DynamicAudioSelector> m_dynamicAudioSelectors;
    bool m_dynamicAudioSelectorsHasBeenSet = false;

    Aws::String m_fileInput;
    bool m_fileInputHasBeenSet = false;

    InputFilterEnable m_filterEnable{InputFilterEnable::NOT_SET};
    bool m_filterEnableHasBeenSet = false;

    int m_filterStrength{0};
    bool m_filterStrengthHasBeenSet = false;

    ImageInserter m_imageInserter;
    bool m_imageInserterHasBeenSet = false;

    Aws::Vector<InputClipping> m_inputClippings;
    bool m_inputClippingsHasBeenSet = false;

    InputScanType m_inputScanType{InputScanType::NOT_SET};
    bool m_inputScanTypeHasBeenSet = false;

    Rectangle m_position;
    bool m_positionHasBeenSet = false;

    int m_programNumber{0};
    bool m_programNumberHasBeenSet = false;

    InputPsiControl m_psiControl{InputPsiControl::NOT_SET};
    bool m_psiControlHasBeenSet = false;

    Aws::Vector<Aws::String> m_supplementalImps;
    bool m_supplementalImpsHasBeenSet = false;

    InputTamsSettings m_tamsSettings;
    bool m_tamsSettingsHasBeenSet = false;

    InputTimecodeSource m_timecodeSource{InputTimecodeSource::NOT_SET};
    bool m_timecodeSourceHasBeenSet = false;

    Aws::String m_timecodeStart;
    bool m_timecodeStartHasBeenSet = false;

    InputVideoGenerator m_videoGenerator;
    bool m_videoGeneratorHasBeenSet = false;

    Aws::Vector<VideoOverlay> m_videoOverlays;
    bool m_videoOverlaysHasBeenSet = false;

    VideoSelector m_videoSelector;
    bool m_videoSelectorHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
