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
  class StartSessionResult
  {
  public:
    AWS_SSM_API StartSessionResult();
    AWS_SSM_API StartSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API StartSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline StartSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline StartSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline StartSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An encrypted token value containing session and caller information. This
     * token is used to authenticate the connection to the managed node, and is valid
     * only long enough to ensure the connection is successful. Never share your
     * session's token.</p>
     */
    inline const Aws::String& GetTokenValue() const{ return m_tokenValue; }
    inline void SetTokenValue(const Aws::String& value) { m_tokenValue = value; }
    inline void SetTokenValue(Aws::String&& value) { m_tokenValue = std::move(value); }
    inline void SetTokenValue(const char* value) { m_tokenValue.assign(value); }
    inline StartSessionResult& WithTokenValue(const Aws::String& value) { SetTokenValue(value); return *this;}
    inline StartSessionResult& WithTokenValue(Aws::String&& value) { SetTokenValue(std::move(value)); return *this;}
    inline StartSessionResult& WithTokenValue(const char* value) { SetTokenValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL back to SSM Agent on the managed node that the Session Manager client
     * uses to send commands and receive output from the node. Format:
     * <code>wss://ssmmessages.<b>region</b>.amazonaws.com/v1/data-channel/<b>session-id</b>?stream=(input|output)</code>
     * </p> <p> <b>region</b> represents the Region identifier for an Amazon Web
     * Services Region supported by Amazon Web Services Systems Manager, such as
     * <code>us-east-2</code> for the US East (Ohio) Region. For a list of supported
     * <b>region</b> values, see the <b>Region</b> column in <a
     * href="https://docs.aws.amazon.com/general/latest/gr/ssm.html#ssm_region">Systems
     * Manager service endpoints</a> in the <i>Amazon Web Services General
     * Reference</i>.</p> <p> <b>session-id</b> represents the ID of a Session Manager
     * session, such as <code>1a2b3c4dEXAMPLE</code>.</p>
     */
    inline const Aws::String& GetStreamUrl() const{ return m_streamUrl; }
    inline void SetStreamUrl(const Aws::String& value) { m_streamUrl = value; }
    inline void SetStreamUrl(Aws::String&& value) { m_streamUrl = std::move(value); }
    inline void SetStreamUrl(const char* value) { m_streamUrl.assign(value); }
    inline StartSessionResult& WithStreamUrl(const Aws::String& value) { SetStreamUrl(value); return *this;}
    inline StartSessionResult& WithStreamUrl(Aws::String&& value) { SetStreamUrl(std::move(value)); return *this;}
    inline StartSessionResult& WithStreamUrl(const char* value) { SetStreamUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;

    Aws::String m_tokenValue;

    Aws::String m_streamUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
