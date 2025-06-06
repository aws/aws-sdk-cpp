﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AIAgentType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QConnect
{
namespace Model
{

  /**
   */
  class RemoveAssistantAIAgentRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API RemoveAssistantAIAgentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveAssistantAIAgent"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;

    AWS_QCONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect assistant. Can be either the ID or
     * the ARN. URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetAssistantId() const { return m_assistantId; }
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
    template<typename AssistantIdT = Aws::String>
    void SetAssistantId(AssistantIdT&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::forward<AssistantIdT>(value); }
    template<typename AssistantIdT = Aws::String>
    RemoveAssistantAIAgentRequest& WithAssistantId(AssistantIdT&& value) { SetAssistantId(std::forward<AssistantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the AI Agent being removed for use by default from the Amazon Q
     * in Connect Assistant.</p>
     */
    inline AIAgentType GetAiAgentType() const { return m_aiAgentType; }
    inline bool AiAgentTypeHasBeenSet() const { return m_aiAgentTypeHasBeenSet; }
    inline void SetAiAgentType(AIAgentType value) { m_aiAgentTypeHasBeenSet = true; m_aiAgentType = value; }
    inline RemoveAssistantAIAgentRequest& WithAiAgentType(AIAgentType value) { SetAiAgentType(value); return *this;}
    ///@}
  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    AIAgentType m_aiAgentType{AIAgentType::NOT_SET};
    bool m_aiAgentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
