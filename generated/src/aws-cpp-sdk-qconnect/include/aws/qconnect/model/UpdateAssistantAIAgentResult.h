﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AssistantData.h>
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
  class UpdateAssistantAIAgentResult
  {
  public:
    AWS_QCONNECT_API UpdateAssistantAIAgentResult();
    AWS_QCONNECT_API UpdateAssistantAIAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API UpdateAssistantAIAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const AssistantData& GetAssistant() const{ return m_assistant; }
    inline void SetAssistant(const AssistantData& value) { m_assistant = value; }
    inline void SetAssistant(AssistantData&& value) { m_assistant = std::move(value); }
    inline UpdateAssistantAIAgentResult& WithAssistant(const AssistantData& value) { SetAssistant(value); return *this;}
    inline UpdateAssistantAIAgentResult& WithAssistant(AssistantData&& value) { SetAssistant(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateAssistantAIAgentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateAssistantAIAgentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateAssistantAIAgentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AssistantData m_assistant;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
