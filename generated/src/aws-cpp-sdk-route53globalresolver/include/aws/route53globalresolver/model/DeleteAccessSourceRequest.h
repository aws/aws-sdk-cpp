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
class DeleteAccessSourceRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API DeleteAccessSourceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteAccessSource"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the access source to delete.</p>
   */
  inline const Aws::String& GetAccessSourceId() const { return m_accessSourceId; }
  inline bool AccessSourceIdHasBeenSet() const { return m_accessSourceIdHasBeenSet; }
  template <typename AccessSourceIdT = Aws::String>
  void SetAccessSourceId(AccessSourceIdT&& value) {
    m_accessSourceIdHasBeenSet = true;
    m_accessSourceId = std::forward<AccessSourceIdT>(value);
  }
  template <typename AccessSourceIdT = Aws::String>
  DeleteAccessSourceRequest& WithAccessSourceId(AccessSourceIdT&& value) {
    SetAccessSourceId(std::forward<AccessSourceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accessSourceId;
  bool m_accessSourceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
