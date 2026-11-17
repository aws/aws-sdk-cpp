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
class DeleteCoreNetworkEndpointRequest : public Route53GlobalResolverRequest {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API DeleteCoreNetworkEndpointRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteCoreNetworkEndpoint"; }

  AWS_ROUTE53GLOBALRESOLVER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the core network endpoint to delete.</p>
   */
  inline const Aws::String& GetCoreNetworkEndpointId() const { return m_coreNetworkEndpointId; }
  inline bool CoreNetworkEndpointIdHasBeenSet() const { return m_coreNetworkEndpointIdHasBeenSet; }
  template <typename CoreNetworkEndpointIdT = Aws::String>
  void SetCoreNetworkEndpointId(CoreNetworkEndpointIdT&& value) {
    m_coreNetworkEndpointIdHasBeenSet = true;
    m_coreNetworkEndpointId = std::forward<CoreNetworkEndpointIdT>(value);
  }
  template <typename CoreNetworkEndpointIdT = Aws::String>
  DeleteCoreNetworkEndpointRequest& WithCoreNetworkEndpointId(CoreNetworkEndpointIdT&& value) {
    SetCoreNetworkEndpointId(std::forward<CoreNetworkEndpointIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_coreNetworkEndpointId;
  bool m_coreNetworkEndpointIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
