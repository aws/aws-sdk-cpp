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
  class CreateAIAgentResult
  {
  public:
    AWS_QCONNECT_API CreateAIAgentResult();
    AWS_QCONNECT_API CreateAIAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API CreateAIAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data of the created AI Agent.</p>
     */
    inline const AIAgentData& GetAiAgent() const{ return m_aiAgent; }
    inline void SetAiAgent(const AIAgentData& value) { m_aiAgent = value; }
    inline void SetAiAgent(AIAgentData&& value) { m_aiAgent = std::move(value); }
    inline CreateAIAgentResult& WithAiAgent(const AIAgentData& value) { SetAiAgent(value); return *this;}
    inline CreateAIAgentResult& WithAiAgent(AIAgentData&& value) { SetAiAgent(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAIAgentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAIAgentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAIAgentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AIAgentData m_aiAgent;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
