/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class CreateAIPromptVersionRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API CreateAIPromptVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAIPromptVersion"; }

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
    inline CreateAIPromptVersionRequest& WithAiPromptId(const Aws::String& value) { SetAiPromptId(value); return *this;}
    inline CreateAIPromptVersionRequest& WithAiPromptId(Aws::String&& value) { SetAiPromptId(std::move(value)); return *this;}
    inline CreateAIPromptVersionRequest& WithAiPromptId(const char* value) { SetAiPromptId(value); return *this;}
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
    inline CreateAIPromptVersionRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline CreateAIPromptVersionRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline CreateAIPromptVersionRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="http://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>..</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateAIPromptVersionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateAIPromptVersionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateAIPromptVersionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the AI Prompt was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTime() const{ return m_modifiedTime; }
    inline bool ModifiedTimeHasBeenSet() const { return m_modifiedTimeHasBeenSet; }
    inline void SetModifiedTime(const Aws::Utils::DateTime& value) { m_modifiedTimeHasBeenSet = true; m_modifiedTime = value; }
    inline void SetModifiedTime(Aws::Utils::DateTime&& value) { m_modifiedTimeHasBeenSet = true; m_modifiedTime = std::move(value); }
    inline CreateAIPromptVersionRequest& WithModifiedTime(const Aws::Utils::DateTime& value) { SetModifiedTime(value); return *this;}
    inline CreateAIPromptVersionRequest& WithModifiedTime(Aws::Utils::DateTime&& value) { SetModifiedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_aiPromptId;
    bool m_aiPromptIdHasBeenSet = false;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedTime;
    bool m_modifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
