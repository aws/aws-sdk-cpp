/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AIPromptAPIFormat.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qconnect/model/Origin.h>
#include <aws/qconnect/model/Status.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/AIPromptTemplateType.h>
#include <aws/qconnect/model/AIPromptType.h>
#include <aws/qconnect/model/VisibilityStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QConnect
{
namespace Model
{

  /**
   * <p>The summary of the AI Prompt.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIPromptSummary">AWS
   * API Reference</a></p>
   */
  class AIPromptSummary
  {
  public:
    AWS_QCONNECT_API AIPromptSummary();
    AWS_QCONNECT_API AIPromptSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIPromptSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AI Prompt.</p>
     */
    inline const Aws::String& GetAiPromptArn() const{ return m_aiPromptArn; }
    inline bool AiPromptArnHasBeenSet() const { return m_aiPromptArnHasBeenSet; }
    inline void SetAiPromptArn(const Aws::String& value) { m_aiPromptArnHasBeenSet = true; m_aiPromptArn = value; }
    inline void SetAiPromptArn(Aws::String&& value) { m_aiPromptArnHasBeenSet = true; m_aiPromptArn = std::move(value); }
    inline void SetAiPromptArn(const char* value) { m_aiPromptArnHasBeenSet = true; m_aiPromptArn.assign(value); }
    inline AIPromptSummary& WithAiPromptArn(const Aws::String& value) { SetAiPromptArn(value); return *this;}
    inline AIPromptSummary& WithAiPromptArn(Aws::String&& value) { SetAiPromptArn(std::move(value)); return *this;}
    inline AIPromptSummary& WithAiPromptArn(const char* value) { SetAiPromptArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect AI prompt.</p>
     */
    inline const Aws::String& GetAiPromptId() const{ return m_aiPromptId; }
    inline bool AiPromptIdHasBeenSet() const { return m_aiPromptIdHasBeenSet; }
    inline void SetAiPromptId(const Aws::String& value) { m_aiPromptIdHasBeenSet = true; m_aiPromptId = value; }
    inline void SetAiPromptId(Aws::String&& value) { m_aiPromptIdHasBeenSet = true; m_aiPromptId = std::move(value); }
    inline void SetAiPromptId(const char* value) { m_aiPromptIdHasBeenSet = true; m_aiPromptId.assign(value); }
    inline AIPromptSummary& WithAiPromptId(const Aws::String& value) { SetAiPromptId(value); return *this;}
    inline AIPromptSummary& WithAiPromptId(Aws::String&& value) { SetAiPromptId(std::move(value)); return *this;}
    inline AIPromptSummary& WithAiPromptId(const char* value) { SetAiPromptId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API format used for this AI Prompt.</p>
     */
    inline const AIPromptAPIFormat& GetApiFormat() const{ return m_apiFormat; }
    inline bool ApiFormatHasBeenSet() const { return m_apiFormatHasBeenSet; }
    inline void SetApiFormat(const AIPromptAPIFormat& value) { m_apiFormatHasBeenSet = true; m_apiFormat = value; }
    inline void SetApiFormat(AIPromptAPIFormat&& value) { m_apiFormatHasBeenSet = true; m_apiFormat = std::move(value); }
    inline AIPromptSummary& WithApiFormat(const AIPromptAPIFormat& value) { SetApiFormat(value); return *this;}
    inline AIPromptSummary& WithApiFormat(AIPromptAPIFormat&& value) { SetApiFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q in Connect assistant.</p>
     */
    inline const Aws::String& GetAssistantArn() const{ return m_assistantArn; }
    inline bool AssistantArnHasBeenSet() const { return m_assistantArnHasBeenSet; }
    inline void SetAssistantArn(const Aws::String& value) { m_assistantArnHasBeenSet = true; m_assistantArn = value; }
    inline void SetAssistantArn(Aws::String&& value) { m_assistantArnHasBeenSet = true; m_assistantArn = std::move(value); }
    inline void SetAssistantArn(const char* value) { m_assistantArnHasBeenSet = true; m_assistantArn.assign(value); }
    inline AIPromptSummary& WithAssistantArn(const Aws::String& value) { SetAssistantArn(value); return *this;}
    inline AIPromptSummary& WithAssistantArn(Aws::String&& value) { SetAssistantArn(std::move(value)); return *this;}
    inline AIPromptSummary& WithAssistantArn(const char* value) { SetAssistantArn(value); return *this;}
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
    inline AIPromptSummary& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline AIPromptSummary& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline AIPromptSummary& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
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
    inline AIPromptSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AIPromptSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AIPromptSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the model used for this AI Prompt. Model Ids supported are:
     * <code>CLAUDE_3_HAIKU_20240307_V1</code>.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }
    inline AIPromptSummary& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}
    inline AIPromptSummary& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}
    inline AIPromptSummary& WithModelId(const char* value) { SetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the AI Prompt was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTime() const{ return m_modifiedTime; }
    inline bool ModifiedTimeHasBeenSet() const { return m_modifiedTimeHasBeenSet; }
    inline void SetModifiedTime(const Aws::Utils::DateTime& value) { m_modifiedTimeHasBeenSet = true; m_modifiedTime = value; }
    inline void SetModifiedTime(Aws::Utils::DateTime&& value) { m_modifiedTimeHasBeenSet = true; m_modifiedTime = std::move(value); }
    inline AIPromptSummary& WithModifiedTime(const Aws::Utils::DateTime& value) { SetModifiedTime(value); return *this;}
    inline AIPromptSummary& WithModifiedTime(Aws::Utils::DateTime&& value) { SetModifiedTime(std::move(value)); return *this;}
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
    inline AIPromptSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AIPromptSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AIPromptSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origin of the AI Prompt. <code>SYSTEM</code> for a default AI Prompt
     * created by Q in Connect or <code>CUSTOMER</code> for an AI Prompt created by
     * calling AI Prompt creation APIs. </p>
     */
    inline const Origin& GetOrigin() const{ return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(const Origin& value) { m_originHasBeenSet = true; m_origin = value; }
    inline void SetOrigin(Origin&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }
    inline AIPromptSummary& WithOrigin(const Origin& value) { SetOrigin(value); return *this;}
    inline AIPromptSummary& WithOrigin(Origin&& value) { SetOrigin(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the AI Prompt.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AIPromptSummary& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline AIPromptSummary& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline AIPromptSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline AIPromptSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline AIPromptSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline AIPromptSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline AIPromptSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline AIPromptSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline AIPromptSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline AIPromptSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline AIPromptSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the prompt template for this AI Prompt.</p>
     */
    inline const AIPromptTemplateType& GetTemplateType() const{ return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    inline void SetTemplateType(const AIPromptTemplateType& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline void SetTemplateType(AIPromptTemplateType&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }
    inline AIPromptSummary& WithTemplateType(const AIPromptTemplateType& value) { SetTemplateType(value); return *this;}
    inline AIPromptSummary& WithTemplateType(AIPromptTemplateType&& value) { SetTemplateType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of this AI Prompt.</p>
     */
    inline const AIPromptType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AIPromptType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AIPromptType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline AIPromptSummary& WithType(const AIPromptType& value) { SetType(value); return *this;}
    inline AIPromptSummary& WithType(AIPromptType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility status of the AI Prompt.</p>
     */
    inline const VisibilityStatus& GetVisibilityStatus() const{ return m_visibilityStatus; }
    inline bool VisibilityStatusHasBeenSet() const { return m_visibilityStatusHasBeenSet; }
    inline void SetVisibilityStatus(const VisibilityStatus& value) { m_visibilityStatusHasBeenSet = true; m_visibilityStatus = value; }
    inline void SetVisibilityStatus(VisibilityStatus&& value) { m_visibilityStatusHasBeenSet = true; m_visibilityStatus = std::move(value); }
    inline AIPromptSummary& WithVisibilityStatus(const VisibilityStatus& value) { SetVisibilityStatus(value); return *this;}
    inline AIPromptSummary& WithVisibilityStatus(VisibilityStatus&& value) { SetVisibilityStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_aiPromptArn;
    bool m_aiPromptArnHasBeenSet = false;

    Aws::String m_aiPromptId;
    bool m_aiPromptIdHasBeenSet = false;

    AIPromptAPIFormat m_apiFormat;
    bool m_apiFormatHasBeenSet = false;

    Aws::String m_assistantArn;
    bool m_assistantArnHasBeenSet = false;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedTime;
    bool m_modifiedTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Origin m_origin;
    bool m_originHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

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
