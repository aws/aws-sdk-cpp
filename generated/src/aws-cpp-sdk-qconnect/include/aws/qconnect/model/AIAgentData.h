/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AIAgentConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qconnect/model/Origin.h>
#include <aws/qconnect/model/Status.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/AIAgentType.h>
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
   * <p>The data for the AI Agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIAgentData">AWS
   * API Reference</a></p>
   */
  class AIAgentData
  {
  public:
    AWS_QCONNECT_API AIAgentData();
    AWS_QCONNECT_API AIAgentData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIAgentData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AI agent.</p>
     */
    inline const Aws::String& GetAiAgentArn() const{ return m_aiAgentArn; }
    inline bool AiAgentArnHasBeenSet() const { return m_aiAgentArnHasBeenSet; }
    inline void SetAiAgentArn(const Aws::String& value) { m_aiAgentArnHasBeenSet = true; m_aiAgentArn = value; }
    inline void SetAiAgentArn(Aws::String&& value) { m_aiAgentArnHasBeenSet = true; m_aiAgentArn = std::move(value); }
    inline void SetAiAgentArn(const char* value) { m_aiAgentArnHasBeenSet = true; m_aiAgentArn.assign(value); }
    inline AIAgentData& WithAiAgentArn(const Aws::String& value) { SetAiAgentArn(value); return *this;}
    inline AIAgentData& WithAiAgentArn(Aws::String&& value) { SetAiAgentArn(std::move(value)); return *this;}
    inline AIAgentData& WithAiAgentArn(const char* value) { SetAiAgentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the AI Agent.</p>
     */
    inline const Aws::String& GetAiAgentId() const{ return m_aiAgentId; }
    inline bool AiAgentIdHasBeenSet() const { return m_aiAgentIdHasBeenSet; }
    inline void SetAiAgentId(const Aws::String& value) { m_aiAgentIdHasBeenSet = true; m_aiAgentId = value; }
    inline void SetAiAgentId(Aws::String&& value) { m_aiAgentIdHasBeenSet = true; m_aiAgentId = std::move(value); }
    inline void SetAiAgentId(const char* value) { m_aiAgentIdHasBeenSet = true; m_aiAgentId.assign(value); }
    inline AIAgentData& WithAiAgentId(const Aws::String& value) { SetAiAgentId(value); return *this;}
    inline AIAgentData& WithAiAgentId(Aws::String&& value) { SetAiAgentId(std::move(value)); return *this;}
    inline AIAgentData& WithAiAgentId(const char* value) { SetAiAgentId(value); return *this;}
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
    inline AIAgentData& WithAssistantArn(const Aws::String& value) { SetAssistantArn(value); return *this;}
    inline AIAgentData& WithAssistantArn(Aws::String&& value) { SetAssistantArn(std::move(value)); return *this;}
    inline AIAgentData& WithAssistantArn(const char* value) { SetAssistantArn(value); return *this;}
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
    inline AIAgentData& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline AIAgentData& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline AIAgentData& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for the AI Agent.</p>
     */
    inline const AIAgentConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const AIAgentConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(AIAgentConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline AIAgentData& WithConfiguration(const AIAgentConfiguration& value) { SetConfiguration(value); return *this;}
    inline AIAgentData& WithConfiguration(AIAgentConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the AI Agent.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AIAgentData& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AIAgentData& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AIAgentData& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the AI Agent was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTime() const{ return m_modifiedTime; }
    inline bool ModifiedTimeHasBeenSet() const { return m_modifiedTimeHasBeenSet; }
    inline void SetModifiedTime(const Aws::Utils::DateTime& value) { m_modifiedTimeHasBeenSet = true; m_modifiedTime = value; }
    inline void SetModifiedTime(Aws::Utils::DateTime&& value) { m_modifiedTimeHasBeenSet = true; m_modifiedTime = std::move(value); }
    inline AIAgentData& WithModifiedTime(const Aws::Utils::DateTime& value) { SetModifiedTime(value); return *this;}
    inline AIAgentData& WithModifiedTime(Aws::Utils::DateTime&& value) { SetModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AI Agent.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AIAgentData& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AIAgentData& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AIAgentData& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the origin of the AI Agent. <code>SYSTEM</code> for a default AI
     * Agent created by Q in Connect or <code>CUSTOMER</code> for an AI Agent created
     * by calling AI Agent creation APIs. </p>
     */
    inline const Origin& GetOrigin() const{ return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(const Origin& value) { m_originHasBeenSet = true; m_origin = value; }
    inline void SetOrigin(Origin&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }
    inline AIAgentData& WithOrigin(const Origin& value) { SetOrigin(value); return *this;}
    inline AIAgentData& WithOrigin(Origin&& value) { SetOrigin(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the AI Agent.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AIAgentData& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline AIAgentData& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline AIAgentData& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline AIAgentData& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline AIAgentData& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline AIAgentData& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline AIAgentData& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline AIAgentData& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline AIAgentData& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline AIAgentData& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline AIAgentData& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the AI Agent.</p>
     */
    inline const AIAgentType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AIAgentType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AIAgentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline AIAgentData& WithType(const AIAgentType& value) { SetType(value); return *this;}
    inline AIAgentData& WithType(AIAgentType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility status of the AI Agent.</p>
     */
    inline const VisibilityStatus& GetVisibilityStatus() const{ return m_visibilityStatus; }
    inline bool VisibilityStatusHasBeenSet() const { return m_visibilityStatusHasBeenSet; }
    inline void SetVisibilityStatus(const VisibilityStatus& value) { m_visibilityStatusHasBeenSet = true; m_visibilityStatus = value; }
    inline void SetVisibilityStatus(VisibilityStatus&& value) { m_visibilityStatusHasBeenSet = true; m_visibilityStatus = std::move(value); }
    inline AIAgentData& WithVisibilityStatus(const VisibilityStatus& value) { SetVisibilityStatus(value); return *this;}
    inline AIAgentData& WithVisibilityStatus(VisibilityStatus&& value) { SetVisibilityStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_aiAgentArn;
    bool m_aiAgentArnHasBeenSet = false;

    Aws::String m_aiAgentId;
    bool m_aiAgentIdHasBeenSet = false;

    Aws::String m_assistantArn;
    bool m_assistantArnHasBeenSet = false;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    AIAgentConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

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

    AIAgentType m_type;
    bool m_typeHasBeenSet = false;

    VisibilityStatus m_visibilityStatus;
    bool m_visibilityStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
