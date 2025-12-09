/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkManager {
namespace Model {
class PutAttachmentRoutingPolicyLabelResult {
 public:
  AWS_NETWORKMANAGER_API PutAttachmentRoutingPolicyLabelResult() = default;
  AWS_NETWORKMANAGER_API PutAttachmentRoutingPolicyLabelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKMANAGER_API PutAttachmentRoutingPolicyLabelResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the core network containing the attachment.</p>
   */
  inline const Aws::String& GetCoreNetworkId() const { return m_coreNetworkId; }
  template <typename CoreNetworkIdT = Aws::String>
  void SetCoreNetworkId(CoreNetworkIdT&& value) {
    m_coreNetworkIdHasBeenSet = true;
    m_coreNetworkId = std::forward<CoreNetworkIdT>(value);
  }
  template <typename CoreNetworkIdT = Aws::String>
  PutAttachmentRoutingPolicyLabelResult& WithCoreNetworkId(CoreNetworkIdT&& value) {
    SetCoreNetworkId(std::forward<CoreNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the attachment that received the routing policy label.</p>
   */
  inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
  template <typename AttachmentIdT = Aws::String>
  void SetAttachmentId(AttachmentIdT&& value) {
    m_attachmentIdHasBeenSet = true;
    m_attachmentId = std::forward<AttachmentIdT>(value);
  }
  template <typename AttachmentIdT = Aws::String>
  PutAttachmentRoutingPolicyLabelResult& WithAttachmentId(AttachmentIdT&& value) {
    SetAttachmentId(std::forward<AttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The routing policy label that was applied to the attachment.</p>
   */
  inline const Aws::String& GetRoutingPolicyLabel() const { return m_routingPolicyLabel; }
  template <typename RoutingPolicyLabelT = Aws::String>
  void SetRoutingPolicyLabel(RoutingPolicyLabelT&& value) {
    m_routingPolicyLabelHasBeenSet = true;
    m_routingPolicyLabel = std::forward<RoutingPolicyLabelT>(value);
  }
  template <typename RoutingPolicyLabelT = Aws::String>
  PutAttachmentRoutingPolicyLabelResult& WithRoutingPolicyLabel(RoutingPolicyLabelT&& value) {
    SetRoutingPolicyLabel(std::forward<RoutingPolicyLabelT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  PutAttachmentRoutingPolicyLabelResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_coreNetworkId;

  Aws::String m_attachmentId;

  Aws::String m_routingPolicyLabel;

  Aws::String m_requestId;
  bool m_coreNetworkIdHasBeenSet = false;
  bool m_attachmentIdHasBeenSet = false;
  bool m_routingPolicyLabelHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
