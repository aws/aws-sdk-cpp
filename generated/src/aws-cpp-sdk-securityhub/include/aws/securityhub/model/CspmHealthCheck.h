/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/CspmConnectorStatus.h>
#include <aws/securityhub/model/HealthIssue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>Information about the operational status and health of a CSPM
 * connector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CspmHealthCheck">AWS
 * API Reference</a></p>
 */
class CspmHealthCheck {
 public:
  AWS_SECURITYHUB_API CspmHealthCheck() = default;
  AWS_SECURITYHUB_API CspmHealthCheck(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API CspmHealthCheck& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The connectivity status of the connector.</p>
   */
  inline CspmConnectorStatus GetConnectorStatus() const { return m_connectorStatus; }
  inline bool ConnectorStatusHasBeenSet() const { return m_connectorStatusHasBeenSet; }
  inline void SetConnectorStatus(CspmConnectorStatus value) {
    m_connectorStatusHasBeenSet = true;
    m_connectorStatus = value;
  }
  inline CspmHealthCheck& WithConnectorStatus(CspmConnectorStatus value) {
    SetConnectorStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message describing the reason for the current connector status.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  CspmHealthCheck& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ISO 8601 UTC timestamp indicating when the health status was last
   * checked.</p>
   */
  inline const Aws::Utils::DateTime& GetLastCheckedAt() const { return m_lastCheckedAt; }
  inline bool LastCheckedAtHasBeenSet() const { return m_lastCheckedAtHasBeenSet; }
  template <typename LastCheckedAtT = Aws::Utils::DateTime>
  void SetLastCheckedAt(LastCheckedAtT&& value) {
    m_lastCheckedAtHasBeenSet = true;
    m_lastCheckedAt = std::forward<LastCheckedAtT>(value);
  }
  template <typename LastCheckedAtT = Aws::Utils::DateTime>
  CspmHealthCheck& WithLastCheckedAt(LastCheckedAtT&& value) {
    SetLastCheckedAt(std::forward<LastCheckedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of health issues associated with the connector.</p>
   */
  inline const Aws::Vector<HealthIssue>& GetIssues() const { return m_issues; }
  inline bool IssuesHasBeenSet() const { return m_issuesHasBeenSet; }
  template <typename IssuesT = Aws::Vector<HealthIssue>>
  void SetIssues(IssuesT&& value) {
    m_issuesHasBeenSet = true;
    m_issues = std::forward<IssuesT>(value);
  }
  template <typename IssuesT = Aws::Vector<HealthIssue>>
  CspmHealthCheck& WithIssues(IssuesT&& value) {
    SetIssues(std::forward<IssuesT>(value));
    return *this;
  }
  template <typename IssuesT = HealthIssue>
  CspmHealthCheck& AddIssues(IssuesT&& value) {
    m_issuesHasBeenSet = true;
    m_issues.emplace_back(std::forward<IssuesT>(value));
    return *this;
  }
  ///@}
 private:
  CspmConnectorStatus m_connectorStatus{CspmConnectorStatus::NOT_SET};

  Aws::String m_message;

  Aws::Utils::DateTime m_lastCheckedAt{};

  Aws::Vector<HealthIssue> m_issues;
  bool m_connectorStatusHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_lastCheckedAtHasBeenSet = false;
  bool m_issuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
