/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

#include <utility>

namespace Aws {
namespace NetworkFirewall {
namespace Model {

/**
 */
class DeleteContainerAssociationRequest : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API DeleteContainerAssociationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteContainerAssociation"; }

  AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

  AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The descriptive name of the container association. You must specify the ARN
   * or the name, and you can specify both.</p>
   */
  inline const Aws::String& GetContainerAssociationName() const { return m_containerAssociationName; }
  inline bool ContainerAssociationNameHasBeenSet() const { return m_containerAssociationNameHasBeenSet; }
  template <typename ContainerAssociationNameT = Aws::String>
  void SetContainerAssociationName(ContainerAssociationNameT&& value) {
    m_containerAssociationNameHasBeenSet = true;
    m_containerAssociationName = std::forward<ContainerAssociationNameT>(value);
  }
  template <typename ContainerAssociationNameT = Aws::String>
  DeleteContainerAssociationRequest& WithContainerAssociationName(ContainerAssociationNameT&& value) {
    SetContainerAssociationName(std::forward<ContainerAssociationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the container association. You must specify
   * the ARN or the name, and you can specify both.</p>
   */
  inline const Aws::String& GetContainerAssociationArn() const { return m_containerAssociationArn; }
  inline bool ContainerAssociationArnHasBeenSet() const { return m_containerAssociationArnHasBeenSet; }
  template <typename ContainerAssociationArnT = Aws::String>
  void SetContainerAssociationArn(ContainerAssociationArnT&& value) {
    m_containerAssociationArnHasBeenSet = true;
    m_containerAssociationArn = std::forward<ContainerAssociationArnT>(value);
  }
  template <typename ContainerAssociationArnT = Aws::String>
  DeleteContainerAssociationRequest& WithContainerAssociationArn(ContainerAssociationArnT&& value) {
    SetContainerAssociationArn(std::forward<ContainerAssociationArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_containerAssociationName;

  Aws::String m_containerAssociationArn;
  bool m_containerAssociationNameHasBeenSet = false;
  bool m_containerAssociationArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
