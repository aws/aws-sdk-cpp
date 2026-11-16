/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace NetworkManager {
namespace Model {

/**
 */
class AssociateContextStoreRequest : public NetworkManagerRequest {
 public:
  AWS_NETWORKMANAGER_API AssociateContextStoreRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateContextStore"; }

  AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the context store.</p>
   */
  inline const Aws::String& GetContextStoreId() const { return m_contextStoreId; }
  inline bool ContextStoreIdHasBeenSet() const { return m_contextStoreIdHasBeenSet; }
  template <typename ContextStoreIdT = Aws::String>
  void SetContextStoreId(ContextStoreIdT&& value) {
    m_contextStoreIdHasBeenSet = true;
    m_contextStoreId = std::forward<ContextStoreIdT>(value);
  }
  template <typename ContextStoreIdT = Aws::String>
  AssociateContextStoreRequest& WithContextStoreId(ContextStoreIdT&& value) {
    SetContextStoreId(std::forward<ContextStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the transit gateway to associate with the
   * context store.</p>
   */
  inline const Aws::String& GetTransitGatewayArn() const { return m_transitGatewayArn; }
  inline bool TransitGatewayArnHasBeenSet() const { return m_transitGatewayArnHasBeenSet; }
  template <typename TransitGatewayArnT = Aws::String>
  void SetTransitGatewayArn(TransitGatewayArnT&& value) {
    m_transitGatewayArnHasBeenSet = true;
    m_transitGatewayArn = std::forward<TransitGatewayArnT>(value);
  }
  template <typename TransitGatewayArnT = Aws::String>
  AssociateContextStoreRequest& WithTransitGatewayArn(TransitGatewayArnT&& value) {
    SetTransitGatewayArn(std::forward<TransitGatewayArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contextStoreId;

  Aws::String m_transitGatewayArn;
  bool m_contextStoreIdHasBeenSet = false;
  bool m_transitGatewayArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
