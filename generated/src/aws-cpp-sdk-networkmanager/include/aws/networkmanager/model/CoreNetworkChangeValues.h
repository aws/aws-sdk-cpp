/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/ServiceInsertionAction.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a core network change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkChangeValues">AWS
   * API Reference</a></p>
   */
  class CoreNetworkChangeValues
  {
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
    template<typename SegmentNameT = Aws::String>
    void SetSegmentName(SegmentNameT&& value) { m_segmentNameHasBeenSet = true; m_segmentName = std::forward<SegmentNameT>(value); }
    template<typename SegmentNameT = Aws::String>
    CoreNetworkChangeValues& WithSegmentName(SegmentNameT&& value) { SetSegmentName(std::forward<SegmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network function group name if the change event is associated with a
     * network function group.</p>
     */
    inline const Aws::String& GetNetworkFunctionGroupName() const { return m_networkFunctionGroupName; }
    inline bool NetworkFunctionGroupNameHasBeenSet() const { return m_networkFunctionGroupNameHasBeenSet; }
    template<typename NetworkFunctionGroupNameT = Aws::String>
    void SetNetworkFunctionGroupName(NetworkFunctionGroupNameT&& value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName = std::forward<NetworkFunctionGroupNameT>(value); }
    template<typename NetworkFunctionGroupNameT = Aws::String>
    CoreNetworkChangeValues& WithNetworkFunctionGroupName(NetworkFunctionGroupNameT&& value) { SetNetworkFunctionGroupName(std::forward<NetworkFunctionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Regions where edges are located in a core network. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEdgeLocations() const { return m_edgeLocations; }
    inline bool EdgeLocationsHasBeenSet() const { return m_edgeLocationsHasBeenSet; }
    template<typename EdgeLocationsT = Aws::Vector<Aws::String>>
    void SetEdgeLocations(EdgeLocationsT&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations = std::forward<EdgeLocationsT>(value); }
    template<typename EdgeLocationsT = Aws::Vector<Aws::String>>
    CoreNetworkChangeValues& WithEdgeLocations(EdgeLocationsT&& value) { SetEdgeLocations(std::forward<EdgeLocationsT>(value)); return *this;}
    template<typename EdgeLocationsT = Aws::String>
    CoreNetworkChangeValues& AddEdgeLocations(EdgeLocationsT&& value) { m_edgeLocationsHasBeenSet = true; m_edgeLocations.emplace_back(std::forward<EdgeLocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ASN of a core network.</p>
     */
    inline long long GetAsn() const { return m_asn; }
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
    inline void SetAsn(long long value) { m_asnHasBeenSet = true; m_asn = value; }
    inline CoreNetworkChangeValues& WithAsn(long long value) { SetAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP addresses used for a core network.</p>
     */
    inline const Aws::String& GetCidr() const { return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    template<typename CidrT = Aws::String>
    void SetCidr(CidrT&& value) { m_cidrHasBeenSet = true; m_cidr = std::forward<CidrT>(value); }
    template<typename CidrT = Aws::String>
    CoreNetworkChangeValues& WithCidr(CidrT&& value) { SetCidr(std::forward<CidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the destination.</p>
     */
    inline const Aws::String& GetDestinationIdentifier() const { return m_destinationIdentifier; }
    inline bool DestinationIdentifierHasBeenSet() const { return m_destinationIdentifierHasBeenSet; }
    template<typename DestinationIdentifierT = Aws::String>
    void SetDestinationIdentifier(DestinationIdentifierT&& value) { m_destinationIdentifierHasBeenSet = true; m_destinationIdentifier = std::forward<DestinationIdentifierT>(value); }
    template<typename DestinationIdentifierT = Aws::String>
    CoreNetworkChangeValues& WithDestinationIdentifier(DestinationIdentifierT&& value) { SetDestinationIdentifier(std::forward<DestinationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inside IP addresses used for core network change values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsideCidrBlocks() const { return m_insideCidrBlocks; }
    inline bool InsideCidrBlocksHasBeenSet() const { return m_insideCidrBlocksHasBeenSet; }
    template<typename InsideCidrBlocksT = Aws::Vector<Aws::String>>
    void SetInsideCidrBlocks(InsideCidrBlocksT&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = std::forward<InsideCidrBlocksT>(value); }
    template<typename InsideCidrBlocksT = Aws::Vector<Aws::String>>
    CoreNetworkChangeValues& WithInsideCidrBlocks(InsideCidrBlocksT&& value) { SetInsideCidrBlocks(std::forward<InsideCidrBlocksT>(value)); return *this;}
    template<typename InsideCidrBlocksT = Aws::String>
    CoreNetworkChangeValues& AddInsideCidrBlocks(InsideCidrBlocksT&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.emplace_back(std::forward<InsideCidrBlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The shared segments for a core network change value. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSharedSegments() const { return m_sharedSegments; }
    inline bool SharedSegmentsHasBeenSet() const { return m_sharedSegmentsHasBeenSet; }
    template<typename SharedSegmentsT = Aws::Vector<Aws::String>>
    void SetSharedSegments(SharedSegmentsT&& value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments = std::forward<SharedSegmentsT>(value); }
    template<typename SharedSegmentsT = Aws::Vector<Aws::String>>
    CoreNetworkChangeValues& WithSharedSegments(SharedSegmentsT&& value) { SetSharedSegments(std::forward<SharedSegmentsT>(value)); return *this;}
    template<typename SharedSegmentsT = Aws::String>
    CoreNetworkChangeValues& AddSharedSegments(SharedSegmentsT&& value) { m_sharedSegmentsHasBeenSet = true; m_sharedSegments.emplace_back(std::forward<SharedSegmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the service insertion action. </p>
     */
    inline const Aws::Vector<ServiceInsertionAction>& GetServiceInsertionActions() const { return m_serviceInsertionActions; }
    inline bool ServiceInsertionActionsHasBeenSet() const { return m_serviceInsertionActionsHasBeenSet; }
    template<typename ServiceInsertionActionsT = Aws::Vector<ServiceInsertionAction>>
    void SetServiceInsertionActions(ServiceInsertionActionsT&& value) { m_serviceInsertionActionsHasBeenSet = true; m_serviceInsertionActions = std::forward<ServiceInsertionActionsT>(value); }
    template<typename ServiceInsertionActionsT = Aws::Vector<ServiceInsertionAction>>
    CoreNetworkChangeValues& WithServiceInsertionActions(ServiceInsertionActionsT&& value) { SetServiceInsertionActions(std::forward<ServiceInsertionActionsT>(value)); return *this;}
    template<typename ServiceInsertionActionsT = ServiceInsertionAction>
    CoreNetworkChangeValues& AddServiceInsertionActions(ServiceInsertionActionsT&& value) { m_serviceInsertionActionsHasBeenSet = true; m_serviceInsertionActions.emplace_back(std::forward<ServiceInsertionActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether Equal Cost Multipath (ECMP) is enabled for the core
     * network.</p>
     */
    inline bool GetVpnEcmpSupport() const { return m_vpnEcmpSupport; }
    inline bool VpnEcmpSupportHasBeenSet() const { return m_vpnEcmpSupportHasBeenSet; }
    inline void SetVpnEcmpSupport(bool value) { m_vpnEcmpSupportHasBeenSet = true; m_vpnEcmpSupport = value; }
    inline CoreNetworkChangeValues& WithVpnEcmpSupport(bool value) { SetVpnEcmpSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether public DNS support is supported. The default is
     * <code>true</code>. </p>
     */
    inline bool GetDnsSupport() const { return m_dnsSupport; }
    inline bool DnsSupportHasBeenSet() const { return m_dnsSupportHasBeenSet; }
    inline void SetDnsSupport(bool value) { m_dnsSupportHasBeenSet = true; m_dnsSupport = value; }
    inline CoreNetworkChangeValues& WithDnsSupport(bool value) { SetDnsSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether security group referencing is enabled for the core
     * network.</p>
     */
    inline bool GetSecurityGroupReferencingSupport() const { return m_securityGroupReferencingSupport; }
    inline bool SecurityGroupReferencingSupportHasBeenSet() const { return m_securityGroupReferencingSupportHasBeenSet; }
    inline void SetSecurityGroupReferencingSupport(bool value) { m_securityGroupReferencingSupportHasBeenSet = true; m_securityGroupReferencingSupport = value; }
    inline CoreNetworkChangeValues& WithSecurityGroupReferencingSupport(bool value) { SetSecurityGroupReferencingSupport(value); return *this;}
    ///@}
  private:

    Aws::String m_segmentName;
    bool m_segmentNameHasBeenSet = false;

    Aws::String m_networkFunctionGroupName;
    bool m_networkFunctionGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_edgeLocations;
    bool m_edgeLocationsHasBeenSet = false;

    long long m_asn{0};
    bool m_asnHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_destinationIdentifier;
    bool m_destinationIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_insideCidrBlocks;
    bool m_insideCidrBlocksHasBeenSet = false;

    Aws::Vector<Aws::String> m_sharedSegments;
    bool m_sharedSegmentsHasBeenSet = false;

    Aws::Vector<ServiceInsertionAction> m_serviceInsertionActions;
    bool m_serviceInsertionActionsHasBeenSet = false;

    bool m_vpnEcmpSupport{false};
    bool m_vpnEcmpSupportHasBeenSet = false;

    bool m_dnsSupport{false};
    bool m_dnsSupportHasBeenSet = false;

    bool m_securityGroupReferencingSupport{false};
    bool m_securityGroupReferencingSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
