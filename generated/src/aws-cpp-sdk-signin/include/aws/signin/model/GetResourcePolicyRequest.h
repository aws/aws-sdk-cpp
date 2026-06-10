/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signin/SigninRequest.h>
#include <aws/signin/Signin_EXPORTS.h>

namespace Aws {
namespace Signin {
namespace Model {

/**
 * <p>Input for GetResourcePolicy operation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/GetResourcePolicyInput">AWS
 * API Reference</a></p>
 */
class GetResourcePolicyRequest : public SigninRequest {
 public:
  AWS_SIGNIN_API GetResourcePolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetResourcePolicy"; }

  AWS_SIGNIN_API Aws::String SerializePayload() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_SIGNIN_API EndpointParameters GetEndpointContextParams() const override;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
