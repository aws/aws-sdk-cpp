/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AIAgentType.h>
#include <aws/qconnect/model/AIAgentConfiguration.h>
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
   * <p>The data for the AI Agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIAgentData">AWS
   * API Reference</a></p>
   */
  class AIAgentData
  {
  public:
    AWS_QCONNECT_API AIAgentData() = default;
    AWS_QCONNECT_API AIAgentData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIAgentData& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    AIAgentData& WithAssistantId(AssistantIdT&& value) { SetAssistantId(std::forward<AssistantIdT>(value)); return *this;}
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
    AIAgentData& WithAssistantArn(AssistantArnT&& value) { SetAssistantArn(std::forward<AssistantArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the AI Agent.</p>
     */
    inline const Aws::String& GetAiAgentId() const { return m_aiAgentId; }
    inline bool AiAgentIdHasBeenSet() const { return m_aiAgentIdHasBeenSet; }
    template<typename AiAgentIdT = Aws::String>
    void SetAiAgentId(AiAgentIdT&& value) { m_aiAgentIdHasBeenSet = true; m_aiAgentId = std::forward<AiAgentIdT>(value); }
    template<typename AiAgentIdT = Aws::String>
    AIAgentData& WithAiAgentId(AiAgentIdT&& value) { SetAiAgentId(std::forward<AiAgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AI agent.</p>
     */
    inline const Aws::String& GetAiAgentArn() const { return m_aiAgentArn; }
    inline bool AiAgentArnHasBeenSet() const { return m_aiAgentArnHasBeenSet; }
    template<typename AiAgentArnT = Aws::String>
    void SetAiAgentArn(AiAgentArnT&& value) { m_aiAgentArnHasBeenSet = true; m_aiAgentArn = std::forward<AiAgentArnT>(value); }
    template<typename AiAgentArnT = Aws::String>
    AIAgentData& WithAiAgentArn(AiAgentArnT&& value) { SetAiAgentArn(std::forward<AiAgentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AI Agent.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AIAgentData& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the AI Agent.</p>
     */
    inline AIAgentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AIAgentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AIAgentData& WithType(AIAgentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for the AI Agent.</p>
     */
    inline const AIAgentConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = AIAgentConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = AIAgentConfiguration>
    AIAgentData& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the AI Agent was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTime() const { return m_modifiedTime; }
    inline bool ModifiedTimeHasBeenSet() const { return m_modifiedTimeHasBeenSet; }
    template<typename ModifiedTimeT = Aws::Utils::DateTime>
    void SetModifiedTime(ModifiedTimeT&& value) { m_modifiedTimeHasBeenSet = true; m_modifiedTime = std::forward<ModifiedTimeT>(value); }
    template<typename ModifiedTimeT = Aws::Utils::DateTime>
    AIAgentData& WithModifiedTime(ModifiedTimeT&& value) { SetModifiedTime(std::forward<ModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the AI Agent.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AIAgentData& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility status of the AI Agent.</p>
     */
    inline VisibilityStatus GetVisibilityStatus() const { return m_visibilityStatus; }
    inline bool VisibilityStatusHasBeenSet() const { return m_visibilityStatusHasBeenSet; }
    inline void SetVisibilityStatus(VisibilityStatus value) { m_visibilityStatusHasBeenSet = true; m_visibilityStatus = value; }
    inline AIAgentData& WithVisibilityStatus(VisibilityStatus value) { SetVisibilityStatus(value); return *this;}
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
    AIAgentData& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    AIAgentData& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the origin of the AI Agent. <code>SYSTEM</code> for a default AI
     * Agent created by Q in Connect or <code>CUSTOMER</code> for an AI Agent created
     * by calling AI Agent creation APIs. </p>
     */
    inline Origin GetOrigin() const { return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(Origin value) { m_originHasBeenSet = true; m_origin = value; }
    inline AIAgentData& WithOrigin(Origin value) { SetOrigin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the AI Agent.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline AIAgentData& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_assistantArn;
    bool m_assistantArnHasBeenSet = false;

    Aws::String m_aiAgentId;
    bool m_aiAgentIdHasBeenSet = false;

    Aws::String m_aiAgentArn;
    bool m_aiAgentArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AIAgentType m_type{AIAgentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    AIAgentConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

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
