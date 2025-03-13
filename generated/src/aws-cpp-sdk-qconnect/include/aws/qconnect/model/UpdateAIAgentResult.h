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
  class UpdateAIAgentResult
  {
  public:
    AWS_QCONNECT_API UpdateAIAgentResult() = default;
    AWS_QCONNECT_API UpdateAIAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API UpdateAIAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data of the updated Amazon Q in Connect AI Agent.</p>
     */
    inline const AIAgentData& GetAiAgent() const { return m_aiAgent; }
    template<typename AiAgentT = AIAgentData>
    void SetAiAgent(AiAgentT&& value) { m_aiAgentHasBeenSet = true; m_aiAgent = std::forward<AiAgentT>(value); }
    template<typename AiAgentT = AIAgentData>
    UpdateAIAgentResult& WithAiAgent(AiAgentT&& value) { SetAiAgent(std::forward<AiAgentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAIAgentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AIAgentData m_aiAgent;
    bool m_aiAgentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
