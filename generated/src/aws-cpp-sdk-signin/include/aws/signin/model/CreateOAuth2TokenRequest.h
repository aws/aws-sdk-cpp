/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signin/SigninRequest.h>
#include <aws/signin/Signin_EXPORTS.h>
#include <aws/signin/model/CreateOAuth2TokenRequestBody.h>

#include <utility>

namespace Aws {
namespace Signin {
namespace Model {

/**
 * <p>Input structure for CreateOAuth2Token operation</p> <p>Contains flattened
 * token operation inputs for both authorization code and refresh token flows. The
 * operation type is determined by the grant_type parameter in the request
 * body.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/CreateOAuth2TokenRequest">AWS
 * API Reference</a></p>
 */
class CreateOAuth2TokenRequest : public SigninRequest {
 public:
  AWS_SIGNIN_API CreateOAuth2TokenRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateOAuth2Token"; }

  AWS_SIGNIN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Flattened token operation inputs The specific operation is determined by
   * grant_type in the request body</p>
   */
  inline const CreateOAuth2TokenRequestBody& GetTokenInput() const { return m_tokenInput; }
  inline bool TokenInputHasBeenSet() const { return m_tokenInputHasBeenSet; }
  template <typename TokenInputT = CreateOAuth2TokenRequestBody>
  void SetTokenInput(TokenInputT&& value) {
    m_tokenInputHasBeenSet = true;
    m_tokenInput = std::forward<TokenInputT>(value);
  }
  template <typename TokenInputT = CreateOAuth2TokenRequestBody>
  CreateOAuth2TokenRequest& WithTokenInput(TokenInputT&& value) {
    SetTokenInput(std::forward<TokenInputT>(value));
    return *this;
  }
  ///@}
 private:
  CreateOAuth2TokenRequestBody m_tokenInput;
  bool m_tokenInputHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
