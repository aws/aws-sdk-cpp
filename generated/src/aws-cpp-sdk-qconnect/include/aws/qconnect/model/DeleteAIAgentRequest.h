/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class DeleteAIAgentRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API DeleteAIAgentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAIAgent"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect AI Agent. Can be either the ID or
     * the ARN. URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetAiAgentId() const{ return m_aiAgentId; }
    inline bool AiAgentIdHasBeenSet() const { return m_aiAgentIdHasBeenSet; }
    inline void SetAiAgentId(const Aws::String& value) { m_aiAgentIdHasBeenSet = true; m_aiAgentId = value; }
    inline void SetAiAgentId(Aws::String&& value) { m_aiAgentIdHasBeenSet = true; m_aiAgentId = std::move(value); }
    inline void SetAiAgentId(const char* value) { m_aiAgentIdHasBeenSet = true; m_aiAgentId.assign(value); }
    inline DeleteAIAgentRequest& WithAiAgentId(const Aws::String& value) { SetAiAgentId(value); return *this;}
    inline DeleteAIAgentRequest& WithAiAgentId(Aws::String&& value) { SetAiAgentId(std::move(value)); return *this;}
    inline DeleteAIAgentRequest& WithAiAgentId(const char* value) { SetAiAgentId(value); return *this;}
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
    inline DeleteAIAgentRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline DeleteAIAgentRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline DeleteAIAgentRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
    ///@}
  private:

    Aws::String m_aiAgentId;
    bool m_aiAgentIdHasBeenSet = false;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
