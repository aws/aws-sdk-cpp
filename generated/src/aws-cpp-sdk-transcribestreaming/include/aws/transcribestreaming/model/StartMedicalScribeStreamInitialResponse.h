/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/model/MedicalScribeLanguageCode.h>
#include <aws/transcribestreaming/model/MedicalScribeMediaEncoding.h>
#include <aws/core/http/HttpTypes.h>
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
namespace TranscribeStreamingService
{
namespace Model
{

  class StartMedicalScribeStreamInitialResponse
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalScribeStreamInitialResponse();
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalScribeStreamInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalScribeStreamInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API StartMedicalScribeStreamInitialResponse(const Http::HeaderValueCollection& responseHeaders);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier (in UUID format) for your streaming session.</p> <p>If you
     * already started streaming, this is same ID as the one you specified in your
     * initial <code>StartMedicalScribeStreamRequest</code>. </p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline StartMedicalScribeStreamInitialResponse& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline StartMedicalScribeStreamInitialResponse& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline StartMedicalScribeStreamInitialResponse& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for your streaming request. </p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline StartMedicalScribeStreamInitialResponse& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartMedicalScribeStreamInitialResponse& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartMedicalScribeStreamInitialResponse& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Language Code that you specified in your request. Same as provided in the
     * <code>StartMedicalScribeStreamRequest</code>. </p>
     */
    inline const MedicalScribeLanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const MedicalScribeLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(MedicalScribeLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline StartMedicalScribeStreamInitialResponse& WithLanguageCode(const MedicalScribeLanguageCode& value) { SetLanguageCode(value); return *this;}
    inline StartMedicalScribeStreamInitialResponse& WithLanguageCode(MedicalScribeLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sample rate (in hertz) that you specified in your request. Same as
     * provided in the <code>StartMedicalScribeStreamRequest</code> </p>
     */
    inline int GetMediaSampleRateHertz() const{ return m_mediaSampleRateHertz; }
    inline bool MediaSampleRateHertzHasBeenSet() const { return m_mediaSampleRateHertzHasBeenSet; }
    inline void SetMediaSampleRateHertz(int value) { m_mediaSampleRateHertzHasBeenSet = true; m_mediaSampleRateHertz = value; }
    inline StartMedicalScribeStreamInitialResponse& WithMediaSampleRateHertz(int value) { SetMediaSampleRateHertz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Media Encoding you specified in your request. Same as provided in the
     * <code>StartMedicalScribeStreamRequest</code> </p>
     */
    inline const MedicalScribeMediaEncoding& GetMediaEncoding() const{ return m_mediaEncoding; }
    inline bool MediaEncodingHasBeenSet() const { return m_mediaEncodingHasBeenSet; }
    inline void SetMediaEncoding(const MedicalScribeMediaEncoding& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = value; }
    inline void SetMediaEncoding(MedicalScribeMediaEncoding&& value) { m_mediaEncodingHasBeenSet = true; m_mediaEncoding = std::move(value); }
    inline StartMedicalScribeStreamInitialResponse& WithMediaEncoding(const MedicalScribeMediaEncoding& value) { SetMediaEncoding(value); return *this;}
    inline StartMedicalScribeStreamInitialResponse& WithMediaEncoding(MedicalScribeMediaEncoding&& value) { SetMediaEncoding(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    MedicalScribeLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    int m_mediaSampleRateHertz;
    bool m_mediaSampleRateHertzHasBeenSet = false;

    MedicalScribeMediaEncoding m_mediaEncoding;
    bool m_mediaEncodingHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
