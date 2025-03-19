/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceRequest.h>
#include <aws/transcribestreaming/model/StartMedicalStreamTranscriptionHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <memory>
#include <aws/transcribestreaming/model/LanguageCode.h>
#include <aws/transcribestreaming/model/MediaEncoding.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/Specialty.h>
#include <aws/transcribestreaming/model/Type.h>
#include <aws/transcribestreaming/model/AudioStream.h>
#include <aws/transcribestreaming/model/MedicalContentIdentificationType.h>
#include <utility>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   */
  class StartMedicalStreamTranscriptionRequest : public TranscribeStreamingServiceRequest
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalStreamTranscriptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMedicalStreamTranscription"; }

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
    inline StartMedicalStreamTranscriptionHandler& GetEventStreamHandler() { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const StartMedicalStreamTranscriptionHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline StartMedicalStreamTranscriptionRequest& WithEventStreamHandler(const StartMedicalStreamTranscriptionHandler& value) { SetEventStreamHandler(value); return *this; }


    ///@{
    /**
     * <p>Specify the language code that represents the language spoken in your
     * audio.</p>  <p>Amazon Transcribe Medical only supports US English
     * (<code>en-US</code>).</p> 
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline StartMedicalStreamTranscriptionRequest& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sample rate of the input audio (in hertz). Amazon Transcribe Medical
     * supports a range from 16,000 Hz to 48,000 Hz. Note that the sample rate you
     * specify must match that of your audio.</p>
     */
    inline int GetMediaSampleRateHertz() const { return m_mediaSampleRateHertz; }
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }
    inline StartMedicalStreamTranscriptionRequest& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the encoding used for the input audio. Supported formats are:</p>
     * <ul> <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg container</p>
     * </li> <li> <p>PCM (only signed 16-bit little-endian audio formats, which does
     * not include WAV)</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>.</p>
     */
    inline MediaEncoding GetMediaEncoding() const { return m_mediaEncoding; }
    inline bool MediaEncodingHasBeenSet() const { return m_mediaEncodingHasBeenSet; }
    inline void SetMediaEncoding(MediaEncoding value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = value; }
    inline StartMedicalStreamTranscriptionRequest& WithMediaEncoding(MediaEncoding value) { SetMediaEncoding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the name of the custom vocabulary that you want to use when
     * processing your transcription. Note that vocabulary names are case
     * sensitive.</p>
     */
    inline const Aws::String& GetVocabularyName() const { return m_vocabularyName; }
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }
    template<typename VocabularyNameT = Aws::String>
    void SetVocabularyName(VocabularyNameT&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::forward<VocabularyNameT>(value); }
    template<typename VocabularyNameT = Aws::String>
    StartMedicalStreamTranscriptionRequest& WithVocabularyName(VocabularyNameT&& value) { SetVocabularyName(std::forward<VocabularyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the medical specialty contained in your audio.</p>
     */
    inline Specialty GetSpecialty() const { return m_specialty; }
    inline bool SpecialtyHasBeenSet() const { return m_specialtyHasBeenSet; }
    inline void SetSpecialty(Specialty value) { m_specialtyHasBeenSet = true; m_specialty = value; }
    inline StartMedicalStreamTranscriptionRequest& WithSpecialty(Specialty value) { SetSpecialty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the type of input audio. For example, choose <code>DICTATION</code>
     * for a provider dictating patient notes and <code>CONVERSATION</code> for a
     * dialogue between a patient and a medical professional.</p>
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline StartMedicalStreamTranscriptionRequest& WithType(Type value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables speaker partitioning (diarization) in your transcription output.
     * Speaker partitioning labels the speech from individual speakers in your media
     * file.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
     * speakers (diarization)</a>.</p>
     */
    inline bool GetShowSpeakerLabel() const { return m_showSpeakerLabel; }
    inline bool ShowSpeakerLabelHasBeenSet() const { return m_showSpeakerLabelHasBeenSet; }
    inline void SetShowSpeakerLabel(bool value) { m_showSpeakerLabelHasBeenSet = true; m_showSpeakerLabel = value; }
    inline StartMedicalStreamTranscriptionRequest& WithShowSpeakerLabel(bool value) { SetShowSpeakerLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a name for your transcription session. If you don't include this
     * parameter in your request, Amazon Transcribe Medical generates an ID and returns
     * it in the response.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    StartMedicalStreamTranscriptionRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    AWS_TRANSCRIBESTREAMINGSERVICE_API std::shared_ptr<AudioStream> GetAudioStream() const  { return m_audioStream; }
    AWS_TRANSCRIBESTREAMINGSERVICE_API void SetAudioStream(const std::shared_ptr<AudioStream>& value) { m_audioStreamHasBeenSet = true; m_audioStream = value; }
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalStreamTranscriptionRequest& WithAudioStream(const std::shared_ptr<AudioStream>& value) { SetAudioStream(value); return *this;}

    ///@}

    ///@{
    /**
     * <p>Enables channel identification in multi-channel audio.</p> <p>Channel
     * identification transcribes the audio on each channel independently, then appends
     * the output for each channel into one transcript.</p> <p>If you have
     * multi-channel audio and do not enable channel identification, your audio is
     * transcribed in a continuous manner and your transcript is not separated by
     * channel.</p> <p>If you include <code>EnableChannelIdentification</code> in your
     * request, you must also include <code>NumberOfChannels</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/channel-id.html">Transcribing
     * multi-channel audio</a>.</p>
     */
    inline bool GetEnableChannelIdentification() const { return m_enableChannelIdentification; }
    inline bool EnableChannelIdentificationHasBeenSet() const { return m_enableChannelIdentificationHasBeenSet; }
    inline void SetEnableChannelIdentification(bool value) { m_enableChannelIdentificationHasBeenSet = true; m_enableChannelIdentification = value; }
    inline StartMedicalStreamTranscriptionRequest& WithEnableChannelIdentification(bool value) { SetEnableChannelIdentification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the number of channels in your audio stream. This value must be
     * <code>2</code>, as only two channels are supported. If your audio doesn't
     * contain multiple channels, do not include this parameter in your request.</p>
     * <p>If you include <code>NumberOfChannels</code> in your request, you must also
     * include <code>EnableChannelIdentification</code>.</p>
     */
    inline int GetNumberOfChannels() const { return m_numberOfChannels; }
    inline bool NumberOfChannelsHasBeenSet() const { return m_numberOfChannelsHasBeenSet; }
    inline void SetNumberOfChannels(int value) { m_numberOfChannelsHasBeenSet = true; m_numberOfChannels = value; }
    inline StartMedicalStreamTranscriptionRequest& WithNumberOfChannels(int value) { SetNumberOfChannels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Labels all personal health information (PHI) identified in your
     * transcript.</p> <p>Content identification is performed at the segment level; PHI
     * is flagged upon complete transcription of an audio segment.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/phi-id.html">Identifying
     * personal health information (PHI) in a transcription</a>.</p>
     */
    inline MedicalContentIdentificationType GetContentIdentificationType() const { return m_contentIdentificationType; }
    inline bool ContentIdentificationTypeHasBeenSet() const { return m_contentIdentificationTypeHasBeenSet; }
    inline void SetContentIdentificationType(MedicalContentIdentificationType value) { m_contentIdentificationTypeHasBeenSet = true; m_contentIdentificationType = value; }
    inline StartMedicalStreamTranscriptionRequest& WithContentIdentificationType(MedicalContentIdentificationType value) { SetContentIdentificationType(value); return *this;}
    ///@}
  private:

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    int m_mediaSampleRateHertz{0};
    bool m_mediaSampleRateHertzHasBeenSet = false;

    MediaEncoding m_mediaEncoding{MediaEncoding::NOT_SET};
    bool m_mediaEncodingHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    Specialty m_specialty{Specialty::NOT_SET};
    bool m_specialtyHasBeenSet = false;

    Type m_type{Type::NOT_SET};
    bool m_typeHasBeenSet = false;

    bool m_showSpeakerLabel{false};
    bool m_showSpeakerLabelHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    std::shared_ptr<AudioStream> m_audioStream;
    bool m_audioStreamHasBeenSet = false;

    bool m_enableChannelIdentification{false};
    bool m_enableChannelIdentificationHasBeenSet = false;

    int m_numberOfChannels{0};
    bool m_numberOfChannelsHasBeenSet = false;

    MedicalContentIdentificationType m_contentIdentificationType{MedicalContentIdentificationType::NOT_SET};
    bool m_contentIdentificationTypeHasBeenSet = false;
    StartMedicalStreamTranscriptionHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
