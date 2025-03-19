/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsAutoScalingLaunchConfigurationInstanceMonitoringDetails.h>
#include <aws/securityhub/model/AwsAutoScalingLaunchConfigurationMetadataOptions.h>
#include <aws/securityhub/model/AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails.h>
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
   * <p>Details about a launch configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAutoScalingLaunchConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsAutoScalingLaunchConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationDetails() = default;
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For Auto Scaling groups that run in a VPC, specifies whether to assign a
     * public IP address to the group's instances.</p>
     */
    inline bool GetAssociatePublicIpAddress() const { return m_associatePublicIpAddress; }
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }
    inline AwsAutoScalingLaunchConfigurationDetails& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the block devices for the instance.</p>
     */
    inline const Aws::Vector<AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails>& GetBlockDeviceMappings() const { return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    template<typename BlockDeviceMappingsT = Aws::Vector<AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails>>
    void SetBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::forward<BlockDeviceMappingsT>(value); }
    template<typename BlockDeviceMappingsT = Aws::Vector<AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails>>
    AwsAutoScalingLaunchConfigurationDetails& WithBlockDeviceMappings(BlockDeviceMappingsT&& value) { SetBlockDeviceMappings(std::forward<BlockDeviceMappingsT>(value)); return *this;}
    template<typename BlockDeviceMappingsT = AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails>
    AwsAutoScalingLaunchConfigurationDetails& AddBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.emplace_back(std::forward<BlockDeviceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of a ClassicLink-enabled VPC that EC2-Classic instances are
     * linked to.</p>
     */
    inline const Aws::String& GetClassicLinkVpcId() const { return m_classicLinkVpcId; }
    inline bool ClassicLinkVpcIdHasBeenSet() const { return m_classicLinkVpcIdHasBeenSet; }
    template<typename ClassicLinkVpcIdT = Aws::String>
    void SetClassicLinkVpcId(ClassicLinkVpcIdT&& value) { m_classicLinkVpcIdHasBeenSet = true; m_classicLinkVpcId = std::forward<ClassicLinkVpcIdT>(value); }
    template<typename ClassicLinkVpcIdT = Aws::String>
    AwsAutoScalingLaunchConfigurationDetails& WithClassicLinkVpcId(ClassicLinkVpcIdT&& value) { SetClassicLinkVpcId(std::forward<ClassicLinkVpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of one or more security groups for the VPC that is specified
     * in <code>ClassicLinkVPCId</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClassicLinkVpcSecurityGroups() const { return m_classicLinkVpcSecurityGroups; }
    inline bool ClassicLinkVpcSecurityGroupsHasBeenSet() const { return m_classicLinkVpcSecurityGroupsHasBeenSet; }
    template<typename ClassicLinkVpcSecurityGroupsT = Aws::Vector<Aws::String>>
    void SetClassicLinkVpcSecurityGroups(ClassicLinkVpcSecurityGroupsT&& value) { m_classicLinkVpcSecurityGroupsHasBeenSet = true; m_classicLinkVpcSecurityGroups = std::forward<ClassicLinkVpcSecurityGroupsT>(value); }
    template<typename ClassicLinkVpcSecurityGroupsT = Aws::Vector<Aws::String>>
    AwsAutoScalingLaunchConfigurationDetails& WithClassicLinkVpcSecurityGroups(ClassicLinkVpcSecurityGroupsT&& value) { SetClassicLinkVpcSecurityGroups(std::forward<ClassicLinkVpcSecurityGroupsT>(value)); return *this;}
    template<typename ClassicLinkVpcSecurityGroupsT = Aws::String>
    AwsAutoScalingLaunchConfigurationDetails& AddClassicLinkVpcSecurityGroups(ClassicLinkVpcSecurityGroupsT&& value) { m_classicLinkVpcSecurityGroupsHasBeenSet = true; m_classicLinkVpcSecurityGroups.emplace_back(std::forward<ClassicLinkVpcSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The creation date and time for the launch configuration.</p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::String>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::String>
    AwsAutoScalingLaunchConfigurationDetails& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the launch configuration is optimized for Amazon EBS I/O.</p>
     */
    inline bool GetEbsOptimized() const { return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline AwsAutoScalingLaunchConfigurationDetails& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or the ARN of the instance profile associated with the IAM role for
     * the instance. The instance profile contains the IAM role.</p>
     */
    inline const Aws::String& GetIamInstanceProfile() const { return m_iamInstanceProfile; }
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }
    template<typename IamInstanceProfileT = Aws::String>
    void SetIamInstanceProfile(IamInstanceProfileT&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::forward<IamInstanceProfileT>(value); }
    template<typename IamInstanceProfileT = Aws::String>
    AwsAutoScalingLaunchConfigurationDetails& WithIamInstanceProfile(IamInstanceProfileT&& value) { SetIamInstanceProfile(std::forward<IamInstanceProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Machine Image (AMI) that is used to launch EC2
     * instances.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    AwsAutoScalingLaunchConfigurationDetails& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of monitoring for instances in the group.</p>
     */
    inline const AwsAutoScalingLaunchConfigurationInstanceMonitoringDetails& GetInstanceMonitoring() const { return m_instanceMonitoring; }
    inline bool InstanceMonitoringHasBeenSet() const { return m_instanceMonitoringHasBeenSet; }
    template<typename InstanceMonitoringT = AwsAutoScalingLaunchConfigurationInstanceMonitoringDetails>
    void SetInstanceMonitoring(InstanceMonitoringT&& value) { m_instanceMonitoringHasBeenSet = true; m_instanceMonitoring = std::forward<InstanceMonitoringT>(value); }
    template<typename InstanceMonitoringT = AwsAutoScalingLaunchConfigurationInstanceMonitoringDetails>
    AwsAutoScalingLaunchConfigurationDetails& WithInstanceMonitoring(InstanceMonitoringT&& value) { SetInstanceMonitoring(std::forward<InstanceMonitoringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type for the instances.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    AwsAutoScalingLaunchConfigurationDetails& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the kernel associated with the AMI.</p>
     */
    inline const Aws::String& GetKernelId() const { return m_kernelId; }
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }
    template<typename KernelIdT = Aws::String>
    void SetKernelId(KernelIdT&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::forward<KernelIdT>(value); }
    template<typename KernelIdT = Aws::String>
    AwsAutoScalingLaunchConfigurationDetails& WithKernelId(KernelIdT&& value) { SetKernelId(std::forward<KernelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the key pair.</p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    AwsAutoScalingLaunchConfigurationDetails& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch configuration.</p>
     */
    inline const Aws::String& GetLaunchConfigurationName() const { return m_launchConfigurationName; }
    inline bool LaunchConfigurationNameHasBeenSet() const { return m_launchConfigurationNameHasBeenSet; }
    template<typename LaunchConfigurationNameT = Aws::String>
    void SetLaunchConfigurationName(LaunchConfigurationNameT&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = std::forward<LaunchConfigurationNameT>(value); }
    template<typename LaunchConfigurationNameT = Aws::String>
    AwsAutoScalingLaunchConfigurationDetails& WithLaunchConfigurationName(LaunchConfigurationNameT&& value) { SetLaunchConfigurationName(std::forward<LaunchConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tenancy of the instance. An instance with <code>dedicated</code> tenancy
     * runs on isolated, single-tenant hardware and can only be launched into a
     * VPC.</p>
     */
    inline const Aws::String& GetPlacementTenancy() const { return m_placementTenancy; }
    inline bool PlacementTenancyHasBeenSet() const { return m_placementTenancyHasBeenSet; }
    template<typename PlacementTenancyT = Aws::String>
    void SetPlacementTenancy(PlacementTenancyT&& value) { m_placementTenancyHasBeenSet = true; m_placementTenancy = std::forward<PlacementTenancyT>(value); }
    template<typename PlacementTenancyT = Aws::String>
    AwsAutoScalingLaunchConfigurationDetails& WithPlacementTenancy(PlacementTenancyT&& value) { SetPlacementTenancy(std::forward<PlacementTenancyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the RAM disk associated with the AMI.</p>
     */
    inline const Aws::String& GetRamdiskId() const { return m_ramdiskId; }
    inline bool RamdiskIdHasBeenSet() const { return m_ramdiskIdHasBeenSet; }
    template<typename RamdiskIdT = Aws::String>
    void SetRamdiskId(RamdiskIdT&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::forward<RamdiskIdT>(value); }
    template<typename RamdiskIdT = Aws::String>
    AwsAutoScalingLaunchConfigurationDetails& WithRamdiskId(RamdiskIdT&& value) { SetRamdiskId(std::forward<RamdiskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups to assign to the instances in the Auto Scaling group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    AwsAutoScalingLaunchConfigurationDetails& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    AwsAutoScalingLaunchConfigurationDetails& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum hourly price to be paid for any Spot Instance that is launched to
     * fulfill the request.</p>
     */
    inline const Aws::String& GetSpotPrice() const { return m_spotPrice; }
    inline bool SpotPriceHasBeenSet() const { return m_spotPriceHasBeenSet; }
    template<typename SpotPriceT = Aws::String>
    void SetSpotPrice(SpotPriceT&& value) { m_spotPriceHasBeenSet = true; m_spotPrice = std::forward<SpotPriceT>(value); }
    template<typename SpotPriceT = Aws::String>
    AwsAutoScalingLaunchConfigurationDetails& WithSpotPrice(SpotPriceT&& value) { SetSpotPrice(std::forward<SpotPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user data to make available to the launched EC2 instances. Must be
     * base64-encoded text.</p>
     */
    inline const Aws::String& GetUserData() const { return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    template<typename UserDataT = Aws::String>
    void SetUserData(UserDataT&& value) { m_userDataHasBeenSet = true; m_userData = std::forward<UserDataT>(value); }
    template<typename UserDataT = Aws::String>
    AwsAutoScalingLaunchConfigurationDetails& WithUserData(UserDataT&& value) { SetUserData(std::forward<UserDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata options for the instances.</p>
     */
    inline const AwsAutoScalingLaunchConfigurationMetadataOptions& GetMetadataOptions() const { return m_metadataOptions; }
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }
    template<typename MetadataOptionsT = AwsAutoScalingLaunchConfigurationMetadataOptions>
    void SetMetadataOptions(MetadataOptionsT&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::forward<MetadataOptionsT>(value); }
    template<typename MetadataOptionsT = AwsAutoScalingLaunchConfigurationMetadataOptions>
    AwsAutoScalingLaunchConfigurationDetails& WithMetadataOptions(MetadataOptionsT&& value) { SetMetadataOptions(std::forward<MetadataOptionsT>(value)); return *this;}
    ///@}
  private:

    bool m_associatePublicIpAddress{false};
    bool m_associatePublicIpAddressHasBeenSet = false;

    Aws::Vector<AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    Aws::String m_classicLinkVpcId;
    bool m_classicLinkVpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_classicLinkVpcSecurityGroups;
    bool m_classicLinkVpcSecurityGroupsHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    bool m_ebsOptimized{false};
    bool m_ebsOptimizedHasBeenSet = false;

    Aws::String m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    AwsAutoScalingLaunchConfigurationInstanceMonitoringDetails m_instanceMonitoring;
    bool m_instanceMonitoringHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::String m_launchConfigurationName;
    bool m_launchConfigurationNameHasBeenSet = false;

    Aws::String m_placementTenancy;
    bool m_placementTenancyHasBeenSet = false;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::String m_spotPrice;
    bool m_spotPriceHasBeenSet = false;

    Aws::String m_userData;
    bool m_userDataHasBeenSet = false;

    AwsAutoScalingLaunchConfigurationMetadataOptions m_metadataOptions;
    bool m_metadataOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
