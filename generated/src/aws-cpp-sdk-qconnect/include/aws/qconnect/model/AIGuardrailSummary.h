/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qconnect/model/Status.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>The summary of the AI Guardrail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIGuardrailSummary">AWS
   * API Reference</a></p>
   */
  class AIGuardrailSummary
  {
  public:
    AWS_QCONNECT_API AIGuardrailSummary();
    AWS_QCONNECT_API AIGuardrailSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIGuardrailSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AI Guardrail.</p>
     */
    inline const Aws::String& GetAiGuardrailArn() const{ return m_aiGuardrailArn; }
    inline bool AiGuardrailArnHasBeenSet() const { return m_aiGuardrailArnHasBeenSet; }
    inline void SetAiGuardrailArn(const Aws::String& value) { m_aiGuardrailArnHasBeenSet = true; m_aiGuardrailArn = value; }
    inline void SetAiGuardrailArn(Aws::String&& value) { m_aiGuardrailArnHasBeenSet = true; m_aiGuardrailArn = std::move(value); }
    inline void SetAiGuardrailArn(const char* value) { m_aiGuardrailArnHasBeenSet = true; m_aiGuardrailArn.assign(value); }
    inline AIGuardrailSummary& WithAiGuardrailArn(const Aws::String& value) { SetAiGuardrailArn(value); return *this;}
    inline AIGuardrailSummary& WithAiGuardrailArn(Aws::String&& value) { SetAiGuardrailArn(std::move(value)); return *this;}
    inline AIGuardrailSummary& WithAiGuardrailArn(const char* value) { SetAiGuardrailArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect AI Guardrail.</p>
     */
    inline const Aws::String& GetAiGuardrailId() const{ return m_aiGuardrailId; }
    inline bool AiGuardrailIdHasBeenSet() const { return m_aiGuardrailIdHasBeenSet; }
    inline void SetAiGuardrailId(const Aws::String& value) { m_aiGuardrailIdHasBeenSet = true; m_aiGuardrailId = value; }
    inline void SetAiGuardrailId(Aws::String&& value) { m_aiGuardrailIdHasBeenSet = true; m_aiGuardrailId = std::move(value); }
    inline void SetAiGuardrailId(const char* value) { m_aiGuardrailIdHasBeenSet = true; m_aiGuardrailId.assign(value); }
    inline AIGuardrailSummary& WithAiGuardrailId(const Aws::String& value) { SetAiGuardrailId(value); return *this;}
    inline AIGuardrailSummary& WithAiGuardrailId(Aws::String&& value) { SetAiGuardrailId(std::move(value)); return *this;}
    inline AIGuardrailSummary& WithAiGuardrailId(const char* value) { SetAiGuardrailId(value); return *this;}
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
    inline AIGuardrailSummary& WithAssistantArn(const Aws::String& value) { SetAssistantArn(value); return *this;}
    inline AIGuardrailSummary& WithAssistantArn(Aws::String&& value) { SetAssistantArn(std::move(value)); return *this;}
    inline AIGuardrailSummary& WithAssistantArn(const char* value) { SetAssistantArn(value); return *this;}
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
    inline AIGuardrailSummary& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline AIGuardrailSummary& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline AIGuardrailSummary& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the AI Guardrail.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AIGuardrailSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AIGuardrailSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AIGuardrailSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the AI Guardrail was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTime() const{ return m_modifiedTime; }
    inline bool ModifiedTimeHasBeenSet() const { return m_modifiedTimeHasBeenSet; }
    inline void SetModifiedTime(const Aws::Utils::DateTime& value) { m_modifiedTimeHasBeenSet = true; m_modifiedTime = value; }
    inline void SetModifiedTime(Aws::Utils::DateTime&& value) { m_modifiedTimeHasBeenSet = true; m_modifiedTime = std::move(value); }
    inline AIGuardrailSummary& WithModifiedTime(const Aws::Utils::DateTime& value) { SetModifiedTime(value); return *this;}
    inline AIGuardrailSummary& WithModifiedTime(Aws::Utils::DateTime&& value) { SetModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AI Guardrail.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AIGuardrailSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AIGuardrailSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AIGuardrailSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the AI Guardrail.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AIGuardrailSummary& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline AIGuardrailSummary& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline AIGuardrailSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline AIGuardrailSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline AIGuardrailSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline AIGuardrailSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline AIGuardrailSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline AIGuardrailSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline AIGuardrailSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline AIGuardrailSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline AIGuardrailSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The visibility status of the AI Guardrail.</p>
     */
    inline const VisibilityStatus& GetVisibilityStatus() const{ return m_visibilityStatus; }
    inline bool VisibilityStatusHasBeenSet() const { return m_visibilityStatusHasBeenSet; }
    inline void SetVisibilityStatus(const VisibilityStatus& value) { m_visibilityStatusHasBeenSet = true; m_visibilityStatus = value; }
    inline void SetVisibilityStatus(VisibilityStatus&& value) { m_visibilityStatusHasBeenSet = true; m_visibilityStatus = std::move(value); }
    inline AIGuardrailSummary& WithVisibilityStatus(const VisibilityStatus& value) { SetVisibilityStatus(value); return *this;}
    inline AIGuardrailSummary& WithVisibilityStatus(VisibilityStatus&& value) { SetVisibilityStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_aiGuardrailArn;
    bool m_aiGuardrailArnHasBeenSet = false;

    Aws::String m_aiGuardrailId;
    bool m_aiGuardrailIdHasBeenSet = false;

    Aws::String m_assistantArn;
    bool m_assistantArnHasBeenSet = false;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedTime;
    bool m_modifiedTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    VisibilityStatus m_visibilityStatus;
    bool m_visibilityStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
