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
    AWS_VOICEID_API EvaluateSessionResult() = default;
    AWS_VOICEID_API EvaluateSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API EvaluateSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details resulting from the authentication process, such as authentication
     * decision and authentication score.</p>
     */
    inline const AuthenticationResult& GetAuthenticationResult() const { return m_authenticationResult; }
    template<typename AuthenticationResultT = AuthenticationResult>
    void SetAuthenticationResult(AuthenticationResultT&& value) { m_authenticationResultHasBeenSet = true; m_authenticationResult = std::forward<AuthenticationResultT>(value); }
    template<typename AuthenticationResultT = AuthenticationResult>
    EvaluateSessionResult& WithAuthenticationResult(AuthenticationResultT&& value) { SetAuthenticationResult(std::forward<AuthenticationResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the domain that contains the session.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    EvaluateSessionResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details resulting from the fraud detection process, such as fraud detection
     * decision and risk score.</p>
     */
    inline const FraudDetectionResult& GetFraudDetectionResult() const { return m_fraudDetectionResult; }
    template<typename FraudDetectionResultT = FraudDetectionResult>
    void SetFraudDetectionResult(FraudDetectionResultT&& value) { m_fraudDetectionResultHasBeenSet = true; m_fraudDetectionResult = std::forward<FraudDetectionResultT>(value); }
    template<typename FraudDetectionResultT = FraudDetectionResult>
    EvaluateSessionResult& WithFraudDetectionResult(FraudDetectionResultT&& value) { SetFraudDetectionResult(std::forward<FraudDetectionResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service-generated identifier of the session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    EvaluateSessionResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client-provided name of the session.</p>
     */
    inline const Aws::String& GetSessionName() const { return m_sessionName; }
    template<typename SessionNameT = Aws::String>
    void SetSessionName(SessionNameT&& value) { m_sessionNameHasBeenSet = true; m_sessionName = std::forward<SessionNameT>(value); }
    template<typename SessionNameT = Aws::String>
    EvaluateSessionResult& WithSessionName(SessionNameT&& value) { SetSessionName(std::forward<SessionNameT>(value)); return *this;}
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
    inline StreamingStatus GetStreamingStatus() const { return m_streamingStatus; }
    inline void SetStreamingStatus(StreamingStatus value) { m_streamingStatusHasBeenSet = true; m_streamingStatus = value; }
    inline EvaluateSessionResult& WithStreamingStatus(StreamingStatus value) { SetStreamingStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    EvaluateSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AuthenticationResult m_authenticationResult;
    bool m_authenticationResultHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    FraudDetectionResult m_fraudDetectionResult;
    bool m_fraudDetectionResultHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_sessionName;
    bool m_sessionNameHasBeenSet = false;

    StreamingStatus m_streamingStatus{StreamingStatus::NOT_SET};
    bool m_streamingStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
