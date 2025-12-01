/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolverRequest.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {

/**
 */
class DeleteAccessTokenRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API DeleteAccessTokenRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteAccessToken"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the access token to delete.</p>
   */
  inline const Aws::String& GetAccessTokenId() const { return m_accessTokenId; }
  inline bool AccessTokenIdHasBeenSet() const { return m_accessTokenIdHasBeenSet; }
  template <typename AccessTokenIdT = Aws::String>
  void SetAccessTokenId(AccessTokenIdT&& value) {
    m_accessTokenIdHasBeenSet = true;
    m_accessTokenId = std::forward<AccessTokenIdT>(value);
  }
  template <typename AccessTokenIdT = Aws::String>
  DeleteAccessTokenRequest& WithAccessTokenId(AccessTokenIdT&& value) {
    SetAccessTokenId(std::forward<AccessTokenIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accessTokenId;
  bool m_accessTokenIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
