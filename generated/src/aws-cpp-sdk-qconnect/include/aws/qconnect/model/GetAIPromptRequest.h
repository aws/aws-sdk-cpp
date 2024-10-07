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
  class GetAIPromptRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API GetAIPromptRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAIPrompt"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect AI prompt.</p>
     */
    inline const Aws::String& GetAiPromptId() const{ return m_aiPromptId; }
    inline bool AiPromptIdHasBeenSet() const { return m_aiPromptIdHasBeenSet; }
    inline void SetAiPromptId(const Aws::String& value) { m_aiPromptIdHasBeenSet = true; m_aiPromptId = value; }
    inline void SetAiPromptId(Aws::String&& value) { m_aiPromptIdHasBeenSet = true; m_aiPromptId = std::move(value); }
    inline void SetAiPromptId(const char* value) { m_aiPromptIdHasBeenSet = true; m_aiPromptId.assign(value); }
    inline GetAIPromptRequest& WithAiPromptId(const Aws::String& value) { SetAiPromptId(value); return *this;}
    inline GetAIPromptRequest& WithAiPromptId(Aws::String&& value) { SetAiPromptId(std::move(value)); return *this;}
    inline GetAIPromptRequest& WithAiPromptId(const char* value) { SetAiPromptId(value); return *this;}
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
    inline GetAIPromptRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline GetAIPromptRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline GetAIPromptRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
    ///@}
  private:

    Aws::String m_aiPromptId;
    bool m_aiPromptIdHasBeenSet = false;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
