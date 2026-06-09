/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/Assets.h>
#include <aws/securityagent/model/CloudWatchLog.h>
#include <aws/securityagent/model/CodeRemediationStrategy.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Represents a code review configuration that defines the parameters for
 * automated security-focused code analysis, including target assets and logging
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CodeReview">AWS
 * API Reference</a></p>
 */
class CodeReview {
 public:
  AWS_SECURITYAGENT_API CodeReview() = default;
  AWS_SECURITYAGENT_API CodeReview(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API CodeReview& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the code review.</p>
   */
  inline const Aws::String& GetCodeReviewId() const { return m_codeReviewId; }
  inline bool CodeReviewIdHasBeenSet() const { return m_codeReviewIdHasBeenSet; }
  template <typename CodeReviewIdT = Aws::String>
  void SetCodeReviewId(CodeReviewIdT&& value) {
    m_codeReviewIdHasBeenSet = true;
    m_codeReviewId = std::forward<CodeReviewIdT>(value);
  }
  template <typename CodeReviewIdT = Aws::String>
  CodeReview& WithCodeReviewId(CodeReviewIdT&& value) {
    SetCodeReviewId(std::forward<CodeReviewIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agent space that contains the code review.</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  CodeReview& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the code review.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  CodeReview& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The assets included in the code review.</p>
   */
  inline const Assets& GetAssets() const { return m_assets; }
  inline bool AssetsHasBeenSet() const { return m_assetsHasBeenSet; }
  template <typename AssetsT = Assets>
  void SetAssets(AssetsT&& value) {
    m_assetsHasBeenSet = true;
    m_assets = std::forward<AssetsT>(value);
  }
  template <typename AssetsT = Assets>
  CodeReview& WithAssets(AssetsT&& value) {
    SetAssets(std::forward<AssetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM service role used for the code review.</p>
   */
  inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
  inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
  template <typename ServiceRoleT = Aws::String>
  void SetServiceRole(ServiceRoleT&& value) {
    m_serviceRoleHasBeenSet = true;
    m_serviceRole = std::forward<ServiceRoleT>(value);
  }
  template <typename ServiceRoleT = Aws::String>
  CodeReview& WithServiceRole(ServiceRoleT&& value) {
    SetServiceRole(std::forward<ServiceRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CloudWatch Logs configuration for the code review.</p>
   */
  inline const CloudWatchLog& GetLogConfig() const { return m_logConfig; }
  inline bool LogConfigHasBeenSet() const { return m_logConfigHasBeenSet; }
  template <typename LogConfigT = CloudWatchLog>
  void SetLogConfig(LogConfigT&& value) {
    m_logConfigHasBeenSet = true;
    m_logConfig = std::forward<LogConfigT>(value);
  }
  template <typename LogConfigT = CloudWatchLog>
  CodeReview& WithLogConfig(LogConfigT&& value) {
    SetLogConfig(std::forward<LogConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The code remediation strategy for the code review.</p>
   */
  inline CodeRemediationStrategy GetCodeRemediationStrategy() const { return m_codeRemediationStrategy; }
  inline bool CodeRemediationStrategyHasBeenSet() const { return m_codeRemediationStrategyHasBeenSet; }
  inline void SetCodeRemediationStrategy(CodeRemediationStrategy value) {
    m_codeRemediationStrategyHasBeenSet = true;
    m_codeRemediationStrategy = value;
  }
  inline CodeReview& WithCodeRemediationStrategy(CodeRemediationStrategy value) {
    SetCodeRemediationStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the code review was created, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CodeReview& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the code review was last updated, in UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CodeReview& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_codeReviewId;

  Aws::String m_agentSpaceId;

  Aws::String m_title;

  Assets m_assets;

  Aws::String m_serviceRole;

  CloudWatchLog m_logConfig;

  CodeRemediationStrategy m_codeRemediationStrategy{CodeRemediationStrategy::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_codeReviewIdHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_assetsHasBeenSet = false;
  bool m_serviceRoleHasBeenSet = false;
  bool m_logConfigHasBeenSet = false;
  bool m_codeRemediationStrategyHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
