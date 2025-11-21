/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace NetworkManager {
namespace Model {

/**
 */
class PutAttachmentRoutingPolicyLabelRequest : public NetworkManagerRequest {
 public:
  AWS_NETWORKMANAGER_API PutAttachmentRoutingPolicyLabelRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutAttachmentRoutingPolicyLabel"; }

  AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the core network containing the attachment.</p>
   */
  inline const Aws::String& GetCoreNetworkId() const { return m_coreNetworkId; }
  inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
  template <typename CoreNetworkIdT = Aws::String>
  void SetCoreNetworkId(CoreNetworkIdT&& value) {
    m_coreNetworkIdHasBeenSet = true;
    m_coreNetworkId = std::forward<CoreNetworkIdT>(value);
  }
  template <typename CoreNetworkIdT = Aws::String>
  PutAttachmentRoutingPolicyLabelRequest& WithCoreNetworkId(CoreNetworkIdT&& value) {
    SetCoreNetworkId(std::forward<CoreNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the attachment to apply the routing policy label to.</p>
   */
  inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
  inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
  template <typename AttachmentIdT = Aws::String>
  void SetAttachmentId(AttachmentIdT&& value) {
    m_attachmentIdHasBeenSet = true;
    m_attachmentId = std::forward<AttachmentIdT>(value);
  }
  template <typename AttachmentIdT = Aws::String>
  PutAttachmentRoutingPolicyLabelRequest& WithAttachmentId(AttachmentIdT&& value) {
    SetAttachmentId(std::forward<AttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The routing policy label to apply to the attachment.</p>
   */
  inline const Aws::String& GetRoutingPolicyLabel() const { return m_routingPolicyLabel; }
  inline bool RoutingPolicyLabelHasBeenSet() const { return m_routingPolicyLabelHasBeenSet; }
  template <typename RoutingPolicyLabelT = Aws::String>
  void SetRoutingPolicyLabel(RoutingPolicyLabelT&& value) {
    m_routingPolicyLabelHasBeenSet = true;
    m_routingPolicyLabel = std::forward<RoutingPolicyLabelT>(value);
  }
  template <typename RoutingPolicyLabelT = Aws::String>
  PutAttachmentRoutingPolicyLabelRequest& WithRoutingPolicyLabel(RoutingPolicyLabelT&& value) {
    SetRoutingPolicyLabel(std::forward<RoutingPolicyLabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  PutAttachmentRoutingPolicyLabelRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_coreNetworkId;
  bool m_coreNetworkIdHasBeenSet = false;

  Aws::String m_attachmentId;
  bool m_attachmentIdHasBeenSet = false;

  Aws::String m_routingPolicyLabel;
  bool m_routingPolicyLabelHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
