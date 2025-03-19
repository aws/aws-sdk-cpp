/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataCpuOptionsDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataCreditSpecificationDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataEnclaveOptionsDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataHibernationOptionsDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataIamInstanceProfileDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataInstanceRequirementsDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataMaintenanceOptionsDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataMetadataOptionsDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataMonitoringDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataPlacementDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataLicenseSetDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails.h>
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
   * <p> The information to include in an Amazon Elastic Compute Cloud (Amazon EC2)
   * launch template. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataDetails() = default;
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Information about a block device mapping for an Amazon EC2 launch template.
     * </p>
     */
    inline const Aws::Vector<AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails>& GetBlockDeviceMappingSet() const { return m_blockDeviceMappingSet; }
    inline bool BlockDeviceMappingSetHasBeenSet() const { return m_blockDeviceMappingSetHasBeenSet; }
    template<typename BlockDeviceMappingSetT = Aws::Vector<AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails>>
    void SetBlockDeviceMappingSet(BlockDeviceMappingSetT&& value) { m_blockDeviceMappingSetHasBeenSet = true; m_blockDeviceMappingSet = std::forward<BlockDeviceMappingSetT>(value); }
    template<typename BlockDeviceMappingSetT = Aws::Vector<AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails>>
    AwsEc2LaunchTemplateDataDetails& WithBlockDeviceMappingSet(BlockDeviceMappingSetT&& value) { SetBlockDeviceMappingSet(std::forward<BlockDeviceMappingSetT>(value)); return *this;}
    template<typename BlockDeviceMappingSetT = AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails>
    AwsEc2LaunchTemplateDataDetails& AddBlockDeviceMappingSet(BlockDeviceMappingSetT&& value) { m_blockDeviceMappingSetHasBeenSet = true; m_blockDeviceMappingSet.emplace_back(std::forward<BlockDeviceMappingSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies an instance's Capacity Reservation targeting option. You can
     * specify only one option at a time. </p>
     */
    inline const AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails& GetCapacityReservationSpecification() const { return m_capacityReservationSpecification; }
    inline bool CapacityReservationSpecificationHasBeenSet() const { return m_capacityReservationSpecificationHasBeenSet; }
    template<typename CapacityReservationSpecificationT = AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails>
    void SetCapacityReservationSpecification(CapacityReservationSpecificationT&& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = std::forward<CapacityReservationSpecificationT>(value); }
    template<typename CapacityReservationSpecificationT = AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails>
    AwsEc2LaunchTemplateDataDetails& WithCapacityReservationSpecification(CapacityReservationSpecificationT&& value) { SetCapacityReservationSpecification(std::forward<CapacityReservationSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the CPU options for an instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimize
     * CPU options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p>
     */
    inline const AwsEc2LaunchTemplateDataCpuOptionsDetails& GetCpuOptions() const { return m_cpuOptions; }
    inline bool CpuOptionsHasBeenSet() const { return m_cpuOptionsHasBeenSet; }
    template<typename CpuOptionsT = AwsEc2LaunchTemplateDataCpuOptionsDetails>
    void SetCpuOptions(CpuOptionsT&& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = std::forward<CpuOptionsT>(value); }
    template<typename CpuOptionsT = AwsEc2LaunchTemplateDataCpuOptionsDetails>
    AwsEc2LaunchTemplateDataDetails& WithCpuOptions(CpuOptionsT&& value) { SetCpuOptions(std::forward<CpuOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the credit option for CPU usage of a T2, T3, or T3a instance. </p>
     */
    inline const AwsEc2LaunchTemplateDataCreditSpecificationDetails& GetCreditSpecification() const { return m_creditSpecification; }
    inline bool CreditSpecificationHasBeenSet() const { return m_creditSpecificationHasBeenSet; }
    template<typename CreditSpecificationT = AwsEc2LaunchTemplateDataCreditSpecificationDetails>
    void SetCreditSpecification(CreditSpecificationT&& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = std::forward<CreditSpecificationT>(value); }
    template<typename CreditSpecificationT = AwsEc2LaunchTemplateDataCreditSpecificationDetails>
    AwsEc2LaunchTemplateDataDetails& WithCreditSpecification(CreditSpecificationT&& value) { SetCreditSpecification(std::forward<CreditSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether to enable the instance for stop protection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Stop_Start.html#Using_StopProtection">Enable
     * stop protection</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline bool GetDisableApiStop() const { return m_disableApiStop; }
    inline bool DisableApiStopHasBeenSet() const { return m_disableApiStopHasBeenSet; }
    inline void SetDisableApiStop(bool value) { m_disableApiStopHasBeenSet = true; m_disableApiStop = value; }
    inline AwsEc2LaunchTemplateDataDetails& WithDisableApiStop(bool value) { SetDisableApiStop(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If you set this parameter to <code>true</code>, you can't terminate the
     * instance using the Amazon EC2 console, CLI, or API. If set to <code>true</code>,
     * you can. </p>
     */
    inline bool GetDisableApiTermination() const { return m_disableApiTermination; }
    inline bool DisableApiTerminationHasBeenSet() const { return m_disableApiTerminationHasBeenSet; }
    inline void SetDisableApiTermination(bool value) { m_disableApiTerminationHasBeenSet = true; m_disableApiTermination = value; }
    inline AwsEc2LaunchTemplateDataDetails& WithDisableApiTermination(bool value) { SetDisableApiTermination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the instance is optimized for Amazon EBS I/O. </p>
     */
    inline bool GetEbsOptimized() const { return m_ebsOptimized; }
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }
    inline AwsEc2LaunchTemplateDataDetails& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details about Elastic Graphics accelerators to associate with the
     * instance. </p>
     */
    inline const Aws::Vector<AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails>& GetElasticGpuSpecificationSet() const { return m_elasticGpuSpecificationSet; }
    inline bool ElasticGpuSpecificationSetHasBeenSet() const { return m_elasticGpuSpecificationSetHasBeenSet; }
    template<typename ElasticGpuSpecificationSetT = Aws::Vector<AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails>>
    void SetElasticGpuSpecificationSet(ElasticGpuSpecificationSetT&& value) { m_elasticGpuSpecificationSetHasBeenSet = true; m_elasticGpuSpecificationSet = std::forward<ElasticGpuSpecificationSetT>(value); }
    template<typename ElasticGpuSpecificationSetT = Aws::Vector<AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails>>
    AwsEc2LaunchTemplateDataDetails& WithElasticGpuSpecificationSet(ElasticGpuSpecificationSetT&& value) { SetElasticGpuSpecificationSet(std::forward<ElasticGpuSpecificationSetT>(value)); return *this;}
    template<typename ElasticGpuSpecificationSetT = AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails>
    AwsEc2LaunchTemplateDataDetails& AddElasticGpuSpecificationSet(ElasticGpuSpecificationSetT&& value) { m_elasticGpuSpecificationSetHasBeenSet = true; m_elasticGpuSpecificationSet.emplace_back(std::forward<ElasticGpuSpecificationSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The Amazon Elastic Inference accelerator for the instance. </p>
     */
    inline const Aws::Vector<AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails>& GetElasticInferenceAcceleratorSet() const { return m_elasticInferenceAcceleratorSet; }
    inline bool ElasticInferenceAcceleratorSetHasBeenSet() const { return m_elasticInferenceAcceleratorSetHasBeenSet; }
    template<typename ElasticInferenceAcceleratorSetT = Aws::Vector<AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails>>
    void SetElasticInferenceAcceleratorSet(ElasticInferenceAcceleratorSetT&& value) { m_elasticInferenceAcceleratorSetHasBeenSet = true; m_elasticInferenceAcceleratorSet = std::forward<ElasticInferenceAcceleratorSetT>(value); }
    template<typename ElasticInferenceAcceleratorSetT = Aws::Vector<AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails>>
    AwsEc2LaunchTemplateDataDetails& WithElasticInferenceAcceleratorSet(ElasticInferenceAcceleratorSetT&& value) { SetElasticInferenceAcceleratorSet(std::forward<ElasticInferenceAcceleratorSetT>(value)); return *this;}
    template<typename ElasticInferenceAcceleratorSetT = AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails>
    AwsEc2LaunchTemplateDataDetails& AddElasticInferenceAcceleratorSet(ElasticInferenceAcceleratorSetT&& value) { m_elasticInferenceAcceleratorSetHasBeenSet = true; m_elasticInferenceAcceleratorSet.emplace_back(std::forward<ElasticInferenceAcceleratorSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Indicates whether the Amazon EC2 instance is enabled for Amazon Web Services
     * Nitro Enclaves. </p>
     */
    inline const AwsEc2LaunchTemplateDataEnclaveOptionsDetails& GetEnclaveOptions() const { return m_enclaveOptions; }
    inline bool EnclaveOptionsHasBeenSet() const { return m_enclaveOptionsHasBeenSet; }
    template<typename EnclaveOptionsT = AwsEc2LaunchTemplateDataEnclaveOptionsDetails>
    void SetEnclaveOptions(EnclaveOptionsT&& value) { m_enclaveOptionsHasBeenSet = true; m_enclaveOptions = std::forward<EnclaveOptionsT>(value); }
    template<typename EnclaveOptionsT = AwsEc2LaunchTemplateDataEnclaveOptionsDetails>
    AwsEc2LaunchTemplateDataDetails& WithEnclaveOptions(EnclaveOptionsT&& value) { SetEnclaveOptions(std::forward<EnclaveOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether your Amazon EC2 instance is configured for hibernation.
     * </p>
     */
    inline const AwsEc2LaunchTemplateDataHibernationOptionsDetails& GetHibernationOptions() const { return m_hibernationOptions; }
    inline bool HibernationOptionsHasBeenSet() const { return m_hibernationOptionsHasBeenSet; }
    template<typename HibernationOptionsT = AwsEc2LaunchTemplateDataHibernationOptionsDetails>
    void SetHibernationOptions(HibernationOptionsT&& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = std::forward<HibernationOptionsT>(value); }
    template<typename HibernationOptionsT = AwsEc2LaunchTemplateDataHibernationOptionsDetails>
    AwsEc2LaunchTemplateDataDetails& WithHibernationOptions(HibernationOptionsT&& value) { SetHibernationOptions(std::forward<HibernationOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name or Amazon Resource Name (ARN) of an IAM instance profile. </p>
     */
    inline const AwsEc2LaunchTemplateDataIamInstanceProfileDetails& GetIamInstanceProfile() const { return m_iamInstanceProfile; }
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }
    template<typename IamInstanceProfileT = AwsEc2LaunchTemplateDataIamInstanceProfileDetails>
    void SetIamInstanceProfile(IamInstanceProfileT&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::forward<IamInstanceProfileT>(value); }
    template<typename IamInstanceProfileT = AwsEc2LaunchTemplateDataIamInstanceProfileDetails>
    AwsEc2LaunchTemplateDataDetails& WithIamInstanceProfile(IamInstanceProfileT&& value) { SetIamInstanceProfile(std::forward<IamInstanceProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Amazon Machine Image (AMI). </p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    AwsEc2LaunchTemplateDataDetails& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides the options for specifying the instance initiated shutdown
     * behavior. </p>
     */
    inline const Aws::String& GetInstanceInitiatedShutdownBehavior() const { return m_instanceInitiatedShutdownBehavior; }
    inline bool InstanceInitiatedShutdownBehaviorHasBeenSet() const { return m_instanceInitiatedShutdownBehaviorHasBeenSet; }
    template<typename InstanceInitiatedShutdownBehaviorT = Aws::String>
    void SetInstanceInitiatedShutdownBehavior(InstanceInitiatedShutdownBehaviorT&& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = std::forward<InstanceInitiatedShutdownBehaviorT>(value); }
    template<typename InstanceInitiatedShutdownBehaviorT = Aws::String>
    AwsEc2LaunchTemplateDataDetails& WithInstanceInitiatedShutdownBehavior(InstanceInitiatedShutdownBehaviorT&& value) { SetInstanceInitiatedShutdownBehavior(std::forward<InstanceInitiatedShutdownBehaviorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the market (purchasing) option for an instance. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails& GetInstanceMarketOptions() const { return m_instanceMarketOptions; }
    inline bool InstanceMarketOptionsHasBeenSet() const { return m_instanceMarketOptionsHasBeenSet; }
    template<typename InstanceMarketOptionsT = AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails>
    void SetInstanceMarketOptions(InstanceMarketOptionsT&& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = std::forward<InstanceMarketOptionsT>(value); }
    template<typename InstanceMarketOptionsT = AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails>
    AwsEc2LaunchTemplateDataDetails& WithInstanceMarketOptions(InstanceMarketOptionsT&& value) { SetInstanceMarketOptions(std::forward<InstanceMarketOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with these attributes. If you specify
     * <code>InstanceRequirements</code>, you can't specify <code>InstanceType</code>.
     * </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceRequirementsDetails& GetInstanceRequirements() const { return m_instanceRequirements; }
    inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }
    template<typename InstanceRequirementsT = AwsEc2LaunchTemplateDataInstanceRequirementsDetails>
    void SetInstanceRequirements(InstanceRequirementsT&& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = std::forward<InstanceRequirementsT>(value); }
    template<typename InstanceRequirementsT = AwsEc2LaunchTemplateDataInstanceRequirementsDetails>
    AwsEc2LaunchTemplateDataDetails& WithInstanceRequirements(InstanceRequirementsT&& value) { SetInstanceRequirements(std::forward<InstanceRequirementsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>. If you specify
     * <code>InstanceType</code>, you can't specify <code>InstanceRequirements</code>.
     * </p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    AwsEc2LaunchTemplateDataDetails& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the kernel. </p>
     */
    inline const Aws::String& GetKernelId() const { return m_kernelId; }
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }
    template<typename KernelIdT = Aws::String>
    void SetKernelId(KernelIdT&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::forward<KernelIdT>(value); }
    template<typename KernelIdT = Aws::String>
    AwsEc2LaunchTemplateDataDetails& WithKernelId(KernelIdT&& value) { SetKernelId(std::forward<KernelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the key pair that allows users to connect to the instance. </p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    AwsEc2LaunchTemplateDataDetails& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies a license configuration for an instance. </p>
     */
    inline const Aws::Vector<AwsEc2LaunchTemplateDataLicenseSetDetails>& GetLicenseSet() const { return m_licenseSet; }
    inline bool LicenseSetHasBeenSet() const { return m_licenseSetHasBeenSet; }
    template<typename LicenseSetT = Aws::Vector<AwsEc2LaunchTemplateDataLicenseSetDetails>>
    void SetLicenseSet(LicenseSetT&& value) { m_licenseSetHasBeenSet = true; m_licenseSet = std::forward<LicenseSetT>(value); }
    template<typename LicenseSetT = Aws::Vector<AwsEc2LaunchTemplateDataLicenseSetDetails>>
    AwsEc2LaunchTemplateDataDetails& WithLicenseSet(LicenseSetT&& value) { SetLicenseSet(std::forward<LicenseSetT>(value)); return *this;}
    template<typename LicenseSetT = AwsEc2LaunchTemplateDataLicenseSetDetails>
    AwsEc2LaunchTemplateDataDetails& AddLicenseSet(LicenseSetT&& value) { m_licenseSetHasBeenSet = true; m_licenseSet.emplace_back(std::forward<LicenseSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The maintenance options of your instance. </p>
     */
    inline const AwsEc2LaunchTemplateDataMaintenanceOptionsDetails& GetMaintenanceOptions() const { return m_maintenanceOptions; }
    inline bool MaintenanceOptionsHasBeenSet() const { return m_maintenanceOptionsHasBeenSet; }
    template<typename MaintenanceOptionsT = AwsEc2LaunchTemplateDataMaintenanceOptionsDetails>
    void SetMaintenanceOptions(MaintenanceOptionsT&& value) { m_maintenanceOptionsHasBeenSet = true; m_maintenanceOptions = std::forward<MaintenanceOptionsT>(value); }
    template<typename MaintenanceOptionsT = AwsEc2LaunchTemplateDataMaintenanceOptionsDetails>
    AwsEc2LaunchTemplateDataDetails& WithMaintenanceOptions(MaintenanceOptionsT&& value) { SetMaintenanceOptions(std::forward<MaintenanceOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The metadata options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline const AwsEc2LaunchTemplateDataMetadataOptionsDetails& GetMetadataOptions() const { return m_metadataOptions; }
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }
    template<typename MetadataOptionsT = AwsEc2LaunchTemplateDataMetadataOptionsDetails>
    void SetMetadataOptions(MetadataOptionsT&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::forward<MetadataOptionsT>(value); }
    template<typename MetadataOptionsT = AwsEc2LaunchTemplateDataMetadataOptionsDetails>
    AwsEc2LaunchTemplateDataDetails& WithMetadataOptions(MetadataOptionsT&& value) { SetMetadataOptions(std::forward<MetadataOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The monitoring for the instance. </p>
     */
    inline const AwsEc2LaunchTemplateDataMonitoringDetails& GetMonitoring() const { return m_monitoring; }
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }
    template<typename MonitoringT = AwsEc2LaunchTemplateDataMonitoringDetails>
    void SetMonitoring(MonitoringT&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::forward<MonitoringT>(value); }
    template<typename MonitoringT = AwsEc2LaunchTemplateDataMonitoringDetails>
    AwsEc2LaunchTemplateDataDetails& WithMonitoring(MonitoringT&& value) { SetMonitoring(std::forward<MonitoringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the parameters for a network interface that is attached to the
     * instance. </p>
     */
    inline const Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails>& GetNetworkInterfaceSet() const { return m_networkInterfaceSet; }
    inline bool NetworkInterfaceSetHasBeenSet() const { return m_networkInterfaceSetHasBeenSet; }
    template<typename NetworkInterfaceSetT = Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails>>
    void SetNetworkInterfaceSet(NetworkInterfaceSetT&& value) { m_networkInterfaceSetHasBeenSet = true; m_networkInterfaceSet = std::forward<NetworkInterfaceSetT>(value); }
    template<typename NetworkInterfaceSetT = Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails>>
    AwsEc2LaunchTemplateDataDetails& WithNetworkInterfaceSet(NetworkInterfaceSetT&& value) { SetNetworkInterfaceSet(std::forward<NetworkInterfaceSetT>(value)); return *this;}
    template<typename NetworkInterfaceSetT = AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails>
    AwsEc2LaunchTemplateDataDetails& AddNetworkInterfaceSet(NetworkInterfaceSetT&& value) { m_networkInterfaceSetHasBeenSet = true; m_networkInterfaceSet.emplace_back(std::forward<NetworkInterfaceSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies the placement of an instance. </p>
     */
    inline const AwsEc2LaunchTemplateDataPlacementDetails& GetPlacement() const { return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    template<typename PlacementT = AwsEc2LaunchTemplateDataPlacementDetails>
    void SetPlacement(PlacementT&& value) { m_placementHasBeenSet = true; m_placement = std::forward<PlacementT>(value); }
    template<typename PlacementT = AwsEc2LaunchTemplateDataPlacementDetails>
    AwsEc2LaunchTemplateDataDetails& WithPlacement(PlacementT&& value) { SetPlacement(std::forward<PlacementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The options for the instance hostname. </p>
     */
    inline const AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails& GetPrivateDnsNameOptions() const { return m_privateDnsNameOptions; }
    inline bool PrivateDnsNameOptionsHasBeenSet() const { return m_privateDnsNameOptionsHasBeenSet; }
    template<typename PrivateDnsNameOptionsT = AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails>
    void SetPrivateDnsNameOptions(PrivateDnsNameOptionsT&& value) { m_privateDnsNameOptionsHasBeenSet = true; m_privateDnsNameOptions = std::forward<PrivateDnsNameOptionsT>(value); }
    template<typename PrivateDnsNameOptionsT = AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails>
    AwsEc2LaunchTemplateDataDetails& WithPrivateDnsNameOptions(PrivateDnsNameOptionsT&& value) { SetPrivateDnsNameOptions(std::forward<PrivateDnsNameOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the RAM disk. </p>
     */
    inline const Aws::String& GetRamDiskId() const { return m_ramDiskId; }
    inline bool RamDiskIdHasBeenSet() const { return m_ramDiskIdHasBeenSet; }
    template<typename RamDiskIdT = Aws::String>
    void SetRamDiskId(RamDiskIdT&& value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId = std::forward<RamDiskIdT>(value); }
    template<typename RamDiskIdT = Aws::String>
    AwsEc2LaunchTemplateDataDetails& WithRamDiskId(RamDiskIdT&& value) { SetRamDiskId(std::forward<RamDiskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> One or more security group IDs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIdSet() const { return m_securityGroupIdSet; }
    inline bool SecurityGroupIdSetHasBeenSet() const { return m_securityGroupIdSetHasBeenSet; }
    template<typename SecurityGroupIdSetT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIdSet(SecurityGroupIdSetT&& value) { m_securityGroupIdSetHasBeenSet = true; m_securityGroupIdSet = std::forward<SecurityGroupIdSetT>(value); }
    template<typename SecurityGroupIdSetT = Aws::Vector<Aws::String>>
    AwsEc2LaunchTemplateDataDetails& WithSecurityGroupIdSet(SecurityGroupIdSetT&& value) { SetSecurityGroupIdSet(std::forward<SecurityGroupIdSetT>(value)); return *this;}
    template<typename SecurityGroupIdSetT = Aws::String>
    AwsEc2LaunchTemplateDataDetails& AddSecurityGroupIdSet(SecurityGroupIdSetT&& value) { m_securityGroupIdSetHasBeenSet = true; m_securityGroupIdSet.emplace_back(std::forward<SecurityGroupIdSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> One or more security group names. For a nondefault VPC, you must use
     * security group IDs instead. You cannot specify both a security group ID and
     * security name in the same request. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupSet() const { return m_securityGroupSet; }
    inline bool SecurityGroupSetHasBeenSet() const { return m_securityGroupSetHasBeenSet; }
    template<typename SecurityGroupSetT = Aws::Vector<Aws::String>>
    void SetSecurityGroupSet(SecurityGroupSetT&& value) { m_securityGroupSetHasBeenSet = true; m_securityGroupSet = std::forward<SecurityGroupSetT>(value); }
    template<typename SecurityGroupSetT = Aws::Vector<Aws::String>>
    AwsEc2LaunchTemplateDataDetails& WithSecurityGroupSet(SecurityGroupSetT&& value) { SetSecurityGroupSet(std::forward<SecurityGroupSetT>(value)); return *this;}
    template<typename SecurityGroupSetT = Aws::String>
    AwsEc2LaunchTemplateDataDetails& AddSecurityGroupSet(SecurityGroupSetT&& value) { m_securityGroupSetHasBeenSet = true; m_securityGroupSet.emplace_back(std::forward<SecurityGroupSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The user data to make available to the instance. </p>
     */
    inline const Aws::String& GetUserData() const { return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    template<typename UserDataT = Aws::String>
    void SetUserData(UserDataT&& value) { m_userDataHasBeenSet = true; m_userData = std::forward<UserDataT>(value); }
    template<typename UserDataT = Aws::String>
    AwsEc2LaunchTemplateDataDetails& WithUserData(UserDataT&& value) { SetUserData(std::forward<UserDataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails> m_blockDeviceMappingSet;
    bool m_blockDeviceMappingSetHasBeenSet = false;

    AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails m_capacityReservationSpecification;
    bool m_capacityReservationSpecificationHasBeenSet = false;

    AwsEc2LaunchTemplateDataCpuOptionsDetails m_cpuOptions;
    bool m_cpuOptionsHasBeenSet = false;

    AwsEc2LaunchTemplateDataCreditSpecificationDetails m_creditSpecification;
    bool m_creditSpecificationHasBeenSet = false;

    bool m_disableApiStop{false};
    bool m_disableApiStopHasBeenSet = false;

    bool m_disableApiTermination{false};
    bool m_disableApiTerminationHasBeenSet = false;

    bool m_ebsOptimized{false};
    bool m_ebsOptimizedHasBeenSet = false;

    Aws::Vector<AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails> m_elasticGpuSpecificationSet;
    bool m_elasticGpuSpecificationSetHasBeenSet = false;

    Aws::Vector<AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails> m_elasticInferenceAcceleratorSet;
    bool m_elasticInferenceAcceleratorSetHasBeenSet = false;

    AwsEc2LaunchTemplateDataEnclaveOptionsDetails m_enclaveOptions;
    bool m_enclaveOptionsHasBeenSet = false;

    AwsEc2LaunchTemplateDataHibernationOptionsDetails m_hibernationOptions;
    bool m_hibernationOptionsHasBeenSet = false;

    AwsEc2LaunchTemplateDataIamInstanceProfileDetails m_iamInstanceProfile;
    bool m_iamInstanceProfileHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_instanceInitiatedShutdownBehavior;
    bool m_instanceInitiatedShutdownBehaviorHasBeenSet = false;

    AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails m_instanceMarketOptions;
    bool m_instanceMarketOptionsHasBeenSet = false;

    AwsEc2LaunchTemplateDataInstanceRequirementsDetails m_instanceRequirements;
    bool m_instanceRequirementsHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_kernelId;
    bool m_kernelIdHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::Vector<AwsEc2LaunchTemplateDataLicenseSetDetails> m_licenseSet;
    bool m_licenseSetHasBeenSet = false;

    AwsEc2LaunchTemplateDataMaintenanceOptionsDetails m_maintenanceOptions;
    bool m_maintenanceOptionsHasBeenSet = false;

    AwsEc2LaunchTemplateDataMetadataOptionsDetails m_metadataOptions;
    bool m_metadataOptionsHasBeenSet = false;

    AwsEc2LaunchTemplateDataMonitoringDetails m_monitoring;
    bool m_monitoringHasBeenSet = false;

    Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails> m_networkInterfaceSet;
    bool m_networkInterfaceSetHasBeenSet = false;

    AwsEc2LaunchTemplateDataPlacementDetails m_placement;
    bool m_placementHasBeenSet = false;

    AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails m_privateDnsNameOptions;
    bool m_privateDnsNameOptionsHasBeenSet = false;

    Aws::String m_ramDiskId;
    bool m_ramDiskIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIdSet;
    bool m_securityGroupIdSetHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupSet;
    bool m_securityGroupSetHasBeenSet = false;

    Aws::String m_userData;
    bool m_userDataHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
