/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> One or more network interfaces to attach to an Amazon EC2 instance. If you
   * specify a network interface, you must specify security groups and subnets as
   * part of the network interface. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails() = default;
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates whether to associate a Carrier IP address with eth0 for a new
     * network interface. You use this option when you launch an instance in a
     * Wavelength Zone and want to associate a Carrier IP address with the network
     * interface. For more information, see <a
     * href="https://docs.aws.amazon.com/wavelength/latest/developerguide/how-wavelengths-work.html#provider-owned-ip">Carrier
     * IP address</a> in the <i>Wavelength Developer Guide</i>. </p>
     */
    inline bool GetAssociateCarrierIpAddress() const { return m_associateCarrierIpAddress; }
    inline bool AssociateCarrierIpAddressHasBeenSet() const { return m_associateCarrierIpAddressHasBeenSet; }
    inline void SetAssociateCarrierIpAddress(bool value) { m_associateCarrierIpAddressHasBeenSet = true; m_associateCarrierIpAddress = value; }
    inline AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithAssociateCarrierIpAddress(bool value) { SetAssociateCarrierIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Associates a public IPv4 address with eth0 for a new network interface. </p>
     */
    inline bool GetAssociatePublicIpAddress() const { return m_associatePublicIpAddress; }
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }
    inline AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the network interface is deleted when the instance is
     * terminated. </p>
     */
    inline bool GetDeleteOnTermination() const { return m_deleteOnTermination; }
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }
    inline AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description for the network interface. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The device index for the network interface attachment. </p>
     */
    inline int GetDeviceIndex() const { return m_deviceIndex; }
    inline bool DeviceIndexHasBeenSet() const { return m_deviceIndexHasBeenSet; }
    inline void SetDeviceIndex(int value) { m_deviceIndexHasBeenSet = true; m_deviceIndex = value; }
    inline AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithDeviceIndex(int value) { SetDeviceIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IDs of one or more security groups. </p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<Aws::String>>
    AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = Aws::String>
    AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The type of network interface. </p>
     */
    inline const Aws::String& GetInterfaceType() const { return m_interfaceType; }
    inline bool InterfaceTypeHasBeenSet() const { return m_interfaceTypeHasBeenSet; }
    template<typename InterfaceTypeT = Aws::String>
    void SetInterfaceType(InterfaceTypeT&& value) { m_interfaceTypeHasBeenSet = true; m_interfaceType = std::forward<InterfaceTypeT>(value); }
    template<typename InterfaceTypeT = Aws::String>
    AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithInterfaceType(InterfaceTypeT&& value) { SetInterfaceType(std::forward<InterfaceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of IPv4 prefixes to be automatically assigned to the network
     * interface. You cannot use this option if you use the <code>Ipv4Prefixes</code>
     * option. </p>
     */
    inline int GetIpv4PrefixCount() const { return m_ipv4PrefixCount; }
    inline bool Ipv4PrefixCountHasBeenSet() const { return m_ipv4PrefixCountHasBeenSet; }
    inline void SetIpv4PrefixCount(int value) { m_ipv4PrefixCountHasBeenSet = true; m_ipv4PrefixCount = value; }
    inline AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithIpv4PrefixCount(int value) { SetIpv4PrefixCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> One or more IPv4 prefixes to be assigned to the network interface. You
     * cannot use this option if you use the <code>Ipv4PrefixCount</code> option. </p>
     */
    inline const Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails>& GetIpv4Prefixes() const { return m_ipv4Prefixes; }
    inline bool Ipv4PrefixesHasBeenSet() const { return m_ipv4PrefixesHasBeenSet; }
    template<typename Ipv4PrefixesT = Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails>>
    void SetIpv4Prefixes(Ipv4PrefixesT&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = std::forward<Ipv4PrefixesT>(value); }
    template<typename Ipv4PrefixesT = Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails>>
    AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithIpv4Prefixes(Ipv4PrefixesT&& value) { SetIpv4Prefixes(std::forward<Ipv4PrefixesT>(value)); return *this;}
    template<typename Ipv4PrefixesT = AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails>
    AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& AddIpv4Prefixes(Ipv4PrefixesT&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.emplace_back(std::forward<Ipv4PrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The number of IPv6 addresses to assign to a network interface. Amazon EC2
     * automatically selects the IPv6 addresses from the subnet range. You can't use
     * this option if you use <code>Ipv6Addresses</code>. </p>
     */
    inline int GetIpv6AddressCount() const { return m_ipv6AddressCount; }
    inline bool Ipv6AddressCountHasBeenSet() const { return m_ipv6AddressCountHasBeenSet; }
    inline void SetIpv6AddressCount(int value) { m_ipv6AddressCountHasBeenSet = true; m_ipv6AddressCount = value; }
    inline AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithIpv6AddressCount(int value) { SetIpv6AddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> One or more specific IPv6 addresses from the IPv6 CIDR block range of your
     * subnet. You can't use this option if you use <code>Ipv6AddressCount</code>. </p>
     */
    inline const Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails>& GetIpv6Addresses() const { return m_ipv6Addresses; }
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }
    template<typename Ipv6AddressesT = Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails>>
    void SetIpv6Addresses(Ipv6AddressesT&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::forward<Ipv6AddressesT>(value); }
    template<typename Ipv6AddressesT = Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails>>
    AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithIpv6Addresses(Ipv6AddressesT&& value) { SetIpv6Addresses(std::forward<Ipv6AddressesT>(value)); return *this;}
    template<typename Ipv6AddressesT = AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails>
    AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& AddIpv6Addresses(Ipv6AddressesT&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.emplace_back(std::forward<Ipv6AddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The number of IPv6 prefixes to be automatically assigned to the network
     * interface. You cannot use this option if you use the <code>Ipv6Prefix</code>
     * option. </p>
     */
    inline int GetIpv6PrefixCount() const { return m_ipv6PrefixCount; }
    inline bool Ipv6PrefixCountHasBeenSet() const { return m_ipv6PrefixCountHasBeenSet; }
    inline void SetIpv6PrefixCount(int value) { m_ipv6PrefixCountHasBeenSet = true; m_ipv6PrefixCount = value; }
    inline AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithIpv6PrefixCount(int value) { SetIpv6PrefixCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> One or more IPv6 prefixes to be assigned to the network interface. You
     * cannot use this option if you use the <code>Ipv6PrefixCount</code> option. </p>
     */
    inline const Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails>& GetIpv6Prefixes() const { return m_ipv6Prefixes; }
    inline bool Ipv6PrefixesHasBeenSet() const { return m_ipv6PrefixesHasBeenSet; }
    template<typename Ipv6PrefixesT = Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails>>
    void SetIpv6Prefixes(Ipv6PrefixesT&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes = std::forward<Ipv6PrefixesT>(value); }
    template<typename Ipv6PrefixesT = Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails>>
    AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithIpv6Prefixes(Ipv6PrefixesT&& value) { SetIpv6Prefixes(std::forward<Ipv6PrefixesT>(value)); return *this;}
    template<typename Ipv6PrefixesT = AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails>
    AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& AddIpv6Prefixes(Ipv6PrefixesT&& value) { m_ipv6PrefixesHasBeenSet = true; m_ipv6Prefixes.emplace_back(std::forward<Ipv6PrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The index of the network card. Some instance types support multiple network
     * cards. The primary network interface must be assigned to network card index
     * <code>0</code>. The default is network card index <code>0</code>. </p>
     */
    inline int GetNetworkCardIndex() const { return m_networkCardIndex; }
    inline bool NetworkCardIndexHasBeenSet() const { return m_networkCardIndexHasBeenSet; }
    inline void SetNetworkCardIndex(int value) { m_networkCardIndexHasBeenSet = true; m_networkCardIndex = value; }
    inline AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithNetworkCardIndex(int value) { SetNetworkCardIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the network interface. </p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The primary private IPv4 address of the network interface. </p>
     */
    inline const Aws::String& GetPrivateIpAddress() const { return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    template<typename PrivateIpAddressT = Aws::String>
    void SetPrivateIpAddress(PrivateIpAddressT&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::forward<PrivateIpAddressT>(value); }
    template<typename PrivateIpAddressT = Aws::String>
    AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithPrivateIpAddress(PrivateIpAddressT&& value) { SetPrivateIpAddress(std::forward<PrivateIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> One or more private IPv4 addresses. </p>
     */
    inline const Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails>& GetPrivateIpAddresses() const { return m_privateIpAddresses; }
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }
    template<typename PrivateIpAddressesT = Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails>>
    void SetPrivateIpAddresses(PrivateIpAddressesT&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::forward<PrivateIpAddressesT>(value); }
    template<typename PrivateIpAddressesT = Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails>>
    AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithPrivateIpAddresses(PrivateIpAddressesT&& value) { SetPrivateIpAddresses(std::forward<PrivateIpAddressesT>(value)); return *this;}
    template<typename PrivateIpAddressesT = AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails>
    AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& AddPrivateIpAddresses(PrivateIpAddressesT&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.emplace_back(std::forward<PrivateIpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The number of secondary private IPv4 addresses to assign to a network
     * interface. </p>
     */
    inline int GetSecondaryPrivateIpAddressCount() const { return m_secondaryPrivateIpAddressCount; }
    inline bool SecondaryPrivateIpAddressCountHasBeenSet() const { return m_secondaryPrivateIpAddressCountHasBeenSet; }
    inline void SetSecondaryPrivateIpAddressCount(int value) { m_secondaryPrivateIpAddressCountHasBeenSet = true; m_secondaryPrivateIpAddressCount = value; }
    inline AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithSecondaryPrivateIpAddressCount(int value) { SetSecondaryPrivateIpAddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the subnet for the network interface. </p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}
  private:

    bool m_associateCarrierIpAddress{false};
    bool m_associateCarrierIpAddressHasBeenSet = false;

    bool m_associatePublicIpAddress{false};
    bool m_associatePublicIpAddressHasBeenSet = false;

    bool m_deleteOnTermination{false};
    bool m_deleteOnTerminationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_deviceIndex{0};
    bool m_deviceIndexHasBeenSet = false;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::String m_interfaceType;
    bool m_interfaceTypeHasBeenSet = false;

    int m_ipv4PrefixCount{0};
    bool m_ipv4PrefixCountHasBeenSet = false;

    Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv4PrefixesDetails> m_ipv4Prefixes;
    bool m_ipv4PrefixesHasBeenSet = false;

    int m_ipv6AddressCount{0};
    bool m_ipv6AddressCountHasBeenSet = false;

    Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6AddressesDetails> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet = false;

    int m_ipv6PrefixCount{0};
    bool m_ipv6PrefixCountHasBeenSet = false;

    Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetIpv6PrefixesDetails> m_ipv6Prefixes;
    bool m_ipv6PrefixesHasBeenSet = false;

    int m_networkCardIndex{0};
    bool m_networkCardIndexHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetPrivateIpAddressesDetails> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet = false;

    int m_secondaryPrivateIpAddressCount{0};
    bool m_secondaryPrivateIpAddressCountHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
