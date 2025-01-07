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
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationDetails();
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAutoScalingLaunchConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For Auto Scaling groups that run in a VPC, specifies whether to assign a
     * public IP address to the group's instances.</p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }
    inline AwsAutoScalingLaunchConfigurationDetails& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the block devices for the instance.</p>
     */
    inline const Aws::Vector<AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    inline void SetBlockDeviceMappings(const Aws::Vector<AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }
    inline void SetBlockDeviceMappings(Aws::Vector<AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }
    inline AwsAutoScalingLaunchConfigurationDetails& WithBlockDeviceMappings(const Aws::Vector<AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails>& value) { SetBlockDeviceMappings(value); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithBlockDeviceMappings(Aws::Vector<AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& AddBlockDeviceMappings(const AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }
    inline AwsAutoScalingLaunchConfigurationDetails& AddBlockDeviceMappings(AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of a ClassicLink-enabled VPC that EC2-Classic instances are
     * linked to.</p>
     */
    inline const Aws::String& GetClassicLinkVpcId() const{ return m_classicLinkVpcId; }
    inline bool ClassicLinkVpcIdHasBeenSet() const { return m_classicLinkVpcIdHasBeenSet; }
    inline void SetClassicLinkVpcId(const Aws::String& value) { m_classicLinkVpcIdHasBeenSet = true; m_classicLinkVpcId = value; }
    inline void SetClassicLinkVpcId(Aws::String&& value) { m_classicLinkVpcIdHasBeenSet = true; m_classicLinkVpcId = std::move(value); }
    inline void SetClassicLinkVpcId(const char* value) { m_classicLinkVpcIdHasBeenSet = true; m_classicLinkVpcId.assign(value); }
    inline AwsAutoScalingLaunchConfigurationDetails& WithClassicLinkVpcId(const Aws::String& value) { SetClassicLinkVpcId(value); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithClassicLinkVpcId(Aws::String&& value) { SetClassicLinkVpcId(std::move(value)); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithClassicLinkVpcId(const char* value) { SetClassicLinkVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of one or more security groups for the VPC that is specified
     * in <code>ClassicLinkVPCId</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClassicLinkVpcSecurityGroups() const{ return m_classicLinkVpcSecurityGroups; }
    inline bool ClassicLinkVpcSecurityGroupsHasBeenSet() const { return m_classicLinkVpcSecurityGroupsHasBeenSet; }
    inline void SetClassicLinkVpcSecurityGroups(const Aws::Vector<Aws::String>& value) { m_classicLinkVpcSecurityGroupsHasBeenSet = true; m_classicLinkVpcSecurityGroups = value; }
    inline void SetClassicLinkVpcSecurityGroups(Aws::Vector<Aws::String>&& value) { m_classicLinkVpcSecurityGroupsHasBeenSet = true; m_classicLinkVpcSecurityGroups = std::move(value); }
    inline AwsAutoScalingLaunchConfigurationDetails& WithClassicLinkVpcSecurityGroups(const Aws::Vector<Aws::String>& value) { SetClassicLinkVpcSecurityGroups(value); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithClassicLinkVpcSecurityGroups(Aws::Vector<Aws::String>&& value) { SetClassicLinkVpcSecurityGroups(std::move(value)); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& AddClassicLinkVpcSecurityGroups(const Aws::String& value) { m_classicLinkVpcSecurityGroupsHasBeenSet = true; m_classicLinkVpcSecurityGroups.push_back(value); return *this; }
    inline AwsAutoScalingLaunchConfigurationDetails& AddClassicLinkVpcSecurityGroups(Aws::String&& value) { m_classicLinkVpcSecurityGroupsHasBeenSet = true; m_classicLinkVpcSecurityGroups.push_back(std::move(value)); return *this; }
    inline AwsAutoScalingLaunchConfigurationDetails& AddClassicLinkVpcSecurityGroups(const char* value) { m_classicLinkVpcSecurityGroupsHasBeenSet = true; m_classicLinkVpcSecurityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The creation date and time for the launch configuration.</p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::String& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::String&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline void SetCreatedTime(const char* value) { m_createdTimeHasBeenSet = true; m_createdTime.assign(value); }
    inline AwsAutoScalingLaunchConfigurationDetails& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the launch configuration is optimized for Amazon EBS I/O.</p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline AwsAutoScalingLaunchConfigurationDetails& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or the ARN of the instance profile associated with the IAM role for
     * the instance. The instance profile contains the IAM role.</p>
     */
    inline const Aws::String& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }
    inline void SetIamInstanceProfile(const Aws::String& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }
    inline void SetIamInstanceProfile(Aws::String&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }
    inline void SetIamInstanceProfile(const char* value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile.assign(value); }
    inline AwsAutoScalingLaunchConfigurationDetails& WithIamInstanceProfile(const Aws::String& value) { SetIamInstanceProfile(value); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithIamInstanceProfile(Aws::String&& value) { SetIamInstanceProfile(std::move(value)); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithIamInstanceProfile(const char* value) { SetIamInstanceProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Machine Image (AMI) that is used to launch EC2
     * instances.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline AwsAutoScalingLaunchConfigurationDetails& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of monitoring for instances in the group.</p>
     */
    inline const AwsAutoScalingLaunchConfigurationInstanceMonitoringDetails& GetInstanceMonitoring() const{ return m_instanceMonitoring; }
    inline bool InstanceMonitoringHasBeenSet() const { return m_instanceMonitoringHasBeenSet; }
    inline void SetInstanceMonitoring(const AwsAutoScalingLaunchConfigurationInstanceMonitoringDetails& value) { m_instanceMonitoringHasBeenSet = true; m_instanceMonitoring = value; }
    inline void SetInstanceMonitoring(AwsAutoScalingLaunchConfigurationInstanceMonitoringDetails&& value) { m_instanceMonitoringHasBeenSet = true; m_instanceMonitoring = std::move(value); }
    inline AwsAutoScalingLaunchConfigurationDetails& WithInstanceMonitoring(const AwsAutoScalingLaunchConfigurationInstanceMonitoringDetails& value) { SetInstanceMonitoring(value); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithInstanceMonitoring(AwsAutoScalingLaunchConfigurationInstanceMonitoringDetails&& value) { SetInstanceMonitoring(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type for the instances.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline AwsAutoScalingLaunchConfigurationDetails& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the kernel associated with the AMI.</p>
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::move(value); }
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }
    inline AwsAutoScalingLaunchConfigurationDetails& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithKernelId(const char* value) { SetKernelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the key pair.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }
    inline AwsAutoScalingLaunchConfigurationDetails& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithKeyName(const char* value) { SetKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch configuration.</p>
     */
    inline const Aws::String& GetLaunchConfigurationName() const{ return m_launchConfigurationName; }
    inline bool LaunchConfigurationNameHasBeenSet() const { return m_launchConfigurationNameHasBeenSet; }
    inline void SetLaunchConfigurationName(const Aws::String& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = value; }
    inline void SetLaunchConfigurationName(Aws::String&& value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName = std::move(value); }
    inline void SetLaunchConfigurationName(const char* value) { m_launchConfigurationNameHasBeenSet = true; m_launchConfigurationName.assign(value); }
    inline AwsAutoScalingLaunchConfigurationDetails& WithLaunchConfigurationName(const Aws::String& value) { SetLaunchConfigurationName(value); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithLaunchConfigurationName(Aws::String&& value) { SetLaunchConfigurationName(std::move(value)); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithLaunchConfigurationName(const char* value) { SetLaunchConfigurationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tenancy of the instance. An instance with <code>dedicated</code> tenancy
     * runs on isolated, single-tenant hardware and can only be launched into a
     * VPC.</p>
     */
    inline const Aws::String& GetPlacementTenancy() const{ return m_placementTenancy; }
    inline bool PlacementTenancyHasBeenSet() const { return m_placementTenancyHasBeenSet; }
    inline void SetPlacementTenancy(const Aws::String& value) { m_placementTenancyHasBeenSet = true; m_placementTenancy = value; }
    inline void SetPlacementTenancy(Aws::String&& value) { m_placementTenancyHasBeenSet = true; m_placementTenancy = std::move(value); }
    inline void SetPlacementTenancy(const char* value) { m_placementTenancyHasBeenSet = true; m_placementTenancy.assign(value); }
    inline AwsAutoScalingLaunchConfigurationDetails& WithPlacementTenancy(const Aws::String& value) { SetPlacementTenancy(value); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithPlacementTenancy(Aws::String&& value) { SetPlacementTenancy(std::move(value)); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithPlacementTenancy(const char* value) { SetPlacementTenancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the RAM disk associated with the AMI.</p>
     */
    inline const Aws::String& GetRamdiskId() const{ return m_ramdiskId; }
    inline bool RamdiskIdHasBeenSet() const { return m_ramdiskIdHasBeenSet; }
    inline void SetRamdiskId(const Aws::String& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = value; }
    inline void SetRamdiskId(Aws::String&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::move(value); }
    inline void SetRamdiskId(const char* value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId.assign(value); }
    inline AwsAutoScalingLaunchConfigurationDetails& WithRamdiskId(const Aws::String& value) { SetRamdiskId(value); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithRamdiskId(Aws::String&& value) { SetRamdiskId(std::move(value)); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithRamdiskId(const char* value) { SetRamdiskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups to assign to the instances in the Auto Scaling group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline AwsAutoScalingLaunchConfigurationDetails& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline AwsAutoScalingLaunchConfigurationDetails& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline AwsAutoScalingLaunchConfigurationDetails& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum hourly price to be paid for any Spot Instance that is launched to
     * fulfill the request.</p>
     */
    inline const Aws::String& GetSpotPrice() const{ return m_spotPrice; }
    inline bool SpotPriceHasBeenSet() const { return m_spotPriceHasBeenSet; }
    inline void SetSpotPrice(const Aws::String& value) { m_spotPriceHasBeenSet = true; m_spotPrice = value; }
    inline void SetSpotPrice(Aws::String&& value) { m_spotPriceHasBeenSet = true; m_spotPrice = std::move(value); }
    inline void SetSpotPrice(const char* value) { m_spotPriceHasBeenSet = true; m_spotPrice.assign(value); }
    inline AwsAutoScalingLaunchConfigurationDetails& WithSpotPrice(const Aws::String& value) { SetSpotPrice(value); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithSpotPrice(Aws::String&& value) { SetSpotPrice(std::move(value)); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithSpotPrice(const char* value) { SetSpotPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user data to make available to the launched EC2 instances. Must be
     * base64-encoded text.</p>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }
    inline AwsAutoScalingLaunchConfigurationDetails& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithUserData(const char* value) { SetUserData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata options for the instances.</p>
     */
    inline const AwsAutoScalingLaunchConfigurationMetadataOptions& GetMetadataOptions() const{ return m_metadataOptions; }
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }
    inline void SetMetadataOptions(const AwsAutoScalingLaunchConfigurationMetadataOptions& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = value; }
    inline void SetMetadataOptions(AwsAutoScalingLaunchConfigurationMetadataOptions&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::move(value); }
    inline AwsAutoScalingLaunchConfigurationDetails& WithMetadataOptions(const AwsAutoScalingLaunchConfigurationMetadataOptions& value) { SetMetadataOptions(value); return *this;}
    inline AwsAutoScalingLaunchConfigurationDetails& WithMetadataOptions(AwsAutoScalingLaunchConfigurationMetadataOptions&& value) { SetMetadataOptions(std::move(value)); return *this;}
    ///@}
  private:

    bool m_associatePublicIpAddress;
    bool m_associatePublicIpAddressHasBeenSet = false;

    Aws::Vector<AwsAutoScalingLaunchConfigurationBlockDeviceMappingsDetails> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    Aws::String m_classicLinkVpcId;
    bool m_classicLinkVpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_classicLinkVpcSecurityGroups;
    bool m_classicLinkVpcSecurityGroupsHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    bool m_ebsOptimized;
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
