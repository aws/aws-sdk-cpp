/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEc2InstanceMetadataOptions.h>
#include <aws/securityhub/model/AwsEc2InstanceMonitoringDetails.h>
#include <aws/securityhub/model/AwsEc2InstanceNetworkInterfacesDetails.h>
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
   * <p>The details of an Amazon EC2 instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2InstanceDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2InstanceDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2InstanceDetails();
    AWS_SECURITYHUB_API AwsEc2InstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2InstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance type of the instance. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline AwsEc2InstanceDetails& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline AwsEc2InstanceDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline AwsEc2InstanceDetails& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Machine Image (AMI) ID of the instance.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline AwsEc2InstanceDetails& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline AwsEc2InstanceDetails& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline AwsEc2InstanceDetails& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 addresses associated with the instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpV4Addresses() const{ return m_ipV4Addresses; }
    inline bool IpV4AddressesHasBeenSet() const { return m_ipV4AddressesHasBeenSet; }
    inline void SetIpV4Addresses(const Aws::Vector<Aws::String>& value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses = value; }
    inline void SetIpV4Addresses(Aws::Vector<Aws::String>&& value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses = std::move(value); }
    inline AwsEc2InstanceDetails& WithIpV4Addresses(const Aws::Vector<Aws::String>& value) { SetIpV4Addresses(value); return *this;}
    inline AwsEc2InstanceDetails& WithIpV4Addresses(Aws::Vector<Aws::String>&& value) { SetIpV4Addresses(std::move(value)); return *this;}
    inline AwsEc2InstanceDetails& AddIpV4Addresses(const Aws::String& value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses.push_back(value); return *this; }
    inline AwsEc2InstanceDetails& AddIpV4Addresses(Aws::String&& value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses.push_back(std::move(value)); return *this; }
    inline AwsEc2InstanceDetails& AddIpV4Addresses(const char* value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv6 addresses associated with the instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpV6Addresses() const{ return m_ipV6Addresses; }
    inline bool IpV6AddressesHasBeenSet() const { return m_ipV6AddressesHasBeenSet; }
    inline void SetIpV6Addresses(const Aws::Vector<Aws::String>& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses = value; }
    inline void SetIpV6Addresses(Aws::Vector<Aws::String>&& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses = std::move(value); }
    inline AwsEc2InstanceDetails& WithIpV6Addresses(const Aws::Vector<Aws::String>& value) { SetIpV6Addresses(value); return *this;}
    inline AwsEc2InstanceDetails& WithIpV6Addresses(Aws::Vector<Aws::String>&& value) { SetIpV6Addresses(std::move(value)); return *this;}
    inline AwsEc2InstanceDetails& AddIpV6Addresses(const Aws::String& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses.push_back(value); return *this; }
    inline AwsEc2InstanceDetails& AddIpV6Addresses(Aws::String&& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses.push_back(std::move(value)); return *this; }
    inline AwsEc2InstanceDetails& AddIpV6Addresses(const char* value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The key name associated with the instance.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }
    inline AwsEc2InstanceDetails& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}
    inline AwsEc2InstanceDetails& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}
    inline AwsEc2InstanceDetails& WithKeyName(const char* value) { SetKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM profile ARN of the instance.</p>
     */
    inline const Aws::String& GetIamInstanceProfileArn() const{ return m_iamInstanceProfileArn; }
    inline bool IamInstanceProfileArnHasBeenSet() const { return m_iamInstanceProfileArnHasBeenSet; }
    inline void SetIamInstanceProfileArn(const Aws::String& value) { m_iamInstanceProfileArnHasBeenSet = true; m_iamInstanceProfileArn = value; }
    inline void SetIamInstanceProfileArn(Aws::String&& value) { m_iamInstanceProfileArnHasBeenSet = true; m_iamInstanceProfileArn = std::move(value); }
    inline void SetIamInstanceProfileArn(const char* value) { m_iamInstanceProfileArnHasBeenSet = true; m_iamInstanceProfileArn.assign(value); }
    inline AwsEc2InstanceDetails& WithIamInstanceProfileArn(const Aws::String& value) { SetIamInstanceProfileArn(value); return *this;}
    inline AwsEc2InstanceDetails& WithIamInstanceProfileArn(Aws::String&& value) { SetIamInstanceProfileArn(std::move(value)); return *this;}
    inline AwsEc2InstanceDetails& WithIamInstanceProfileArn(const char* value) { SetIamInstanceProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the VPC that the instance was launched in.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline AwsEc2InstanceDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline AwsEc2InstanceDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline AwsEc2InstanceDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subnet that the instance was launched in.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline AwsEc2InstanceDetails& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline AwsEc2InstanceDetails& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline AwsEc2InstanceDetails& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the instance was launched.</p> <p>For more information about
     * the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLaunchedAt() const{ return m_launchedAt; }
    inline bool LaunchedAtHasBeenSet() const { return m_launchedAtHasBeenSet; }
    inline void SetLaunchedAt(const Aws::String& value) { m_launchedAtHasBeenSet = true; m_launchedAt = value; }
    inline void SetLaunchedAt(Aws::String&& value) { m_launchedAtHasBeenSet = true; m_launchedAt = std::move(value); }
    inline void SetLaunchedAt(const char* value) { m_launchedAtHasBeenSet = true; m_launchedAt.assign(value); }
    inline AwsEc2InstanceDetails& WithLaunchedAt(const Aws::String& value) { SetLaunchedAt(value); return *this;}
    inline AwsEc2InstanceDetails& WithLaunchedAt(Aws::String&& value) { SetLaunchedAt(std::move(value)); return *this;}
    inline AwsEc2InstanceDetails& WithLaunchedAt(const char* value) { SetLaunchedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the network interfaces for the EC2 instance. The details
     * for each network interface are in a corresponding
     * <code>AwsEc2NetworkInterfacesDetails</code> object.</p>
     */
    inline const Aws::Vector<AwsEc2InstanceNetworkInterfacesDetails>& GetNetworkInterfaces() const{ return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    inline void SetNetworkInterfaces(const Aws::Vector<AwsEc2InstanceNetworkInterfacesDetails>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }
    inline void SetNetworkInterfaces(Aws::Vector<AwsEc2InstanceNetworkInterfacesDetails>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }
    inline AwsEc2InstanceDetails& WithNetworkInterfaces(const Aws::Vector<AwsEc2InstanceNetworkInterfacesDetails>& value) { SetNetworkInterfaces(value); return *this;}
    inline AwsEc2InstanceDetails& WithNetworkInterfaces(Aws::Vector<AwsEc2InstanceNetworkInterfacesDetails>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}
    inline AwsEc2InstanceDetails& AddNetworkInterfaces(const AwsEc2InstanceNetworkInterfacesDetails& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }
    inline AwsEc2InstanceDetails& AddNetworkInterfaces(AwsEc2InstanceNetworkInterfacesDetails&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The virtualization type of the Amazon Machine Image (AMI) required to launch
     * the instance. </p>
     */
    inline const Aws::String& GetVirtualizationType() const{ return m_virtualizationType; }
    inline bool VirtualizationTypeHasBeenSet() const { return m_virtualizationTypeHasBeenSet; }
    inline void SetVirtualizationType(const Aws::String& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = value; }
    inline void SetVirtualizationType(Aws::String&& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = std::move(value); }
    inline void SetVirtualizationType(const char* value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType.assign(value); }
    inline AwsEc2InstanceDetails& WithVirtualizationType(const Aws::String& value) { SetVirtualizationType(value); return *this;}
    inline AwsEc2InstanceDetails& WithVirtualizationType(Aws::String&& value) { SetVirtualizationType(std::move(value)); return *this;}
    inline AwsEc2InstanceDetails& WithVirtualizationType(const char* value) { SetVirtualizationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the metadata options for the Amazon EC2 instance. </p>
     */
    inline const AwsEc2InstanceMetadataOptions& GetMetadataOptions() const{ return m_metadataOptions; }
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }
    inline void SetMetadataOptions(const AwsEc2InstanceMetadataOptions& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = value; }
    inline void SetMetadataOptions(AwsEc2InstanceMetadataOptions&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::move(value); }
    inline AwsEc2InstanceDetails& WithMetadataOptions(const AwsEc2InstanceMetadataOptions& value) { SetMetadataOptions(value); return *this;}
    inline AwsEc2InstanceDetails& WithMetadataOptions(AwsEc2InstanceMetadataOptions&& value) { SetMetadataOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the type of monitoring that’s turned on for an instance. </p>
     */
    inline const AwsEc2InstanceMonitoringDetails& GetMonitoring() const{ return m_monitoring; }
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }
    inline void SetMonitoring(const AwsEc2InstanceMonitoringDetails& value) { m_monitoringHasBeenSet = true; m_monitoring = value; }
    inline void SetMonitoring(AwsEc2InstanceMonitoringDetails&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::move(value); }
    inline AwsEc2InstanceDetails& WithMonitoring(const AwsEc2InstanceMonitoringDetails& value) { SetMonitoring(value); return *this;}
    inline AwsEc2InstanceDetails& WithMonitoring(AwsEc2InstanceMonitoringDetails&& value) { SetMonitoring(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipV4Addresses;
    bool m_ipV4AddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipV6Addresses;
    bool m_ipV6AddressesHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::String m_iamInstanceProfileArn;
    bool m_iamInstanceProfileArnHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_launchedAt;
    bool m_launchedAtHasBeenSet = false;

    Aws::Vector<AwsEc2InstanceNetworkInterfacesDetails> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    Aws::String m_virtualizationType;
    bool m_virtualizationTypeHasBeenSet = false;

    AwsEc2InstanceMetadataOptions m_metadataOptions;
    bool m_metadataOptionsHasBeenSet = false;

    AwsEc2InstanceMonitoringDetails m_monitoring;
    bool m_monitoringHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
