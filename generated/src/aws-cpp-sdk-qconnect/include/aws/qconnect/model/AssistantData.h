/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AIAgentConfigurationData.h>
#include <aws/qconnect/model/AIAgentType.h>
#include <aws/qconnect/model/AssistantCapabilityConfiguration.h>
#include <aws/qconnect/model/AssistantGlobalResiliencyStatus.h>
#include <aws/qconnect/model/AssistantIntegrationConfiguration.h>
#include <aws/qconnect/model/AssistantStatus.h>
#include <aws/qconnect/model/AssistantType.h>
#include <aws/qconnect/model/OrchestratorConfigurationEntry.h>
#include <aws/qconnect/model/ServerSideEncryptionConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>The assistant data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AssistantData">AWS
 * API Reference</a></p>
 */
class AssistantData {
 public:
  AWS_QCONNECT_API AssistantData() = default;
  AWS_QCONNECT_API AssistantData(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API AssistantData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the Amazon Q in Connect assistant.</p>
   */
  inline const Aws::String& GetAssistantId() const { return m_assistantId; }
  inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
  template <typename AssistantIdT = Aws::String>
  void SetAssistantId(AssistantIdT&& value) {
    m_assistantIdHasBeenSet = true;
    m_assistantId = std::forward<AssistantIdT>(value);
  }
  template <typename AssistantIdT = Aws::String>
  AssistantData& WithAssistantId(AssistantIdT&& value) {
    SetAssistantId(std::forward<AssistantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Q in Connect assistant.</p>
   */
  inline const Aws::String& GetAssistantArn() const { return m_assistantArn; }
  inline bool AssistantArnHasBeenSet() const { return m_assistantArnHasBeenSet; }
  template <typename AssistantArnT = Aws::String>
  void SetAssistantArn(AssistantArnT&& value) {
    m_assistantArnHasBeenSet = true;
    m_assistantArn = std::forward<AssistantArnT>(value);
  }
  template <typename AssistantArnT = Aws::String>
  AssistantData& WithAssistantArn(AssistantArnT&& value) {
    SetAssistantArn(std::forward<AssistantArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AssistantData& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of assistant.</p>
   */
  inline AssistantType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(AssistantType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AssistantData& WithType(AssistantType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the assistant.</p>
   */
  inline AssistantStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AssistantStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AssistantData& WithStatus(AssistantStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  AssistantData& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags used to organize, track, or control access for this resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  AssistantData& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  AssistantData& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
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
  inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const {
    return m_serverSideEncryptionConfiguration;
  }
  inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }
  template <typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
  void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) {
    m_serverSideEncryptionConfigurationHasBeenSet = true;
    m_serverSideEncryptionConfiguration = std::forward<ServerSideEncryptionConfigurationT>(value);
  }
  template <typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
  AssistantData& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) {
    SetServerSideEncryptionConfiguration(std::forward<ServerSideEncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration information for the Amazon Q in Connect assistant
   * integration.</p>
   */
  inline const AssistantIntegrationConfiguration& GetIntegrationConfiguration() const { return m_integrationConfiguration; }
  inline bool IntegrationConfigurationHasBeenSet() const { return m_integrationConfigurationHasBeenSet; }
  template <typename IntegrationConfigurationT = AssistantIntegrationConfiguration>
  void SetIntegrationConfiguration(IntegrationConfigurationT&& value) {
    m_integrationConfigurationHasBeenSet = true;
    m_integrationConfiguration = std::forward<IntegrationConfigurationT>(value);
  }
  template <typename IntegrationConfigurationT = AssistantIntegrationConfiguration>
  AssistantData& WithIntegrationConfiguration(IntegrationConfigurationT&& value) {
    SetIntegrationConfiguration(std::forward<IntegrationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration information for the Amazon Q in Connect assistant
   * capability. </p>
   */
  inline const AssistantCapabilityConfiguration& GetCapabilityConfiguration() const { return m_capabilityConfiguration; }
  inline bool CapabilityConfigurationHasBeenSet() const { return m_capabilityConfigurationHasBeenSet; }
  template <typename CapabilityConfigurationT = AssistantCapabilityConfiguration>
  void SetCapabilityConfiguration(CapabilityConfigurationT&& value) {
    m_capabilityConfigurationHasBeenSet = true;
    m_capabilityConfiguration = std::forward<CapabilityConfigurationT>(value);
  }
  template <typename CapabilityConfigurationT = AssistantCapabilityConfiguration>
  AssistantData& WithCapabilityConfiguration(CapabilityConfigurationT&& value) {
    SetCapabilityConfiguration(std::forward<CapabilityConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the AI Agents (mapped by AI Agent Type to AI Agent
   * version) that is set on the Amazon Q in Connect Assistant.</p>
   */
  inline const Aws::Map<AIAgentType, AIAgentConfigurationData>& GetAiAgentConfiguration() const { return m_aiAgentConfiguration; }
  inline bool AiAgentConfigurationHasBeenSet() const { return m_aiAgentConfigurationHasBeenSet; }
  template <typename AiAgentConfigurationT = Aws::Map<AIAgentType, AIAgentConfigurationData>>
  void SetAiAgentConfiguration(AiAgentConfigurationT&& value) {
    m_aiAgentConfigurationHasBeenSet = true;
    m_aiAgentConfiguration = std::forward<AiAgentConfigurationT>(value);
  }
  template <typename AiAgentConfigurationT = Aws::Map<AIAgentType, AIAgentConfigurationData>>
  AssistantData& WithAiAgentConfiguration(AiAgentConfigurationT&& value) {
    SetAiAgentConfiguration(std::forward<AiAgentConfigurationT>(value));
    return *this;
  }
  inline AssistantData& AddAiAgentConfiguration(AIAgentType key, AIAgentConfigurationData value) {
    m_aiAgentConfigurationHasBeenSet = true;
    m_aiAgentConfiguration.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of orchestrator configurations for the assistant.</p>
   */
  inline const Aws::Vector<OrchestratorConfigurationEntry>& GetOrchestratorConfigurationList() const {
    return m_orchestratorConfigurationList;
  }
  inline bool OrchestratorConfigurationListHasBeenSet() const { return m_orchestratorConfigurationListHasBeenSet; }
  template <typename OrchestratorConfigurationListT = Aws::Vector<OrchestratorConfigurationEntry>>
  void SetOrchestratorConfigurationList(OrchestratorConfigurationListT&& value) {
    m_orchestratorConfigurationListHasBeenSet = true;
    m_orchestratorConfigurationList = std::forward<OrchestratorConfigurationListT>(value);
  }
  template <typename OrchestratorConfigurationListT = Aws::Vector<OrchestratorConfigurationEntry>>
  AssistantData& WithOrchestratorConfigurationList(OrchestratorConfigurationListT&& value) {
    SetOrchestratorConfigurationList(std::forward<OrchestratorConfigurationListT>(value));
    return *this;
  }
  template <typename OrchestratorConfigurationListT = OrchestratorConfigurationEntry>
  AssistantData& AddOrchestratorConfigurationList(OrchestratorConfigurationListT&& value) {
    m_orchestratorConfigurationListHasBeenSet = true;
    m_orchestratorConfigurationList.emplace_back(std::forward<OrchestratorConfigurationListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the assistant was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  AssistantData& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region where the assistant was last modified.</p>
   */
  inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
  inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
  template <typename LastModifiedRegionT = Aws::String>
  void SetLastModifiedRegion(LastModifiedRegionT&& value) {
    m_lastModifiedRegionHasBeenSet = true;
    m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value);
  }
  template <typename LastModifiedRegionT = Aws::String>
  AssistantData& WithLastModifiedRegion(LastModifiedRegionT&& value) {
    SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether Amazon Connect Global Resiliency replicates the Connect instance this
   * assistant is associated with, and so whether resources created under this
   * assistant must satisfy the replication group's model parity constraint. Answered
   * from the ACGR side per request rather than stored, so it reflects the customer's
   * replication state now.</p> <p>Absent means &quot;not applicable or not
   * known&quot; - never read an absent field as DISABLED. It is absent on the
   * operations that return an assistant which is not yet associated with a Connect
   * instance, because replication cannot be established until it is.</p>
   */
  inline AssistantGlobalResiliencyStatus GetAssistantGlobalResiliencyStatus() const { return m_assistantGlobalResiliencyStatus; }
  inline bool AssistantGlobalResiliencyStatusHasBeenSet() const { return m_assistantGlobalResiliencyStatusHasBeenSet; }
  inline void SetAssistantGlobalResiliencyStatus(AssistantGlobalResiliencyStatus value) {
    m_assistantGlobalResiliencyStatusHasBeenSet = true;
    m_assistantGlobalResiliencyStatus = value;
  }
  inline AssistantData& WithAssistantGlobalResiliencyStatus(AssistantGlobalResiliencyStatus value) {
    SetAssistantGlobalResiliencyStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_assistantId;

  Aws::String m_assistantArn;

  Aws::String m_name;

  AssistantType m_type{AssistantType::NOT_SET};

  AssistantStatus m_status{AssistantStatus::NOT_SET};

  Aws::String m_description;

  Aws::Map<Aws::String, Aws::String> m_tags;

  ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;

  AssistantIntegrationConfiguration m_integrationConfiguration;

  AssistantCapabilityConfiguration m_capabilityConfiguration;

  Aws::Map<AIAgentType, AIAgentConfigurationData> m_aiAgentConfiguration;

  Aws::Vector<OrchestratorConfigurationEntry> m_orchestratorConfigurationList;

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_lastModifiedRegion;

  AssistantGlobalResiliencyStatus m_assistantGlobalResiliencyStatus{AssistantGlobalResiliencyStatus::NOT_SET};
  bool m_assistantIdHasBeenSet = false;
  bool m_assistantArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_serverSideEncryptionConfigurationHasBeenSet = false;
  bool m_integrationConfigurationHasBeenSet = false;
  bool m_capabilityConfigurationHasBeenSet = false;
  bool m_aiAgentConfigurationHasBeenSet = false;
  bool m_orchestratorConfigurationListHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_lastModifiedRegionHasBeenSet = false;
  bool m_assistantGlobalResiliencyStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
