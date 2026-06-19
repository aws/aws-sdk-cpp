/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

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
 * <p>Capabilities for an integrated Bitbucket repository.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BitbucketResourceCapabilities">AWS
 * API Reference</a></p>
 */
class BitbucketResourceCapabilities {
 public:
  AWS_SECURITYAGENT_API BitbucketResourceCapabilities() = default;
  AWS_SECURITYAGENT_API BitbucketResourceCapabilities(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API BitbucketResourceCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether to post code review comments on pull requests.</p>
   */
  inline bool GetLeaveComments() const { return m_leaveComments; }
  inline bool LeaveCommentsHasBeenSet() const { return m_leaveCommentsHasBeenSet; }
  inline void SetLeaveComments(bool value) {
    m_leaveCommentsHasBeenSet = true;
    m_leaveComments = value;
  }
  inline BitbucketResourceCapabilities& WithLeaveComments(bool value) {
    SetLeaveComments(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to create pull requests with automated fixes.</p>
   */
  inline bool GetRemediateCode() const { return m_remediateCode; }
  inline bool RemediateCodeHasBeenSet() const { return m_remediateCodeHasBeenSet; }
  inline void SetRemediateCode(bool value) {
    m_remediateCodeHasBeenSet = true;
    m_remediateCode = value;
  }
  inline BitbucketResourceCapabilities& WithRemediateCode(bool value) {
    SetRemediateCode(value);
    return *this;
  }
  ///@}
 private:
  bool m_leaveComments{false};

  bool m_remediateCode{false};
  bool m_leaveCommentsHasBeenSet = false;
  bool m_remediateCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
