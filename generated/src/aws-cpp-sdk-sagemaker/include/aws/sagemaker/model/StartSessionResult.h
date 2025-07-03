/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{
  class StartSessionResult
  {
  public:
    AWS_SAGEMAKER_API StartSessionResult() = default;
    AWS_SAGEMAKER_API StartSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API StartSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the established remote connection session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    StartSessionResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A WebSocket URL used to establish a SSH connection between the local IDE and
     * remote SageMaker space.</p>
     */
    inline const Aws::String& GetStreamUrl() const { return m_streamUrl; }
    template<typename StreamUrlT = Aws::String>
    void SetStreamUrl(StreamUrlT&& value) { m_streamUrlHasBeenSet = true; m_streamUrl = std::forward<StreamUrlT>(value); }
    template<typename StreamUrlT = Aws::String>
    StartSessionResult& WithStreamUrl(StreamUrlT&& value) { SetStreamUrl(std::forward<StreamUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An encrypted token value containing session and caller information. </p>
     */
    inline const Aws::String& GetTokenValue() const { return m_tokenValue; }
    template<typename TokenValueT = Aws::String>
    void SetTokenValue(TokenValueT&& value) { m_tokenValueHasBeenSet = true; m_tokenValue = std::forward<TokenValueT>(value); }
    template<typename TokenValueT = Aws::String>
    StartSessionResult& WithTokenValue(TokenValueT&& value) { SetTokenValue(std::forward<TokenValueT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_streamUrl;
    bool m_streamUrlHasBeenSet = false;

    Aws::String m_tokenValue;
    bool m_tokenValueHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
