/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AssistantType.h>
#include <aws/qconnect/model/AssistantStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/ServerSideEncryptionConfiguration.h>
#include <aws/qconnect/model/AssistantIntegrationConfiguration.h>
#include <aws/qconnect/model/AssistantCapabilityConfiguration.h>
#include <aws/qconnect/model/AIAgentType.h>
#include <aws/qconnect/model/AIAgentConfigurationData.h>
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
   * <p>Summary information about the assistant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AssistantSummary">AWS
   * API Reference</a></p>
   */
  class AssistantSummary
  {
  public:
    AWS_QCONNECT_API AssistantSummary() = default;
    AWS_QCONNECT_API AssistantSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AssistantSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect assistant.</p>
     */
    inline const Aws::String& GetAssistantId() const { return m_assistantId; }
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
    template<typename AssistantIdT = Aws::String>
    void SetAssistantId(AssistantIdT&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::forward<AssistantIdT>(value); }
    template<typename AssistantIdT = Aws::String>
    AssistantSummary& WithAssistantId(AssistantIdT&& value) { SetAssistantId(std::forward<AssistantIdT>(value)); return *this;}
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
    AssistantSummary& WithAssistantArn(AssistantArnT&& value) { SetAssistantArn(std::forward<AssistantArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the assistant.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssistantSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the assistant.</p>
     */
    inline AssistantType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AssistantType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AssistantSummary& WithType(AssistantType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the assistant.</p>
     */
    inline AssistantStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AssistantStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AssistantSummary& WithStatus(AssistantStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the assistant.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AssistantSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    AssistantSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    AssistantSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The configuration information for the customer managed key used for
     * encryption. </p> <p>This KMS key must have a policy that allows
     * <code>kms:CreateGrant</code>, <code>kms:DescribeKey</code>,
     * <code>kms:Decrypt</code>, and <code>kms:GenerateDataKey*</code> permissions to
     * the IAM identity using the key to invoke Amazon Q in Connect. To use Amazon Q in
     * Connect with chat, the key policy must also allow <code>kms:Decrypt</code>,
     * <code>kms:GenerateDataKey*</code>, and <code>kms:DescribeKey</code> permissions
     * to the <code>connect.amazonaws.com</code> service principal. </p> <p>For more
     * information about setting up a customer managed key for Amazon Q in Connect, see
     * <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/enable-q.html">Enable
     * Amazon Q in Connect for your instance</a>.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const { return m_serverSideEncryptionConfiguration; }
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }
    template<typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
    void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::forward<ServerSideEncryptionConfigurationT>(value); }
    template<typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
    AssistantSummary& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) { SetServerSideEncryptionConfiguration(std::forward<ServerSideEncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for the Amazon Q in Connect assistant
     * integration.</p>
     */
    inline const AssistantIntegrationConfiguration& GetIntegrationConfiguration() const { return m_integrationConfiguration; }
    inline bool IntegrationConfigurationHasBeenSet() const { return m_integrationConfigurationHasBeenSet; }
    template<typename IntegrationConfigurationT = AssistantIntegrationConfiguration>
    void SetIntegrationConfiguration(IntegrationConfigurationT&& value) { m_integrationConfigurationHasBeenSet = true; m_integrationConfiguration = std::forward<IntegrationConfigurationT>(value); }
    template<typename IntegrationConfigurationT = AssistantIntegrationConfiguration>
    AssistantSummary& WithIntegrationConfiguration(IntegrationConfigurationT&& value) { SetIntegrationConfiguration(std::forward<IntegrationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for the Amazon Q in Connect assistant
     * capability. </p>
     */
    inline const AssistantCapabilityConfiguration& GetCapabilityConfiguration() const { return m_capabilityConfiguration; }
    inline bool CapabilityConfigurationHasBeenSet() const { return m_capabilityConfigurationHasBeenSet; }
    template<typename CapabilityConfigurationT = AssistantCapabilityConfiguration>
    void SetCapabilityConfiguration(CapabilityConfigurationT&& value) { m_capabilityConfigurationHasBeenSet = true; m_capabilityConfiguration = std::forward<CapabilityConfigurationT>(value); }
    template<typename CapabilityConfigurationT = AssistantCapabilityConfiguration>
    AssistantSummary& WithCapabilityConfiguration(CapabilityConfigurationT&& value) { SetCapabilityConfiguration(std::forward<CapabilityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the AI Agents (mapped by AI Agent Type to AI Agent
     * version) that is set on the Amazon Q in Connect Assistant.</p>
     */
    inline const Aws::Map<AIAgentType, AIAgentConfigurationData>& GetAiAgentConfiguration() const { return m_aiAgentConfiguration; }
    inline bool AiAgentConfigurationHasBeenSet() const { return m_aiAgentConfigurationHasBeenSet; }
    template<typename AiAgentConfigurationT = Aws::Map<AIAgentType, AIAgentConfigurationData>>
    void SetAiAgentConfiguration(AiAgentConfigurationT&& value) { m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration = std::forward<AiAgentConfigurationT>(value); }
    template<typename AiAgentConfigurationT = Aws::Map<AIAgentType, AIAgentConfigurationData>>
    AssistantSummary& WithAiAgentConfiguration(AiAgentConfigurationT&& value) { SetAiAgentConfiguration(std::forward<AiAgentConfigurationT>(value)); return *this;}
    inline AssistantSummary& AddAiAgentConfiguration(AIAgentType key, AIAgentConfigurationData value) {
      m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_assistantArn;
    bool m_assistantArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AssistantType m_type{AssistantType::NOT_SET};
    bool m_typeHasBeenSet = false;

    AssistantStatus m_status{AssistantStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet = false;

    AssistantIntegrationConfiguration m_integrationConfiguration;
    bool m_integrationConfigurationHasBeenSet = false;

    AssistantCapabilityConfiguration m_capabilityConfiguration;
    bool m_capabilityConfigurationHasBeenSet = false;

    Aws::Map<AIAgentType, AIAgentConfigurationData> m_aiAgentConfiguration;
    bool m_aiAgentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
