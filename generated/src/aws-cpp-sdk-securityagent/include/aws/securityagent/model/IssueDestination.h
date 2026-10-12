/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

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
 * <p>The destination for filing findings as issues in an integrated issue
 * tracker.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/IssueDestination">AWS
 * API Reference</a></p>
 */
class IssueDestination {
 public:
  AWS_SECURITYAGENT_API IssueDestination() = default;
  AWS_SECURITYAGENT_API IssueDestination(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API IssueDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The integration identifier for the issue-tracker provider.</p>
   */
  inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
  inline bool IntegrationIdHasBeenSet() const { return m_integrationIdHasBeenSet; }
  template <typename IntegrationIdT = Aws::String>
  void SetIntegrationId(IntegrationIdT&& value) {
    m_integrationIdHasBeenSet = true;
    m_integrationId = std::forward<IntegrationIdT>(value);
  }
  template <typename IntegrationIdT = Aws::String>
  IssueDestination& WithIntegrationId(IntegrationIdT&& value) {
    SetIntegrationId(std::forward<IntegrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the project the issues are filed under.</p>
   */
  inline const Aws::String& GetProjectKey() const { return m_projectKey; }
  inline bool ProjectKeyHasBeenSet() const { return m_projectKeyHasBeenSet; }
  template <typename ProjectKeyT = Aws::String>
  void SetProjectKey(ProjectKeyT&& value) {
    m_projectKeyHasBeenSet = true;
    m_projectKey = std::forward<ProjectKeyT>(value);
  }
  template <typename ProjectKeyT = Aws::String>
  IssueDestination& WithProjectKey(ProjectKeyT&& value) {
    SetProjectKey(std::forward<ProjectKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_integrationId;

  Aws::String m_projectKey;
  bool m_integrationIdHasBeenSet = false;
  bool m_projectKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
