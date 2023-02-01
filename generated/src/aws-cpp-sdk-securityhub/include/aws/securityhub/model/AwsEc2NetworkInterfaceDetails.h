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
    AWS_SECURITYHUB_API AwsEc2NetworkInterfaceDetails();
    AWS_SECURITYHUB_API AwsEc2NetworkInterfaceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2NetworkInterfaceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The network interface attachment.</p>
     */
    inline const AwsEc2NetworkInterfaceAttachment& GetAttachment() const{ return m_attachment; }

    /**
     * <p>The network interface attachment.</p>
     */
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }

    /**
     * <p>The network interface attachment.</p>
     */
    inline void SetAttachment(const AwsEc2NetworkInterfaceAttachment& value) { m_attachmentHasBeenSet = true; m_attachment = value; }

    /**
     * <p>The network interface attachment.</p>
     */
    inline void SetAttachment(AwsEc2NetworkInterfaceAttachment&& value) { m_attachmentHasBeenSet = true; m_attachment = std::move(value); }

    /**
     * <p>The network interface attachment.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithAttachment(const AwsEc2NetworkInterfaceAttachment& value) { SetAttachment(value); return *this;}

    /**
     * <p>The network interface attachment.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithAttachment(AwsEc2NetworkInterfaceAttachment&& value) { SetAttachment(std::move(value)); return *this;}


    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>Security groups for the network interface.</p>
     */
    inline const Aws::Vector<AwsEc2NetworkInterfaceSecurityGroup>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>Security groups for the network interface.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>Security groups for the network interface.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<AwsEc2NetworkInterfaceSecurityGroup>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>Security groups for the network interface.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<AwsEc2NetworkInterfaceSecurityGroup>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>Security groups for the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithSecurityGroups(const Aws::Vector<AwsEc2NetworkInterfaceSecurityGroup>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>Security groups for the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithSecurityGroups(Aws::Vector<AwsEc2NetworkInterfaceSecurityGroup>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>Security groups for the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& AddSecurityGroups(const AwsEc2NetworkInterfaceSecurityGroup& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>Security groups for the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& AddSecurityGroups(AwsEc2NetworkInterfaceSecurityGroup&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether traffic to or from the instance is validated.</p>
     */
    inline bool GetSourceDestCheck() const{ return m_sourceDestCheck; }

    /**
     * <p>Indicates whether traffic to or from the instance is validated.</p>
     */
    inline bool SourceDestCheckHasBeenSet() const { return m_sourceDestCheckHasBeenSet; }

    /**
     * <p>Indicates whether traffic to or from the instance is validated.</p>
     */
    inline void SetSourceDestCheck(bool value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = value; }

    /**
     * <p>Indicates whether traffic to or from the instance is validated.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithSourceDestCheck(bool value) { SetSourceDestCheck(value); return *this;}


    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline const Aws::Vector<AwsEc2NetworkInterfaceIpV6AddressDetail>& GetIpV6Addresses() const{ return m_ipV6Addresses; }

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline bool IpV6AddressesHasBeenSet() const { return m_ipV6AddressesHasBeenSet; }

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline void SetIpV6Addresses(const Aws::Vector<AwsEc2NetworkInterfaceIpV6AddressDetail>& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses = value; }

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline void SetIpV6Addresses(Aws::Vector<AwsEc2NetworkInterfaceIpV6AddressDetail>&& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses = std::move(value); }

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithIpV6Addresses(const Aws::Vector<AwsEc2NetworkInterfaceIpV6AddressDetail>& value) { SetIpV6Addresses(value); return *this;}

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithIpV6Addresses(Aws::Vector<AwsEc2NetworkInterfaceIpV6AddressDetail>&& value) { SetIpV6Addresses(std::move(value)); return *this;}

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& AddIpV6Addresses(const AwsEc2NetworkInterfaceIpV6AddressDetail& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses.push_back(value); return *this; }

    /**
     * <p>The IPv6 addresses associated with the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& AddIpV6Addresses(AwsEc2NetworkInterfaceIpV6AddressDetail&& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses.push_back(std::move(value)); return *this; }


    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline const Aws::Vector<AwsEc2NetworkInterfacePrivateIpAddressDetail>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline void SetPrivateIpAddresses(const Aws::Vector<AwsEc2NetworkInterfacePrivateIpAddressDetail>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline void SetPrivateIpAddresses(Aws::Vector<AwsEc2NetworkInterfacePrivateIpAddressDetail>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::move(value); }

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithPrivateIpAddresses(const Aws::Vector<AwsEc2NetworkInterfacePrivateIpAddressDetail>& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithPrivateIpAddresses(Aws::Vector<AwsEc2NetworkInterfacePrivateIpAddressDetail>&& value) { SetPrivateIpAddresses(std::move(value)); return *this;}

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& AddPrivateIpAddresses(const AwsEc2NetworkInterfacePrivateIpAddressDetail& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

    /**
     * <p>The private IPv4 addresses associated with the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& AddPrivateIpAddresses(AwsEc2NetworkInterfacePrivateIpAddressDetail&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(std::move(value)); return *this; }


    /**
     * <p>The public DNS name of the network interface.</p>
     */
    inline const Aws::String& GetPublicDnsName() const{ return m_publicDnsName; }

    /**
     * <p>The public DNS name of the network interface.</p>
     */
    inline bool PublicDnsNameHasBeenSet() const { return m_publicDnsNameHasBeenSet; }

    /**
     * <p>The public DNS name of the network interface.</p>
     */
    inline void SetPublicDnsName(const Aws::String& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = value; }

    /**
     * <p>The public DNS name of the network interface.</p>
     */
    inline void SetPublicDnsName(Aws::String&& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = std::move(value); }

    /**
     * <p>The public DNS name of the network interface.</p>
     */
    inline void SetPublicDnsName(const char* value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName.assign(value); }

    /**
     * <p>The public DNS name of the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithPublicDnsName(const Aws::String& value) { SetPublicDnsName(value); return *this;}

    /**
     * <p>The public DNS name of the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithPublicDnsName(Aws::String&& value) { SetPublicDnsName(std::move(value)); return *this;}

    /**
     * <p>The public DNS name of the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithPublicDnsName(const char* value) { SetPublicDnsName(value); return *this;}


    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline AwsEc2NetworkInterfaceDetails& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}

  private:

    AwsEc2NetworkInterfaceAttachment m_attachment;
    bool m_attachmentHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::Vector<AwsEc2NetworkInterfaceSecurityGroup> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    bool m_sourceDestCheck;
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
