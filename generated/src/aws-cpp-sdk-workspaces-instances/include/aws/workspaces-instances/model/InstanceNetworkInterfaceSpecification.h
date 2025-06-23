/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/ConnectionTrackingSpecificationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-instances/model/EnaSrdSpecificationRequest.h>
#include <aws/workspaces-instances/model/InterfaceTypeEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-instances/model/Ipv4PrefixSpecificationRequest.h>
#include <aws/workspaces-instances/model/InstanceIpv6Address.h>
#include <aws/workspaces-instances/model/Ipv6PrefixSpecificationRequest.h>
#include <aws/workspaces-instances/model/PrivateIpAddressSpecification.h>
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
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Defines network interface configuration for WorkSpace Instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/InstanceNetworkInterfaceSpecification">AWS
   * API Reference</a></p>
   */
  class InstanceNetworkInterfaceSpecification
  {
  public:
    AWS_WORKSPACESINSTANCES_API InstanceNetworkInterfaceSpecification() = default;
    AWS_WORKSPACESINSTANCES_API InstanceNetworkInterfaceSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API InstanceNetworkInterfaceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables carrier IP address association.</p>
     */
    inline bool GetAssociateCarrierIpAddress() const { return m_associateCarrierIpAddress; }
    inline bool AssociateCarrierIpAddressHasBeenSet() const { return m_associateCarrierIpAddressHasBeenSet; }
    inline void SetAssociateCarrierIpAddress(bool value) { m_associateCarrierIpAddressHasBeenSet = true; m_associateCarrierIpAddress = value; }
    inline InstanceNetworkInterfaceSpecification& WithAssociateCarrierIpAddress(bool value) { SetAssociateCarrierIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables public IP address assignment.</p>
     */
    inline bool GetAssociatePublicIpAddress() const { return m_associatePublicIpAddress; }
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }
    inline InstanceNetworkInterfaceSpecification& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures network connection tracking parameters.</p>
     */
    inline const ConnectionTrackingSpecificationRequest& GetConnectionTrackingSpecification() const { return m_connectionTrackingSpecification; }
    inline bool ConnectionTrackingSpecificationHasBeenSet() const { return m_connectionTrackingSpecificationHasBeenSet; }
    template<typename ConnectionTrackingSpecificationT = ConnectionTrackingSpecificationRequest>
    void SetConnectionTrackingSpecification(ConnectionTrackingSpecificationT&& value) { m_connectionTrackingSpecificationHasBeenSet = true; m_connectionTrackingSpecification = std::forward<ConnectionTrackingSpecificationT>(value); }
    template<typename ConnectionTrackingSpecificationT = ConnectionTrackingSpecificationRequest>
    InstanceNetworkInterfaceSpecification& WithConnectionTrackingSpecification(ConnectionTrackingSpecificationT&& value) { SetConnectionTrackingSpecification(std::forward<ConnectionTrackingSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Descriptive text for the network interface.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    InstanceNetworkInterfaceSpecification& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique index for the network interface.</p>
     */
    inline int GetDeviceIndex() const { return m_deviceIndex; }
    inline bool DeviceIndexHasBeenSet() const { return m_deviceIndexHasBeenSet; }
    inline void SetDeviceIndex(int value) { m_deviceIndexHasBeenSet = true; m_deviceIndex = value; }
    inline InstanceNetworkInterfaceSpecification& WithDeviceIndex(int value) { SetDeviceIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures Elastic Network Adapter Scalable Reliable Datagram settings.</p>
     */
    inline const EnaSrdSpecificationRequest& GetEnaSrdSpecification() const { return m_enaSrdSpecification; }
    inline bool EnaSrdSpecificationHasBeenSet() const { return m_enaSrdSpecificationHasBeenSet; }
    template<typename EnaSrdSpecificationT = EnaSrdSpecificationRequest>
    void SetEnaSrdSpecification(EnaSrdSpecificationT&& value) { m_enaSrdSpecificationHasBeenSet = true; m_enaSrdSpecification = std::forward<EnaSrdSpecificationT>(value); }
    template<typename EnaSrdSpecificationT = EnaSrdSpecificationRequest>
    InstanceNetworkInterfaceSpecification& WithEnaSrdSpecification(EnaSrdSpecificationT&& value) { SetEnaSrdSpecification(std::forward<EnaSrdSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of network interface.</p>
     */
    inline InterfaceTypeEnum GetInterfaceType() const { return m_interfaceType; }
    inline bool InterfaceTypeHasBeenSet() const { return m_interfaceTypeHasBeenSet; }
    inline void SetInterfaceType(InterfaceTypeEnum value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = value; }
    inline InstanceNetworkInterfaceSpecification& WithInterfaceType(InterfaceTypeEnum value) { SetInterfaceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>IPv4 prefix configurations for the interface.</p>
     */
    inline const Aws::Vector<Ipv4PrefixSpecificationRequest>& GetIpv4Prefixes() const { return m_ipv4Prefixes; }
    inline bool Ipv4PrefixesHasBeenSet() const { return m_ipv4PrefixesHasBeenSet; }
    template<typename Ipv4PrefixesT = Aws::Vector<Ipv4PrefixSpecificationRequest>>
    void SetIpv4Prefixes(Ipv4PrefixesT&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = std::forward<Ipv4PrefixesT>(value); }
    template<typename Ipv4PrefixesT = Aws::Vector<Ipv4PrefixSpecificationRequest>>
    InstanceNetworkInterfaceSpecification& WithIpv4Prefixes(Ipv4PrefixesT&& value) { SetIpv4Prefixes(std::forward<Ipv4PrefixesT>(value)); return *this;}
    template<typename Ipv4PrefixesT = Ipv4PrefixSpecificationRequest>
    InstanceNetworkInterfaceSpecification& AddIpv4Prefixes(Ipv4PrefixesT&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.emplace_back(std::forward<Ipv4PrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Number of IPv4 prefixes to assign.</p>
     */
    inline int GetIpv4PrefixCount() const { return m_ipv4PrefixCount; }
    inline bool Ipv4PrefixCountHasBeenSet() const { return m_ipv4PrefixCountHasBeenSet; }
    inline void SetIpv4PrefixCount(int value) { m_ipv4PrefixCountHasBeenSet = true; m_ipv4PrefixCount = value; }
    inline InstanceNetworkInterfaceSpecification& WithIpv4PrefixCount(int value) { SetIpv4PrefixCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of IPv6 addresses to assign.</p>
     */
    inline int GetIpv6AddressCount() const { return m_ipv6AddressCount; }
    inline bool Ipv6AddressCountHasBeenSet() const { return m_ipv6AddressCountHasBeenSet; }
    inline void SetIpv6AddressCount(int value) { m_ipv6AddressCountHasBeenSet = true; m_ipv6AddressCount = value; }
    inline InstanceNetworkInterfaceSpecification& WithIpv6AddressCount(int value) { SetIpv6AddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specific IPv6 addresses for the interface.</p>
     */
    inline const Aws::Vector<InstanceIpv6Address>& GetIpv6Addresses() const { return m_ipv6Addresses; }
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }
    template<typename Ipv6AddressesT = Aws::Vector<InstanceIpv6Address>>
    void SetIpv6Addresses(Ipv6AddressesT&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::forward<Ipv6AddressesT>(value); }
    template<typename Ipv6AddressesT = Aws::Vector<InstanceIpv6Address>>
    InstanceNetworkInterfaceSpecification& WithIpv6Addresses(Ipv6AddressesT&& value) { SetIpv6Addresses(std::forward<Ipv6AddressesT>(value)); return *this;}
    template<typename Ipv6AddressesT = InstanceIpv6Address>
    InstanceNetworkInterfaceSpecification& AddIpv6Addresses(Ipv6AddressesT&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.emplace_back(std::forward<Ipv6AddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>IPv6 prefix configurations for the interface.</p>
     */
    inline const Aws::Vector<Ipv6PrefixSpecificationRequest>& GetIpv6Prefixes() const { return m_ipv6Prefixes; }
    inline bool Ipv6PrefixesHasBeenSet() const { return m_ipv6PrefixesHasBeenSet; }
    template<typename Ipv6PrefixesT = Aws::Vector<Ipv6PrefixSpecificationRequest>>
    void SetIpv6Prefixes(Ipv6PrefixesT&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = std::forward<Ipv6PrefixesT>(value); }
    template<typename Ipv6PrefixesT = Aws::Vector<Ipv6PrefixSpecificationRequest>>
    InstanceNetworkInterfaceSpecification& WithIpv6Prefixes(Ipv6PrefixesT&& value) { SetIpv6Prefixes(std::forward<Ipv6PrefixesT>(value)); return *this;}
    template<typename Ipv6PrefixesT = Ipv6PrefixSpecificationRequest>
    InstanceNetworkInterfaceSpecification& AddIpv6Prefixes(Ipv6PrefixesT&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.emplace_back(std::forward<Ipv6PrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Number of IPv6 prefixes to assign.</p>
     */
    inline int GetIpv6PrefixCount() const { return m_ipv6PrefixCount; }
    inline bool Ipv6PrefixCountHasBeenSet() const { return m_ipv6PrefixCountHasBeenSet; }
    inline void SetIpv6PrefixCount(int value) { m_ipv6PrefixCountHasBeenSet = true; m_ipv6PrefixCount = value; }
    inline InstanceNetworkInterfaceSpecification& WithIpv6PrefixCount(int value) { SetIpv6PrefixCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Index of the network card for multiple network interfaces.</p>
     */
    inline int GetNetworkCardIndex() const { return m_networkCardIndex; }
    inline bool NetworkCardIndexHasBeenSet() const { return m_networkCardIndexHasBeenSet; }
    inline void SetNetworkCardIndex(int value) { m_networkCardIndexHasBeenSet = true; m_networkCardIndex = value; }
    inline InstanceNetworkInterfaceSpecification& WithNetworkCardIndex(int value) { SetNetworkCardIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    InstanceNetworkInterfaceSpecification& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the primary IPv6 configuration.</p>
     */
    inline bool GetPrimaryIpv6() const { return m_primaryIpv6; }
    inline bool PrimaryIpv6HasBeenSet() const { return m_primaryIpv6HasBeenSet; }
    inline void SetPrimaryIpv6(bool value) { m_primaryIpv6HasBeenSet = true; m_primaryIpv6 = value; }
    inline InstanceNetworkInterfaceSpecification& WithPrimaryIpv6(bool value) { SetPrimaryIpv6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Primary private IP address for the interface.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const { return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    template<typename PrivateIpAddressT = Aws::String>
    void SetPrivateIpAddress(PrivateIpAddressT&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::forward<PrivateIpAddressT>(value); }
    template<typename PrivateIpAddressT = Aws::String>
    InstanceNetworkInterfaceSpecification& WithPrivateIpAddress(PrivateIpAddressT&& value) { SetPrivateIpAddress(std::forward<PrivateIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of private IP addresses for the interface.</p>
     */
    inline const Aws::Vector<PrivateIpAddressSpecification>& GetPrivateIpAddresses() const { return m_privateIpAddresses; }
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }
    template<typename PrivateIpAddressesT = Aws::Vector<PrivateIpAddressSpecification>>
    void SetPrivateIpAddresses(PrivateIpAddressesT&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::forward<PrivateIpAddressesT>(value); }
    template<typename PrivateIpAddressesT = Aws::Vector<PrivateIpAddressSpecification>>
    InstanceNetworkInterfaceSpecification& WithPrivateIpAddresses(PrivateIpAddressesT&& value) { SetPrivateIpAddresses(std::forward<PrivateIpAddressesT>(value)); return *this;}
    template<typename PrivateIpAddressesT = PrivateIpAddressSpecification>
    InstanceNetworkInterfaceSpecification& AddPrivateIpAddresses(PrivateIpAddressesT&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.emplace_back(std::forward<PrivateIpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Number of additional private IP addresses to assign.</p>
     */
    inline int GetSecondaryPrivateIpAddressCount() const { return m_secondaryPrivateIpAddressCount; }
    inline bool SecondaryPrivateIpAddressCountHasBeenSet() const { return m_secondaryPrivateIpAddressCountHasBeenSet; }
    inline void SetSecondaryPrivateIpAddressCount(int value) { m_secondaryPrivateIpAddressCountHasBeenSet = true; m_secondaryPrivateIpAddressCount = value; }
    inline InstanceNetworkInterfaceSpecification& WithSecondaryPrivateIpAddressCount(int value) { SetSecondaryPrivateIpAddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Security groups associated with the network interface.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    InstanceNetworkInterfaceSpecification& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = Aws::String>
    InstanceNetworkInterfaceSpecification& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Subnet identifier for the network interface.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    InstanceNetworkInterfaceSpecification& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}
  private:

    bool m_associateCarrierIpAddress{false};
    bool m_associateCarrierIpAddressHasBeenSet = false;

    bool m_associatePublicIpAddress{false};
    bool m_associatePublicIpAddressHasBeenSet = false;

    ConnectionTrackingSpecificationRequest m_connectionTrackingSpecification;
    bool m_connectionTrackingSpecificationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_deviceIndex{0};
    bool m_deviceIndexHasBeenSet = false;

    EnaSrdSpecificationRequest m_enaSrdSpecification;
    bool m_enaSrdSpecificationHasBeenSet = false;

    InterfaceTypeEnum m_interfaceType{InterfaceTypeEnum::NOT_SET};
    bool m_interfaceTypeHasBeenSet = false;

    Aws::Vector<Ipv4PrefixSpecificationRequest> m_ipv4Prefixes;
    bool m_ipv4PrefixesHasBeenSet = false;

    int m_ipv4PrefixCount{0};
    bool m_ipv4PrefixCountHasBeenSet = false;

    int m_ipv6AddressCount{0};
    bool m_ipv6AddressCountHasBeenSet = false;

    Aws::Vector<InstanceIpv6Address> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet = false;

    Aws::Vector<Ipv6PrefixSpecificationRequest> m_ipv6Prefixes;
    bool m_ipv6PrefixesHasBeenSet = false;

    int m_ipv6PrefixCount{0};
    bool m_ipv6PrefixCountHasBeenSet = false;

    int m_networkCardIndex{0};
    bool m_networkCardIndexHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    bool m_primaryIpv6{false};
    bool m_primaryIpv6HasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::Vector<PrivateIpAddressSpecification> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet = false;

    int m_secondaryPrivateIpAddressCount{0};
    bool m_secondaryPrivateIpAddressCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
