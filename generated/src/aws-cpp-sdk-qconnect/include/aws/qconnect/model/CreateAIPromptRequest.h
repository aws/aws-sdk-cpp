/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/qconnect/model/AIPromptAPIFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/AIPromptTemplateConfiguration.h>
#include <aws/qconnect/model/AIPromptTemplateType.h>
#include <aws/qconnect/model/AIPromptType.h>
#include <aws/qconnect/model/VisibilityStatus.h>
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
  class CreateAIPromptRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API CreateAIPromptRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAIPrompt"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The API Format of the AI Prompt.</p>
     */
    inline const AIPromptAPIFormat& GetApiFormat() const{ return m_apiFormat; }
    inline bool ApiFormatHasBeenSet() const { return m_apiFormatHasBeenSet; }
    inline void SetApiFormat(const AIPromptAPIFormat& value) { m_apiFormatHasBeenSet = true; m_apiFormat = value; }
    inline void SetApiFormat(AIPromptAPIFormat&& value) { m_apiFormatHasBeenSet = true; m_apiFormat = std::move(value); }
    inline CreateAIPromptRequest& WithApiFormat(const AIPromptAPIFormat& value) { SetApiFormat(value); return *this;}
    inline CreateAIPromptRequest& WithApiFormat(AIPromptAPIFormat&& value) { SetApiFormat(std::move(value)); return *this;}
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
    inline CreateAIPromptRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline CreateAIPromptRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline CreateAIPromptRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
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
    inline CreateAIPromptRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateAIPromptRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateAIPromptRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the AI Prompt.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateAIPromptRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateAIPromptRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateAIPromptRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the model used for this AI Prompt. Model Ids supported are:
     * <code>CLAUDE_3_HAIKU_20240307_V1</code> </p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }
    inline CreateAIPromptRequest& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}
    inline CreateAIPromptRequest& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}
    inline CreateAIPromptRequest& WithModelId(const char* value) { SetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AI Prompt.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateAIPromptRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateAIPromptRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateAIPromptRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateAIPromptRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateAIPromptRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateAIPromptRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateAIPromptRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAIPromptRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAIPromptRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateAIPromptRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAIPromptRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAIPromptRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration of the prompt template for this AI Prompt.</p>
     */
    inline const AIPromptTemplateConfiguration& GetTemplateConfiguration() const{ return m_templateConfiguration; }
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }
    inline void SetTemplateConfiguration(const AIPromptTemplateConfiguration& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = value; }
    inline void SetTemplateConfiguration(AIPromptTemplateConfiguration&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::move(value); }
    inline CreateAIPromptRequest& WithTemplateConfiguration(const AIPromptTemplateConfiguration& value) { SetTemplateConfiguration(value); return *this;}
    inline CreateAIPromptRequest& WithTemplateConfiguration(AIPromptTemplateConfiguration&& value) { SetTemplateConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the prompt template for this AI Prompt.</p>
     */
    inline const AIPromptTemplateType& GetTemplateType() const{ return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    inline void SetTemplateType(const AIPromptTemplateType& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline void SetTemplateType(AIPromptTemplateType&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }
    inline CreateAIPromptRequest& WithTemplateType(const AIPromptTemplateType& value) { SetTemplateType(value); return *this;}
    inline CreateAIPromptRequest& WithTemplateType(AIPromptTemplateType&& value) { SetTemplateType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of this AI Prompt.</p>
     */
    inline const AIPromptType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AIPromptType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AIPromptType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateAIPromptRequest& WithType(const AIPromptType& value) { SetType(value); return *this;}
    inline CreateAIPromptRequest& WithType(AIPromptType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility status of the AI Prompt.</p>
     */
    inline const VisibilityStatus& GetVisibilityStatus() const{ return m_visibilityStatus; }
    inline bool VisibilityStatusHasBeenSet() const { return m_visibilityStatusHasBeenSet; }
    inline void SetVisibilityStatus(const VisibilityStatus& value) { m_visibilityStatusHasBeenSet = true; m_visibilityStatus = value; }
    inline void SetVisibilityStatus(VisibilityStatus&& value) { m_visibilityStatusHasBeenSet = true; m_visibilityStatus = std::move(value); }
    inline CreateAIPromptRequest& WithVisibilityStatus(const VisibilityStatus& value) { SetVisibilityStatus(value); return *this;}
    inline CreateAIPromptRequest& WithVisibilityStatus(VisibilityStatus&& value) { SetVisibilityStatus(std::move(value)); return *this;}
    ///@}
  private:

    AIPromptAPIFormat m_apiFormat;
    bool m_apiFormatHasBeenSet = false;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    AIPromptTemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet = false;

    AIPromptTemplateType m_templateType;
    bool m_templateTypeHasBeenSet = false;

    AIPromptType m_type;
    bool m_typeHasBeenSet = false;

    VisibilityStatus m_visibilityStatus;
    bool m_visibilityStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
