/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSM
{
namespace Model
{
  class ResumeSessionResult
  {
  public:
    AWS_SSM_API ResumeSessionResult() = default;
    AWS_SSM_API ResumeSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ResumeSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    ResumeSessionResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An encrypted token value containing session and caller information. Used to
     * authenticate the connection to the managed node.</p>
     */
    inline const Aws::String& GetTokenValue() const { return m_tokenValue; }
    template<typename TokenValueT = Aws::String>
    void SetTokenValue(TokenValueT&& value) { m_tokenValueHasBeenSet = true; m_tokenValue = std::forward<TokenValueT>(value); }
    template<typename TokenValueT = Aws::String>
    ResumeSessionResult& WithTokenValue(TokenValueT&& value) { SetTokenValue(std::forward<TokenValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL back to SSM Agent on the managed node that the Session Manager client
     * uses to send commands and receive output from the managed node. Format:
     * <code>wss://ssmmessages.<b>region</b>.amazonaws.com/v1/data-channel/<b>session-id</b>?stream=(input|output)</code>.</p>
     * <p> <b>region</b> represents the Region identifier for an Amazon Web Services
     * Region supported by Amazon Web Services Systems Manager, such as
     * <code>us-east-2</code> for the US East (Ohio) Region. For a list of supported
     * <b>region</b> values, see the <b>Region</b> column in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/ssm.html#ssm_region">Systems
     * Manager service endpoints</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p> <b>session-id</b> represents the ID of a Session Manager
     * session, such as <code>1a2b3c4dEXAMPLE</code>.</p>
     */
    inline const Aws::String& GetStreamUrl() const { return m_streamUrl; }
    template<typename StreamUrlT = Aws::String>
    void SetStreamUrl(StreamUrlT&& value) { m_streamUrlHasBeenSet = true; m_streamUrl = std::forward<StreamUrlT>(value); }
    template<typename StreamUrlT = Aws::String>
    ResumeSessionResult& WithStreamUrl(StreamUrlT&& value) { SetStreamUrl(std::forward<StreamUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ResumeSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_tokenValue;
    bool m_tokenValueHasBeenSet = false;

    Aws::String m_streamUrl;
    bool m_streamUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
