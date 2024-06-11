/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/AuthenticationResult.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/model/FraudDetectionResult.h>
#include <aws/voice-id/model/StreamingStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace VoiceID
{
namespace Model
{
  class EvaluateSessionResult
  {
  public:
    AWS_VOICEID_API EvaluateSessionResult();
    AWS_VOICEID_API EvaluateSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API EvaluateSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details resulting from the authentication process, such as authentication
     * decision and authentication score.</p>
     */
    inline const AuthenticationResult& GetAuthenticationResult() const{ return m_authenticationResult; }
    inline void SetAuthenticationResult(const AuthenticationResult& value) { m_authenticationResult = value; }
    inline void SetAuthenticationResult(AuthenticationResult&& value) { m_authenticationResult = std::move(value); }
    inline EvaluateSessionResult& WithAuthenticationResult(const AuthenticationResult& value) { SetAuthenticationResult(value); return *this;}
    inline EvaluateSessionResult& WithAuthenticationResult(AuthenticationResult&& value) { SetAuthenticationResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the domain that contains the session.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline EvaluateSessionResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline EvaluateSessionResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline EvaluateSessionResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details resulting from the fraud detection process, such as fraud detection
     * decision and risk score.</p>
     */
    inline const FraudDetectionResult& GetFraudDetectionResult() const{ return m_fraudDetectionResult; }
    inline void SetFraudDetectionResult(const FraudDetectionResult& value) { m_fraudDetectionResult = value; }
    inline void SetFraudDetectionResult(FraudDetectionResult&& value) { m_fraudDetectionResult = std::move(value); }
    inline EvaluateSessionResult& WithFraudDetectionResult(const FraudDetectionResult& value) { SetFraudDetectionResult(value); return *this;}
    inline EvaluateSessionResult& WithFraudDetectionResult(FraudDetectionResult&& value) { SetFraudDetectionResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service-generated identifier of the session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline EvaluateSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline EvaluateSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline EvaluateSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client-provided name of the session.</p>
     */
    inline const Aws::String& GetSessionName() const{ return m_sessionName; }
    inline void SetSessionName(const Aws::String& value) { m_sessionName = value; }
    inline void SetSessionName(Aws::String&& value) { m_sessionName = std::move(value); }
    inline void SetSessionName(const char* value) { m_sessionName.assign(value); }
    inline EvaluateSessionResult& WithSessionName(const Aws::String& value) { SetSessionName(value); return *this;}
    inline EvaluateSessionResult& WithSessionName(Aws::String&& value) { SetSessionName(std::move(value)); return *this;}
    inline EvaluateSessionResult& WithSessionName(const char* value) { SetSessionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of audio streaming for this session. This field is useful
     * to infer next steps when the Authentication or Fraud Detection results are empty
     * or the decision is <code>NOT_ENOUGH_SPEECH</code>. In this situation, if the
     * <code>StreamingStatus</code> is <code>ONGOING/PENDING_CONFIGURATION</code>, it
     * can mean that the client should call the API again later, after Voice ID has
     * enough audio to produce a result. If the decision remains
     * <code>NOT_ENOUGH_SPEECH</code> even after <code>StreamingStatus</code> is
     * <code>ENDED</code>, it means that the previously streamed session did not have
     * enough speech to perform evaluation, and a new streaming session is needed to
     * try again.</p>
     */
    inline const StreamingStatus& GetStreamingStatus() const{ return m_streamingStatus; }
    inline void SetStreamingStatus(const StreamingStatus& value) { m_streamingStatus = value; }
    inline void SetStreamingStatus(StreamingStatus&& value) { m_streamingStatus = std::move(value); }
    inline EvaluateSessionResult& WithStreamingStatus(const StreamingStatus& value) { SetStreamingStatus(value); return *this;}
    inline EvaluateSessionResult& WithStreamingStatus(StreamingStatus&& value) { SetStreamingStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline EvaluateSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline EvaluateSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline EvaluateSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AuthenticationResult m_authenticationResult;

    Aws::String m_domainId;

    FraudDetectionResult m_fraudDetectionResult;

    Aws::String m_sessionId;

    Aws::String m_sessionName;

    StreamingStatus m_streamingStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
