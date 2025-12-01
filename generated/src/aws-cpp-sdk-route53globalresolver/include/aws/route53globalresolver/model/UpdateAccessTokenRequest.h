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
class UpdateAccessTokenRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API UpdateAccessTokenRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAccessToken"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the token.</p>
   */
  inline const Aws::String& GetAccessTokenId() const { return m_accessTokenId; }
  inline bool AccessTokenIdHasBeenSet() const { return m_accessTokenIdHasBeenSet; }
  template <typename AccessTokenIdT = Aws::String>
  void SetAccessTokenId(AccessTokenIdT&& value) {
    m_accessTokenIdHasBeenSet = true;
    m_accessTokenId = std::forward<AccessTokenIdT>(value);
  }
  template <typename AccessTokenIdT = Aws::String>
  UpdateAccessTokenRequest& WithAccessTokenId(AccessTokenIdT&& value) {
    SetAccessTokenId(std::forward<AccessTokenIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new name of the token.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateAccessTokenRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accessTokenId;
  bool m_accessTokenIdHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
