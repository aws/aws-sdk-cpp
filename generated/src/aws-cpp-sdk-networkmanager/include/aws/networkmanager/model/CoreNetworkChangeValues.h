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
#include <aws/networkmanager/model/ServiceInsertionAction.h>

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
 * <p>Describes a core network change.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkChangeValues">AWS
 * API Reference</a></p>
 */
class CoreNetworkChangeValues {
 public:
  AWS_NETWORKMANAGER_API CoreNetworkChangeValues() = default;
  AWS_NETWORKMANAGER_API CoreNetworkChangeValues(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API CoreNetworkChangeValues& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The names of the segments in a core network.</p>
   */
  inline const Aws::String& GetSegmentName() const { return m_segmentName; }
  inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }
  template <typename SegmentNameT = Aws::String>
  void SetSegmentName(SegmentNameT&& value) {
    m_segmentNameHasBeenSet = true;
    m_segmentName = std::forward<SegmentNameT>(value);
  }
  template <typename SegmentNameT = Aws::String>
  CoreNetworkChangeValues& WithSegmentName(SegmentNameT&& value) {
    SetSegmentName(std::forward<SegmentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network function group name if the change event is associated with a
   * network function group.</p>
   */
  inline const Aws::String& GetNetworkFunctionGroupName() const { return m_networkFunctionGroupName; }
  inline bool NetworkFunctionGroupNameHasBeenSet() const { return m_networkFunctionGroupNameHasBeenSet; }
  template <typename NetworkFunctionGroupNameT = Aws::String>
  void SetNetworkFunctionGroupName(NetworkFunctionGroupNameT&& value) {
    m_networkFunctionGroupNameHasBeenSet = true;
    m_networkFunctionGroupName = std::forward<NetworkFunctionGroupNameT>(value);
  }
  template <typename NetworkFunctionGroupNameT = Aws::String>
  CoreNetworkChangeValues& WithNetworkFunctionGroupName(NetworkFunctionGroupNameT&& value) {
    SetNetworkFunctionGroupName(std::forward<NetworkFunctionGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Regions where edges are located in a core network. </p>
   */
  inline const Aws::Vector<Aws::String>& GetEdgeLocations() const { return m_edgeLocations; }
  inline bool EdgeLocationsHasBeenSet() const { return m_edgeLocationsHasBeenSet; }
  template <typename EdgeLocationsT = Aws::Vector<Aws::String>>
  void SetEdgeLocations(EdgeLocationsT&& value) {
    m_edgeLocationsHasBeenSet = true;
    m_edgeLocations = std::forward<EdgeLocationsT>(value);
  }
  template <typename EdgeLocationsT = Aws::Vector<Aws::String>>
  CoreNetworkChangeValues& WithEdgeLocations(EdgeLocationsT&& value) {
    SetEdgeLocations(std::forward<EdgeLocationsT>(value));
    return *this;
  }
  template <typename EdgeLocationsT = Aws::String>
  CoreNetworkChangeValues& AddEdgeLocations(EdgeLocationsT&& value) {
    m_edgeLocationsHasBeenSet = true;
    m_edgeLocations.emplace_back(std::forward<EdgeLocationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ASN of a core network.</p>
   */
  inline long long GetAsn() const { return m_asn; }
  inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
  inline void SetAsn(long long value) {
    m_asnHasBeenSet = true;
    m_asn = value;
  }
  inline CoreNetworkChangeValues& WithAsn(long long value) {
    SetAsn(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP addresses used for a core network.</p>
   */
  inline const Aws::String& GetCidr() const { return m_cidr; }
  inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
  template <typename CidrT = Aws::String>
  void SetCidr(CidrT&& value) {
    m_cidrHasBeenSet = true;
    m_cidr = std::forward<CidrT>(value);
  }
  template <typename CidrT = Aws::String>
  CoreNetworkChangeValues& WithCidr(CidrT&& value) {
    SetCidr(std::forward<CidrT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the destination.</p>
   */
  inline const Aws::String& GetDestinationIdentifier() const { return m_destinationIdentifier; }
  inline bool DestinationIdentifierHasBeenSet() const { return m_destinationIdentifierHasBeenSet; }
  template <typename DestinationIdentifierT = Aws::String>
  void SetDestinationIdentifier(DestinationIdentifierT&& value) {
    m_destinationIdentifierHasBeenSet = true;
    m_destinationIdentifier = std::forward<DestinationIdentifierT>(value);
  }
  template <typename DestinationIdentifierT = Aws::String>
  CoreNetworkChangeValues& WithDestinationIdentifier(DestinationIdentifierT&& value) {
    SetDestinationIdentifier(std::forward<DestinationIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The inside IP addresses used for core network change values.</p>
   */
  inline const Aws::Vector<Aws::String>& GetInsideCidrBlocks() const { return m_insideCidrBlocks; }
  inline bool InsideCidrBlocksHasBeenSet() const { return m_insideCidrBlocksHasBeenSet; }
  template <typename InsideCidrBlocksT = Aws::Vector<Aws::String>>
  void SetInsideCidrBlocks(InsideCidrBlocksT&& value) {
    m_insideCidrBlocksHasBeenSet = true;
    m_insideCidrBlocks = std::forward<InsideCidrBlocksT>(value);
  }
  template <typename InsideCidrBlocksT = Aws::Vector<Aws::String>>
  CoreNetworkChangeValues& WithInsideCidrBlocks(InsideCidrBlocksT&& value) {
    SetInsideCidrBlocks(std::forward<InsideCidrBlocksT>(value));
    return *this;
  }
  template <typename InsideCidrBlocksT = Aws::String>
  CoreNetworkChangeValues& AddInsideCidrBlocks(InsideCidrBlocksT&& value) {
    m_insideCidrBlocksHasBeenSet = true;
    m_insideCidrBlocks.emplace_back(std::forward<InsideCidrBlocksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The shared segments for a core network change value. </p>
   */
  inline const Aws::Vector<Aws::String>& GetSharedSegments() const { return m_sharedSegments; }
  inline bool SharedSegmentsHasBeenSet() const { return m_sharedSegmentsHasBeenSet; }
  template <typename SharedSegmentsT = Aws::Vector<Aws::String>>
  void SetSharedSegments(SharedSegmentsT&& value) {
    m_sharedSegmentsHasBeenSet = true;
    m_sharedSegments = std::forward<SharedSegmentsT>(value);
  }
  template <typename SharedSegmentsT = Aws::Vector<Aws::String>>
  CoreNetworkChangeValues& WithSharedSegments(SharedSegmentsT&& value) {
    SetSharedSegments(std::forward<SharedSegmentsT>(value));
    return *this;
  }
  template <typename SharedSegmentsT = Aws::String>
  CoreNetworkChangeValues& AddSharedSegments(SharedSegmentsT&& value) {
    m_sharedSegmentsHasBeenSet = true;
    m_sharedSegments.emplace_back(std::forward<SharedSegmentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the service insertion action. </p>
   */
  inline const Aws::Vector<ServiceInsertionAction>& GetServiceInsertionActions() const { return m_serviceInsertionActions; }
  inline bool ServiceInsertionActionsHasBeenSet() const { return m_serviceInsertionActionsHasBeenSet; }
  template <typename ServiceInsertionActionsT = Aws::Vector<ServiceInsertionAction>>
  void SetServiceInsertionActions(ServiceInsertionActionsT&& value) {
    m_serviceInsertionActionsHasBeenSet = true;
    m_serviceInsertionActions = std::forward<ServiceInsertionActionsT>(value);
  }
  template <typename ServiceInsertionActionsT = Aws::Vector<ServiceInsertionAction>>
  CoreNetworkChangeValues& WithServiceInsertionActions(ServiceInsertionActionsT&& value) {
    SetServiceInsertionActions(std::forward<ServiceInsertionActionsT>(value));
    return *this;
  }
  template <typename ServiceInsertionActionsT = ServiceInsertionAction>
  CoreNetworkChangeValues& AddServiceInsertionActions(ServiceInsertionActionsT&& value) {
    m_serviceInsertionActionsHasBeenSet = true;
    m_serviceInsertionActions.emplace_back(std::forward<ServiceInsertionActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether Equal Cost Multipath (ECMP) is enabled for the core
   * network.</p>
   */
  inline bool GetVpnEcmpSupport() const { return m_vpnEcmpSupport; }
  inline bool VpnEcmpSupportHasBeenSet() const { return m_vpnEcmpSupportHasBeenSet; }
  inline void SetVpnEcmpSupport(bool value) {
    m_vpnEcmpSupportHasBeenSet = true;
    m_vpnEcmpSupport = value;
  }
  inline CoreNetworkChangeValues& WithVpnEcmpSupport(bool value) {
    SetVpnEcmpSupport(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether public DNS support is supported. The default is
   * <code>true</code>. </p>
   */
  inline bool GetDnsSupport() const { return m_dnsSupport; }
  inline bool DnsSupportHasBeenSet() const { return m_dnsSupportHasBeenSet; }
  inline void SetDnsSupport(bool value) {
    m_dnsSupportHasBeenSet = true;
    m_dnsSupport = value;
  }
  inline CoreNetworkChangeValues& WithDnsSupport(bool value) {
    SetDnsSupport(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether security group referencing is enabled for the core
   * network.</p>
   */
  inline bool GetSecurityGroupReferencingSupport() const { return m_securityGroupReferencingSupport; }
  inline bool SecurityGroupReferencingSupportHasBeenSet() const { return m_securityGroupReferencingSupportHasBeenSet; }
  inline void SetSecurityGroupReferencingSupport(bool value) {
    m_securityGroupReferencingSupportHasBeenSet = true;
    m_securityGroupReferencingSupport = value;
  }
  inline CoreNetworkChangeValues& WithSecurityGroupReferencingSupport(bool value) {
    SetSecurityGroupReferencingSupport(value);
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
  inline CoreNetworkChangeValues& WithRoutingPolicyDirection(RoutingPolicyDirection value) {
    SetRoutingPolicyDirection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The routing policy configuration in the core network change values.</p>
   */
  inline const Aws::String& GetRoutingPolicy() const { return m_routingPolicy; }
  inline bool RoutingPolicyHasBeenSet() const { return m_routingPolicyHasBeenSet; }
  template <typename RoutingPolicyT = Aws::String>
  void SetRoutingPolicy(RoutingPolicyT&& value) {
    m_routingPolicyHasBeenSet = true;
    m_routingPolicy = std::forward<RoutingPolicyT>(value);
  }
  template <typename RoutingPolicyT = Aws::String>
  CoreNetworkChangeValues& WithRoutingPolicy(RoutingPolicyT&& value) {
    SetRoutingPolicy(std::forward<RoutingPolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The edge locations of peers in the core network change values.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPeerEdgeLocations() const { return m_peerEdgeLocations; }
  inline bool PeerEdgeLocationsHasBeenSet() const { return m_peerEdgeLocationsHasBeenSet; }
  template <typename PeerEdgeLocationsT = Aws::Vector<Aws::String>>
  void SetPeerEdgeLocations(PeerEdgeLocationsT&& value) {
    m_peerEdgeLocationsHasBeenSet = true;
    m_peerEdgeLocations = std::forward<PeerEdgeLocationsT>(value);
  }
  template <typename PeerEdgeLocationsT = Aws::Vector<Aws::String>>
  CoreNetworkChangeValues& WithPeerEdgeLocations(PeerEdgeLocationsT&& value) {
    SetPeerEdgeLocations(std::forward<PeerEdgeLocationsT>(value));
    return *this;
  }
  template <typename PeerEdgeLocationsT = Aws::String>
  CoreNetworkChangeValues& AddPeerEdgeLocations(PeerEdgeLocationsT&& value) {
    m_peerEdgeLocationsHasBeenSet = true;
    m_peerEdgeLocations.emplace_back(std::forward<PeerEdgeLocationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attachment identifier in the core network change values.</p>
   */
  inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
  inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
  template <typename AttachmentIdT = Aws::String>
  void SetAttachmentId(AttachmentIdT&& value) {
    m_attachmentIdHasBeenSet = true;
    m_attachmentId = std::forward<AttachmentIdT>(value);
  }
  template <typename AttachmentIdT = Aws::String>
  CoreNetworkChangeValues& WithAttachmentId(AttachmentIdT&& value) {
    SetAttachmentId(std::forward<AttachmentIdT>(value));
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
  CoreNetworkChangeValues& WithRoutingPolicyAssociationDetails(RoutingPolicyAssociationDetailsT&& value) {
    SetRoutingPolicyAssociationDetails(std::forward<RoutingPolicyAssociationDetailsT>(value));
    return *this;
  }
  template <typename RoutingPolicyAssociationDetailsT = RoutingPolicyAssociationDetail>
  CoreNetworkChangeValues& AddRoutingPolicyAssociationDetails(RoutingPolicyAssociationDetailsT&& value) {
    m_routingPolicyAssociationDetailsHasBeenSet = true;
    m_routingPolicyAssociationDetails.emplace_back(std::forward<RoutingPolicyAssociationDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_segmentName;

  Aws::String m_networkFunctionGroupName;

  Aws::Vector<Aws::String> m_edgeLocations;

  long long m_asn{0};

  Aws::String m_cidr;

  Aws::String m_destinationIdentifier;

  Aws::Vector<Aws::String> m_insideCidrBlocks;

  Aws::Vector<Aws::String> m_sharedSegments;

  Aws::Vector<ServiceInsertionAction> m_serviceInsertionActions;

  bool m_vpnEcmpSupport{false};

  bool m_dnsSupport{false};

  bool m_securityGroupReferencingSupport{false};

  RoutingPolicyDirection m_routingPolicyDirection{RoutingPolicyDirection::NOT_SET};

  Aws::String m_routingPolicy;

  Aws::Vector<Aws::String> m_peerEdgeLocations;

  Aws::String m_attachmentId;

  Aws::Vector<RoutingPolicyAssociationDetail> m_routingPolicyAssociationDetails;
  bool m_segmentNameHasBeenSet = false;
  bool m_networkFunctionGroupNameHasBeenSet = false;
  bool m_edgeLocationsHasBeenSet = false;
  bool m_asnHasBeenSet = false;
  bool m_cidrHasBeenSet = false;
  bool m_destinationIdentifierHasBeenSet = false;
  bool m_insideCidrBlocksHasBeenSet = false;
  bool m_sharedSegmentsHasBeenSet = false;
  bool m_serviceInsertionActionsHasBeenSet = false;
  bool m_vpnEcmpSupportHasBeenSet = false;
  bool m_dnsSupportHasBeenSet = false;
  bool m_securityGroupReferencingSupportHasBeenSet = false;
  bool m_routingPolicyDirectionHasBeenSet = false;
  bool m_routingPolicyHasBeenSet = false;
  bool m_peerEdgeLocationsHasBeenSet = false;
  bool m_attachmentIdHasBeenSet = false;
  bool m_routingPolicyAssociationDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
