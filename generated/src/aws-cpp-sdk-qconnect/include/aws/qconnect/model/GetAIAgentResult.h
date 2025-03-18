/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AIAgentData.h>
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
namespace QConnect
{
namespace Model
{
  class GetAIAgentResult
  {
  public:
    AWS_QCONNECT_API GetAIAgentResult() = default;
    AWS_QCONNECT_API GetAIAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API GetAIAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data of the AI Agent.</p>
     */
    inline const AIAgentData& GetAiAgent() const { return m_aiAgent; }
    template<typename AiAgentT = AIAgentData>
    void SetAiAgent(AiAgentT&& value) { m_aiAgentHasBeenSet = true; m_aiAgent = std::forward<AiAgentT>(value); }
    template<typename AiAgentT = AIAgentData>
    GetAIAgentResult& WithAiAgent(AiAgentT&& value) { SetAiAgent(std::forward<AiAgentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the AI Agent version (returned if an AI Agent version
     * was specified via use of a qualifier for the <code>aiAgentId</code> on the
     * request). </p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline GetAIAgentResult& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAIAgentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AIAgentData m_aiAgent;
    bool m_aiAgentHasBeenSet = false;

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
