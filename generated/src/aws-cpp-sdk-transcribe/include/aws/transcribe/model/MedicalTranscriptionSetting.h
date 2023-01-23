/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Allows additional optional settings in your request, including channel
   * identification, alternative transcriptions, and speaker partitioning. You can
   * use that to apply custom vocabularies to your medical transcription
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/MedicalTranscriptionSetting">AWS
   * API Reference</a></p>
   */
  class MedicalTranscriptionSetting
  {
  public:
    AWS_TRANSCRIBESERVICE_API MedicalTranscriptionSetting();
    AWS_TRANSCRIBESERVICE_API MedicalTranscriptionSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API MedicalTranscriptionSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables speaker partitioning (diarization) in your transcription output.
     * Speaker partitioning labels the speech from individual speakers in your media
     * file.</p> <p>If you enable <code>ShowSpeakerLabels</code> in your request, you
     * must also include <code>MaxSpeakerLabels</code>.</p> <p>You can't include
     * <code>ShowSpeakerLabels</code> and <code>ChannelIdentification</code> in the
     * same request. Including both parameters returns a
     * <code>BadRequestException</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
     * speakers (diarization)</a>.</p>
     */
    inline bool GetShowSpeakerLabels() const{ return m_showSpeakerLabels; }

    /**
     * <p>Enables speaker partitioning (diarization) in your transcription output.
     * Speaker partitioning labels the speech from individual speakers in your media
     * file.</p> <p>If you enable <code>ShowSpeakerLabels</code> in your request, you
     * must also include <code>MaxSpeakerLabels</code>.</p> <p>You can't include
     * <code>ShowSpeakerLabels</code> and <code>ChannelIdentification</code> in the
     * same request. Including both parameters returns a
     * <code>BadRequestException</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
     * speakers (diarization)</a>.</p>
     */
    inline bool ShowSpeakerLabelsHasBeenSet() const { return m_showSpeakerLabelsHasBeenSet; }

    /**
     * <p>Enables speaker partitioning (diarization) in your transcription output.
     * Speaker partitioning labels the speech from individual speakers in your media
     * file.</p> <p>If you enable <code>ShowSpeakerLabels</code> in your request, you
     * must also include <code>MaxSpeakerLabels</code>.</p> <p>You can't include
     * <code>ShowSpeakerLabels</code> and <code>ChannelIdentification</code> in the
     * same request. Including both parameters returns a
     * <code>BadRequestException</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
     * speakers (diarization)</a>.</p>
     */
    inline void SetShowSpeakerLabels(bool value) { m_showSpeakerLabelsHasBeenSet = true; m_showSpeakerLabels = value; }

    /**
     * <p>Enables speaker partitioning (diarization) in your transcription output.
     * Speaker partitioning labels the speech from individual speakers in your media
     * file.</p> <p>If you enable <code>ShowSpeakerLabels</code> in your request, you
     * must also include <code>MaxSpeakerLabels</code>.</p> <p>You can't include
     * <code>ShowSpeakerLabels</code> and <code>ChannelIdentification</code> in the
     * same request. Including both parameters returns a
     * <code>BadRequestException</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
     * speakers (diarization)</a>.</p>
     */
    inline MedicalTranscriptionSetting& WithShowSpeakerLabels(bool value) { SetShowSpeakerLabels(value); return *this;}


    /**
     * <p>Specify the maximum number of speakers you want to partition in your
     * media.</p> <p>Note that if your media contains more speakers than the specified
     * number, multiple speakers are treated as a single speaker.</p> <p>If you specify
     * the <code>MaxSpeakerLabels</code> field, you must set the
     * <code>ShowSpeakerLabels</code> field to true.</p>
     */
    inline int GetMaxSpeakerLabels() const{ return m_maxSpeakerLabels; }

    /**
     * <p>Specify the maximum number of speakers you want to partition in your
     * media.</p> <p>Note that if your media contains more speakers than the specified
     * number, multiple speakers are treated as a single speaker.</p> <p>If you specify
     * the <code>MaxSpeakerLabels</code> field, you must set the
     * <code>ShowSpeakerLabels</code> field to true.</p>
     */
    inline bool MaxSpeakerLabelsHasBeenSet() const { return m_maxSpeakerLabelsHasBeenSet; }

    /**
     * <p>Specify the maximum number of speakers you want to partition in your
     * media.</p> <p>Note that if your media contains more speakers than the specified
     * number, multiple speakers are treated as a single speaker.</p> <p>If you specify
     * the <code>MaxSpeakerLabels</code> field, you must set the
     * <code>ShowSpeakerLabels</code> field to true.</p>
     */
    inline void SetMaxSpeakerLabels(int value) { m_maxSpeakerLabelsHasBeenSet = true; m_maxSpeakerLabels = value; }

    /**
     * <p>Specify the maximum number of speakers you want to partition in your
     * media.</p> <p>Note that if your media contains more speakers than the specified
     * number, multiple speakers are treated as a single speaker.</p> <p>If you specify
     * the <code>MaxSpeakerLabels</code> field, you must set the
     * <code>ShowSpeakerLabels</code> field to true.</p>
     */
    inline MedicalTranscriptionSetting& WithMaxSpeakerLabels(int value) { SetMaxSpeakerLabels(value); return *this;}


    /**
     * <p>Enables channel identification in multi-channel audio.</p> <p>Channel
     * identification transcribes the audio on each channel independently, then appends
     * the output for each channel into one transcript.</p> <p>If you have
     * multi-channel audio and do not enable channel identification, your audio is
     * transcribed in a continuous manner and your transcript does not separate the
     * speech by channel.</p> <p>You can't include both <code>ShowSpeakerLabels</code>
     * and <code>ChannelIdentification</code> in the same request. Including both
     * parameters returns a <code>BadRequestException</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/channel-id.html">Transcribing
     * multi-channel audio</a>.</p>
     */
    inline bool GetChannelIdentification() const{ return m_channelIdentification; }

    /**
     * <p>Enables channel identification in multi-channel audio.</p> <p>Channel
     * identification transcribes the audio on each channel independently, then appends
     * the output for each channel into one transcript.</p> <p>If you have
     * multi-channel audio and do not enable channel identification, your audio is
     * transcribed in a continuous manner and your transcript does not separate the
     * speech by channel.</p> <p>You can't include both <code>ShowSpeakerLabels</code>
     * and <code>ChannelIdentification</code> in the same request. Including both
     * parameters returns a <code>BadRequestException</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/channel-id.html">Transcribing
     * multi-channel audio</a>.</p>
     */
    inline bool ChannelIdentificationHasBeenSet() const { return m_channelIdentificationHasBeenSet; }

    /**
     * <p>Enables channel identification in multi-channel audio.</p> <p>Channel
     * identification transcribes the audio on each channel independently, then appends
     * the output for each channel into one transcript.</p> <p>If you have
     * multi-channel audio and do not enable channel identification, your audio is
     * transcribed in a continuous manner and your transcript does not separate the
     * speech by channel.</p> <p>You can't include both <code>ShowSpeakerLabels</code>
     * and <code>ChannelIdentification</code> in the same request. Including both
     * parameters returns a <code>BadRequestException</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/channel-id.html">Transcribing
     * multi-channel audio</a>.</p>
     */
    inline void SetChannelIdentification(bool value) { m_channelIdentificationHasBeenSet = true; m_channelIdentification = value; }

    /**
     * <p>Enables channel identification in multi-channel audio.</p> <p>Channel
     * identification transcribes the audio on each channel independently, then appends
     * the output for each channel into one transcript.</p> <p>If you have
     * multi-channel audio and do not enable channel identification, your audio is
     * transcribed in a continuous manner and your transcript does not separate the
     * speech by channel.</p> <p>You can't include both <code>ShowSpeakerLabels</code>
     * and <code>ChannelIdentification</code> in the same request. Including both
     * parameters returns a <code>BadRequestException</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/channel-id.html">Transcribing
     * multi-channel audio</a>.</p>
     */
    inline MedicalTranscriptionSetting& WithChannelIdentification(bool value) { SetChannelIdentification(value); return *this;}


    /**
     * <p>To include alternative transcriptions within your transcription output,
     * include <code>ShowAlternatives</code> in your transcription request.</p> <p>If
     * you include <code>ShowAlternatives</code>, you must also include
     * <code>MaxAlternatives</code>, which is the maximum number of alternative
     * transcriptions you want Amazon Transcribe Medical to generate.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-alternatives.html">Alternative
     * transcriptions</a>.</p>
     */
    inline bool GetShowAlternatives() const{ return m_showAlternatives; }

    /**
     * <p>To include alternative transcriptions within your transcription output,
     * include <code>ShowAlternatives</code> in your transcription request.</p> <p>If
     * you include <code>ShowAlternatives</code>, you must also include
     * <code>MaxAlternatives</code>, which is the maximum number of alternative
     * transcriptions you want Amazon Transcribe Medical to generate.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-alternatives.html">Alternative
     * transcriptions</a>.</p>
     */
    inline bool ShowAlternativesHasBeenSet() const { return m_showAlternativesHasBeenSet; }

    /**
     * <p>To include alternative transcriptions within your transcription output,
     * include <code>ShowAlternatives</code> in your transcription request.</p> <p>If
     * you include <code>ShowAlternatives</code>, you must also include
     * <code>MaxAlternatives</code>, which is the maximum number of alternative
     * transcriptions you want Amazon Transcribe Medical to generate.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-alternatives.html">Alternative
     * transcriptions</a>.</p>
     */
    inline void SetShowAlternatives(bool value) { m_showAlternativesHasBeenSet = true; m_showAlternatives = value; }

    /**
     * <p>To include alternative transcriptions within your transcription output,
     * include <code>ShowAlternatives</code> in your transcription request.</p> <p>If
     * you include <code>ShowAlternatives</code>, you must also include
     * <code>MaxAlternatives</code>, which is the maximum number of alternative
     * transcriptions you want Amazon Transcribe Medical to generate.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-alternatives.html">Alternative
     * transcriptions</a>.</p>
     */
    inline MedicalTranscriptionSetting& WithShowAlternatives(bool value) { SetShowAlternatives(value); return *this;}


    /**
     * <p>Indicate the maximum number of alternative transcriptions you want Amazon
     * Transcribe Medical to include in your transcript.</p> <p>If you select a number
     * greater than the number of alternative transcriptions generated by Amazon
     * Transcribe Medical, only the actual number of alternative transcriptions are
     * included.</p> <p>If you include <code>MaxAlternatives</code> in your request,
     * you must also include <code>ShowAlternatives</code> with a value of
     * <code>true</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-alternatives.html">Alternative
     * transcriptions</a>.</p>
     */
    inline int GetMaxAlternatives() const{ return m_maxAlternatives; }

    /**
     * <p>Indicate the maximum number of alternative transcriptions you want Amazon
     * Transcribe Medical to include in your transcript.</p> <p>If you select a number
     * greater than the number of alternative transcriptions generated by Amazon
     * Transcribe Medical, only the actual number of alternative transcriptions are
     * included.</p> <p>If you include <code>MaxAlternatives</code> in your request,
     * you must also include <code>ShowAlternatives</code> with a value of
     * <code>true</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-alternatives.html">Alternative
     * transcriptions</a>.</p>
     */
    inline bool MaxAlternativesHasBeenSet() const { return m_maxAlternativesHasBeenSet; }

    /**
     * <p>Indicate the maximum number of alternative transcriptions you want Amazon
     * Transcribe Medical to include in your transcript.</p> <p>If you select a number
     * greater than the number of alternative transcriptions generated by Amazon
     * Transcribe Medical, only the actual number of alternative transcriptions are
     * included.</p> <p>If you include <code>MaxAlternatives</code> in your request,
     * you must also include <code>ShowAlternatives</code> with a value of
     * <code>true</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-alternatives.html">Alternative
     * transcriptions</a>.</p>
     */
    inline void SetMaxAlternatives(int value) { m_maxAlternativesHasBeenSet = true; m_maxAlternatives = value; }

    /**
     * <p>Indicate the maximum number of alternative transcriptions you want Amazon
     * Transcribe Medical to include in your transcript.</p> <p>If you select a number
     * greater than the number of alternative transcriptions generated by Amazon
     * Transcribe Medical, only the actual number of alternative transcriptions are
     * included.</p> <p>If you include <code>MaxAlternatives</code> in your request,
     * you must also include <code>ShowAlternatives</code> with a value of
     * <code>true</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-alternatives.html">Alternative
     * transcriptions</a>.</p>
     */
    inline MedicalTranscriptionSetting& WithMaxAlternatives(int value) { SetMaxAlternatives(value); return *this;}


    /**
     * <p>The name of the custom vocabulary you want to use when processing your
     * medical transcription job. Custom vocabulary names are case sensitive.</p>
     * <p>The language of the specified custom vocabulary must match the language code
     * that you specify in your transcription request. If the languages don't match,
     * the custom vocabulary isn't applied. There are no errors or warnings associated
     * with a language mismatch. US English (<code>en-US</code>) is the only valid
     * language for Amazon Transcribe Medical.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the custom vocabulary you want to use when processing your
     * medical transcription job. Custom vocabulary names are case sensitive.</p>
     * <p>The language of the specified custom vocabulary must match the language code
     * that you specify in your transcription request. If the languages don't match,
     * the custom vocabulary isn't applied. There are no errors or warnings associated
     * with a language mismatch. US English (<code>en-US</code>) is the only valid
     * language for Amazon Transcribe Medical.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of the custom vocabulary you want to use when processing your
     * medical transcription job. Custom vocabulary names are case sensitive.</p>
     * <p>The language of the specified custom vocabulary must match the language code
     * that you specify in your transcription request. If the languages don't match,
     * the custom vocabulary isn't applied. There are no errors or warnings associated
     * with a language mismatch. US English (<code>en-US</code>) is the only valid
     * language for Amazon Transcribe Medical.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the custom vocabulary you want to use when processing your
     * medical transcription job. Custom vocabulary names are case sensitive.</p>
     * <p>The language of the specified custom vocabulary must match the language code
     * that you specify in your transcription request. If the languages don't match,
     * the custom vocabulary isn't applied. There are no errors or warnings associated
     * with a language mismatch. US English (<code>en-US</code>) is the only valid
     * language for Amazon Transcribe Medical.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the custom vocabulary you want to use when processing your
     * medical transcription job. Custom vocabulary names are case sensitive.</p>
     * <p>The language of the specified custom vocabulary must match the language code
     * that you specify in your transcription request. If the languages don't match,
     * the custom vocabulary isn't applied. There are no errors or warnings associated
     * with a language mismatch. US English (<code>en-US</code>) is the only valid
     * language for Amazon Transcribe Medical.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the custom vocabulary you want to use when processing your
     * medical transcription job. Custom vocabulary names are case sensitive.</p>
     * <p>The language of the specified custom vocabulary must match the language code
     * that you specify in your transcription request. If the languages don't match,
     * the custom vocabulary isn't applied. There are no errors or warnings associated
     * with a language mismatch. US English (<code>en-US</code>) is the only valid
     * language for Amazon Transcribe Medical.</p>
     */
    inline MedicalTranscriptionSetting& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the custom vocabulary you want to use when processing your
     * medical transcription job. Custom vocabulary names are case sensitive.</p>
     * <p>The language of the specified custom vocabulary must match the language code
     * that you specify in your transcription request. If the languages don't match,
     * the custom vocabulary isn't applied. There are no errors or warnings associated
     * with a language mismatch. US English (<code>en-US</code>) is the only valid
     * language for Amazon Transcribe Medical.</p>
     */
    inline MedicalTranscriptionSetting& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom vocabulary you want to use when processing your
     * medical transcription job. Custom vocabulary names are case sensitive.</p>
     * <p>The language of the specified custom vocabulary must match the language code
     * that you specify in your transcription request. If the languages don't match,
     * the custom vocabulary isn't applied. There are no errors or warnings associated
     * with a language mismatch. US English (<code>en-US</code>) is the only valid
     * language for Amazon Transcribe Medical.</p>
     */
    inline MedicalTranscriptionSetting& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}

  private:

    bool m_showSpeakerLabels;
    bool m_showSpeakerLabelsHasBeenSet = false;

    int m_maxSpeakerLabels;
    bool m_maxSpeakerLabelsHasBeenSet = false;

    bool m_channelIdentification;
    bool m_channelIdentificationHasBeenSet = false;

    bool m_showAlternatives;
    bool m_showAlternativesHasBeenSet = false;

    int m_maxAlternatives;
    bool m_maxAlternativesHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
