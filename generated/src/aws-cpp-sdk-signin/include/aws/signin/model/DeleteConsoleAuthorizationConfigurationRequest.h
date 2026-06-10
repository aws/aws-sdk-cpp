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
 * <p>Input for DeleteConsoleAuthorizationConfiguration operation</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/DeleteConsoleAuthorizationConfigurationInput">AWS
 * API Reference</a></p>
 */
class DeleteConsoleAuthorizationConfigurationRequest : public SigninRequest {
 public:
  AWS_SIGNIN_API DeleteConsoleAuthorizationConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteConsoleAuthorizationConfiguration"; }

  AWS_SIGNIN_API Aws::String SerializePayload() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_SIGNIN_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>Target account identifier</p>
   */
  inline const Aws::String& GetTargetId() const { return m_targetId; }
  inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
  template <typename TargetIdT = Aws::String>
  void SetTargetId(TargetIdT&& value) {
    m_targetIdHasBeenSet = true;
    m_targetId = std::forward<TargetIdT>(value);
  }
  template <typename TargetIdT = Aws::String>
  DeleteConsoleAuthorizationConfigurationRequest& WithTargetId(TargetIdT&& value) {
    SetTargetId(std::forward<TargetIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetId;
  bool m_targetIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
