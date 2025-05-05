/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AudioDurationCorrection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/LanguageCode.h>
#include <aws/mediaconvert/model/DynamicAudioSelectorType.h>
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
   * Use Dynamic audio selectors when you do not know the track layout of your source
   * when you submit your job, but want to select multiple audio tracks. When you
   * include an audio track in your output and specify this Dynamic audio selector as
   * the Audio source, MediaConvert creates an audio track within that output for
   * each dynamically selected track. Note that when you include a Dynamic audio
   * selector for two or more inputs, each input must have the same number of audio
   * tracks and audio channels.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DynamicAudioSelector">AWS
   * API Reference</a></p>
   */
  class DynamicAudioSelector
  {
  public:
    AWS_MEDIACONVERT_API DynamicAudioSelector() = default;
    AWS_MEDIACONVERT_API DynamicAudioSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API DynamicAudioSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Apply audio timing corrections to help synchronize audio and video in your
     * output. To apply timing corrections, your input must meet the following
     * requirements: * Container: MP4, or MOV, with an accurate time-to-sample (STTS)
     * table. * Audio track: AAC. Choose from the following audio timing correction
     * settings: * Disabled (Default): Apply no correction. * Auto: Recommended for
     * most inputs. MediaConvert analyzes the audio timing in your input and determines
     * which correction setting to use, if needed. * Track: Adjust the duration of each
     * audio frame by a constant amount to align the audio track length with STTS
     * duration. Track-level correction does not affect pitch, and is recommended for
     * tonal audio content such as music. * Frame: Adjust the duration of each audio
     * frame by a variable amount to align audio frames with STTS timestamps. No
     * corrections are made to already-aligned frames. Frame-level correction may
     * affect the pitch of corrected frames, and is recommended for atonal audio
     * content such as speech or percussion. * Force: Apply audio duration correction,
     * either Track or Frame depending on your input, regardless of the accuracy of
     * your input's STTS table. Your output audio and video may not be aligned or it
     * may contain audio artifacts.
     */
    inline AudioDurationCorrection GetAudioDurationCorrection() const { return m_audioDurationCorrection; }
    inline bool AudioDurationCorrectionHasBeenSet() const { return m_audioDurationCorrectionHasBeenSet; }
    inline void SetAudioDurationCorrection(AudioDurationCorrection value) { m_audioDurationCorrectionHasBeenSet = true; m_audioDurationCorrection = value; }
    inline DynamicAudioSelector& WithAudioDurationCorrection(AudioDurationCorrection value) { SetAudioDurationCorrection(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the S3, HTTP, or HTTPS URL for your external audio file input.
     */
    inline const Aws::String& GetExternalAudioFileInput() const { return m_externalAudioFileInput; }
    inline bool ExternalAudioFileInputHasBeenSet() const { return m_externalAudioFileInputHasBeenSet; }
    template<typename ExternalAudioFileInputT = Aws::String>
    void SetExternalAudioFileInput(ExternalAudioFileInputT&& value) { m_externalAudioFileInputHasBeenSet = true; m_externalAudioFileInput = std::forward<ExternalAudioFileInputT>(value); }
    template<typename ExternalAudioFileInputT = Aws::String>
    DynamicAudioSelector& WithExternalAudioFileInput(ExternalAudioFileInputT&& value) { SetExternalAudioFileInput(std::forward<ExternalAudioFileInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the language to select from your audio input. In the MediaConvert
     * console choose from a list of languages. In your JSON job settings choose from
     * an ISO 639-2 three-letter code listed at
     * https://www.loc.gov/standards/iso639-2/php/code_list.php
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline DynamicAudioSelector& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify a time delta, in milliseconds, to offset the audio from the input
     * video.
To specify no offset: Keep the default value, 0.
To specify an offset:
     * Enter an integer from -2147483648 to 2147483647
     */
    inline int GetOffset() const { return m_offset; }
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }
    inline void SetOffset(int value) { m_offsetHasBeenSet = true; m_offset = value; }
    inline DynamicAudioSelector& WithOffset(int value) { SetOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify which audio tracks to dynamically select from your source. To select all
     * audio tracks: Keep the default value, All tracks. To select all audio tracks
     * with a specific language code: Choose Language code. When you do, you must also
     * specify a language code under the Language code setting. If there is no matching
     * Language code in your source, then no track will be selected.
     */
    inline DynamicAudioSelectorType GetSelectorType() const { return m_selectorType; }
    inline bool SelectorTypeHasBeenSet() const { return m_selectorTypeHasBeenSet; }
    inline void SetSelectorType(DynamicAudioSelectorType value) { m_selectorTypeHasBeenSet = true; m_selectorType = value; }
    inline DynamicAudioSelector& WithSelectorType(DynamicAudioSelectorType value) { SetSelectorType(value); return *this;}
    ///@}
  private:

    AudioDurationCorrection m_audioDurationCorrection{AudioDurationCorrection::NOT_SET};
    bool m_audioDurationCorrectionHasBeenSet = false;

    Aws::String m_externalAudioFileInput;
    bool m_externalAudioFileInputHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    int m_offset{0};
    bool m_offsetHasBeenSet = false;

    DynamicAudioSelectorType m_selectorType{DynamicAudioSelectorType::NOT_SET};
    bool m_selectorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
