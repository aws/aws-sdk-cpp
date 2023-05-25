/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceRequest.h>
#include <aws/transcribestreaming/model/StartCallAnalyticsStreamTranscriptionHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <memory>
#include <aws/transcribestreaming/model/CallAnalyticsLanguageCode.h>
#include <aws/transcribestreaming/model/MediaEncoding.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/AudioStream.h>
#include <aws/transcribestreaming/model/VocabularyFilterMethod.h>
#include <aws/transcribestreaming/model/PartialResultsStability.h>
#include <aws/transcribestreaming/model/ContentIdentificationType.h>
#include <aws/transcribestreaming/model/ContentRedactionType.h>
#include <utility>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   */
  class StartCallAnalyticsStreamTranscriptionRequest : public TranscribeStreamingServiceRequest
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCallAnalyticsStreamTranscription"; }

    inline virtual bool IsEventStreamRequest() const override { return true; }
    // SerializePayload will not be invoked.
    // This request is sent by encoding its data in event-streams which is sent as IOStream via GetBody()
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String SerializePayload() const override { return {}; }
    AWS_TRANSCRIBESTREAMINGSERVICE_API std::shared_ptr<Aws::IOStream> GetBody() const override;
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline const StartCallAnalyticsStreamTranscriptionHandler& GetEventStreamHandler() const { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const StartCallAnalyticsStreamTranscriptionHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithEventStreamHandler(const StartCallAnalyticsStreamTranscriptionHandler& value) { SetEventStreamHandler(value); return *this; }


    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p> <p>If you're unsure of the language spoken in your audio, consider
     * using <code>IdentifyLanguage</code> to enable automatic language
     * identification.</p> <p>For a list of languages supported with streaming Call
     * Analytics, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline const CallAnalyticsLanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p> <p>If you're unsure of the language spoken in your audio, consider
     * using <code>IdentifyLanguage</code> to enable automatic language
     * identification.</p> <p>For a list of languages supported with streaming Call
     * Analytics, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p> <p>If you're unsure of the language spoken in your audio, consider
     * using <code>IdentifyLanguage</code> to enable automatic language
     * identification.</p> <p>For a list of languages supported with streaming Call
     * Analytics, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline void SetLanguageCode(const CallAnalyticsLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p> <p>If you're unsure of the language spoken in your audio, consider
     * using <code>IdentifyLanguage</code> to enable automatic language
     * identification.</p> <p>For a list of languages supported with streaming Call
     * Analytics, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline void SetLanguageCode(CallAnalyticsLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p> <p>If you're unsure of the language spoken in your audio, consider
     * using <code>IdentifyLanguage</code> to enable automatic language
     * identification.</p> <p>For a list of languages supported with streaming Call
     * Analytics, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithLanguageCode(const CallAnalyticsLanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p> <p>If you're unsure of the language spoken in your audio, consider
     * using <code>IdentifyLanguage</code> to enable automatic language
     * identification.</p> <p>For a list of languages supported with streaming Call
     * Analytics, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithLanguageCode(CallAnalyticsLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The sample rate of the input audio (in hertz). Low-quality audio, such as
     * telephone audio, is typically around 8,000 Hz. High-quality audio typically
     * ranges from 16,000 Hz to 48,000 Hz. Note that the sample rate you specify must
     * match that of your audio.</p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }

    /**
     * <p>The sample rate of the input audio (in hertz). Low-quality audio, such as
     * telephone audio, is typically around 8,000 Hz. High-quality audio typically
     * ranges from 16,000 Hz to 48,000 Hz. Note that the sample rate you specify must
     * match that of your audio.</p>
     */
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }

    /**
     * <p>The sample rate of the input audio (in hertz). Low-quality audio, such as
     * telephone audio, is typically around 8,000 Hz. High-quality audio typically
     * ranges from 16,000 Hz to 48,000 Hz. Note that the sample rate you specify must
     * match that of your audio.</p>
     */
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }

    /**
     * <p>The sample rate of the input audio (in hertz). Low-quality audio, such as
     * telephone audio, is typically around 8,000 Hz. High-quality audio typically
     * ranges from 16,000 Hz to 48,000 Hz. Note that the sample rate you specify must
     * match that of your audio.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}


    /**
     * <p>Specify the encoding of your input audio. Supported formats are:</p> <ul>
     * <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p> </li>
     * <li> <p>PCM (only signed 16-bit little-endian audio formats, which does not
     * include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline const MediaEncoding& GetMediaEncoding() const{ return m_mediaEncoding; }

    /**
     * <p>Specify the encoding of your input audio. Supported formats are:</p> <ul>
     * <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p> </li>
     * <li> <p>PCM (only signed 16-bit little-endian audio formats, which does not
     * include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline bool MediaEncodingHasBeenSet() const { return m_mediaEncodingHasBeenSet; }

    /**
     * <p>Specify the encoding of your input audio. Supported formats are:</p> <ul>
     * <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p> </li>
     * <li> <p>PCM (only signed 16-bit little-endian audio formats, which does not
     * include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline void SetMediaEncoding(const MediaEncoding& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = value; }

    /**
     * <p>Specify the encoding of your input audio. Supported formats are:</p> <ul>
     * <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p> </li>
     * <li> <p>PCM (only signed 16-bit little-endian audio formats, which does not
     * include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline void SetMediaEncoding(MediaEncoding&& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = std::move(value); }

    /**
     * <p>Specify the encoding of your input audio. Supported formats are:</p> <ul>
     * <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p> </li>
     * <li> <p>PCM (only signed 16-bit little-endian audio formats, which does not
     * include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithMediaEncoding(const MediaEncoding& value) { SetMediaEncoding(value); return *this;}

    /**
     * <p>Specify the encoding of your input audio. Supported formats are:</p> <ul>
     * <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p> </li>
     * <li> <p>PCM (only signed 16-bit little-endian audio formats, which does not
     * include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithMediaEncoding(MediaEncoding&& value) { SetMediaEncoding(std::move(value)); return *this;}


    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary doesn't
     * match the language identified in your media, the custom vocabulary is not
     * applied to your transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary doesn't
     * match the language identified in your media, the custom vocabulary is not
     * applied to your transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary doesn't
     * match the language identified in your media, the custom vocabulary is not
     * applied to your transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary doesn't
     * match the language identified in your media, the custom vocabulary is not
     * applied to your transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary doesn't
     * match the language identified in your media, the custom vocabulary is not
     * applied to your transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary doesn't
     * match the language identified in your media, the custom vocabulary is not
     * applied to your transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary doesn't
     * match the language identified in your media, the custom vocabulary is not
     * applied to your transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary doesn't
     * match the language identified in your media, the custom vocabulary is not
     * applied to your transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>Specify a name for your Call Analytics transcription session. If you don't
     * include this parameter in your request, Amazon Transcribe generates an ID and
     * returns it in the response.</p> <p>You can use a session ID to retry a streaming
     * session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>Specify a name for your Call Analytics transcription session. If you don't
     * include this parameter in your request, Amazon Transcribe generates an ID and
     * returns it in the response.</p> <p>You can use a session ID to retry a streaming
     * session.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>Specify a name for your Call Analytics transcription session. If you don't
     * include this parameter in your request, Amazon Transcribe generates an ID and
     * returns it in the response.</p> <p>You can use a session ID to retry a streaming
     * session.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>Specify a name for your Call Analytics transcription session. If you don't
     * include this parameter in your request, Amazon Transcribe generates an ID and
     * returns it in the response.</p> <p>You can use a session ID to retry a streaming
     * session.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>Specify a name for your Call Analytics transcription session. If you don't
     * include this parameter in your request, Amazon Transcribe generates an ID and
     * returns it in the response.</p> <p>You can use a session ID to retry a streaming
     * session.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>Specify a name for your Call Analytics transcription session. If you don't
     * include this parameter in your request, Amazon Transcribe generates an ID and
     * returns it in the response.</p> <p>You can use a session ID to retry a streaming
     * session.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>Specify a name for your Call Analytics transcription session. If you don't
     * include this parameter in your request, Amazon Transcribe generates an ID and
     * returns it in the response.</p> <p>You can use a session ID to retry a streaming
     * session.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>Specify a name for your Call Analytics transcription session. If you don't
     * include this parameter in your request, Amazon Transcribe generates an ID and
     * returns it in the response.</p> <p>You can use a session ID to retry a streaming
     * session.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    
    AWS_TRANSCRIBESTREAMINGSERVICE_API std::shared_ptr<AudioStream> GetAudioStream() const { return m_audioStream; }

    
    AWS_TRANSCRIBESTREAMINGSERVICE_API void SetAudioStream(const std::shared_ptr<AudioStream>& value) { m_audioStream = value; }

    
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionRequest& WithAudioStream(const std::shared_ptr<AudioStream>& value) { SetAudioStream(value); return *this;}


    /**
     * <p>Specify the name of the custom vocabulary filter that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary filter
     * doesn't match the language identified in your media, the vocabulary filter is
     * not applied to your transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>Specify the name of the custom vocabulary filter that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary filter
     * doesn't match the language identified in your media, the vocabulary filter is
     * not applied to your transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>Specify the name of the custom vocabulary filter that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary filter
     * doesn't match the language identified in your media, the vocabulary filter is
     * not applied to your transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>Specify the name of the custom vocabulary filter that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary filter
     * doesn't match the language identified in your media, the vocabulary filter is
     * not applied to your transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>Specify the name of the custom vocabulary filter that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary filter
     * doesn't match the language identified in your media, the vocabulary filter is
     * not applied to your transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>Specify the name of the custom vocabulary filter that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary filter
     * doesn't match the language identified in your media, the vocabulary filter is
     * not applied to your transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>Specify the name of the custom vocabulary filter that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary filter
     * doesn't match the language identified in your media, the vocabulary filter is
     * not applied to your transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>Specify the name of the custom vocabulary filter that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary filter
     * doesn't match the language identified in your media, the vocabulary filter is
     * not applied to your transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>Specify how you want your vocabulary filter applied to your transcript.</p>
     * <p>To replace words with <code>***</code>, choose <code>mask</code>.</p> <p>To
     * delete words, choose <code>remove</code>.</p> <p>To flag words without changing
     * them, choose <code>tag</code>.</p>
     */
    inline const VocabularyFilterMethod& GetVocabularyFilterMethod() const{ return m_vocabularyFilterMethod; }

    /**
     * <p>Specify how you want your vocabulary filter applied to your transcript.</p>
     * <p>To replace words with <code>***</code>, choose <code>mask</code>.</p> <p>To
     * delete words, choose <code>remove</code>.</p> <p>To flag words without changing
     * them, choose <code>tag</code>.</p>
     */
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }

    /**
     * <p>Specify how you want your vocabulary filter applied to your transcript.</p>
     * <p>To replace words with <code>***</code>, choose <code>mask</code>.</p> <p>To
     * delete words, choose <code>remove</code>.</p> <p>To flag words without changing
     * them, choose <code>tag</code>.</p>
     */
    inline void SetVocabularyFilterMethod(const VocabularyFilterMethod& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }

    /**
     * <p>Specify how you want your vocabulary filter applied to your transcript.</p>
     * <p>To replace words with <code>***</code>, choose <code>mask</code>.</p> <p>To
     * delete words, choose <code>remove</code>.</p> <p>To flag words without changing
     * them, choose <code>tag</code>.</p>
     */
    inline void SetVocabularyFilterMethod(VocabularyFilterMethod&& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = std::move(value); }

    /**
     * <p>Specify how you want your vocabulary filter applied to your transcript.</p>
     * <p>To replace words with <code>***</code>, choose <code>mask</code>.</p> <p>To
     * delete words, choose <code>remove</code>.</p> <p>To flag words without changing
     * them, choose <code>tag</code>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithVocabularyFilterMethod(const VocabularyFilterMethod& value) { SetVocabularyFilterMethod(value); return *this;}

    /**
     * <p>Specify how you want your vocabulary filter applied to your transcript.</p>
     * <p>To replace words with <code>***</code>, choose <code>mask</code>.</p> <p>To
     * delete words, choose <code>remove</code>.</p> <p>To flag words without changing
     * them, choose <code>tag</code>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithVocabularyFilterMethod(VocabularyFilterMethod&& value) { SetVocabularyFilterMethod(std::move(value)); return *this;}


    /**
     * <p>Specify the name of the custom language model that you want to use when
     * processing your transcription. Note that language model names are case
     * sensitive.</p> <p>The language of the specified language model must match the
     * language code you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a>.</p>
     */
    inline const Aws::String& GetLanguageModelName() const{ return m_languageModelName; }

    /**
     * <p>Specify the name of the custom language model that you want to use when
     * processing your transcription. Note that language model names are case
     * sensitive.</p> <p>The language of the specified language model must match the
     * language code you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a>.</p>
     */
    inline bool LanguageModelNameHasBeenSet() const { return m_languageModelNameHasBeenSet; }

    /**
     * <p>Specify the name of the custom language model that you want to use when
     * processing your transcription. Note that language model names are case
     * sensitive.</p> <p>The language of the specified language model must match the
     * language code you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a>.</p>
     */
    inline void SetLanguageModelName(const Aws::String& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = value; }

    /**
     * <p>Specify the name of the custom language model that you want to use when
     * processing your transcription. Note that language model names are case
     * sensitive.</p> <p>The language of the specified language model must match the
     * language code you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a>.</p>
     */
    inline void SetLanguageModelName(Aws::String&& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = std::move(value); }

    /**
     * <p>Specify the name of the custom language model that you want to use when
     * processing your transcription. Note that language model names are case
     * sensitive.</p> <p>The language of the specified language model must match the
     * language code you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a>.</p>
     */
    inline void SetLanguageModelName(const char* value) { m_languageModelNameHasBeenSet = true; m_languageModelName.assign(value); }

    /**
     * <p>Specify the name of the custom language model that you want to use when
     * processing your transcription. Note that language model names are case
     * sensitive.</p> <p>The language of the specified language model must match the
     * language code you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithLanguageModelName(const Aws::String& value) { SetLanguageModelName(value); return *this;}

    /**
     * <p>Specify the name of the custom language model that you want to use when
     * processing your transcription. Note that language model names are case
     * sensitive.</p> <p>The language of the specified language model must match the
     * language code you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithLanguageModelName(Aws::String&& value) { SetLanguageModelName(std::move(value)); return *this;}

    /**
     * <p>Specify the name of the custom language model that you want to use when
     * processing your transcription. Note that language model names are case
     * sensitive.</p> <p>The language of the specified language model must match the
     * language code you specify in your transcription request. If the languages don't
     * match, the custom language model isn't applied. There are no errors or warnings
     * associated with a language mismatch.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-language-models.html">Custom
     * language models</a>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithLanguageModelName(const char* value) { SetLanguageModelName(value); return *this;}


    /**
     * <p>Enables partial result stabilization for your transcription. Partial result
     * stabilization can reduce latency in your output, but may impact accuracy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline bool GetEnablePartialResultsStabilization() const{ return m_enablePartialResultsStabilization; }

    /**
     * <p>Enables partial result stabilization for your transcription. Partial result
     * stabilization can reduce latency in your output, but may impact accuracy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline bool EnablePartialResultsStabilizationHasBeenSet() const { return m_enablePartialResultsStabilizationHasBeenSet; }

    /**
     * <p>Enables partial result stabilization for your transcription. Partial result
     * stabilization can reduce latency in your output, but may impact accuracy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline void SetEnablePartialResultsStabilization(bool value) { m_enablePartialResultsStabilizationHasBeenSet = true; m_enablePartialResultsStabilization = value; }

    /**
     * <p>Enables partial result stabilization for your transcription. Partial result
     * stabilization can reduce latency in your output, but may impact accuracy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithEnablePartialResultsStabilization(bool value) { SetEnablePartialResultsStabilization(value); return *this;}


    /**
     * <p>Specify the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline const PartialResultsStability& GetPartialResultsStability() const{ return m_partialResultsStability; }

    /**
     * <p>Specify the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline bool PartialResultsStabilityHasBeenSet() const { return m_partialResultsStabilityHasBeenSet; }

    /**
     * <p>Specify the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline void SetPartialResultsStability(const PartialResultsStability& value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = value; }

    /**
     * <p>Specify the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline void SetPartialResultsStability(PartialResultsStability&& value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = std::move(value); }

    /**
     * <p>Specify the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithPartialResultsStability(const PartialResultsStability& value) { SetPartialResultsStability(value); return *this;}

    /**
     * <p>Specify the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithPartialResultsStability(PartialResultsStability&& value) { SetPartialResultsStability(std::move(value)); return *this;}


    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you set both, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline const ContentIdentificationType& GetContentIdentificationType() const{ return m_contentIdentificationType; }

    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you set both, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }

    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you set both, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline void SetContentIdentificationType(const ContentIdentificationType& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }

    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you set both, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline void SetContentIdentificationType(ContentIdentificationType&& value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = std::move(value); }

    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you set both, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithContentIdentificationType(const ContentIdentificationType& value) { SetContentIdentificationType(value); return *this;}

    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentIdentificationType</code>
     * and <code>ContentRedactionType</code> in the same request. If you set both, your
     * request returns a <code>BadRequestException</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithContentIdentificationType(ContentIdentificationType&& value) { SetContentIdentificationType(std::move(value)); return *this;}


    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentRedactionType</code> and
     * <code>ContentIdentificationType</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline const ContentRedactionType& GetContentRedactionType() const{ return m_contentRedactionType; }

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentRedactionType</code> and
     * <code>ContentIdentificationType</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline bool ContentRedactionTypeHasBeenSet() const { return m_contentRedactionTypeHasBeenSet; }

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentRedactionType</code> and
     * <code>ContentIdentificationType</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline void SetContentRedactionType(const ContentRedactionType& value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = value; }

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentRedactionType</code> and
     * <code>ContentIdentificationType</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline void SetContentRedactionType(ContentRedactionType&& value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = std::move(value); }

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentRedactionType</code> and
     * <code>ContentIdentificationType</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithContentRedactionType(const ContentRedactionType& value) { SetContentRedactionType(value); return *this;}

    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment.</p> <p>You can’t set <code>ContentRedactionType</code> and
     * <code>ContentIdentificationType</code> in the same request. If you set both,
     * your request returns a <code>BadRequestException</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithContentRedactionType(ContentRedactionType&& value) { SetContentRedactionType(std::move(value)); return *this;}


    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in
     * your Call Analytics request, you must also include either
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>.</p>
     * <p>Values must be comma-separated and can include:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * or <code>ALL</code>.</p>
     */
    inline const Aws::String& GetPiiEntityTypes() const{ return m_piiEntityTypes; }

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in
     * your Call Analytics request, you must also include either
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>.</p>
     * <p>Values must be comma-separated and can include:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * or <code>ALL</code>.</p>
     */
    inline bool PiiEntityTypesHasBeenSet() const { return m_piiEntityTypesHasBeenSet; }

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in
     * your Call Analytics request, you must also include either
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>.</p>
     * <p>Values must be comma-separated and can include:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * or <code>ALL</code>.</p>
     */
    inline void SetPiiEntityTypes(const Aws::String& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = value; }

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in
     * your Call Analytics request, you must also include either
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>.</p>
     * <p>Values must be comma-separated and can include:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * or <code>ALL</code>.</p>
     */
    inline void SetPiiEntityTypes(Aws::String&& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = std::move(value); }

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in
     * your Call Analytics request, you must also include either
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>.</p>
     * <p>Values must be comma-separated and can include:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * or <code>ALL</code>.</p>
     */
    inline void SetPiiEntityTypes(const char* value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes.assign(value); }

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in
     * your Call Analytics request, you must also include either
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>.</p>
     * <p>Values must be comma-separated and can include:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * or <code>ALL</code>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithPiiEntityTypes(const Aws::String& value) { SetPiiEntityTypes(value); return *this;}

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in
     * your Call Analytics request, you must also include either
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>.</p>
     * <p>Values must be comma-separated and can include:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * or <code>ALL</code>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithPiiEntityTypes(Aws::String&& value) { SetPiiEntityTypes(std::move(value)); return *this;}

    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p> <p>To include <code>PiiEntityTypes</code> in
     * your Call Analytics request, you must also include either
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>.</p>
     * <p>Values must be comma-separated and can include:
     * <code>BANK_ACCOUNT_NUMBER</code>, <code>BANK_ROUTING</code>,
     * <code>CREDIT_DEBIT_NUMBER</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>PIN</code>, <code>EMAIL</code>,
     * <code>ADDRESS</code>, <code>NAME</code>, <code>PHONE</code>, <code>SSN</code>,
     * or <code>ALL</code>.</p>
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithPiiEntityTypes(const char* value) { SetPiiEntityTypes(value); return *this;}

  private:

    CallAnalyticsLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    int m_mediaSampleRateHertz;
    bool m_mediaSampleRateHertzHasBeenSet = false;

    MediaEncoding m_mediaEncoding;
    bool m_mediaEncodingHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    std::shared_ptr<AudioStream> m_audioStream;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet = false;

    VocabularyFilterMethod m_vocabularyFilterMethod;
    bool m_vocabularyFilterMethodHasBeenSet = false;

    Aws::String m_languageModelName;
    bool m_languageModelNameHasBeenSet = false;

    bool m_enablePartialResultsStabilization;
    bool m_enablePartialResultsStabilizationHasBeenSet = false;

    PartialResultsStability m_partialResultsStability;
    bool m_partialResultsStabilityHasBeenSet = false;

    ContentIdentificationType m_contentIdentificationType;
    bool m_contentIdentificationTypeHasBeenSet = false;

    ContentRedactionType m_contentRedactionType;
    bool m_contentRedactionTypeHasBeenSet = false;

    Aws::String m_piiEntityTypes;
    bool m_piiEntityTypesHasBeenSet = false;
    StartCallAnalyticsStreamTranscriptionHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder;

  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
