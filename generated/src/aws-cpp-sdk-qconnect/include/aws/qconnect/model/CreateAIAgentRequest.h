/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AIAgentConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/AIAgentType.h>
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
  class CreateAIAgentRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API CreateAIAgentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAIAgent"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


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
    inline CreateAIAgentRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline CreateAIAgentRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline CreateAIAgentRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
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
    inline CreateAIAgentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateAIAgentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateAIAgentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the AI Agent.</p>
     */
    inline const AIAgentConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const AIAgentConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(AIAgentConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline CreateAIAgentRequest& WithConfiguration(const AIAgentConfiguration& value) { SetConfiguration(value); return *this;}
    inline CreateAIAgentRequest& WithConfiguration(AIAgentConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
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
    inline CreateAIAgentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateAIAgentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateAIAgentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline CreateAIAgentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateAIAgentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateAIAgentRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateAIAgentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateAIAgentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateAIAgentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateAIAgentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAIAgentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAIAgentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateAIAgentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAIAgentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAIAgentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the AI Agent.</p>
     */
    inline const AIAgentType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AIAgentType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AIAgentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateAIAgentRequest& WithType(const AIAgentType& value) { SetType(value); return *this;}
    inline CreateAIAgentRequest& WithType(AIAgentType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility status of the AI Agent.</p>
     */
    inline const VisibilityStatus& GetVisibilityStatus() const{ return m_visibilityStatus; }
    inline bool VisibilityStatusHasBeenSet() const { return m_visibilityStatusHasBeenSet; }
    inline void SetVisibilityStatus(const VisibilityStatus& value) { m_visibilityStatusHasBeenSet = true; m_visibilityStatus = value; }
    inline void SetVisibilityStatus(VisibilityStatus&& value) { m_visibilityStatusHasBeenSet = true; m_visibilityStatus = std::move(value); }
    inline CreateAIAgentRequest& WithVisibilityStatus(const VisibilityStatus& value) { SetVisibilityStatus(value); return *this;}
    inline CreateAIAgentRequest& WithVisibilityStatus(VisibilityStatus&& value) { SetVisibilityStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    AIAgentConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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
