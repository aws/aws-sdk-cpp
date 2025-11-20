/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/RoutingPolicyAssociationDetail.h>
#include <aws/networkmanager/model/RoutingPolicyDirection.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkManager {
namespace Model {

/**
 * <p>Describes a core network change event.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkChangeEventValues">AWS
 * API Reference</a></p>
 */
class CoreNetworkChangeEventValues {
 public:
  AWS_NETWORKMANAGER_API CoreNetworkChangeEventValues() = default;
  AWS_NETWORKMANAGER_API CoreNetworkChangeEventValues(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API CoreNetworkChangeEventValues& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The edge location for the core network change event.</p>
   */
  inline const Aws::String& GetEdgeLocation() const { return m_edgeLocation; }
  inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }
  template <typename EdgeLocationT = Aws::String>
  void SetEdgeLocation(EdgeLocationT&& value) {
    m_edgeLocationHasBeenSet = true;
    m_edgeLocation = std::forward<EdgeLocationT>(value);
  }
  template <typename EdgeLocationT = Aws::String>
  CoreNetworkChangeEventValues& WithEdgeLocation(EdgeLocationT&& value) {
    SetEdgeLocation(std::forward<EdgeLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The edge location of the peer in a core network change event.</p>
   */
  inline const Aws::String& GetPeerEdgeLocation() const { return m_peerEdgeLocation; }
  inline bool PeerEdgeLocationHasBeenSet() const { return m_peerEdgeLocationHasBeenSet; }
  template <typename PeerEdgeLocationT = Aws::String>
  void SetPeerEdgeLocation(PeerEdgeLocationT&& value) {
    m_peerEdgeLocationHasBeenSet = true;
    m_peerEdgeLocation = std::forward<PeerEdgeLocationT>(value);
  }
  template <typename PeerEdgeLocationT = Aws::String>
  CoreNetworkChangeEventValues& WithPeerEdgeLocation(PeerEdgeLocationT&& value) {
    SetPeerEdgeLocation(std::forward<PeerEdgeLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The routing policy direction (inbound/outbound) in a core network change
   * event.</p>
   */
  inline RoutingPolicyDirection GetRoutingPolicyDirection() const { return m_routingPolicyDirection; }
  inline bool RoutingPolicyDirectionHasBeenSet() const { return m_routingPolicyDirectionHasBeenSet; }
  inline void SetRoutingPolicyDirection(RoutingPolicyDirection value) {
    m_routingPolicyDirectionHasBeenSet = true;
    m_routingPolicyDirection = value;
  }
  inline CoreNetworkChangeEventValues& WithRoutingPolicyDirection(RoutingPolicyDirection value) {
    SetRoutingPolicyDirection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The segment name if the change event is associated with a segment.</p>
   */
  inline const Aws::String& GetSegmentName() const { return m_segmentName; }
  inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }
  template <typename SegmentNameT = Aws::String>
  void SetSegmentName(SegmentNameT&& value) {
    m_segmentNameHasBeenSet = true;
    m_segmentName = std::forward<SegmentNameT>(value);
  }
  template <typename SegmentNameT = Aws::String>
  CoreNetworkChangeEventValues& WithSegmentName(SegmentNameT&& value) {
    SetSegmentName(std::forward<SegmentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The changed network function group name.</p>
   */
  inline const Aws::String& GetNetworkFunctionGroupName() const { return m_networkFunctionGroupName; }
  inline bool NetworkFunctionGroupNameHasBeenSet() const { return m_networkFunctionGroupNameHasBeenSet; }
  template <typename NetworkFunctionGroupNameT = Aws::String>
  void SetNetworkFunctionGroupName(NetworkFunctionGroupNameT&& value) {
    m_networkFunctionGroupNameHasBeenSet = true;
    m_networkFunctionGroupName = std::forward<NetworkFunctionGroupNameT>(value);
  }
  template <typename NetworkFunctionGroupNameT = Aws::String>
  CoreNetworkChangeEventValues& WithNetworkFunctionGroupName(NetworkFunctionGroupNameT&& value) {
    SetNetworkFunctionGroupName(std::forward<NetworkFunctionGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the attachment if the change event is associated with an
   * attachment. </p>
   */
  inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
  inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
  template <typename AttachmentIdT = Aws::String>
  void SetAttachmentId(AttachmentIdT&& value) {
    m_attachmentIdHasBeenSet = true;
    m_attachmentId = std::forward<AttachmentIdT>(value);
  }
  template <typename AttachmentIdT = Aws::String>
  CoreNetworkChangeEventValues& WithAttachmentId(AttachmentIdT&& value) {
    SetAttachmentId(std::forward<AttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For a <code>STATIC_ROUTE</code> event, this is the IP address.</p>
   */
  inline const Aws::String& GetCidr() const { return m_cidr; }
  inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
  template <typename CidrT = Aws::String>
  void SetCidr(CidrT&& value) {
    m_cidrHasBeenSet = true;
    m_cidr = std::forward<CidrT>(value);
  }
  template <typename CidrT = Aws::String>
  CoreNetworkChangeEventValues& WithCidr(CidrT&& value) {
    SetCidr(std::forward<CidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of the routing policies and other association details in the core
   * network change values.</p>
   */
  inline const Aws::Vector<RoutingPolicyAssociationDetail>& GetRoutingPolicyAssociationDetails() const {
    return m_routingPolicyAssociationDetails;
  }
  inline bool RoutingPolicyAssociationDetailsHasBeenSet() const { return m_routingPolicyAssociationDetailsHasBeenSet; }
  template <typename RoutingPolicyAssociationDetailsT = Aws::Vector<RoutingPolicyAssociationDetail>>
  void SetRoutingPolicyAssociationDetails(RoutingPolicyAssociationDetailsT&& value) {
    m_routingPolicyAssociationDetailsHasBeenSet = true;
    m_routingPolicyAssociationDetails = std::forward<RoutingPolicyAssociationDetailsT>(value);
  }
  template <typename RoutingPolicyAssociationDetailsT = Aws::Vector<RoutingPolicyAssociationDetail>>
  CoreNetworkChangeEventValues& WithRoutingPolicyAssociationDetails(RoutingPolicyAssociationDetailsT&& value) {
    SetRoutingPolicyAssociationDetails(std::forward<RoutingPolicyAssociationDetailsT>(value));
    return *this;
  }
  template <typename RoutingPolicyAssociationDetailsT = RoutingPolicyAssociationDetail>
  CoreNetworkChangeEventValues& AddRoutingPolicyAssociationDetails(RoutingPolicyAssociationDetailsT&& value) {
    m_routingPolicyAssociationDetailsHasBeenSet = true;
    m_routingPolicyAssociationDetails.emplace_back(std::forward<RoutingPolicyAssociationDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_edgeLocation;
  bool m_edgeLocationHasBeenSet = false;

  Aws::String m_peerEdgeLocation;
  bool m_peerEdgeLocationHasBeenSet = false;

  RoutingPolicyDirection m_routingPolicyDirection{RoutingPolicyDirection::NOT_SET};
  bool m_routingPolicyDirectionHasBeenSet = false;

  Aws::String m_segmentName;
  bool m_segmentNameHasBeenSet = false;

  Aws::String m_networkFunctionGroupName;
  bool m_networkFunctionGroupNameHasBeenSet = false;

  Aws::String m_attachmentId;
  bool m_attachmentIdHasBeenSet = false;

  Aws::String m_cidr;
  bool m_cidrHasBeenSet = false;

  Aws::Vector<RoutingPolicyAssociationDetail> m_routingPolicyAssociationDetails;
  bool m_routingPolicyAssociationDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
