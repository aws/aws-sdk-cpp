/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/SigninRequest.h>
#include <aws/signin/Signin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Signin {
namespace Model {

/**
 * <p>Input for GetSession operation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/GetSessionInput">AWS
 * API Reference</a></p>
 */
class GetSessionRequest : public SigninRequest {
 public:
  AWS_SIGNIN_API GetSessionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetSession"; }

  AWS_SIGNIN_API Aws::String SerializePayload() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_SIGNIN_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The ARN of the session to retrieve</p>
   */
  inline const Aws::String& GetSessionArn() const { return m_sessionArn; }
  inline bool SessionArnHasBeenSet() const { return m_sessionArnHasBeenSet; }
  template <typename SessionArnT = Aws::String>
  void SetSessionArn(SessionArnT&& value) {
    m_sessionArnHasBeenSet = true;
    m_sessionArn = std::forward<SessionArnT>(value);
  }
  template <typename SessionArnT = Aws::String>
  GetSessionRequest& WithSessionArn(SessionArnT&& value) {
    SetSessionArn(std::forward<SessionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity that owns the session. Omit to use the caller. Specify
   * arn:aws:iam::{account-id}:* to retrieve any session in the account.</p>
   */
  inline const Aws::String& GetPrincipalArn() const { return m_principalArn; }
  inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
  template <typename PrincipalArnT = Aws::String>
  void SetPrincipalArn(PrincipalArnT&& value) {
    m_principalArnHasBeenSet = true;
    m_principalArn = std::forward<PrincipalArnT>(value);
  }
  template <typename PrincipalArnT = Aws::String>
  GetSessionRequest& WithPrincipalArn(PrincipalArnT&& value) {
    SetPrincipalArn(std::forward<PrincipalArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionArn;

  Aws::String m_principalArn;
  bool m_sessionArnHasBeenSet = false;
  bool m_principalArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
