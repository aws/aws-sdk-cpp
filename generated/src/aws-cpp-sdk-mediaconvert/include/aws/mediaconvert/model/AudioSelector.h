/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AudioDefaultSelection.h>
#include <aws/mediaconvert/model/AudioDurationCorrection.h>
#include <aws/mediaconvert/model/AudioSelectorType.h>
#include <aws/mediaconvert/model/HlsRenditionGroupSettings.h>
#include <aws/mediaconvert/model/LanguageCode.h>
#include <aws/mediaconvert/model/RemixSettings.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConvert {
namespace Model {

/**
 * Use Audio selectors to specify a track or set of tracks from the input that you
 * will use in your outputs. You can use multiple Audio selectors per
 * input.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AudioSelector">AWS
 * API Reference</a></p>
 */
class AudioSelector {
 public:
  AWS_MEDIACONVERT_API AudioSelector() = default;
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
  inline AudioDurationCorrection GetAudioDurationCorrection() const { return m_audioDurationCorrection; }
  inline bool AudioDurationCorrectionHasBeenSet() const { return m_audioDurationCorrectionHasBeenSet; }
  inline void SetAudioDurationCorrection(AudioDurationCorrection value) {
    m_audioDurationCorrectionHasBeenSet = true;
    m_audioDurationCorrection = value;
  }
  inline AudioSelector& WithAudioDurationCorrection(AudioDurationCorrection value) {
    SetAudioDurationCorrection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Selects a specific language code from within an audio source, using the ISO
   * 639-2 or ISO 639-3 three-letter language code
   */
  inline const Aws::String& GetCustomLanguageCode() const { return m_customLanguageCode; }
  inline bool CustomLanguageCodeHasBeenSet() const { return m_customLanguageCodeHasBeenSet; }
  template <typename CustomLanguageCodeT = Aws::String>
  void SetCustomLanguageCode(CustomLanguageCodeT&& value) {
    m_customLanguageCodeHasBeenSet = true;
    m_customLanguageCode = std::forward<CustomLanguageCodeT>(value);
  }
  template <typename CustomLanguageCodeT = Aws::String>
  AudioSelector& WithCustomLanguageCode(CustomLanguageCodeT&& value) {
    SetCustomLanguageCode(std::forward<CustomLanguageCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify a fallback audio selector for this input. Use to ensure outputs have
   * audio even when the audio selector you specify in your output is missing from
   * the source. DEFAULT (Checked in the MediaConvert console): If your output
   * settings specify an audio selector that does not exist in this input,
   * MediaConvert uses this audio selector instead. This is useful when you have
   * multiple inputs with a different number of audio tracks. NOT_DEFAULT (Unchecked
   * in the MediaConvert console): MediaConvert will not fallback from any missing
   * audio selector. Any output specifying a missing audio selector will be silent.
   */
  inline AudioDefaultSelection GetDefaultSelection() const { return m_defaultSelection; }
  inline bool DefaultSelectionHasBeenSet() const { return m_defaultSelectionHasBeenSet; }
  inline void SetDefaultSelection(AudioDefaultSelection value) {
    m_defaultSelectionHasBeenSet = true;
    m_defaultSelection = value;
  }
  inline AudioSelector& WithDefaultSelection(AudioDefaultSelection value) {
    SetDefaultSelection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the S3, HTTP, or HTTPS URL for your external audio file input.
   */
  inline const Aws::String& GetExternalAudioFileInput() const { return m_externalAudioFileInput; }
  inline bool ExternalAudioFileInputHasBeenSet() const { return m_externalAudioFileInputHasBeenSet; }
  template <typename ExternalAudioFileInputT = Aws::String>
  void SetExternalAudioFileInput(ExternalAudioFileInputT&& value) {
    m_externalAudioFileInputHasBeenSet = true;
    m_externalAudioFileInput = std::forward<ExternalAudioFileInputT>(value);
  }
  template <typename ExternalAudioFileInputT = Aws::String>
  AudioSelector& WithExternalAudioFileInput(ExternalAudioFileInputT&& value) {
    SetExternalAudioFileInput(std::forward<ExternalAudioFileInputT>(value));
    return *this;
  }
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
  inline const HlsRenditionGroupSettings& GetHlsRenditionGroupSettings() const { return m_hlsRenditionGroupSettings; }
  inline bool HlsRenditionGroupSettingsHasBeenSet() const { return m_hlsRenditionGroupSettingsHasBeenSet; }
  template <typename HlsRenditionGroupSettingsT = HlsRenditionGroupSettings>
  void SetHlsRenditionGroupSettings(HlsRenditionGroupSettingsT&& value) {
    m_hlsRenditionGroupSettingsHasBeenSet = true;
    m_hlsRenditionGroupSettings = std::forward<HlsRenditionGroupSettingsT>(value);
  }
  template <typename HlsRenditionGroupSettingsT = HlsRenditionGroupSettings>
  AudioSelector& WithHlsRenditionGroupSettings(HlsRenditionGroupSettingsT&& value) {
    SetHlsRenditionGroupSettings(std::forward<HlsRenditionGroupSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the language, using an ISO 639-2 three-letter code in all capital
   * letters. You can find a list of codes at:
   * https://www.loc.gov/standards/iso639-2/php/code_list.php
   */
  inline LanguageCode GetLanguageCode() const { return m_languageCode; }
  inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
  inline void SetLanguageCode(LanguageCode value) {
    m_languageCodeHasBeenSet = true;
    m_languageCode = value;
  }
  inline AudioSelector& WithLanguageCode(LanguageCode value) {
    SetLanguageCode(value);
    return *this;
  }
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
  inline void SetOffset(int value) {
    m_offsetHasBeenSet = true;
    m_offset = value;
  }
  inline AudioSelector& WithOffset(int value) {
    SetOffset(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Selects a specific PID from within an audio source (e.g. 257 selects PID 0x101).
   */
  inline const Aws::Vector<int>& GetPids() const { return m_pids; }
  inline bool PidsHasBeenSet() const { return m_pidsHasBeenSet; }
  template <typename PidsT = Aws::Vector<int>>
  void SetPids(PidsT&& value) {
    m_pidsHasBeenSet = true;
    m_pids = std::forward<PidsT>(value);
  }
  template <typename PidsT = Aws::Vector<int>>
  AudioSelector& WithPids(PidsT&& value) {
    SetPids(std::forward<PidsT>(value));
    return *this;
  }
  inline AudioSelector& AddPids(int value) {
    m_pidsHasBeenSet = true;
    m_pids.push_back(value);
    return *this;
  }
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
  inline int GetProgramSelection() const { return m_programSelection; }
  inline bool ProgramSelectionHasBeenSet() const { return m_programSelectionHasBeenSet; }
  inline void SetProgramSelection(int value) {
    m_programSelectionHasBeenSet = true;
    m_programSelection = value;
  }
  inline AudioSelector& WithProgramSelection(int value) {
    SetProgramSelection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Use these settings to reorder the audio channels of one input to match those of
   * another input. This allows you to combine the two files into a single output,
   * one after the other.
   */
  inline const RemixSettings& GetRemixSettings() const { return m_remixSettings; }
  inline bool RemixSettingsHasBeenSet() const { return m_remixSettingsHasBeenSet; }
  template <typename RemixSettingsT = RemixSettings>
  void SetRemixSettings(RemixSettingsT&& value) {
    m_remixSettingsHasBeenSet = true;
    m_remixSettings = std::forward<RemixSettingsT>(value);
  }
  template <typename RemixSettingsT = RemixSettings>
  AudioSelector& WithRemixSettings(RemixSettingsT&& value) {
    SetRemixSettings(std::forward<RemixSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify how MediaConvert selects audio content within your input. The default is
   * Track. PID: Select audio by specifying the Packet Identifier (PID) values for
   * MPEG Transport Stream inputs. Use this when you know the exact PID values of
   * your audio streams. Track: Default. Select audio by track number. This is the
   * most common option and works with most input container formats. If more types of
   * audio data get recognized in the future, these numberings may shift, but the
   * numberings used for Stream mode will not. Language code: Select audio by
   * language using an ISO 639-2 or ISO 639-3 three-letter code in all capital
   * letters. Use this when your source has embedded language metadata and you want
   * to select tracks based on their language. HLS rendition group: Select audio from
   * an HLS rendition group. Use this when your input is an HLS package with multiple
   * audio renditions and you want to select specific rendition groups. All PCM:
   * Select all uncompressed PCM audio tracks from your input automatically. This is
   * useful when you want to include all PCM audio tracks without specifying
   * individual track numbers. Stream: Select audio by stream number. Stream numbers
   * include all tracks in the source file, regardless of type, and correspond to
   * either the order of tracks in the file, or if applicable, the stream number
   * metadata of the track. Although all tracks count toward these stream numbers, in
   * this audio selector context, only the stream number of a track containing audio
   * data may be used. If your source file contains a track which is not recognized
   * by the service, then the corresponding stream number will still be reserved for
   * future use. If more types of audio data get recognized in the future, these
   * numberings will not shift.
   */
  inline AudioSelectorType GetSelectorType() const { return m_selectorType; }
  inline bool SelectorTypeHasBeenSet() const { return m_selectorTypeHasBeenSet; }
  inline void SetSelectorType(AudioSelectorType value) {
    m_selectorTypeHasBeenSet = true;
    m_selectorType = value;
  }
  inline AudioSelector& WithSelectorType(AudioSelectorType value) {
    SetSelectorType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Identify a track from the input audio to include in this selector by entering
   * the stream index number. These numberings count all tracks in the input file,
   * but only a track containing audio data may be used here. To include several
   * tracks in a single audio selector, specify multiple tracks as follows. Using the
   * console, enter a comma-separated list. For example, type "1,2,3" to include
   * tracks 1 through 3.
   */
  inline const Aws::Vector<int>& GetStreams() const { return m_streams; }
  inline bool StreamsHasBeenSet() const { return m_streamsHasBeenSet; }
  template <typename StreamsT = Aws::Vector<int>>
  void SetStreams(StreamsT&& value) {
    m_streamsHasBeenSet = true;
    m_streams = std::forward<StreamsT>(value);
  }
  template <typename StreamsT = Aws::Vector<int>>
  AudioSelector& WithStreams(StreamsT&& value) {
    SetStreams(std::forward<StreamsT>(value));
    return *this;
  }
  inline AudioSelector& AddStreams(int value) {
    m_streamsHasBeenSet = true;
    m_streams.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Identify a track from the input audio to include in this selector by entering
   * the track index number. These numberings include only tracks recognized as
   * audio. If the service recognizes more types of audio tracks in the future, these
   * numberings may shift. To include several tracks in a single audio selector,
   * specify multiple tracks as follows. Using the console, enter a comma-separated
   * list. For example, type "1,2,3" to include tracks 1 through 3.
   */
  inline const Aws::Vector<int>& GetTracks() const { return m_tracks; }
  inline bool TracksHasBeenSet() const { return m_tracksHasBeenSet; }
  template <typename TracksT = Aws::Vector<int>>
  void SetTracks(TracksT&& value) {
    m_tracksHasBeenSet = true;
    m_tracks = std::forward<TracksT>(value);
  }
  template <typename TracksT = Aws::Vector<int>>
  AudioSelector& WithTracks(TracksT&& value) {
    SetTracks(std::forward<TracksT>(value));
    return *this;
  }
  inline AudioSelector& AddTracks(int value) {
    m_tracksHasBeenSet = true;
    m_tracks.push_back(value);
    return *this;
  }
  ///@}
 private:
  AudioDurationCorrection m_audioDurationCorrection{AudioDurationCorrection::NOT_SET};

  Aws::String m_customLanguageCode;

  AudioDefaultSelection m_defaultSelection{AudioDefaultSelection::NOT_SET};

  Aws::String m_externalAudioFileInput;

  HlsRenditionGroupSettings m_hlsRenditionGroupSettings;

  LanguageCode m_languageCode{LanguageCode::NOT_SET};

  int m_offset{0};

  Aws::Vector<int> m_pids;

  int m_programSelection{0};

  RemixSettings m_remixSettings;

  AudioSelectorType m_selectorType{AudioSelectorType::NOT_SET};

  Aws::Vector<int> m_streams;

  Aws::Vector<int> m_tracks;
  bool m_audioDurationCorrectionHasBeenSet = false;
  bool m_customLanguageCodeHasBeenSet = false;
  bool m_defaultSelectionHasBeenSet = false;
  bool m_externalAudioFileInputHasBeenSet = false;
  bool m_hlsRenditionGroupSettingsHasBeenSet = false;
  bool m_languageCodeHasBeenSet = false;
  bool m_offsetHasBeenSet = false;
  bool m_pidsHasBeenSet = false;
  bool m_programSelectionHasBeenSet = false;
  bool m_remixSettingsHasBeenSet = false;
  bool m_selectorTypeHasBeenSet = false;
  bool m_streamsHasBeenSet = false;
  bool m_tracksHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
