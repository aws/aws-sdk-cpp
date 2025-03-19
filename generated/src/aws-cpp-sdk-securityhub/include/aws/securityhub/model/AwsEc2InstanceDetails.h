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
    AWS_SECURITYHUB_API AwsEc2InstanceDetails() = default;
    AWS_SECURITYHUB_API AwsEc2InstanceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2InstanceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance type of the instance. </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsEc2InstanceDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Machine Image (AMI) ID of the instance.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    AwsEc2InstanceDetails& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 addresses associated with the instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpV4Addresses() const { return m_ipV4Addresses; }
    inline bool IpV4AddressesHasBeenSet() const { return m_ipV4AddressesHasBeenSet; }
    template<typename IpV4AddressesT = Aws::Vector<Aws::String>>
    void SetIpV4Addresses(IpV4AddressesT&& value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses = std::forward<IpV4AddressesT>(value); }
    template<typename IpV4AddressesT = Aws::Vector<Aws::String>>
    AwsEc2InstanceDetails& WithIpV4Addresses(IpV4AddressesT&& value) { SetIpV4Addresses(std::forward<IpV4AddressesT>(value)); return *this;}
    template<typename IpV4AddressesT = Aws::String>
    AwsEc2InstanceDetails& AddIpV4Addresses(IpV4AddressesT&& value) { m_ipV4AddressesHasBeenSet = true; m_ipV4Addresses.emplace_back(std::forward<IpV4AddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv6 addresses associated with the instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpV6Addresses() const { return m_ipV6Addresses; }
    inline bool IpV6AddressesHasBeenSet() const { return m_ipV6AddressesHasBeenSet; }
    template<typename IpV6AddressesT = Aws::Vector<Aws::String>>
    void SetIpV6Addresses(IpV6AddressesT&& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses = std::forward<IpV6AddressesT>(value); }
    template<typename IpV6AddressesT = Aws::Vector<Aws::String>>
    AwsEc2InstanceDetails& WithIpV6Addresses(IpV6AddressesT&& value) { SetIpV6Addresses(std::forward<IpV6AddressesT>(value)); return *this;}
    template<typename IpV6AddressesT = Aws::String>
    AwsEc2InstanceDetails& AddIpV6Addresses(IpV6AddressesT&& value) { m_ipV6AddressesHasBeenSet = true; m_ipV6Addresses.emplace_back(std::forward<IpV6AddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The key name associated with the instance.</p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    AwsEc2InstanceDetails& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM profile ARN of the instance.</p>
     */
    inline const Aws::String& GetIamInstanceProfileArn() const { return m_iamInstanceProfileArn; }
    inline bool IamInstanceProfileArnHasBeenSet() const { return m_iamInstanceProfileArnHasBeenSet; }
    template<typename IamInstanceProfileArnT = Aws::String>
    void SetIamInstanceProfileArn(IamInstanceProfileArnT&& value) { m_iamInstanceProfileArnHasBeenSet = true; m_iamInstanceProfileArn = std::forward<IamInstanceProfileArnT>(value); }
    template<typename IamInstanceProfileArnT = Aws::String>
    AwsEc2InstanceDetails& WithIamInstanceProfileArn(IamInstanceProfileArnT&& value) { SetIamInstanceProfileArn(std::forward<IamInstanceProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the VPC that the instance was launched in.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    AwsEc2InstanceDetails& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subnet that the instance was launched in.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    AwsEc2InstanceDetails& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the instance was launched.</p> <p>For more information about
     * the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLaunchedAt() const { return m_launchedAt; }
    inline bool LaunchedAtHasBeenSet() const { return m_launchedAtHasBeenSet; }
    template<typename LaunchedAtT = Aws::String>
    void SetLaunchedAt(LaunchedAtT&& value) { m_launchedAtHasBeenSet = true; m_launchedAt = std::forward<LaunchedAtT>(value); }
    template<typename LaunchedAtT = Aws::String>
    AwsEc2InstanceDetails& WithLaunchedAt(LaunchedAtT&& value) { SetLaunchedAt(std::forward<LaunchedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the network interfaces for the EC2 instance. The details
     * for each network interface are in a corresponding
     * <code>AwsEc2NetworkInterfacesDetails</code> object.</p>
     */
    inline const Aws::Vector<AwsEc2InstanceNetworkInterfacesDetails>& GetNetworkInterfaces() const { return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    template<typename NetworkInterfacesT = Aws::Vector<AwsEc2InstanceNetworkInterfacesDetails>>
    void SetNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::forward<NetworkInterfacesT>(value); }
    template<typename NetworkInterfacesT = Aws::Vector<AwsEc2InstanceNetworkInterfacesDetails>>
    AwsEc2InstanceDetails& WithNetworkInterfaces(NetworkInterfacesT&& value) { SetNetworkInterfaces(std::forward<NetworkInterfacesT>(value)); return *this;}
    template<typename NetworkInterfacesT = AwsEc2InstanceNetworkInterfacesDetails>
    AwsEc2InstanceDetails& AddNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.emplace_back(std::forward<NetworkInterfacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The virtualization type of the Amazon Machine Image (AMI) required to launch
     * the instance. </p>
     */
    inline const Aws::String& GetVirtualizationType() const { return m_virtualizationType; }
    inline bool VirtualizationTypeHasBeenSet() const { return m_virtualizationTypeHasBeenSet; }
    template<typename VirtualizationTypeT = Aws::String>
    void SetVirtualizationType(VirtualizationTypeT&& value) { m_virtualizationTypeHasBeenSet = true; m_virtualizationType = std::forward<VirtualizationTypeT>(value); }
    template<typename VirtualizationTypeT = Aws::String>
    AwsEc2InstanceDetails& WithVirtualizationType(VirtualizationTypeT&& value) { SetVirtualizationType(std::forward<VirtualizationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the metadata options for the Amazon EC2 instance. </p>
     */
    inline const AwsEc2InstanceMetadataOptions& GetMetadataOptions() const { return m_metadataOptions; }
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }
    template<typename MetadataOptionsT = AwsEc2InstanceMetadataOptions>
    void SetMetadataOptions(MetadataOptionsT&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::forward<MetadataOptionsT>(value); }
    template<typename MetadataOptionsT = AwsEc2InstanceMetadataOptions>
    AwsEc2InstanceDetails& WithMetadataOptions(MetadataOptionsT&& value) { SetMetadataOptions(std::forward<MetadataOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the type of monitoring that’s turned on for an instance. </p>
     */
    inline const AwsEc2InstanceMonitoringDetails& GetMonitoring() const { return m_monitoring; }
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }
    template<typename MonitoringT = AwsEc2InstanceMonitoringDetails>
    void SetMonitoring(MonitoringT&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::forward<MonitoringT>(value); }
    template<typename MonitoringT = AwsEc2InstanceMonitoringDetails>
    AwsEc2InstanceDetails& WithMonitoring(MonitoringT&& value) { SetMonitoring(std::forward<MonitoringT>(value)); return *this;}
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
