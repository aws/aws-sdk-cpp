/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/Assets.h>
#include <aws/securityagent/model/CloudWatchLog.h>
#include <aws/securityagent/model/CodeRemediationStrategy.h>
#include <aws/securityagent/model/ValidationMode.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 * <p>Input for creating a new code review.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CreateCodeReviewInput">AWS
 * API Reference</a></p>
 */
class CreateCodeReviewRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API CreateCodeReviewRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateCodeReview"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

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
  CreateCodeReviewRequest& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agent space to create the code review in.</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  CreateCodeReviewRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The assets to include in the code review, such as documents and source
   * code.</p>
   */
  inline const Assets& GetAssets() const { return m_assets; }
  inline bool AssetsHasBeenSet() const { return m_assetsHasBeenSet; }
  template <typename AssetsT = Assets>
  void SetAssets(AssetsT&& value) {
    m_assetsHasBeenSet = true;
    m_assets = std::forward<AssetsT>(value);
  }
  template <typename AssetsT = Assets>
  CreateCodeReviewRequest& WithAssets(AssetsT&& value) {
    SetAssets(std::forward<AssetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM service role to use for the code review.</p>
   */
  inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
  inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
  template <typename ServiceRoleT = Aws::String>
  void SetServiceRole(ServiceRoleT&& value) {
    m_serviceRoleHasBeenSet = true;
    m_serviceRole = std::forward<ServiceRoleT>(value);
  }
  template <typename ServiceRoleT = Aws::String>
  CreateCodeReviewRequest& WithServiceRole(ServiceRoleT&& value) {
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
  CreateCodeReviewRequest& WithLogConfig(LogConfigT&& value) {
    SetLogConfig(std::forward<LogConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The code remediation strategy for the code review. Valid values are AUTOMATIC
   * and DISABLED.</p>
   */
  inline CodeRemediationStrategy GetCodeRemediationStrategy() const { return m_codeRemediationStrategy; }
  inline bool CodeRemediationStrategyHasBeenSet() const { return m_codeRemediationStrategyHasBeenSet; }
  inline void SetCodeRemediationStrategy(CodeRemediationStrategy value) {
    m_codeRemediationStrategyHasBeenSet = true;
    m_codeRemediationStrategy = value;
  }
  inline CreateCodeReviewRequest& WithCodeRemediationStrategy(CodeRemediationStrategy value) {
    SetCodeRemediationStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The validation mode for the code review. Valid values are SIMULATED and
   * DISABLED.</p>
   */
  inline ValidationMode GetValidationMode() const { return m_validationMode; }
  inline bool ValidationModeHasBeenSet() const { return m_validationModeHasBeenSet; }
  inline void SetValidationMode(ValidationMode value) {
    m_validationModeHasBeenSet = true;
    m_validationMode = value;
  }
  inline CreateCodeReviewRequest& WithValidationMode(ValidationMode value) {
    SetValidationMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_title;

  Aws::String m_agentSpaceId;

  Assets m_assets;

  Aws::String m_serviceRole;

  CloudWatchLog m_logConfig;

  CodeRemediationStrategy m_codeRemediationStrategy{CodeRemediationStrategy::NOT_SET};

  ValidationMode m_validationMode{ValidationMode::NOT_SET};
  bool m_titleHasBeenSet = false;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_assetsHasBeenSet = false;
  bool m_serviceRoleHasBeenSet = false;
  bool m_logConfigHasBeenSet = false;
  bool m_codeRemediationStrategyHasBeenSet = false;
  bool m_validationModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
