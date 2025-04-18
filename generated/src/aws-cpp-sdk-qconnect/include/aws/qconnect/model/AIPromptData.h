/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AIPromptType.h>
#include <aws/qconnect/model/AIPromptTemplateType.h>
#include <aws/qconnect/model/AIPromptAPIFormat.h>
#include <aws/qconnect/model/AIPromptTemplateConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qconnect/model/VisibilityStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/Origin.h>
#include <aws/qconnect/model/Status.h>
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
   * <p>The data for the AI Prompt</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIPromptData">AWS
   * API Reference</a></p>
   */
  class AIPromptData
  {
  public:
    AWS_QCONNECT_API AIPromptData() = default;
    AWS_QCONNECT_API AIPromptData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIPromptData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    AIPromptData& WithAssistantId(AssistantIdT&& value) { SetAssistantId(std::forward<AssistantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q in Connect assistant.</p>
     */
    inline const Aws::String& GetAssistantArn() const { return m_assistantArn; }
    inline bool AssistantArnHasBeenSet() const { return m_assistantArnHasBeenSet; }
    template<typename AssistantArnT = Aws::String>
    void SetAssistantArn(AssistantArnT&& value) { m_assistantArnHasBeenSet = true; m_assistantArn = std::forward<AssistantArnT>(value); }
    template<typename AssistantArnT = Aws::String>
    AIPromptData& WithAssistantArn(AssistantArnT&& value) { SetAssistantArn(std::forward<AssistantArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect AI prompt.</p>
     */
    inline const Aws::String& GetAiPromptId() const { return m_aiPromptId; }
    inline bool AiPromptIdHasBeenSet() const { return m_aiPromptIdHasBeenSet; }
    template<typename AiPromptIdT = Aws::String>
    void SetAiPromptId(AiPromptIdT&& value) { m_aiPromptIdHasBeenSet = true; m_aiPromptId = std::forward<AiPromptIdT>(value); }
    template<typename AiPromptIdT = Aws::String>
    AIPromptData& WithAiPromptId(AiPromptIdT&& value) { SetAiPromptId(std::forward<AiPromptIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AI Prompt.</p>
     */
    inline const Aws::String& GetAiPromptArn() const { return m_aiPromptArn; }
    inline bool AiPromptArnHasBeenSet() const { return m_aiPromptArnHasBeenSet; }
    template<typename AiPromptArnT = Aws::String>
    void SetAiPromptArn(AiPromptArnT&& value) { m_aiPromptArnHasBeenSet = true; m_aiPromptArn = std::forward<AiPromptArnT>(value); }
    template<typename AiPromptArnT = Aws::String>
    AIPromptData& WithAiPromptArn(AiPromptArnT&& value) { SetAiPromptArn(std::forward<AiPromptArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AI Prompt</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AIPromptData& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of this AI Prompt.</p>
     */
    inline AIPromptType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AIPromptType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AIPromptData& WithType(AIPromptType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the prompt template for this AI Prompt.</p>
     */
    inline AIPromptTemplateType GetTemplateType() const { return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    inline void SetTemplateType(AIPromptTemplateType value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline AIPromptData& WithTemplateType(AIPromptTemplateType value) { SetTemplateType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the model used for this AI Prompt. The following model Ids
     * are supported:</p> <ul> <li> <p> <code>anthropic.claude-3-haiku--v1:0</code>
     * </p> </li> <li> <p> <code>apac.amazon.nova-lite-v1:0</code> </p> </li> <li> <p>
     * <code>apac.amazon.nova-micro-v1:0</code> </p> </li> <li> <p>
     * <code>apac.amazon.nova-pro-v1:0</code> </p> </li> <li> <p>
     * <code>apac.anthropic.claude-3-5-sonnet--v2:0</code> </p> </li> <li> <p>
     * <code>apac.anthropic.claude-3-haiku-20240307-v1:0</code> </p> </li> <li> <p>
     * <code>eu.amazon.nova-lite-v1:0</code> </p> </li> <li> <p>
     * <code>eu.amazon.nova-micro-v1:0</code> </p> </li> <li> <p>
     * <code>eu.amazon.nova-pro-v1:0</code> </p> </li> <li> <p>
     * <code>eu.anthropic.claude-3-7-sonnet-20250219-v1:0</code> </p> </li> <li> <p>
     * <code>eu.anthropic.claude-3-haiku-20240307-v1:0</code> </p> </li> <li> <p>
     * <code>us.amazon.nova-lite-v1:0</code> </p> </li> <li> <p>
     * <code>us.amazon.nova-micro-v1:0</code> </p> </li> <li> <p>
     * <code>us.amazon.nova-pro-v1:0</code> </p> </li> <li> <p>
     * <code>us.anthropic.claude-3-5-haiku-20241022-v1:0</code> </p> </li> <li> <p>
     * <code>us.anthropic.claude-3-7-sonnet-20250219-v1:0</code> </p> </li> <li> <p>
     * <code>us.anthropic.claude-3-haiku-20240307-v1:0</code> </p> </li> </ul>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    AIPromptData& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API format used for this AI Prompt.</p>
     */
    inline AIPromptAPIFormat GetApiFormat() const { return m_apiFormat; }
    inline bool ApiFormatHasBeenSet() const { return m_apiFormatHasBeenSet; }
    inline void SetApiFormat(AIPromptAPIFormat value) { m_apiFormatHasBeenSet = true; m_apiFormat = value; }
    inline AIPromptData& WithApiFormat(AIPromptAPIFormat value) { SetApiFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the prompt template for this AI Prompt.</p>
     */
    inline const AIPromptTemplateConfiguration& GetTemplateConfiguration() const { return m_templateConfiguration; }
    inline bool TemplateConfigurationHasBeenSet() const { return m_templateConfigurationHasBeenSet; }
    template<typename TemplateConfigurationT = AIPromptTemplateConfiguration>
    void SetTemplateConfiguration(TemplateConfigurationT&& value) { m_templateConfigurationHasBeenSet = true; m_templateConfiguration = std::forward<TemplateConfigurationT>(value); }
    template<typename TemplateConfigurationT = AIPromptTemplateConfiguration>
    AIPromptData& WithTemplateConfiguration(TemplateConfigurationT&& value) { SetTemplateConfiguration(std::forward<TemplateConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the AI Prompt was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTime() const { return m_modifiedTime; }
    inline bool ModifiedTimeHasBeenSet() const { return m_modifiedTimeHasBeenSet; }
    template<typename ModifiedTimeT = Aws::Utils::DateTime>
    void SetModifiedTime(ModifiedTimeT&& value) { m_modifiedTimeHasBeenSet = true; m_modifiedTime = std::forward<ModifiedTimeT>(value); }
    template<typename ModifiedTimeT = Aws::Utils::DateTime>
    AIPromptData& WithModifiedTime(ModifiedTimeT&& value) { SetModifiedTime(std::forward<ModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the AI Prompt.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AIPromptData& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility status of the AI Prompt.</p>
     */
    inline VisibilityStatus GetVisibilityStatus() const { return m_visibilityStatus; }
    inline bool VisibilityStatusHasBeenSet() const { return m_visibilityStatusHasBeenSet; }
    inline void SetVisibilityStatus(VisibilityStatus value) { m_visibilityStatusHasBeenSet = true; m_visibilityStatus = value; }
    inline AIPromptData& WithVisibilityStatus(VisibilityStatus value) { SetVisibilityStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    AIPromptData& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    AIPromptData& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The origin of the AI Prompt. <code>SYSTEM</code> for a default AI Prompt
     * created by Q in Connect or <code>CUSTOMER</code> for an AI Prompt created by
     * calling AI Prompt creation APIs. </p>
     */
    inline Origin GetOrigin() const { return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(Origin value) { m_originHasBeenSet = true; m_origin = value; }
    inline AIPromptData& WithOrigin(Origin value) { SetOrigin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the AI Prompt.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline AIPromptData& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_assistantArn;
    bool m_assistantArnHasBeenSet = false;

    Aws::String m_aiPromptId;
    bool m_aiPromptIdHasBeenSet = false;

    Aws::String m_aiPromptArn;
    bool m_aiPromptArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AIPromptType m_type{AIPromptType::NOT_SET};
    bool m_typeHasBeenSet = false;

    AIPromptTemplateType m_templateType{AIPromptTemplateType::NOT_SET};
    bool m_templateTypeHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    AIPromptAPIFormat m_apiFormat{AIPromptAPIFormat::NOT_SET};
    bool m_apiFormatHasBeenSet = false;

    AIPromptTemplateConfiguration m_templateConfiguration;
    bool m_templateConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedTime{};
    bool m_modifiedTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    VisibilityStatus m_visibilityStatus{VisibilityStatus::NOT_SET};
    bool m_visibilityStatusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Origin m_origin{Origin::NOT_SET};
    bool m_originHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
