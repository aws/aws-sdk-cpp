/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceRequest.h>
#include <aws/transcribestreaming/model/StartMedicalScribeStreamHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <memory>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/MedicalScribeLanguageCode.h>
#include <aws/transcribestreaming/model/MedicalScribeMediaEncoding.h>
#include <aws/transcribestreaming/model/MedicalScribeInputStream.h>
#include <utility>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   */
  class StartMedicalScribeStreamRequest : public TranscribeStreamingServiceRequest
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalScribeStreamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartMedicalScribeStream"; }

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
    inline StartMedicalScribeStreamHandler& GetEventStreamHandler() { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const StartMedicalScribeStreamHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline StartMedicalScribeStreamRequest& WithEventStreamHandler(const StartMedicalScribeStreamHandler& value) { SetEventStreamHandler(value); return *this; }


    ///@{
    /**
     * <p>Specify an identifier for your streaming session (in UUID format). If you
     * don't include a SessionId in your request, Amazon Web Services HealthScribe
     * generates an ID and returns it in the response. </p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    StartMedicalScribeStreamRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the language code for your HealthScribe streaming session.</p>
     */
    inline MedicalScribeLanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(MedicalScribeLanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline StartMedicalScribeStreamRequest& WithLanguageCode(MedicalScribeLanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the sample rate of the input audio (in hertz). Amazon Web Services
     * HealthScribe supports a range from 16,000 Hz to 48,000 Hz. The sample rate you
     * specify must match that of your audio. </p>
     */
    inline int GetMediaSampleRateHertz() const { return m_mediaSampleRateHertz; }
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }
    inline StartMedicalScribeStreamRequest& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the encoding used for the input audio.</p> <p>Supported formats
     * are:</p> <ul> <li> <p>FLAC</p> </li> <li> <p>OPUS-encoded audio in an Ogg
     * container</p> </li> <li> <p>PCM (only signed 16-bit little-endian audio formats,
     * which does not include WAV) </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/how-input.html#how-input-audio">Media
     * formats</a>. </p>
     */
    inline MedicalScribeMediaEncoding GetMediaEncoding() const { return m_mediaEncoding; }
    inline bool MediaEncodingHasBeenSet() const { return m_mediaEncodingHasBeenSet; }
    inline void SetMediaEncoding(MedicalScribeMediaEncoding value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = value; }
    inline StartMedicalScribeStreamRequest& WithMediaEncoding(MedicalScribeMediaEncoding value) { SetMediaEncoding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the input stream where you will send events in real time.</p> <p>The
     * first element of the input stream must be a
     * <code>MedicalScribeConfigurationEvent</code>. </p>
     */
    AWS_TRANSCRIBESTREAMINGSERVICE_API std::shared_ptr<MedicalScribeInputStream> GetInputStream() const  { return m_inputStream; }
    AWS_TRANSCRIBESTREAMINGSERVICE_API void SetInputStream(const std::shared_ptr<MedicalScribeInputStream>& value) { m_inputStreamHasBeenSet = true; m_inputStream = value; }
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalScribeStreamRequest& WithInputStream(const std::shared_ptr<MedicalScribeInputStream>& value) { SetInputStream(value); return *this;}

    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    MedicalScribeLanguageCode m_languageCode{MedicalScribeLanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    int m_mediaSampleRateHertz{0};
    bool m_mediaSampleRateHertzHasBeenSet = false;

    MedicalScribeMediaEncoding m_mediaEncoding{MedicalScribeMediaEncoding::NOT_SET};
    bool m_mediaEncodingHasBeenSet = false;

    std::shared_ptr<MedicalScribeInputStream> m_inputStream;
    bool m_inputStreamHasBeenSet = false;
    StartMedicalScribeStreamHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
