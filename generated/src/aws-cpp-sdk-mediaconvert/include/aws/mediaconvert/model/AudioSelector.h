﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AudioDurationCorrection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/AudioDefaultSelection.h>
#include <aws/mediaconvert/model/HlsRenditionGroupSettings.h>
#include <aws/mediaconvert/model/LanguageCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/RemixSettings.h>
#include <aws/mediaconvert/model/AudioSelectorType.h>
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
   * Use Audio selectors to specify a track or set of tracks from the input that you
   * will use in your outputs. You can use multiple Audio selectors per
   * input.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AudioSelector">AWS
   * API Reference</a></p>
   */
  class AudioSelector
  {
  public:
    AWS_MEDIACONVERT_API AudioSelector();
    AWS_MEDIACONVERT_API AudioSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AudioSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline const AudioDurationCorrection& GetAudioDurationCorrection() const{ return m_audioDurationCorrection; }
    inline bool AudioDurationCorrectionHasBeenSet() const { return m_audioDurationCorrectionHasBeenSet; }
    inline void SetAudioDurationCorrection(const AudioDurationCorrection& value) { m_audioDurationCorrectionHasBeenSet = true; m_audioDurationCorrection = value; }
    inline void SetAudioDurationCorrection(AudioDurationCorrection&& value) { m_audioDurationCorrectionHasBeenSet = true; m_audioDurationCorrection = std::move(value); }
    inline AudioSelector& WithAudioDurationCorrection(const AudioDurationCorrection& value) { SetAudioDurationCorrection(value); return *this;}
    inline AudioSelector& WithAudioDurationCorrection(AudioDurationCorrection&& value) { SetAudioDurationCorrection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Selects a specific language code from within an audio source, using the ISO
     * 639-2 or ISO 639-3 three-letter language code
     */
    inline const Aws::String& GetCustomLanguageCode() const{ return m_customLanguageCode; }
    inline bool CustomLanguageCodeHasBeenSet() const { return m_customLanguageCodeHasBeenSet; }
    inline void SetCustomLanguageCode(const Aws::String& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = value; }
    inline void SetCustomLanguageCode(Aws::String&& value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode = std::move(value); }
    inline void SetCustomLanguageCode(const char* value) { m_customLanguageCodeHasBeenSet = true; m_customLanguageCode.assign(value); }
    inline AudioSelector& WithCustomLanguageCode(const Aws::String& value) { SetCustomLanguageCode(value); return *this;}
    inline AudioSelector& WithCustomLanguageCode(Aws::String&& value) { SetCustomLanguageCode(std::move(value)); return *this;}
    inline AudioSelector& WithCustomLanguageCode(const char* value) { SetCustomLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * Enable this setting on one audio selector to set it as the default for the job.
     * The service uses this default for outputs where it can't find the specified
     * input audio. If you don't set a default, those outputs have no audio.
     */
    inline const AudioDefaultSelection& GetDefaultSelection() const{ return m_defaultSelection; }
    inline bool DefaultSelectionHasBeenSet() const { return m_defaultSelectionHasBeenSet; }
    inline void SetDefaultSelection(const AudioDefaultSelection& value) { m_defaultSelectionHasBeenSet = true; m_defaultSelection = value; }
    inline void SetDefaultSelection(AudioDefaultSelection&& value) { m_defaultSelectionHasBeenSet = true; m_defaultSelection = std::move(value); }
    inline AudioSelector& WithDefaultSelection(const AudioDefaultSelection& value) { SetDefaultSelection(value); return *this;}
    inline AudioSelector& WithDefaultSelection(AudioDefaultSelection&& value) { SetDefaultSelection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the S3, HTTP, or HTTPS URL for your external audio file input.
     */
    inline const Aws::String& GetExternalAudioFileInput() const{ return m_externalAudioFileInput; }
    inline bool ExternalAudioFileInputHasBeenSet() const { return m_externalAudioFileInputHasBeenSet; }
    inline void SetExternalAudioFileInput(const Aws::String& value) { m_externalAudioFileInputHasBeenSet = true; m_externalAudioFileInput = value; }
    inline void SetExternalAudioFileInput(Aws::String&& value) { m_externalAudioFileInputHasBeenSet = true; m_externalAudioFileInput = std::move(value); }
    inline void SetExternalAudioFileInput(const char* value) { m_externalAudioFileInputHasBeenSet = true; m_externalAudioFileInput.assign(value); }
    inline AudioSelector& WithExternalAudioFileInput(const Aws::String& value) { SetExternalAudioFileInput(value); return *this;}
    inline AudioSelector& WithExternalAudioFileInput(Aws::String&& value) { SetExternalAudioFileInput(std::move(value)); return *this;}
    inline AudioSelector& WithExternalAudioFileInput(const char* value) { SetExternalAudioFileInput(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings specific to audio sources in an HLS alternate rendition group. Specify
     * the properties (renditionGroupId, renditionName or renditionLanguageCode) to
     * identify the unique audio track among the alternative rendition groups present
     * in the HLS manifest. If no unique track is found, or multiple tracks match the
     * properties provided, the job fails. If no properties in
     * hlsRenditionGroupSettings are specified, the default audio track within the
     * video segment is chosen. If there is no audio within video segment, the
     * alternative audio with DEFAULT=YES is chosen instead.
     */
    inline const HlsRenditionGroupSettings& GetHlsRenditionGroupSettings() const{ return m_hlsRenditionGroupSettings; }
    inline bool HlsRenditionGroupSettingsHasBeenSet() const { return m_hlsRenditionGroupSettingsHasBeenSet; }
    inline void SetHlsRenditionGroupSettings(const HlsRenditionGroupSettings& value) { m_hlsRenditionGroupSettingsHasBeenSet = true; m_hlsRenditionGroupSettings = value; }
    inline void SetHlsRenditionGroupSettings(HlsRenditionGroupSettings&& value) { m_hlsRenditionGroupSettingsHasBeenSet = true; m_hlsRenditionGroupSettings = std::move(value); }
    inline AudioSelector& WithHlsRenditionGroupSettings(const HlsRenditionGroupSettings& value) { SetHlsRenditionGroupSettings(value); return *this;}
    inline AudioSelector& WithHlsRenditionGroupSettings(HlsRenditionGroupSettings&& value) { SetHlsRenditionGroupSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the language to select from your audio input. In the MediaConvert
     * console choose from a list of languages. In your JSON job settings choose from
     * an ISO 639-2 three-letter code listed at
     * https://www.loc.gov/standards/iso639-2/php/code_list.php
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline AudioSelector& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}
    inline AudioSelector& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify a time delta, in milliseconds, to offset the audio from the input
     * video.
To specify no offset: Keep the default value, 0.
To specify an offset:
     * Enter an integer from -2147483648 to 2147483647
     */
    inline int GetOffset() const{ return m_offset; }
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }
    inline void SetOffset(int value) { m_offsetHasBeenSet = true; m_offset = value; }
    inline AudioSelector& WithOffset(int value) { SetOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * Selects a specific PID from within an audio source (e.g. 257 selects PID 0x101).
     */
    inline const Aws::Vector<int>& GetPids() const{ return m_pids; }
    inline bool PidsHasBeenSet() const { return m_pidsHasBeenSet; }
    inline void SetPids(const Aws::Vector<int>& value) { m_pidsHasBeenSet = true; m_pids = value; }
    inline void SetPids(Aws::Vector<int>&& value) { m_pidsHasBeenSet = true; m_pids = std::move(value); }
    inline AudioSelector& WithPids(const Aws::Vector<int>& value) { SetPids(value); return *this;}
    inline AudioSelector& WithPids(Aws::Vector<int>&& value) { SetPids(std::move(value)); return *this;}
    inline AudioSelector& AddPids(int value) { m_pidsHasBeenSet = true; m_pids.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * Use this setting for input streams that contain Dolby E, to have the service
     * extract specific program data from the track. To select multiple programs,
     * create multiple selectors with the same Track and different Program numbers. In
     * the console, this setting is visible when you set Selector type to Track. Choose
     * the program number from the dropdown list. If your input file has incorrect
     * metadata, you can choose All channels instead of a program number to have the
     * service ignore the program IDs and include all the programs in the track.
     */
    inline int GetProgramSelection() const{ return m_programSelection; }
    inline bool ProgramSelectionHasBeenSet() const { return m_programSelectionHasBeenSet; }
    inline void SetProgramSelection(int value) { m_programSelectionHasBeenSet = true; m_programSelection = value; }
    inline AudioSelector& WithProgramSelection(int value) { SetProgramSelection(value); return *this;}
    ///@}

    ///@{
    /**
     * Use these settings to reorder the audio channels of one input to match those of
     * another input. This allows you to combine the two files into a single output,
     * one after the other.
     */
    inline const RemixSettings& GetRemixSettings() const{ return m_remixSettings; }
    inline bool RemixSettingsHasBeenSet() const { return m_remixSettingsHasBeenSet; }
    inline void SetRemixSettings(const RemixSettings& value) { m_remixSettingsHasBeenSet = true; m_remixSettings = value; }
    inline void SetRemixSettings(RemixSettings&& value) { m_remixSettingsHasBeenSet = true; m_remixSettings = std::move(value); }
    inline AudioSelector& WithRemixSettings(const RemixSettings& value) { SetRemixSettings(value); return *this;}
    inline AudioSelector& WithRemixSettings(RemixSettings&& value) { SetRemixSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the type of the audio selector.
     */
    inline const AudioSelectorType& GetSelectorType() const{ return m_selectorType; }
    inline bool SelectorTypeHasBeenSet() const { return m_selectorTypeHasBeenSet; }
    inline void SetSelectorType(const AudioSelectorType& value) { m_selectorTypeHasBeenSet = true; m_selectorType = value; }
    inline void SetSelectorType(AudioSelectorType&& value) { m_selectorTypeHasBeenSet = true; m_selectorType = std::move(value); }
    inline AudioSelector& WithSelectorType(const AudioSelectorType& value) { SetSelectorType(value); return *this;}
    inline AudioSelector& WithSelectorType(AudioSelectorType&& value) { SetSelectorType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Identify a track from the input audio to include in this selector by entering
     * the track index number. To include several tracks in a single audio selector,
     * specify multiple tracks as follows. Using the console, enter a comma-separated
     * list. For example, type "1,2,3" to include tracks 1 through 3.
     */
    inline const Aws::Vector<int>& GetTracks() const{ return m_tracks; }
    inline bool TracksHasBeenSet() const { return m_tracksHasBeenSet; }
    inline void SetTracks(const Aws::Vector<int>& value) { m_tracksHasBeenSet = true; m_tracks = value; }
    inline void SetTracks(Aws::Vector<int>&& value) { m_tracksHasBeenSet = true; m_tracks = std::move(value); }
    inline AudioSelector& WithTracks(const Aws::Vector<int>& value) { SetTracks(value); return *this;}
    inline AudioSelector& WithTracks(Aws::Vector<int>&& value) { SetTracks(std::move(value)); return *this;}
    inline AudioSelector& AddTracks(int value) { m_tracksHasBeenSet = true; m_tracks.push_back(value); return *this; }
    ///@}
  private:

    AudioDurationCorrection m_audioDurationCorrection;
    bool m_audioDurationCorrectionHasBeenSet = false;

    Aws::String m_customLanguageCode;
    bool m_customLanguageCodeHasBeenSet = false;

    AudioDefaultSelection m_defaultSelection;
    bool m_defaultSelectionHasBeenSet = false;

    Aws::String m_externalAudioFileInput;
    bool m_externalAudioFileInputHasBeenSet = false;

    HlsRenditionGroupSettings m_hlsRenditionGroupSettings;
    bool m_hlsRenditionGroupSettingsHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    int m_offset;
    bool m_offsetHasBeenSet = false;

    Aws::Vector<int> m_pids;
    bool m_pidsHasBeenSet = false;

    int m_programSelection;
    bool m_programSelectionHasBeenSet = false;

    RemixSettings m_remixSettings;
    bool m_remixSettingsHasBeenSet = false;

    AudioSelectorType m_selectorType;
    bool m_selectorTypeHasBeenSet = false;

    Aws::Vector<int> m_tracks;
    bool m_tracksHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
