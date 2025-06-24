/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-instances/model/CapacityReservationSpecification.h>
#include <aws/workspaces-instances/model/CpuOptionsRequest.h>
#include <aws/workspaces-instances/model/CreditSpecificationRequest.h>
#include <aws/workspaces-instances/model/EnclaveOptionsRequest.h>
#include <aws/workspaces-instances/model/HibernationOptionsRequest.h>
#include <aws/workspaces-instances/model/IamInstanceProfileSpecification.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-instances/model/InstanceMarketOptionsRequest.h>
#include <aws/workspaces-instances/model/InstanceMaintenanceOptionsRequest.h>
#include <aws/workspaces-instances/model/InstanceMetadataOptionsRequest.h>
#include <aws/workspaces-instances/model/RunInstancesMonitoringEnabled.h>
#include <aws/workspaces-instances/model/InstanceNetworkPerformanceOptionsRequest.h>
#include <aws/workspaces-instances/model/Placement.h>
#include <aws/workspaces-instances/model/PrivateDnsNameOptionsRequest.h>
#include <aws/workspaces-instances/model/BlockDeviceMappingRequest.h>
#include <aws/workspaces-instances/model/InstanceIpv6Address.h>
#include <aws/workspaces-instances/model/LicenseConfigurationRequest.h>
#include <aws/workspaces-instances/model/InstanceNetworkInterfaceSpecification.h>
#include <aws/workspaces-instances/model/TagSpecification.h>
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
   * <p>Defines comprehensive configuration for a managed WorkSpace
   * Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/ManagedInstanceRequest">AWS
   * API Reference</a></p>
   */
  class ManagedInstanceRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API ManagedInstanceRequest() = default;
    AWS_WORKSPACESINSTANCES_API ManagedInstanceRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API ManagedInstanceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configures block device mappings for storage.</p>
     */
    inline const Aws::Vector<BlockDeviceMappingRequest>& GetBlockDeviceMappings() const { return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    template<typename BlockDeviceMappingsT = Aws::Vector<BlockDeviceMappingRequest>>
    void SetBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::forward<BlockDeviceMappingsT>(value); }
    template<typename BlockDeviceMappingsT = Aws::Vector<BlockDeviceMappingRequest>>
    ManagedInstanceRequest& WithBlockDeviceMappings(BlockDeviceMappingsT&& value) { SetBlockDeviceMappings(std::forward<BlockDeviceMappingsT>(value)); return *this;}
    template<typename BlockDeviceMappingsT = BlockDeviceMappingRequest>
    ManagedInstanceRequest& AddBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.emplace_back(std::forward<BlockDeviceMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies capacity reservation preferences.</p>
     */
    inline const CapacityReservationSpecification& GetCapacityReservationSpecification() const { return m_capacityReservationSpecification; }
    inline bool CapacityReservationSpecificationHasBeenSet() const { return m_capacityReservationSpecificationHasBeenSet; }
    template<typename CapacityReservationSpecificationT = CapacityReservationSpecification>
    void SetCapacityReservationSpecification(CapacityReservationSpecificationT&& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = std::forward<CapacityReservationSpecificationT>(value); }
    template<typename CapacityReservationSpecificationT = CapacityReservationSpecification>
    ManagedInstanceRequest& WithCapacityReservationSpecification(CapacityReservationSpecificationT&& value) { SetCapacityReservationSpecification(std::forward<CapacityReservationSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures CPU-specific settings.</p>
     */
    inline const CpuOptionsRequest& GetCpuOptions() const { return m_cpuOptions; }
    inline bool CpuOptionsHasBeenSet() const { return m_cpuOptionsHasBeenSet; }
    template<typename CpuOptionsT = CpuOptionsRequest>
    void SetCpuOptions(CpuOptionsT&& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = std::forward<CpuOptionsT>(value); }
    template<typename CpuOptionsT = CpuOptionsRequest>
    ManagedInstanceRequest& WithCpuOptions(CpuOptionsT&& value) { SetCpuOptions(std::forward<CpuOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines CPU credit configuration for burstable instances.</p>
     */
    inline const CreditSpecificationRequest& GetCreditSpecification() const { return m_creditSpecification; }
    inline bool CreditSpecificationHasBeenSet() const { return m_creditSpecificationHasBeenSet; }
    template<typename CreditSpecificationT = CreditSpecificationRequest>
    void SetCreditSpecification(CreditSpecificationT&& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = std::forward<CreditSpecificationT>(value); }
    template<typename CreditSpecificationT = CreditSpecificationRequest>
    ManagedInstanceRequest& WithCreditSpecification(CreditSpecificationT&& value) { SetCreditSpecification(std::forward<CreditSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Prevents API-initiated instance stop.</p>
     */
    inline bool GetDisableApiStop() const { return m_disableApiStop; }
    inline bool DisableApiStopHasBeenSet() const { return m_disableApiStopHasBeenSet; }
    inline void SetDisableApiStop(bool value) { m_disableApiStopHasBeenSet = true; m_disableApiStop = value; }
    inline ManagedInstanceRequest& WithDisableApiStop(bool value) { SetDisableApiStop(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables optimized EBS performance.</p>
     */
    inline bool GetEbsOptimized() const { return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline ManagedInstanceRequest& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables primary IPv6 address configuration.</p>
     */
    inline bool GetEnablePrimaryIpv6() const { return m_enablePrimaryIpv6; }
    inline bool EnablePrimaryIpv6HasBeenSet() const { return m_enablePrimaryIpv6HasBeenSet; }
    inline void SetEnablePrimaryIpv6(bool value) { m_enablePrimaryIpv6HasBeenSet = true; m_enablePrimaryIpv6 = value; }
    inline ManagedInstanceRequest& WithEnablePrimaryIpv6(bool value) { SetEnablePrimaryIpv6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures AWS Nitro Enclave settings.</p>
     */
    inline const EnclaveOptionsRequest& GetEnclaveOptions() const { return m_enclaveOptions; }
    inline bool EnclaveOptionsHasBeenSet() const { return m_enclaveOptionsHasBeenSet; }
    template<typename EnclaveOptionsT = EnclaveOptionsRequest>
    void SetEnclaveOptions(EnclaveOptionsT&& value) { m_enclaveOptionsHasBeenSet = true; m_enclaveOptions = std::forward<EnclaveOptionsT>(value); }
    template<typename EnclaveOptionsT = EnclaveOptionsRequest>
    ManagedInstanceRequest& WithEnclaveOptions(EnclaveOptionsT&& value) { SetEnclaveOptions(std::forward<EnclaveOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures instance hibernation capabilities.</p>
     */
    inline const HibernationOptionsRequest& GetHibernationOptions() const { return m_hibernationOptions; }
    inline bool HibernationOptionsHasBeenSet() const { return m_hibernationOptionsHasBeenSet; }
    template<typename HibernationOptionsT = HibernationOptionsRequest>
    void SetHibernationOptions(HibernationOptionsT&& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = std::forward<HibernationOptionsT>(value); }
    template<typename HibernationOptionsT = HibernationOptionsRequest>
    ManagedInstanceRequest& WithHibernationOptions(HibernationOptionsT&& value) { SetHibernationOptions(std::forward<HibernationOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies IAM instance profile configuration.</p>
     */
    inline const IamInstanceProfileSpecification& GetIamInstanceProfile() const { return m_iamInstanceProfile; }
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }
    template<typename IamInstanceProfileT = IamInstanceProfileSpecification>
    void SetIamInstanceProfile(IamInstanceProfileT&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::forward<IamInstanceProfileT>(value); }
    template<typename IamInstanceProfileT = IamInstanceProfileSpecification>
    ManagedInstanceRequest& WithIamInstanceProfile(IamInstanceProfileT&& value) { SetIamInstanceProfile(std::forward<IamInstanceProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the Amazon Machine Image (AMI) for the instance.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    ManagedInstanceRequest& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures marketplace-specific deployment options.</p>
     */
    inline const InstanceMarketOptionsRequest& GetInstanceMarketOptions() const { return m_instanceMarketOptions; }
    inline bool InstanceMarketOptionsHasBeenSet() const { return m_instanceMarketOptionsHasBeenSet; }
    template<typename InstanceMarketOptionsT = InstanceMarketOptionsRequest>
    void SetInstanceMarketOptions(InstanceMarketOptionsT&& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = std::forward<InstanceMarketOptionsT>(value); }
    template<typename InstanceMarketOptionsT = InstanceMarketOptionsRequest>
    ManagedInstanceRequest& WithInstanceMarketOptions(InstanceMarketOptionsT&& value) { SetInstanceMarketOptions(std::forward<InstanceMarketOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the WorkSpace Instance type.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    ManagedInstanceRequest& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures specific IPv6 addresses.</p>
     */
    inline const Aws::Vector<InstanceIpv6Address>& GetIpv6Addresses() const { return m_ipv6Addresses; }
    inline bool Ipv6AddressesHasBeenSet() const { return m_ipv6AddressesHasBeenSet; }
    template<typename Ipv6AddressesT = Aws::Vector<InstanceIpv6Address>>
    void SetIpv6Addresses(Ipv6AddressesT&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses = std::forward<Ipv6AddressesT>(value); }
    template<typename Ipv6AddressesT = Aws::Vector<InstanceIpv6Address>>
    ManagedInstanceRequest& WithIpv6Addresses(Ipv6AddressesT&& value) { SetIpv6Addresses(std::forward<Ipv6AddressesT>(value)); return *this;}
    template<typename Ipv6AddressesT = InstanceIpv6Address>
    ManagedInstanceRequest& AddIpv6Addresses(Ipv6AddressesT&& value) { m_ipv6AddressesHasBeenSet = true; m_ipv6Addresses.emplace_back(std::forward<Ipv6AddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies number of IPv6 addresses to assign.</p>
     */
    inline int GetIpv6AddressCount() const { return m_ipv6AddressCount; }
    inline bool Ipv6AddressCountHasBeenSet() const { return m_ipv6AddressCountHasBeenSet; }
    inline void SetIpv6AddressCount(int value) { m_ipv6AddressCountHasBeenSet = true; m_ipv6AddressCount = value; }
    inline ManagedInstanceRequest& WithIpv6AddressCount(int value) { SetIpv6AddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the kernel for the instance.</p>
     */
    inline const Aws::String& GetKernelId() const { return m_kernelId; }
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }
    template<typename KernelIdT = Aws::String>
    void SetKernelId(KernelIdT&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::forward<KernelIdT>(value); }
    template<typename KernelIdT = Aws::String>
    ManagedInstanceRequest& WithKernelId(KernelIdT&& value) { SetKernelId(std::forward<KernelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the key pair for instance access.</p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    ManagedInstanceRequest& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures license-related settings.</p>
     */
    inline const Aws::Vector<LicenseConfigurationRequest>& GetLicenseSpecifications() const { return m_licenseSpecifications; }
    inline bool LicenseSpecificationsHasBeenSet() const { return m_licenseSpecificationsHasBeenSet; }
    template<typename LicenseSpecificationsT = Aws::Vector<LicenseConfigurationRequest>>
    void SetLicenseSpecifications(LicenseSpecificationsT&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications = std::forward<LicenseSpecificationsT>(value); }
    template<typename LicenseSpecificationsT = Aws::Vector<LicenseConfigurationRequest>>
    ManagedInstanceRequest& WithLicenseSpecifications(LicenseSpecificationsT&& value) { SetLicenseSpecifications(std::forward<LicenseSpecificationsT>(value)); return *this;}
    template<typename LicenseSpecificationsT = LicenseConfigurationRequest>
    ManagedInstanceRequest& AddLicenseSpecifications(LicenseSpecificationsT&& value) { m_licenseSpecificationsHasBeenSet = true; m_licenseSpecifications.emplace_back(std::forward<LicenseSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines automatic maintenance settings.</p>
     */
    inline const InstanceMaintenanceOptionsRequest& GetMaintenanceOptions() const { return m_maintenanceOptions; }
    inline bool MaintenanceOptionsHasBeenSet() const { return m_maintenanceOptionsHasBeenSet; }
    template<typename MaintenanceOptionsT = InstanceMaintenanceOptionsRequest>
    void SetMaintenanceOptions(MaintenanceOptionsT&& value) { m_maintenanceOptionsHasBeenSet = true; m_maintenanceOptions = std::forward<MaintenanceOptionsT>(value); }
    template<typename MaintenanceOptionsT = InstanceMaintenanceOptionsRequest>
    ManagedInstanceRequest& WithMaintenanceOptions(MaintenanceOptionsT&& value) { SetMaintenanceOptions(std::forward<MaintenanceOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures instance metadata service settings.</p>
     */
    inline const InstanceMetadataOptionsRequest& GetMetadataOptions() const { return m_metadataOptions; }
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }
    template<typename MetadataOptionsT = InstanceMetadataOptionsRequest>
    void SetMetadataOptions(MetadataOptionsT&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::forward<MetadataOptionsT>(value); }
    template<typename MetadataOptionsT = InstanceMetadataOptionsRequest>
    ManagedInstanceRequest& WithMetadataOptions(MetadataOptionsT&& value) { SetMetadataOptions(std::forward<MetadataOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables or disables detailed instance monitoring.</p>
     */
    inline const RunInstancesMonitoringEnabled& GetMonitoring() const { return m_monitoring; }
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }
    template<typename MonitoringT = RunInstancesMonitoringEnabled>
    void SetMonitoring(MonitoringT&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::forward<MonitoringT>(value); }
    template<typename MonitoringT = RunInstancesMonitoringEnabled>
    ManagedInstanceRequest& WithMonitoring(MonitoringT&& value) { SetMonitoring(std::forward<MonitoringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures network interface settings.</p>
     */
    inline const Aws::Vector<InstanceNetworkInterfaceSpecification>& GetNetworkInterfaces() const { return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    template<typename NetworkInterfacesT = Aws::Vector<InstanceNetworkInterfaceSpecification>>
    void SetNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::forward<NetworkInterfacesT>(value); }
    template<typename NetworkInterfacesT = Aws::Vector<InstanceNetworkInterfaceSpecification>>
    ManagedInstanceRequest& WithNetworkInterfaces(NetworkInterfacesT&& value) { SetNetworkInterfaces(std::forward<NetworkInterfacesT>(value)); return *this;}
    template<typename NetworkInterfacesT = InstanceNetworkInterfaceSpecification>
    ManagedInstanceRequest& AddNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.emplace_back(std::forward<NetworkInterfacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines network performance configuration.</p>
     */
    inline const InstanceNetworkPerformanceOptionsRequest& GetNetworkPerformanceOptions() const { return m_networkPerformanceOptions; }
    inline bool NetworkPerformanceOptionsHasBeenSet() const { return m_networkPerformanceOptionsHasBeenSet; }
    template<typename NetworkPerformanceOptionsT = InstanceNetworkPerformanceOptionsRequest>
    void SetNetworkPerformanceOptions(NetworkPerformanceOptionsT&& value) { m_networkPerformanceOptionsHasBeenSet = true; m_networkPerformanceOptions = std::forward<NetworkPerformanceOptionsT>(value); }
    template<typename NetworkPerformanceOptionsT = InstanceNetworkPerformanceOptionsRequest>
    ManagedInstanceRequest& WithNetworkPerformanceOptions(NetworkPerformanceOptionsT&& value) { SetNetworkPerformanceOptions(std::forward<NetworkPerformanceOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies instance placement preferences.</p>
     */
    inline const Placement& GetPlacement() const { return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    template<typename PlacementT = Placement>
    void SetPlacement(PlacementT&& value) { m_placementHasBeenSet = true; m_placement = std::forward<PlacementT>(value); }
    template<typename PlacementT = Placement>
    ManagedInstanceRequest& WithPlacement(PlacementT&& value) { SetPlacement(std::forward<PlacementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures private DNS name settings.</p>
     */
    inline const PrivateDnsNameOptionsRequest& GetPrivateDnsNameOptions() const { return m_privateDnsNameOptions; }
    inline bool PrivateDnsNameOptionsHasBeenSet() const { return m_privateDnsNameOptionsHasBeenSet; }
    template<typename PrivateDnsNameOptionsT = PrivateDnsNameOptionsRequest>
    void SetPrivateDnsNameOptions(PrivateDnsNameOptionsT&& value) { m_privateDnsNameOptionsHasBeenSet = true; m_privateDnsNameOptions = std::forward<PrivateDnsNameOptionsT>(value); }
    template<typename PrivateDnsNameOptionsT = PrivateDnsNameOptionsRequest>
    ManagedInstanceRequest& WithPrivateDnsNameOptions(PrivateDnsNameOptionsT&& value) { SetPrivateDnsNameOptions(std::forward<PrivateDnsNameOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the primary private IP address.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const { return m_privateIpAddress; }
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }
    template<typename PrivateIpAddressT = Aws::String>
    void SetPrivateIpAddress(PrivateIpAddressT&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::forward<PrivateIpAddressT>(value); }
    template<typename PrivateIpAddressT = Aws::String>
    ManagedInstanceRequest& WithPrivateIpAddress(PrivateIpAddressT&& value) { SetPrivateIpAddress(std::forward<PrivateIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the ramdisk for the instance.</p>
     */
    inline const Aws::String& GetRamdiskId() const { return m_ramdiskId; }
    inline bool RamdiskIdHasBeenSet() const { return m_ramdiskIdHasBeenSet; }
    template<typename RamdiskIdT = Aws::String>
    void SetRamdiskId(RamdiskIdT&& value) { m_ramdiskIdHasBeenSet = true; m_ramdiskId = std::forward<RamdiskIdT>(value); }
    template<typename RamdiskIdT = Aws::String>
    ManagedInstanceRequest& WithRamdiskId(RamdiskIdT&& value) { SetRamdiskId(std::forward<RamdiskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies security group identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    ManagedInstanceRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    ManagedInstanceRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configures security group settings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    ManagedInstanceRequest& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    ManagedInstanceRequest& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the subnet for the instance.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    ManagedInstanceRequest& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures resource tagging specifications.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    ManagedInstanceRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    ManagedInstanceRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides custom initialization data for the instance.</p>
     */
    inline const Aws::String& GetUserData() const { return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    template<typename UserDataT = Aws::String>
    void SetUserData(UserDataT&& value) { m_userDataHasBeenSet = true; m_userData = std::forward<UserDataT>(value); }
    template<typename UserDataT = Aws::String>
    ManagedInstanceRequest& WithUserData(UserDataT&& value) { SetUserData(std::forward<UserDataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BlockDeviceMappingRequest> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    CapacityReservationSpecification m_capacityReservationSpecification;
    bool m_capacityReservationSpecificationHasBeenSet = false;

    CpuOptionsRequest m_cpuOptions;
    bool m_cpuOptionsHasBeenSet = false;

    CreditSpecificationRequest m_creditSpecification;
    bool m_creditSpecificationHasBeenSet = false;

    bool m_disableApiStop{false};
    bool m_disableApiStopHasBeenSet = false;

    bool m_ebsOptimized{false};
    bool m_ebsOptimizedHasBeenSet = false;

    bool m_enablePrimaryIpv6{false};
    bool m_enablePrimaryIpv6HasBeenSet = false;

    EnclaveOptionsRequest m_enclaveOptions;
    bool m_enclaveOptionsHasBeenSet = false;

    HibernationOptionsRequest m_hibernationOptions;
    bool m_hibernationOptionsHasBeenSet = false;

    IamInstanceProfileSpecification m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    InstanceMarketOptionsRequest m_instanceMarketOptions;
    bool m_instanceMarketOptionsHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::Vector<InstanceIpv6Address> m_ipv6Addresses;
    bool m_ipv6AddressesHasBeenSet = false;

    int m_ipv6AddressCount{0};
    bool m_ipv6AddressCountHasBeenSet = false;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::Vector<LicenseConfigurationRequest> m_licenseSpecifications;
    bool m_licenseSpecificationsHasBeenSet = false;

    InstanceMaintenanceOptionsRequest m_maintenanceOptions;
    bool m_maintenanceOptionsHasBeenSet = false;

    InstanceMetadataOptionsRequest m_metadataOptions;
    bool m_metadataOptionsHasBeenSet = false;

    RunInstancesMonitoringEnabled m_monitoring;
    bool m_monitoringHasBeenSet = false;

    Aws::Vector<InstanceNetworkInterfaceSpecification> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;

    InstanceNetworkPerformanceOptionsRequest m_networkPerformanceOptions;
    bool m_networkPerformanceOptionsHasBeenSet = false;

    Placement m_placement;
    bool m_placementHasBeenSet = false;

    PrivateDnsNameOptionsRequest m_privateDnsNameOptions;
    bool m_privateDnsNameOptionsHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;

    Aws::String m_ramdiskId;
    bool m_ramdiskIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    Aws::String m_userData;
    bool m_userDataHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
