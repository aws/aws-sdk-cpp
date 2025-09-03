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
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCallAnalyticsStreamTranscription"; }

    inline virtual bool IsEventStreamRequest() const override { return true; }
    inline virtual bool HasEventStreamResponse() const override { return true; }
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
    inline StartCallAnalyticsStreamTranscriptionHandler& GetEventStreamHandler() { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const StartCallAnalyticsStreamTranscriptionHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline StartCallAnalyticsStreamTranscriptionRequest& WithEventStreamHandler(const StartCallAnalyticsStreamTranscriptionHandler& value) { SetEventStreamHandler(value); return *this; }


    ///@{
    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p> <p>For a list of languages supported with real-time Call Analytics,
     * refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>
     */
    inline CallAnalyticsLanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(CallAnalyticsLanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline StartCallAnalyticsStreamTranscriptionRequest& WithLanguageCode(CallAnalyticsLanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sample rate of the input audio (in hertz). Low-quality audio, such as
     * telephone audio, is typically around 8,000 Hz. High-quality audio typically
     * ranges from 16,000 Hz to 48,000 Hz. Note that the sample rate you specify must
     * match that of your audio.</p>
     */
    inline int GetMediaSampleRateHertz() const { return m_mediaSampleRateHertz; }
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }
    inline StartCallAnalyticsStreamTranscriptionRequest& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the encoding of your input audio. Supported formats are:</p> <ul>
     * <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p> </li>
     * <li> <p>PCM (only signed 16-bit little-endian audio formats, which does not
     * include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline MediaEncoding GetMediaEncoding() const { return m_mediaEncoding; }
    inline bool MediaEncodingHasBeenSet() const { return m_mediaEncodingHasBeenSet; }
    inline void SetMediaEncoding(MediaEncoding value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = value; }
    inline StartCallAnalyticsStreamTranscriptionRequest& WithMediaEncoding(MediaEncoding value) { SetMediaEncoding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary doesn't
     * match the language identified in your media, the custom vocabulary is not
     * applied to your transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline const Aws::String& GetVocabularyName() const { return m_vocabularyName; }
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }
    template<typename VocabularyNameT = Aws::String>
    void SetVocabularyName(VocabularyNameT&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::forward<VocabularyNameT>(value); }
    template<typename VocabularyNameT = Aws::String>
    StartCallAnalyticsStreamTranscriptionRequest& WithVocabularyName(VocabularyNameT&& value) { SetVocabularyName(std::forward<VocabularyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a name for your Call Analytics transcription session. If you don't
     * include this parameter in your request, Amazon Transcribe generates an ID and
     * returns it in the response.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    StartCallAnalyticsStreamTranscriptionRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An encoded stream of audio blobs. Audio streams are encoded as either HTTP/2
     * or WebSocket data frames.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html">Transcribing
     * streaming audio</a>.</p>
     */
    AWS_TRANSCRIBESTREAMINGSERVICE_API std::shared_ptr<AudioStream> GetAudioStream() const  { return m_audioStream; }
    AWS_TRANSCRIBESTREAMINGSERVICE_API void SetAudioStream(const std::shared_ptr<AudioStream>& value) { m_audioStreamHasBeenSet = true; m_audioStream = value; }
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartCallAnalyticsStreamTranscriptionRequest& WithAudioStream(const std::shared_ptr<AudioStream>& value) { SetAudioStream(value); return *this;}

    ///@}

    ///@{
    /**
     * <p>Specify the name of the custom vocabulary filter that you want to use when
     * processing your transcription. Note that vocabulary filter names are case
     * sensitive.</p> <p>If the language of the specified custom vocabulary filter
     * doesn't match the language identified in your media, the vocabulary filter is
     * not applied to your transcription.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const { return m_vocabularyFilterName; }
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }
    template<typename VocabularyFilterNameT = Aws::String>
    void SetVocabularyFilterName(VocabularyFilterNameT&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::forward<VocabularyFilterNameT>(value); }
    template<typename VocabularyFilterNameT = Aws::String>
    StartCallAnalyticsStreamTranscriptionRequest& WithVocabularyFilterName(VocabularyFilterNameT&& value) { SetVocabularyFilterName(std::forward<VocabularyFilterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify how you want your vocabulary filter applied to your transcript.</p>
     * <p>To replace words with <code>***</code>, choose <code>mask</code>.</p> <p>To
     * delete words, choose <code>remove</code>.</p> <p>To flag words without changing
     * them, choose <code>tag</code>.</p>
     */
    inline VocabularyFilterMethod GetVocabularyFilterMethod() const { return m_vocabularyFilterMethod; }
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }
    inline void SetVocabularyFilterMethod(VocabularyFilterMethod value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }
    inline StartCallAnalyticsStreamTranscriptionRequest& WithVocabularyFilterMethod(VocabularyFilterMethod value) { SetVocabularyFilterMethod(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetLanguageModelName() const { return m_languageModelName; }
    inline bool LanguageModelNameHasBeenSet() const { return m_languageModelNameHasBeenSet; }
    template<typename LanguageModelNameT = Aws::String>
    void SetLanguageModelName(LanguageModelNameT&& value) { m_languageModelNameHasBeenSet = true; m_languageModelName = std::forward<LanguageModelNameT>(value); }
    template<typename LanguageModelNameT = Aws::String>
    StartCallAnalyticsStreamTranscriptionRequest& WithLanguageModelName(LanguageModelNameT&& value) { SetLanguageModelName(std::forward<LanguageModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables automatic language identification for your Call Analytics
     * transcription.</p> <p>If you include <code>IdentifyLanguage</code>, you must
     * include a list of language codes, using <code>LanguageOptions</code>, that you
     * think may be present in your audio stream. You must provide a minimum of two
     * language selections.</p> <p>You can also include a preferred language using
     * <code>PreferredLanguage</code>. Adding a preferred language can help Amazon
     * Transcribe identify the language faster than if you omit this parameter.</p>
     * <p>Note that you must include either <code>LanguageCode</code> or
     * <code>IdentifyLanguage</code> in your request. If you include both parameters,
     * your transcription job fails.</p>
     */
    inline bool GetIdentifyLanguage() const { return m_identifyLanguage; }
    inline bool IdentifyLanguageHasBeenSet() const { return m_identifyLanguageHasBeenSet; }
    inline void SetIdentifyLanguage(bool value) { m_identifyLanguageHasBeenSet = true; m_identifyLanguage = value; }
    inline StartCallAnalyticsStreamTranscriptionRequest& WithIdentifyLanguage(bool value) { SetIdentifyLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify two or more language codes that represent the languages you think may
     * be present in your media.</p> <p>Including language options can improve the
     * accuracy of language identification.</p> <p>If you include
     * <code>LanguageOptions</code> in your request, you must also include
     * <code>IdentifyLanguage</code>.</p> <p>For a list of languages supported with
     * Call Analytics streaming, refer to the <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/supported-languages.html">Supported
     * languages</a> table.</p>  <p>You can only include one language
     * dialect per language per stream. For example, you cannot include
     * <code>en-US</code> and <code>en-AU</code> in the same request.</p> 
     */
    inline const Aws::String& GetLanguageOptions() const { return m_languageOptions; }
    inline bool LanguageOptionsHasBeenSet() const { return m_languageOptionsHasBeenSet; }
    template<typename LanguageOptionsT = Aws::String>
    void SetLanguageOptions(LanguageOptionsT&& value) { m_languageOptionsHasBeenSet = true; m_languageOptions = std::forward<LanguageOptionsT>(value); }
    template<typename LanguageOptionsT = Aws::String>
    StartCallAnalyticsStreamTranscriptionRequest& WithLanguageOptions(LanguageOptionsT&& value) { SetLanguageOptions(std::forward<LanguageOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a preferred language from the subset of languages codes you specified
     * in <code>LanguageOptions</code>.</p> <p>You can only use this parameter if
     * you've included <code>IdentifyLanguage</code> and <code>LanguageOptions</code>
     * in your request.</p>
     */
    inline CallAnalyticsLanguageCode GetPreferredLanguage() const { return m_preferredLanguage; }
    inline bool PreferredLanguageHasBeenSet() const { return m_preferredLanguageHasBeenSet; }
    inline void SetPreferredLanguage(CallAnalyticsLanguageCode value) { m_preferredLanguageHasBeenSet = true; m_preferredLanguage = value; }
    inline StartCallAnalyticsStreamTranscriptionRequest& WithPreferredLanguage(CallAnalyticsLanguageCode value) { SetPreferredLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the names of the custom vocabularies that you want to use when
     * processing your Call Analytics transcription. Note that vocabulary names are
     * case sensitive.</p> <p>If the custom vocabulary's language doesn't match the
     * identified media language, it won't be applied to the transcription.</p>
     *  <p>This parameter is only intended for use <b>with</b> the
     * <code>IdentifyLanguage</code> parameter. If you're <b>not</b> including
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary with your transcription, use the <code>VocabularyName</code>
     * parameter instead.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/custom-vocabulary.html">Custom
     * vocabularies</a>.</p>
     */
    inline const Aws::String& GetVocabularyNames() const { return m_vocabularyNames; }
    inline bool VocabularyNamesHasBeenSet() const { return m_vocabularyNamesHasBeenSet; }
    template<typename VocabularyNamesT = Aws::String>
    void SetVocabularyNames(VocabularyNamesT&& value) { m_vocabularyNamesHasBeenSet = true; m_vocabularyNames = std::forward<VocabularyNamesT>(value); }
    template<typename VocabularyNamesT = Aws::String>
    StartCallAnalyticsStreamTranscriptionRequest& WithVocabularyNames(VocabularyNamesT&& value) { SetVocabularyNames(std::forward<VocabularyNamesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the names of the custom vocabulary filters that you want to use when
     * processing your Call Analytics transcription. Note that vocabulary filter names
     * are case sensitive.</p> <p>These filters serve to customize the transcript
     * output.</p>  <p>This parameter is only intended for use <b>with</b>
     * the <code>IdentifyLanguage</code> parameter. If you're <b>not</b> including
     * <code>IdentifyLanguage</code> in your request and want to use a custom
     * vocabulary filter with your transcription, use the
     * <code>VocabularyFilterName</code> parameter instead.</p>  <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/vocabulary-filtering.html">Using
     * vocabulary filtering with unwanted words</a>.</p>
     */
    inline const Aws::String& GetVocabularyFilterNames() const { return m_vocabularyFilterNames; }
    inline bool VocabularyFilterNamesHasBeenSet() const { return m_vocabularyFilterNamesHasBeenSet; }
    template<typename VocabularyFilterNamesT = Aws::String>
    void SetVocabularyFilterNames(VocabularyFilterNamesT&& value) { m_vocabularyFilterNamesHasBeenSet = true; m_vocabularyFilterNames = std::forward<VocabularyFilterNamesT>(value); }
    template<typename VocabularyFilterNamesT = Aws::String>
    StartCallAnalyticsStreamTranscriptionRequest& WithVocabularyFilterNames(VocabularyFilterNamesT&& value) { SetVocabularyFilterNames(std::forward<VocabularyFilterNamesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables partial result stabilization for your transcription. Partial result
     * stabilization can reduce latency in your output, but may impact accuracy. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline bool GetEnablePartialResultsStabilization() const { return m_enablePartialResultsStabilization; }
    inline bool EnablePartialResultsStabilizationHasBeenSet() const { return m_enablePartialResultsStabilizationHasBeenSet; }
    inline void SetEnablePartialResultsStabilization(bool value) { m_enablePartialResultsStabilizationHasBeenSet = true; m_enablePartialResultsStabilization = value; }
    inline StartCallAnalyticsStreamTranscriptionRequest& WithEnablePartialResultsStabilization(bool value) { SetEnablePartialResultsStabilization(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the level of stability to use when you enable partial results
     * stabilization (<code>EnablePartialResultsStabilization</code>).</p> <p>Low
     * stability provides the highest accuracy. High stability transcribes faster, but
     * with slightly lower accuracy.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/streaming.html#streaming-partial-result-stabilization">Partial-result
     * stabilization</a>.</p>
     */
    inline PartialResultsStability GetPartialResultsStability() const { return m_partialResultsStability; }
    inline bool PartialResultsStabilityHasBeenSet() const { return m_partialResultsStabilityHasBeenSet; }
    inline void SetPartialResultsStability(PartialResultsStability value) { m_partialResultsStabilityHasBeenSet = true; m_partialResultsStability = value; }
    inline StartCallAnalyticsStreamTranscriptionRequest& WithPartialResultsStability(PartialResultsStability value) { SetPartialResultsStability(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Labels all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is flagged upon complete transcription
     * of an audio segment. If you don't include <code>PiiEntityTypes</code> in your
     * request, all PII is identified.</p> <p>You can’t set
     * <code>ContentIdentificationType</code> and <code>ContentRedactionType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline ContentIdentificationType GetContentIdentificationType() const { return m_contentIdentificationType; }
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }
    inline void SetContentIdentificationType(ContentIdentificationType value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }
    inline StartCallAnalyticsStreamTranscriptionRequest& WithContentIdentificationType(ContentIdentificationType value) { SetContentIdentificationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Redacts all personally identifiable information (PII) identified in your
     * transcript.</p> <p>Content redaction is performed at the segment level; PII
     * specified in <code>PiiEntityTypes</code> is redacted upon complete transcription
     * of an audio segment. If you don't include <code>PiiEntityTypes</code> in your
     * request, all PII is redacted.</p> <p>You can’t set
     * <code>ContentRedactionType</code> and <code>ContentIdentificationType</code> in
     * the same request. If you set both, your request returns a
     * <code>BadRequestException</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/pii-redaction.html">Redacting
     * or identifying personally identifiable information</a>.</p>
     */
    inline ContentRedactionType GetContentRedactionType() const { return m_contentRedactionType; }
    inline bool ContentRedactionTypeHasBeenSet() const { return m_contentRedactionTypeHasBeenSet; }
    inline void SetContentRedactionType(ContentRedactionType value) { m_contentRedactionTypeHasBeenSet = true; m_contentRedactionType = value; }
    inline StartCallAnalyticsStreamTranscriptionRequest& WithContentRedactionType(ContentRedactionType value) { SetContentRedactionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify which types of personally identifiable information (PII) you want to
     * redact in your transcript. You can include as many types as you'd like, or you
     * can select <code>ALL</code>.</p> <p>Values must be comma-separated and can
     * include: <code>ADDRESS</code>, <code>BANK_ACCOUNT_NUMBER</code>,
     * <code>BANK_ROUTING</code>, <code>CREDIT_DEBIT_CVV</code>,
     * <code>CREDIT_DEBIT_EXPIRY</code>, <code>CREDIT_DEBIT_NUMBER</code>,
     * <code>EMAIL</code>, <code>NAME</code>, <code>PHONE</code>, <code>PIN</code>,
     * <code>SSN</code>, or <code>ALL</code>.</p> <p>Note that if you include
     * <code>PiiEntityTypes</code> in your request, you must also include
     * <code>ContentIdentificationType</code> or <code>ContentRedactionType</code>.</p>
     * <p>If you include <code>ContentRedactionType</code> or
     * <code>ContentIdentificationType</code> in your request, but do not include
     * <code>PiiEntityTypes</code>, all PII is redacted or identified.</p>
     */
    inline const Aws::String& GetPiiEntityTypes() const { return m_piiEntityTypes; }
    inline bool PiiEntityTypesHasBeenSet() const { return m_piiEntityTypesHasBeenSet; }
    template<typename PiiEntityTypesT = Aws::String>
    void SetPiiEntityTypes(PiiEntityTypesT&& value) { m_piiEntityTypesHasBeenSet = true; m_piiEntityTypes = std::forward<PiiEntityTypesT>(value); }
    template<typename PiiEntityTypesT = Aws::String>
    StartCallAnalyticsStreamTranscriptionRequest& WithPiiEntityTypes(PiiEntityTypesT&& value) { SetPiiEntityTypes(std::forward<PiiEntityTypesT>(value)); return *this;}
    ///@}
  private:

    CallAnalyticsLanguageCode m_languageCode{CallAnalyticsLanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    int m_mediaSampleRateHertz{0};
    bool m_mediaSampleRateHertzHasBeenSet = false;

    MediaEncoding m_mediaEncoding{MediaEncoding::NOT_SET};
    bool m_mediaEncodingHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    std::shared_ptr<AudioStream> m_audioStream;
    bool m_audioStreamHasBeenSet = false;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet = false;

    VocabularyFilterMethod m_vocabularyFilterMethod{VocabularyFilterMethod::NOT_SET};
    bool m_vocabularyFilterMethodHasBeenSet = false;

    Aws::String m_languageModelName;
    bool m_languageModelNameHasBeenSet = false;

    bool m_identifyLanguage{false};
    bool m_identifyLanguageHasBeenSet = false;

    Aws::String m_languageOptions;
    bool m_languageOptionsHasBeenSet = false;

    CallAnalyticsLanguageCode m_preferredLanguage{CallAnalyticsLanguageCode::NOT_SET};
    bool m_preferredLanguageHasBeenSet = false;

    Aws::String m_vocabularyNames;
    bool m_vocabularyNamesHasBeenSet = false;

    Aws::String m_vocabularyFilterNames;
    bool m_vocabularyFilterNamesHasBeenSet = false;

    bool m_enablePartialResultsStabilization{false};
    bool m_enablePartialResultsStabilizationHasBeenSet = false;

    PartialResultsStability m_partialResultsStability{PartialResultsStability::NOT_SET};
    bool m_partialResultsStabilityHasBeenSet = false;

    ContentIdentificationType m_contentIdentificationType{ContentIdentificationType::NOT_SET};
    bool m_contentIdentificationTypeHasBeenSet = false;

    ContentRedactionType m_contentRedactionType{ContentRedactionType::NOT_SET};
    bool m_contentRedactionTypeHasBeenSet = false;

    Aws::String m_piiEntityTypes;
    bool m_piiEntityTypesHasBeenSet = false;
    StartCallAnalyticsStreamTranscriptionHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
