/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsEc2NetworkInterfaceAttachment.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEc2NetworkInterfaceSecurityGroup.h>
#include <aws/securityhub/model/AwsEc2NetworkInterfaceIpV6AddressDetail.h>
#include <aws/securityhub/model/AwsEc2NetworkInterfacePrivateIpAddressDetail.h>
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
   * <p>Details about the network interface</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2NetworkInterfaceDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2NetworkInterfaceDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2NetworkInterfaceDetails() = default;
    AWS_SECURITYHUB_API AwsEc2NetworkInterfaceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2NetworkInterfaceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The network interface attachment.</p>
     */
    inline const AwsEc2NetworkInterfaceAttachment& GetAttachment() const { return m_attachment; }
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }
    template<typename AttachmentT = AwsEc2NetworkInterfaceAttachment>
    void SetAttachment(AttachmentT&& value) { m_attachmentHasBeenSet = true; m_attachment = std::forward<AttachmentT>(value); }
    template<typename AttachmentT = AwsEc2NetworkInterfaceAttachment>
    AwsEc2NetworkInterfaceDetails& WithAttachment(AttachmentT&& value) { SetAttachment(std::forward<AttachmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    AwsEc2NetworkInterfaceDetails& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Security groups for the network interface.</p>
     */
    inline const Aws::Vector<AwsEc2NetworkInterfaceSecurityGroup>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<AwsEc2NetworkInterfaceSecurityGroup>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<AwsEc2NetworkInterfaceSecurityGroup>>
    AwsEc2NetworkInterfaceDetails& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = AwsEc2NetworkInterfaceSecurityGroup>
    AwsEc2NetworkInterfaceDetails& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether traffic to or from the instance is validated.</p>
     */
    inline bool GetSourceDestCheck() const { return m_sourceDestCheck; }
    inline bool SourceDestCheckHasBeenSet() const { return m_sourceDestCheckHasBeenSet; }
    inline void SetSourceDestCheck(bool value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = value; }
    inline AwsEc2NetworkInterfaceDetails& WithSourceDestCheck(bool value) { SetSourceDestCheck(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline const Aws::Vector<AwsEc2NetworkInterfaceIpV6AddressDetail>& GetIpV6Addresses() const { return m_ipV6Addresses; }
    inline bool IpV6AddressesHasBeenSet() const { return m_ipV6AddressesHasBeenSet; }
    template<typename IpV6AddressesT = Aws::Vector<AwsEc2NetworkInterfaceIpV6AddressDetail>>
    void SetIpV6Addresses(IpV6AddressesT&& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses = std::forward<IpV6AddressesT>(value); }
    template<typename IpV6AddressesT = Aws::Vector<AwsEc2NetworkInterfaceIpV6AddressDetail>>
    AwsEc2NetworkInterfaceDetails& WithIpV6Addresses(IpV6AddressesT&& value) { SetIpV6Addresses(std::forward<IpV6AddressesT>(value)); return *this;}
    template<typename IpV6AddressesT = AwsEc2NetworkInterfaceIpV6AddressDetail>
    AwsEc2NetworkInterfaceDetails& AddIpV6Addresses(IpV6AddressesT&& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses.emplace_back(std::forward<IpV6AddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline const Aws::Vector<AwsEc2NetworkInterfacePrivateIpAddressDetail>& GetPrivateIpAddresses() const { return m_privateIpAddresses; }
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }
    template<typename PrivateIpAddressesT = Aws::Vector<AwsEc2NetworkInterfacePrivateIpAddressDetail>>
    void SetPrivateIpAddresses(PrivateIpAddressesT&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::forward<PrivateIpAddressesT>(value); }
    template<typename PrivateIpAddressesT = Aws::Vector<AwsEc2NetworkInterfacePrivateIpAddressDetail>>
    AwsEc2NetworkInterfaceDetails& WithPrivateIpAddresses(PrivateIpAddressesT&& value) { SetPrivateIpAddresses(std::forward<PrivateIpAddressesT>(value)); return *this;}
    template<typename PrivateIpAddressesT = AwsEc2NetworkInterfacePrivateIpAddressDetail>
    AwsEc2NetworkInterfaceDetails& AddPrivateIpAddresses(PrivateIpAddressesT&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.emplace_back(std::forward<PrivateIpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The public DNS name of the network interface.</p>
     */
    inline const Aws::String& GetPublicDnsName() const { return m_publicDnsName; }
    inline bool PublicDnsNameHasBeenSet() const { return m_publicDnsNameHasBeenSet; }
    template<typename PublicDnsNameT = Aws::String>
    void SetPublicDnsName(PublicDnsNameT&& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = std::forward<PublicDnsNameT>(value); }
    template<typename PublicDnsNameT = Aws::String>
    AwsEc2NetworkInterfaceDetails& WithPublicDnsName(PublicDnsNameT&& value) { SetPublicDnsName(std::forward<PublicDnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline const Aws::String& GetPublicIp() const { return m_publicIp; }
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }
    template<typename PublicIpT = Aws::String>
    void SetPublicIp(PublicIpT&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::forward<PublicIpT>(value); }
    template<typename PublicIpT = Aws::String>
    AwsEc2NetworkInterfaceDetails& WithPublicIp(PublicIpT&& value) { SetPublicIp(std::forward<PublicIpT>(value)); return *this;}
    ///@}
  private:

    AwsEc2NetworkInterfaceAttachment m_attachment;
    bool m_attachmentHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::Vector<AwsEc2NetworkInterfaceSecurityGroup> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    bool m_sourceDestCheck{false};
    bool m_sourceDestCheckHasBeenSet = false;

    Aws::Vector<AwsEc2NetworkInterfaceIpV6AddressDetail> m_ipV6Addresses;
    bool m_ipV6AddressesHasBeenSet = false;

    Aws::Vector<AwsEc2NetworkInterfacePrivateIpAddressDetail> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet = false;

    Aws::String m_publicDnsName;
    bool m_publicDnsNameHasBeenSet = false;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
