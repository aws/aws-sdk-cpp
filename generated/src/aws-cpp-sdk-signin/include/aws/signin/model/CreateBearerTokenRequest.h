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
 * <p>Input structure for CreateBearerToken operation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/CreateBearerTokenRequest">AWS
 * API Reference</a></p>
 */
class CreateBearerTokenRequest : public SigninRequest {
 public:
  AWS_SIGNIN_API CreateBearerTokenRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateBearerToken"; }

  AWS_SIGNIN_API Aws::String SerializePayload() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_SIGNIN_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The grant type. Must be &quot;client_credentials&quot;.</p>
   */
  inline const Aws::String& GetGrantType() const { return m_grantType; }
  inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }
  template <typename GrantTypeT = Aws::String>
  void SetGrantType(GrantTypeT&& value) {
    m_grantTypeHasBeenSet = true;
    m_grantType = std::forward<GrantTypeT>(value);
  }
  template <typename GrantTypeT = Aws::String>
  CreateBearerTokenRequest& WithGrantType(GrantTypeT&& value) {
    SetGrantType(std::forward<GrantTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS service the bearer token is for. Example:
   * &quot;ecr.amazonaws.com&quot;.</p>
   */
  inline const Aws::String& GetResource() const { return m_resource; }
  inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
  template <typename ResourceT = Aws::String>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = Aws::String>
  CreateBearerTokenRequest& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The requested token lifetime in seconds, from 300 (5 minutes) up to the
   * maximum allowed for the service, currently 43200 (12 hours). If omitted, the
   * token is valid for 12 hours.</p>
   */
  inline int GetDurationSeconds() const { return m_durationSeconds; }
  inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
  inline void SetDurationSeconds(int value) {
    m_durationSecondsHasBeenSet = true;
    m_durationSeconds = value;
  }
  inline CreateBearerTokenRequest& WithDurationSeconds(int value) {
    SetDurationSeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_grantType;

  Aws::String m_resource;

  int m_durationSeconds{0};
  bool m_grantTypeHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
  bool m_durationSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
