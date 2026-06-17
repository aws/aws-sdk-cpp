/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/Assets.h>
#include <aws/securityagent/model/CloudWatchLog.h>
#include <aws/securityagent/model/DocumentInfo.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {
/**
 * <p>Output for the CreateThreatModel operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CreateThreatModelOutput">AWS
 * API Reference</a></p>
 */
class CreateThreatModelResult {
 public:
  AWS_SECURITYAGENT_API CreateThreatModelResult() = default;
  AWS_SECURITYAGENT_API CreateThreatModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API CreateThreatModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the created threat model.</p>
   */
  inline const Aws::String& GetThreatModelId() const { return m_threatModelId; }
  template <typename ThreatModelIdT = Aws::String>
  void SetThreatModelId(ThreatModelIdT&& value) {
    m_threatModelIdHasBeenSet = true;
    m_threatModelId = std::forward<ThreatModelIdT>(value);
  }
  template <typename ThreatModelIdT = Aws::String>
  CreateThreatModelResult& WithThreatModelId(ThreatModelIdT&& value) {
    SetThreatModelId(std::forward<ThreatModelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the threat model.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  CreateThreatModelResult& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agent space that contains the threat model.</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  CreateThreatModelResult& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the application or system being threat modeled.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateThreatModelResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The assets included in the threat model.</p>
   */
  inline const Assets& GetAssets() const { return m_assets; }
  template <typename AssetsT = Assets>
  void SetAssets(AssetsT&& value) {
    m_assetsHasBeenSet = true;
    m_assets = std::forward<AssetsT>(value);
  }
  template <typename AssetsT = Assets>
  CreateThreatModelResult& WithAssets(AssetsT&& value) {
    SetAssets(std::forward<AssetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scoped documents for the agent to focus on during threat modeling.</p>
   */
  inline const Aws::Vector<DocumentInfo>& GetScopeDocs() const { return m_scopeDocs; }
  template <typename ScopeDocsT = Aws::Vector<DocumentInfo>>
  void SetScopeDocs(ScopeDocsT&& value) {
    m_scopeDocsHasBeenSet = true;
    m_scopeDocs = std::forward<ScopeDocsT>(value);
  }
  template <typename ScopeDocsT = Aws::Vector<DocumentInfo>>
  CreateThreatModelResult& WithScopeDocs(ScopeDocsT&& value) {
    SetScopeDocs(std::forward<ScopeDocsT>(value));
    return *this;
  }
  template <typename ScopeDocsT = DocumentInfo>
  CreateThreatModelResult& AddScopeDocs(ScopeDocsT&& value) {
    m_scopeDocsHasBeenSet = true;
    m_scopeDocs.emplace_back(std::forward<ScopeDocsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM service role used for the threat model.</p>
   */
  inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
  template <typename ServiceRoleT = Aws::String>
  void SetServiceRole(ServiceRoleT&& value) {
    m_serviceRoleHasBeenSet = true;
    m_serviceRole = std::forward<ServiceRoleT>(value);
  }
  template <typename ServiceRoleT = Aws::String>
  CreateThreatModelResult& WithServiceRole(ServiceRoleT&& value) {
    SetServiceRole(std::forward<ServiceRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CloudWatch Logs configuration for the threat model.</p>
   */
  inline const CloudWatchLog& GetLogConfig() const { return m_logConfig; }
  template <typename LogConfigT = CloudWatchLog>
  void SetLogConfig(LogConfigT&& value) {
    m_logConfigHasBeenSet = true;
    m_logConfig = std::forward<LogConfigT>(value);
  }
  template <typename LogConfigT = CloudWatchLog>
  CreateThreatModelResult& WithLogConfig(LogConfigT&& value) {
    SetLogConfig(std::forward<LogConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the threat model was created, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateThreatModelResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the threat model was last updated, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CreateThreatModelResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateThreatModelResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_threatModelId;

  Aws::String m_title;

  Aws::String m_agentSpaceId;

  Aws::String m_description;

  Assets m_assets;

  Aws::Vector<DocumentInfo> m_scopeDocs;

  Aws::String m_serviceRole;

  CloudWatchLog m_logConfig;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_threatModelIdHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_assetsHasBeenSet = false;
  bool m_scopeDocsHasBeenSet = false;
  bool m_serviceRoleHasBeenSet = false;
  bool m_logConfigHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
