/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/Assets.h>
#include <aws/securityagent/model/CloudWatchLog.h>
#include <aws/securityagent/model/DocumentInfo.h>
#include <aws/securityagent/model/ReportDestination.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 * <p>Input for creating a new threat model.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CreateThreatModelInput">AWS
 * API Reference</a></p>
 */
class CreateThreatModelRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API CreateThreatModelRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateThreatModel"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The title of the threat model.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  CreateThreatModelRequest& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agent space to create the threat model in.</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  CreateThreatModelRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the application or system being threat modeled.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateThreatModelRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The assets to include in the threat model.</p>
   */
  inline const Assets& GetAssets() const { return m_assets; }
  inline bool AssetsHasBeenSet() const { return m_assetsHasBeenSet; }
  template <typename AssetsT = Assets>
  void SetAssets(AssetsT&& value) {
    m_assetsHasBeenSet = true;
    m_assets = std::forward<AssetsT>(value);
  }
  template <typename AssetsT = Assets>
  CreateThreatModelRequest& WithAssets(AssetsT&& value) {
    SetAssets(std::forward<AssetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scoped documents for the agent to focus on during threat modeling.</p>
   */
  inline const Aws::Vector<DocumentInfo>& GetScopeDocs() const { return m_scopeDocs; }
  inline bool ScopeDocsHasBeenSet() const { return m_scopeDocsHasBeenSet; }
  template <typename ScopeDocsT = Aws::Vector<DocumentInfo>>
  void SetScopeDocs(ScopeDocsT&& value) {
    m_scopeDocsHasBeenSet = true;
    m_scopeDocs = std::forward<ScopeDocsT>(value);
  }
  template <typename ScopeDocsT = Aws::Vector<DocumentInfo>>
  CreateThreatModelRequest& WithScopeDocs(ScopeDocsT&& value) {
    SetScopeDocs(std::forward<ScopeDocsT>(value));
    return *this;
  }
  template <typename ScopeDocsT = DocumentInfo>
  CreateThreatModelRequest& AddScopeDocs(ScopeDocsT&& value) {
    m_scopeDocsHasBeenSet = true;
    m_scopeDocs.emplace_back(std::forward<ScopeDocsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM service role to use for the threat model.</p>
   */
  inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
  inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
  template <typename ServiceRoleT = Aws::String>
  void SetServiceRole(ServiceRoleT&& value) {
    m_serviceRoleHasBeenSet = true;
    m_serviceRole = std::forward<ServiceRoleT>(value);
  }
  template <typename ServiceRoleT = Aws::String>
  CreateThreatModelRequest& WithServiceRole(ServiceRoleT&& value) {
    SetServiceRole(std::forward<ServiceRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CloudWatch Logs configuration for the threat model.</p>
   */
  inline const CloudWatchLog& GetLogConfig() const { return m_logConfig; }
  inline bool LogConfigHasBeenSet() const { return m_logConfigHasBeenSet; }
  template <typename LogConfigT = CloudWatchLog>
  void SetLogConfig(LogConfigT&& value) {
    m_logConfigHasBeenSet = true;
    m_logConfig = std::forward<LogConfigT>(value);
  }
  template <typename LogConfigT = CloudWatchLog>
  CreateThreatModelRequest& WithLogConfig(LogConfigT&& value) {
    SetLogConfig(std::forward<LogConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination for publishing scan reports to an integrated document
   * provider.</p>
   */
  inline const ReportDestination& GetReportDestination() const { return m_reportDestination; }
  inline bool ReportDestinationHasBeenSet() const { return m_reportDestinationHasBeenSet; }
  template <typename ReportDestinationT = ReportDestination>
  void SetReportDestination(ReportDestinationT&& value) {
    m_reportDestinationHasBeenSet = true;
    m_reportDestination = std::forward<ReportDestinationT>(value);
  }
  template <typename ReportDestinationT = ReportDestination>
  CreateThreatModelRequest& WithReportDestination(ReportDestinationT&& value) {
    SetReportDestination(std::forward<ReportDestinationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_title;

  Aws::String m_agentSpaceId;

  Aws::String m_description;

  Assets m_assets;

  Aws::Vector<DocumentInfo> m_scopeDocs;

  Aws::String m_serviceRole;

  CloudWatchLog m_logConfig;

  ReportDestination m_reportDestination;
  bool m_titleHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_assetsHasBeenSet = false;
  bool m_scopeDocsHasBeenSet = false;
  bool m_serviceRoleHasBeenSet = false;
  bool m_logConfigHasBeenSet = false;
  bool m_reportDestinationHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
