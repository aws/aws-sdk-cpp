/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/qconnect/model/AIAgentType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_QCONNECT_API RemoveAssistantAIAgentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveAssistantAIAgent"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;

    AWS_QCONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The type of the AI Agent being removed for use by default from the Amazon Q
     * in Connect Assistant.</p>
     */
    inline const AIAgentType& GetAiAgentType() const{ return m_aiAgentType; }
    inline bool AiAgentTypeHasBeenSet() const { return m_aiAgentTypeHasBeenSet; }
    inline void SetAiAgentType(const AIAgentType& value) { m_aiAgentTypeHasBeenSet = true; m_aiAgentType = value; }
    inline void SetAiAgentType(AIAgentType&& value) { m_aiAgentTypeHasBeenSet = true; m_aiAgentType = std::move(value); }
    inline RemoveAssistantAIAgentRequest& WithAiAgentType(const AIAgentType& value) { SetAiAgentType(value); return *this;}
    inline RemoveAssistantAIAgentRequest& WithAiAgentType(AIAgentType&& value) { SetAiAgentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect assistant. Can be either the ID or
     * the ARN. URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
    inline void SetAssistantId(const Aws::String& value) { m_assistantIdHasBeenSet = true; m_assistantId = value; }
    inline void SetAssistantId(Aws::String&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::move(value); }
    inline void SetAssistantId(const char* value) { m_assistantIdHasBeenSet = true; m_assistantId.assign(value); }
    inline RemoveAssistantAIAgentRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline RemoveAssistantAIAgentRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline RemoveAssistantAIAgentRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
    ///@}
  private:

    AIAgentType m_aiAgentType;
    bool m_aiAgentTypeHasBeenSet = false;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
