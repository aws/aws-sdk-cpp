/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signin/SigninRequest.h>
#include <aws/signin/Signin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Signin {
namespace Model {

/**
 * <p>Input for BatchRevokeSessions operation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/BatchRevokeSessionsInput">AWS
 * API Reference</a></p>
 */
class BatchRevokeSessionsRequest : public SigninRequest {
 public:
  AWS_SIGNIN_API BatchRevokeSessionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchRevokeSessions"; }

  AWS_SIGNIN_API Aws::String SerializePayload() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_SIGNIN_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The identity that owns the sessions. Omit to use the caller. Specify
   * arn:aws:iam::{account-id}:* to revoke any session in the account.</p>
   */
  inline const Aws::String& GetPrincipalArn() const { return m_principalArn; }
  inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
  template <typename PrincipalArnT = Aws::String>
  void SetPrincipalArn(PrincipalArnT&& value) {
    m_principalArnHasBeenSet = true;
    m_principalArn = std::forward<PrincipalArnT>(value);
  }
  template <typename PrincipalArnT = Aws::String>
  BatchRevokeSessionsRequest& WithPrincipalArn(PrincipalArnT&& value) {
    SetPrincipalArn(std::forward<PrincipalArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARNs of the sessions to revoke</p>
   */
  inline const Aws::Vector<Aws::String>& GetSessionArns() const { return m_sessionArns; }
  inline bool SessionArnsHasBeenSet() const { return m_sessionArnsHasBeenSet; }
  template <typename SessionArnsT = Aws::Vector<Aws::String>>
  void SetSessionArns(SessionArnsT&& value) {
    m_sessionArnsHasBeenSet = true;
    m_sessionArns = std::forward<SessionArnsT>(value);
  }
  template <typename SessionArnsT = Aws::Vector<Aws::String>>
  BatchRevokeSessionsRequest& WithSessionArns(SessionArnsT&& value) {
    SetSessionArns(std::forward<SessionArnsT>(value));
    return *this;
  }
  template <typename SessionArnsT = Aws::String>
  BatchRevokeSessionsRequest& AddSessionArns(SessionArnsT&& value) {
    m_sessionArnsHasBeenSet = true;
    m_sessionArns.emplace_back(std::forward<SessionArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for revoking the sessions</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  BatchRevokeSessionsRequest& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_principalArn;

  Aws::Vector<Aws::String> m_sessionArns;

  Aws::String m_reason;
  bool m_principalArnHasBeenSet = false;
  bool m_sessionArnsHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
