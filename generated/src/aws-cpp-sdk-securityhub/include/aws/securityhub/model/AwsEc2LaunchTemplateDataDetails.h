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
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Information about a block device mapping for an Amazon EC2 launch template.
     * </p>
     */
    inline const Aws::Vector<AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails>& GetBlockDeviceMappingSet() const{ return m_blockDeviceMappingSet; }

    /**
     * <p> Information about a block device mapping for an Amazon EC2 launch template.
     * </p>
     */
    inline bool BlockDeviceMappingSetHasBeenSet() const { return m_blockDeviceMappingSetHasBeenSet; }

    /**
     * <p> Information about a block device mapping for an Amazon EC2 launch template.
     * </p>
     */
    inline void SetBlockDeviceMappingSet(const Aws::Vector<AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails>& value) { m_blockDeviceMappingSetHasBeenSet = true; m_blockDeviceMappingSet = value; }

    /**
     * <p> Information about a block device mapping for an Amazon EC2 launch template.
     * </p>
     */
    inline void SetBlockDeviceMappingSet(Aws::Vector<AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails>&& value) { m_blockDeviceMappingSetHasBeenSet = true; m_blockDeviceMappingSet = std::move(value); }

    /**
     * <p> Information about a block device mapping for an Amazon EC2 launch template.
     * </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithBlockDeviceMappingSet(const Aws::Vector<AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails>& value) { SetBlockDeviceMappingSet(value); return *this;}

    /**
     * <p> Information about a block device mapping for an Amazon EC2 launch template.
     * </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithBlockDeviceMappingSet(Aws::Vector<AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails>&& value) { SetBlockDeviceMappingSet(std::move(value)); return *this;}

    /**
     * <p> Information about a block device mapping for an Amazon EC2 launch template.
     * </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& AddBlockDeviceMappingSet(const AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails& value) { m_blockDeviceMappingSetHasBeenSet = true; m_blockDeviceMappingSet.push_back(value); return *this; }

    /**
     * <p> Information about a block device mapping for an Amazon EC2 launch template.
     * </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& AddBlockDeviceMappingSet(AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails&& value) { m_blockDeviceMappingSetHasBeenSet = true; m_blockDeviceMappingSet.push_back(std::move(value)); return *this; }


    /**
     * <p> Specifies an instance's Capacity Reservation targeting option. You can
     * specify only one option at a time. </p>
     */
    inline const AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails& GetCapacityReservationSpecification() const{ return m_capacityReservationSpecification; }

    /**
     * <p> Specifies an instance's Capacity Reservation targeting option. You can
     * specify only one option at a time. </p>
     */
    inline bool CapacityReservationSpecificationHasBeenSet() const { return m_capacityReservationSpecificationHasBeenSet; }

    /**
     * <p> Specifies an instance's Capacity Reservation targeting option. You can
     * specify only one option at a time. </p>
     */
    inline void SetCapacityReservationSpecification(const AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = value; }

    /**
     * <p> Specifies an instance's Capacity Reservation targeting option. You can
     * specify only one option at a time. </p>
     */
    inline void SetCapacityReservationSpecification(AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails&& value) { m_capacityReservationSpecificationHasBeenSet = true; m_capacityReservationSpecification = std::move(value); }

    /**
     * <p> Specifies an instance's Capacity Reservation targeting option. You can
     * specify only one option at a time. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithCapacityReservationSpecification(const AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails& value) { SetCapacityReservationSpecification(value); return *this;}

    /**
     * <p> Specifies an instance's Capacity Reservation targeting option. You can
     * specify only one option at a time. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithCapacityReservationSpecification(AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails&& value) { SetCapacityReservationSpecification(std::move(value)); return *this;}


    /**
     * <p> Specifies the CPU options for an instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimize
     * CPU options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p>
     */
    inline const AwsEc2LaunchTemplateDataCpuOptionsDetails& GetCpuOptions() const{ return m_cpuOptions; }

    /**
     * <p> Specifies the CPU options for an instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimize
     * CPU options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p>
     */
    inline bool CpuOptionsHasBeenSet() const { return m_cpuOptionsHasBeenSet; }

    /**
     * <p> Specifies the CPU options for an instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimize
     * CPU options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p>
     */
    inline void SetCpuOptions(const AwsEc2LaunchTemplateDataCpuOptionsDetails& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = value; }

    /**
     * <p> Specifies the CPU options for an instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimize
     * CPU options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p>
     */
    inline void SetCpuOptions(AwsEc2LaunchTemplateDataCpuOptionsDetails&& value) { m_cpuOptionsHasBeenSet = true; m_cpuOptions = std::move(value); }

    /**
     * <p> Specifies the CPU options for an instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimize
     * CPU options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithCpuOptions(const AwsEc2LaunchTemplateDataCpuOptionsDetails& value) { SetCpuOptions(value); return *this;}

    /**
     * <p> Specifies the CPU options for an instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimize
     * CPU options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithCpuOptions(AwsEc2LaunchTemplateDataCpuOptionsDetails&& value) { SetCpuOptions(std::move(value)); return *this;}


    /**
     * <p> Specifies the credit option for CPU usage of a T2, T3, or T3a instance. </p>
     */
    inline const AwsEc2LaunchTemplateDataCreditSpecificationDetails& GetCreditSpecification() const{ return m_creditSpecification; }

    /**
     * <p> Specifies the credit option for CPU usage of a T2, T3, or T3a instance. </p>
     */
    inline bool CreditSpecificationHasBeenSet() const { return m_creditSpecificationHasBeenSet; }

    /**
     * <p> Specifies the credit option for CPU usage of a T2, T3, or T3a instance. </p>
     */
    inline void SetCreditSpecification(const AwsEc2LaunchTemplateDataCreditSpecificationDetails& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = value; }

    /**
     * <p> Specifies the credit option for CPU usage of a T2, T3, or T3a instance. </p>
     */
    inline void SetCreditSpecification(AwsEc2LaunchTemplateDataCreditSpecificationDetails&& value) { m_creditSpecificationHasBeenSet = true; m_creditSpecification = std::move(value); }

    /**
     * <p> Specifies the credit option for CPU usage of a T2, T3, or T3a instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithCreditSpecification(const AwsEc2LaunchTemplateDataCreditSpecificationDetails& value) { SetCreditSpecification(value); return *this;}

    /**
     * <p> Specifies the credit option for CPU usage of a T2, T3, or T3a instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithCreditSpecification(AwsEc2LaunchTemplateDataCreditSpecificationDetails&& value) { SetCreditSpecification(std::move(value)); return *this;}


    /**
     * <p> Indicates whether to enable the instance for stop protection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Stop_Start.html#Using_StopProtection">Enable
     * stop protection</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline bool GetDisableApiStop() const{ return m_disableApiStop; }

    /**
     * <p> Indicates whether to enable the instance for stop protection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Stop_Start.html#Using_StopProtection">Enable
     * stop protection</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline bool DisableApiStopHasBeenSet() const { return m_disableApiStopHasBeenSet; }

    /**
     * <p> Indicates whether to enable the instance for stop protection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Stop_Start.html#Using_StopProtection">Enable
     * stop protection</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline void SetDisableApiStop(bool value) { m_disableApiStopHasBeenSet = true; m_disableApiStop = value; }

    /**
     * <p> Indicates whether to enable the instance for stop protection. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Stop_Start.html#Using_StopProtection">Enable
     * stop protection</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithDisableApiStop(bool value) { SetDisableApiStop(value); return *this;}


    /**
     * <p> If you set this parameter to <code>true</code>, you can't terminate the
     * instance using the Amazon EC2 console, CLI, or API. If set to <code>true</code>,
     * you can. </p>
     */
    inline bool GetDisableApiTermination() const{ return m_disableApiTermination; }

    /**
     * <p> If you set this parameter to <code>true</code>, you can't terminate the
     * instance using the Amazon EC2 console, CLI, or API. If set to <code>true</code>,
     * you can. </p>
     */
    inline bool DisableApiTerminationHasBeenSet() const { return m_disableApiTerminationHasBeenSet; }

    /**
     * <p> If you set this parameter to <code>true</code>, you can't terminate the
     * instance using the Amazon EC2 console, CLI, or API. If set to <code>true</code>,
     * you can. </p>
     */
    inline void SetDisableApiTermination(bool value) { m_disableApiTerminationHasBeenSet = true; m_disableApiTermination = value; }

    /**
     * <p> If you set this parameter to <code>true</code>, you can't terminate the
     * instance using the Amazon EC2 console, CLI, or API. If set to <code>true</code>,
     * you can. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithDisableApiTermination(bool value) { SetDisableApiTermination(value); return *this;}


    /**
     * <p> Indicates whether the instance is optimized for Amazon EBS I/O. </p>
     */
    inline bool GetEbsOptimized() const{ return m_ebsOptimized; }

    /**
     * <p> Indicates whether the instance is optimized for Amazon EBS I/O. </p>
     */
    inline bool EbsOptimizedHasBeenSet() const { return m_ebsOptimizedHasBeenSet; }

    /**
     * <p> Indicates whether the instance is optimized for Amazon EBS I/O. </p>
     */
    inline void SetEbsOptimized(bool value) { m_ebsOptimizedHasBeenSet = true; m_ebsOptimized = value; }

    /**
     * <p> Indicates whether the instance is optimized for Amazon EBS I/O. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithEbsOptimized(bool value) { SetEbsOptimized(value); return *this;}


    /**
     * <p> Provides details about Elastic Graphics accelerators to associate with the
     * instance. </p>
     */
    inline const Aws::Vector<AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails>& GetElasticGpuSpecificationSet() const{ return m_elasticGpuSpecificationSet; }

    /**
     * <p> Provides details about Elastic Graphics accelerators to associate with the
     * instance. </p>
     */
    inline bool ElasticGpuSpecificationSetHasBeenSet() const { return m_elasticGpuSpecificationSetHasBeenSet; }

    /**
     * <p> Provides details about Elastic Graphics accelerators to associate with the
     * instance. </p>
     */
    inline void SetElasticGpuSpecificationSet(const Aws::Vector<AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails>& value) { m_elasticGpuSpecificationSetHasBeenSet = true; m_elasticGpuSpecificationSet = value; }

    /**
     * <p> Provides details about Elastic Graphics accelerators to associate with the
     * instance. </p>
     */
    inline void SetElasticGpuSpecificationSet(Aws::Vector<AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails>&& value) { m_elasticGpuSpecificationSetHasBeenSet = true; m_elasticGpuSpecificationSet = std::move(value); }

    /**
     * <p> Provides details about Elastic Graphics accelerators to associate with the
     * instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithElasticGpuSpecificationSet(const Aws::Vector<AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails>& value) { SetElasticGpuSpecificationSet(value); return *this;}

    /**
     * <p> Provides details about Elastic Graphics accelerators to associate with the
     * instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithElasticGpuSpecificationSet(Aws::Vector<AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails>&& value) { SetElasticGpuSpecificationSet(std::move(value)); return *this;}

    /**
     * <p> Provides details about Elastic Graphics accelerators to associate with the
     * instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& AddElasticGpuSpecificationSet(const AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails& value) { m_elasticGpuSpecificationSetHasBeenSet = true; m_elasticGpuSpecificationSet.push_back(value); return *this; }

    /**
     * <p> Provides details about Elastic Graphics accelerators to associate with the
     * instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& AddElasticGpuSpecificationSet(AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails&& value) { m_elasticGpuSpecificationSetHasBeenSet = true; m_elasticGpuSpecificationSet.push_back(std::move(value)); return *this; }


    /**
     * <p> The Amazon Elastic Inference accelerator for the instance. </p>
     */
    inline const Aws::Vector<AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails>& GetElasticInferenceAcceleratorSet() const{ return m_elasticInferenceAcceleratorSet; }

    /**
     * <p> The Amazon Elastic Inference accelerator for the instance. </p>
     */
    inline bool ElasticInferenceAcceleratorSetHasBeenSet() const { return m_elasticInferenceAcceleratorSetHasBeenSet; }

    /**
     * <p> The Amazon Elastic Inference accelerator for the instance. </p>
     */
    inline void SetElasticInferenceAcceleratorSet(const Aws::Vector<AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails>& value) { m_elasticInferenceAcceleratorSetHasBeenSet = true; m_elasticInferenceAcceleratorSet = value; }

    /**
     * <p> The Amazon Elastic Inference accelerator for the instance. </p>
     */
    inline void SetElasticInferenceAcceleratorSet(Aws::Vector<AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails>&& value) { m_elasticInferenceAcceleratorSetHasBeenSet = true; m_elasticInferenceAcceleratorSet = std::move(value); }

    /**
     * <p> The Amazon Elastic Inference accelerator for the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithElasticInferenceAcceleratorSet(const Aws::Vector<AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails>& value) { SetElasticInferenceAcceleratorSet(value); return *this;}

    /**
     * <p> The Amazon Elastic Inference accelerator for the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithElasticInferenceAcceleratorSet(Aws::Vector<AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails>&& value) { SetElasticInferenceAcceleratorSet(std::move(value)); return *this;}

    /**
     * <p> The Amazon Elastic Inference accelerator for the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& AddElasticInferenceAcceleratorSet(const AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails& value) { m_elasticInferenceAcceleratorSetHasBeenSet = true; m_elasticInferenceAcceleratorSet.push_back(value); return *this; }

    /**
     * <p> The Amazon Elastic Inference accelerator for the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& AddElasticInferenceAcceleratorSet(AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails&& value) { m_elasticInferenceAcceleratorSetHasBeenSet = true; m_elasticInferenceAcceleratorSet.push_back(std::move(value)); return *this; }


    /**
     * <p> Indicates whether the Amazon EC2 instance is enabled for Amazon Web Services
     * Nitro Enclaves. </p>
     */
    inline const AwsEc2LaunchTemplateDataEnclaveOptionsDetails& GetEnclaveOptions() const{ return m_enclaveOptions; }

    /**
     * <p> Indicates whether the Amazon EC2 instance is enabled for Amazon Web Services
     * Nitro Enclaves. </p>
     */
    inline bool EnclaveOptionsHasBeenSet() const { return m_enclaveOptionsHasBeenSet; }

    /**
     * <p> Indicates whether the Amazon EC2 instance is enabled for Amazon Web Services
     * Nitro Enclaves. </p>
     */
    inline void SetEnclaveOptions(const AwsEc2LaunchTemplateDataEnclaveOptionsDetails& value) { m_enclaveOptionsHasBeenSet = true; m_enclaveOptions = value; }

    /**
     * <p> Indicates whether the Amazon EC2 instance is enabled for Amazon Web Services
     * Nitro Enclaves. </p>
     */
    inline void SetEnclaveOptions(AwsEc2LaunchTemplateDataEnclaveOptionsDetails&& value) { m_enclaveOptionsHasBeenSet = true; m_enclaveOptions = std::move(value); }

    /**
     * <p> Indicates whether the Amazon EC2 instance is enabled for Amazon Web Services
     * Nitro Enclaves. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithEnclaveOptions(const AwsEc2LaunchTemplateDataEnclaveOptionsDetails& value) { SetEnclaveOptions(value); return *this;}

    /**
     * <p> Indicates whether the Amazon EC2 instance is enabled for Amazon Web Services
     * Nitro Enclaves. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithEnclaveOptions(AwsEc2LaunchTemplateDataEnclaveOptionsDetails&& value) { SetEnclaveOptions(std::move(value)); return *this;}


    /**
     * <p> Specifies whether your Amazon EC2 instance is configured for hibernation.
     * </p>
     */
    inline const AwsEc2LaunchTemplateDataHibernationOptionsDetails& GetHibernationOptions() const{ return m_hibernationOptions; }

    /**
     * <p> Specifies whether your Amazon EC2 instance is configured for hibernation.
     * </p>
     */
    inline bool HibernationOptionsHasBeenSet() const { return m_hibernationOptionsHasBeenSet; }

    /**
     * <p> Specifies whether your Amazon EC2 instance is configured for hibernation.
     * </p>
     */
    inline void SetHibernationOptions(const AwsEc2LaunchTemplateDataHibernationOptionsDetails& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = value; }

    /**
     * <p> Specifies whether your Amazon EC2 instance is configured for hibernation.
     * </p>
     */
    inline void SetHibernationOptions(AwsEc2LaunchTemplateDataHibernationOptionsDetails&& value) { m_hibernationOptionsHasBeenSet = true; m_hibernationOptions = std::move(value); }

    /**
     * <p> Specifies whether your Amazon EC2 instance is configured for hibernation.
     * </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithHibernationOptions(const AwsEc2LaunchTemplateDataHibernationOptionsDetails& value) { SetHibernationOptions(value); return *this;}

    /**
     * <p> Specifies whether your Amazon EC2 instance is configured for hibernation.
     * </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithHibernationOptions(AwsEc2LaunchTemplateDataHibernationOptionsDetails&& value) { SetHibernationOptions(std::move(value)); return *this;}


    /**
     * <p> The name or Amazon Resource Name (ARN) of an IAM instance profile. </p>
     */
    inline const AwsEc2LaunchTemplateDataIamInstanceProfileDetails& GetIamInstanceProfile() const{ return m_iamInstanceProfile; }

    /**
     * <p> The name or Amazon Resource Name (ARN) of an IAM instance profile. </p>
     */
    inline bool IamInstanceProfileHasBeenSet() const { return m_iamInstanceProfileHasBeenSet; }

    /**
     * <p> The name or Amazon Resource Name (ARN) of an IAM instance profile. </p>
     */
    inline void SetIamInstanceProfile(const AwsEc2LaunchTemplateDataIamInstanceProfileDetails& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = value; }

    /**
     * <p> The name or Amazon Resource Name (ARN) of an IAM instance profile. </p>
     */
    inline void SetIamInstanceProfile(AwsEc2LaunchTemplateDataIamInstanceProfileDetails&& value) { m_iamInstanceProfileHasBeenSet = true; m_iamInstanceProfile = std::move(value); }

    /**
     * <p> The name or Amazon Resource Name (ARN) of an IAM instance profile. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithIamInstanceProfile(const AwsEc2LaunchTemplateDataIamInstanceProfileDetails& value) { SetIamInstanceProfile(value); return *this;}

    /**
     * <p> The name or Amazon Resource Name (ARN) of an IAM instance profile. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithIamInstanceProfile(AwsEc2LaunchTemplateDataIamInstanceProfileDetails&& value) { SetIamInstanceProfile(std::move(value)); return *this;}


    /**
     * <p> The ID of the Amazon Machine Image (AMI). </p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p> The ID of the Amazon Machine Image (AMI). </p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p> The ID of the Amazon Machine Image (AMI). </p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p> The ID of the Amazon Machine Image (AMI). </p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p> The ID of the Amazon Machine Image (AMI). </p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p> The ID of the Amazon Machine Image (AMI). </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p> The ID of the Amazon Machine Image (AMI). </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Amazon Machine Image (AMI). </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p> Provides the options for specifying the instance initiated shutdown
     * behavior. </p>
     */
    inline const Aws::String& GetInstanceInitiatedShutdownBehavior() const{ return m_instanceInitiatedShutdownBehavior; }

    /**
     * <p> Provides the options for specifying the instance initiated shutdown
     * behavior. </p>
     */
    inline bool InstanceInitiatedShutdownBehaviorHasBeenSet() const { return m_instanceInitiatedShutdownBehaviorHasBeenSet; }

    /**
     * <p> Provides the options for specifying the instance initiated shutdown
     * behavior. </p>
     */
    inline void SetInstanceInitiatedShutdownBehavior(const Aws::String& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = value; }

    /**
     * <p> Provides the options for specifying the instance initiated shutdown
     * behavior. </p>
     */
    inline void SetInstanceInitiatedShutdownBehavior(Aws::String&& value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior = std::move(value); }

    /**
     * <p> Provides the options for specifying the instance initiated shutdown
     * behavior. </p>
     */
    inline void SetInstanceInitiatedShutdownBehavior(const char* value) { m_instanceInitiatedShutdownBehaviorHasBeenSet = true; m_instanceInitiatedShutdownBehavior.assign(value); }

    /**
     * <p> Provides the options for specifying the instance initiated shutdown
     * behavior. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithInstanceInitiatedShutdownBehavior(const Aws::String& value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}

    /**
     * <p> Provides the options for specifying the instance initiated shutdown
     * behavior. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithInstanceInitiatedShutdownBehavior(Aws::String&& value) { SetInstanceInitiatedShutdownBehavior(std::move(value)); return *this;}

    /**
     * <p> Provides the options for specifying the instance initiated shutdown
     * behavior. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithInstanceInitiatedShutdownBehavior(const char* value) { SetInstanceInitiatedShutdownBehavior(value); return *this;}


    /**
     * <p> Specifies the market (purchasing) option for an instance. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails& GetInstanceMarketOptions() const{ return m_instanceMarketOptions; }

    /**
     * <p> Specifies the market (purchasing) option for an instance. </p>
     */
    inline bool InstanceMarketOptionsHasBeenSet() const { return m_instanceMarketOptionsHasBeenSet; }

    /**
     * <p> Specifies the market (purchasing) option for an instance. </p>
     */
    inline void SetInstanceMarketOptions(const AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = value; }

    /**
     * <p> Specifies the market (purchasing) option for an instance. </p>
     */
    inline void SetInstanceMarketOptions(AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails&& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = std::move(value); }

    /**
     * <p> Specifies the market (purchasing) option for an instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithInstanceMarketOptions(const AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails& value) { SetInstanceMarketOptions(value); return *this;}

    /**
     * <p> Specifies the market (purchasing) option for an instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithInstanceMarketOptions(AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails&& value) { SetInstanceMarketOptions(std::move(value)); return *this;}


    /**
     * <p> The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with these attributes. If you specify
     * <code>InstanceRequirements</code>, you can't specify <code>InstanceType</code>.
     * </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceRequirementsDetails& GetInstanceRequirements() const{ return m_instanceRequirements; }

    /**
     * <p> The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with these attributes. If you specify
     * <code>InstanceRequirements</code>, you can't specify <code>InstanceType</code>.
     * </p>
     */
    inline bool InstanceRequirementsHasBeenSet() const { return m_instanceRequirementsHasBeenSet; }

    /**
     * <p> The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with these attributes. If you specify
     * <code>InstanceRequirements</code>, you can't specify <code>InstanceType</code>.
     * </p>
     */
    inline void SetInstanceRequirements(const AwsEc2LaunchTemplateDataInstanceRequirementsDetails& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = value; }

    /**
     * <p> The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with these attributes. If you specify
     * <code>InstanceRequirements</code>, you can't specify <code>InstanceType</code>.
     * </p>
     */
    inline void SetInstanceRequirements(AwsEc2LaunchTemplateDataInstanceRequirementsDetails&& value) { m_instanceRequirementsHasBeenSet = true; m_instanceRequirements = std::move(value); }

    /**
     * <p> The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with these attributes. If you specify
     * <code>InstanceRequirements</code>, you can't specify <code>InstanceType</code>.
     * </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithInstanceRequirements(const AwsEc2LaunchTemplateDataInstanceRequirementsDetails& value) { SetInstanceRequirements(value); return *this;}

    /**
     * <p> The attributes for the instance types. When you specify instance attributes,
     * Amazon EC2 will identify instance types with these attributes. If you specify
     * <code>InstanceRequirements</code>, you can't specify <code>InstanceType</code>.
     * </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithInstanceRequirements(AwsEc2LaunchTemplateDataInstanceRequirementsDetails&& value) { SetInstanceRequirements(std::move(value)); return *this;}


    /**
     * <p> The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>. If you specify
     * <code>InstanceType</code>, you can't specify <code>InstanceRequirements</code>.
     * </p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p> The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>. If you specify
     * <code>InstanceType</code>, you can't specify <code>InstanceRequirements</code>.
     * </p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p> The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>. If you specify
     * <code>InstanceType</code>, you can't specify <code>InstanceRequirements</code>.
     * </p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p> The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>. If you specify
     * <code>InstanceType</code>, you can't specify <code>InstanceRequirements</code>.
     * </p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p> The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>. If you specify
     * <code>InstanceType</code>, you can't specify <code>InstanceRequirements</code>.
     * </p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p> The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>. If you specify
     * <code>InstanceType</code>, you can't specify <code>InstanceRequirements</code>.
     * </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p> The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>. If you specify
     * <code>InstanceType</code>, you can't specify <code>InstanceRequirements</code>.
     * </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p> The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>. If you specify
     * <code>InstanceType</code>, you can't specify <code>InstanceRequirements</code>.
     * </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p> The ID of the kernel. </p>
     */
    inline const Aws::String& GetKernelId() const{ return m_kernelId; }

    /**
     * <p> The ID of the kernel. </p>
     */
    inline bool KernelIdHasBeenSet() const { return m_kernelIdHasBeenSet; }

    /**
     * <p> The ID of the kernel. </p>
     */
    inline void SetKernelId(const Aws::String& value) { m_kernelIdHasBeenSet = true; m_kernelId = value; }

    /**
     * <p> The ID of the kernel. </p>
     */
    inline void SetKernelId(Aws::String&& value) { m_kernelIdHasBeenSet = true; m_kernelId = std::move(value); }

    /**
     * <p> The ID of the kernel. </p>
     */
    inline void SetKernelId(const char* value) { m_kernelIdHasBeenSet = true; m_kernelId.assign(value); }

    /**
     * <p> The ID of the kernel. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithKernelId(const Aws::String& value) { SetKernelId(value); return *this;}

    /**
     * <p> The ID of the kernel. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithKernelId(Aws::String&& value) { SetKernelId(std::move(value)); return *this;}

    /**
     * <p> The ID of the kernel. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithKernelId(const char* value) { SetKernelId(value); return *this;}


    /**
     * <p> The name of the key pair that allows users to connect to the instance. </p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p> The name of the key pair that allows users to connect to the instance. </p>
     */
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }

    /**
     * <p> The name of the key pair that allows users to connect to the instance. </p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p> The name of the key pair that allows users to connect to the instance. </p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }

    /**
     * <p> The name of the key pair that allows users to connect to the instance. </p>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p> The name of the key pair that allows users to connect to the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p> The name of the key pair that allows users to connect to the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p> The name of the key pair that allows users to connect to the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p> Specifies a license configuration for an instance. </p>
     */
    inline const Aws::Vector<AwsEc2LaunchTemplateDataLicenseSetDetails>& GetLicenseSet() const{ return m_licenseSet; }

    /**
     * <p> Specifies a license configuration for an instance. </p>
     */
    inline bool LicenseSetHasBeenSet() const { return m_licenseSetHasBeenSet; }

    /**
     * <p> Specifies a license configuration for an instance. </p>
     */
    inline void SetLicenseSet(const Aws::Vector<AwsEc2LaunchTemplateDataLicenseSetDetails>& value) { m_licenseSetHasBeenSet = true; m_licenseSet = value; }

    /**
     * <p> Specifies a license configuration for an instance. </p>
     */
    inline void SetLicenseSet(Aws::Vector<AwsEc2LaunchTemplateDataLicenseSetDetails>&& value) { m_licenseSetHasBeenSet = true; m_licenseSet = std::move(value); }

    /**
     * <p> Specifies a license configuration for an instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithLicenseSet(const Aws::Vector<AwsEc2LaunchTemplateDataLicenseSetDetails>& value) { SetLicenseSet(value); return *this;}

    /**
     * <p> Specifies a license configuration for an instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithLicenseSet(Aws::Vector<AwsEc2LaunchTemplateDataLicenseSetDetails>&& value) { SetLicenseSet(std::move(value)); return *this;}

    /**
     * <p> Specifies a license configuration for an instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& AddLicenseSet(const AwsEc2LaunchTemplateDataLicenseSetDetails& value) { m_licenseSetHasBeenSet = true; m_licenseSet.push_back(value); return *this; }

    /**
     * <p> Specifies a license configuration for an instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& AddLicenseSet(AwsEc2LaunchTemplateDataLicenseSetDetails&& value) { m_licenseSetHasBeenSet = true; m_licenseSet.push_back(std::move(value)); return *this; }


    /**
     * <p> The maintenance options of your instance. </p>
     */
    inline const AwsEc2LaunchTemplateDataMaintenanceOptionsDetails& GetMaintenanceOptions() const{ return m_maintenanceOptions; }

    /**
     * <p> The maintenance options of your instance. </p>
     */
    inline bool MaintenanceOptionsHasBeenSet() const { return m_maintenanceOptionsHasBeenSet; }

    /**
     * <p> The maintenance options of your instance. </p>
     */
    inline void SetMaintenanceOptions(const AwsEc2LaunchTemplateDataMaintenanceOptionsDetails& value) { m_maintenanceOptionsHasBeenSet = true; m_maintenanceOptions = value; }

    /**
     * <p> The maintenance options of your instance. </p>
     */
    inline void SetMaintenanceOptions(AwsEc2LaunchTemplateDataMaintenanceOptionsDetails&& value) { m_maintenanceOptionsHasBeenSet = true; m_maintenanceOptions = std::move(value); }

    /**
     * <p> The maintenance options of your instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithMaintenanceOptions(const AwsEc2LaunchTemplateDataMaintenanceOptionsDetails& value) { SetMaintenanceOptions(value); return *this;}

    /**
     * <p> The maintenance options of your instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithMaintenanceOptions(AwsEc2LaunchTemplateDataMaintenanceOptionsDetails&& value) { SetMaintenanceOptions(std::move(value)); return *this;}


    /**
     * <p> The metadata options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline const AwsEc2LaunchTemplateDataMetadataOptionsDetails& GetMetadataOptions() const{ return m_metadataOptions; }

    /**
     * <p> The metadata options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline bool MetadataOptionsHasBeenSet() const { return m_metadataOptionsHasBeenSet; }

    /**
     * <p> The metadata options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline void SetMetadataOptions(const AwsEc2LaunchTemplateDataMetadataOptionsDetails& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = value; }

    /**
     * <p> The metadata options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline void SetMetadataOptions(AwsEc2LaunchTemplateDataMetadataOptionsDetails&& value) { m_metadataOptionsHasBeenSet = true; m_metadataOptions = std::move(value); }

    /**
     * <p> The metadata options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithMetadataOptions(const AwsEc2LaunchTemplateDataMetadataOptionsDetails& value) { SetMetadataOptions(value); return *this;}

    /**
     * <p> The metadata options for the instance. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-instance-metadata.html">Instance
     * metadata and user data</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithMetadataOptions(AwsEc2LaunchTemplateDataMetadataOptionsDetails&& value) { SetMetadataOptions(std::move(value)); return *this;}


    /**
     * <p> The monitoring for the instance. </p>
     */
    inline const AwsEc2LaunchTemplateDataMonitoringDetails& GetMonitoring() const{ return m_monitoring; }

    /**
     * <p> The monitoring for the instance. </p>
     */
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }

    /**
     * <p> The monitoring for the instance. </p>
     */
    inline void SetMonitoring(const AwsEc2LaunchTemplateDataMonitoringDetails& value) { m_monitoringHasBeenSet = true; m_monitoring = value; }

    /**
     * <p> The monitoring for the instance. </p>
     */
    inline void SetMonitoring(AwsEc2LaunchTemplateDataMonitoringDetails&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::move(value); }

    /**
     * <p> The monitoring for the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithMonitoring(const AwsEc2LaunchTemplateDataMonitoringDetails& value) { SetMonitoring(value); return *this;}

    /**
     * <p> The monitoring for the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithMonitoring(AwsEc2LaunchTemplateDataMonitoringDetails&& value) { SetMonitoring(std::move(value)); return *this;}


    /**
     * <p> Specifies the parameters for a network interface that is attached to the
     * instance. </p>
     */
    inline const Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails>& GetNetworkInterfaceSet() const{ return m_networkInterfaceSet; }

    /**
     * <p> Specifies the parameters for a network interface that is attached to the
     * instance. </p>
     */
    inline bool NetworkInterfaceSetHasBeenSet() const { return m_networkInterfaceSetHasBeenSet; }

    /**
     * <p> Specifies the parameters for a network interface that is attached to the
     * instance. </p>
     */
    inline void SetNetworkInterfaceSet(const Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails>& value) { m_networkInterfaceSetHasBeenSet = true; m_networkInterfaceSet = value; }

    /**
     * <p> Specifies the parameters for a network interface that is attached to the
     * instance. </p>
     */
    inline void SetNetworkInterfaceSet(Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails>&& value) { m_networkInterfaceSetHasBeenSet = true; m_networkInterfaceSet = std::move(value); }

    /**
     * <p> Specifies the parameters for a network interface that is attached to the
     * instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithNetworkInterfaceSet(const Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails>& value) { SetNetworkInterfaceSet(value); return *this;}

    /**
     * <p> Specifies the parameters for a network interface that is attached to the
     * instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithNetworkInterfaceSet(Aws::Vector<AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails>&& value) { SetNetworkInterfaceSet(std::move(value)); return *this;}

    /**
     * <p> Specifies the parameters for a network interface that is attached to the
     * instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& AddNetworkInterfaceSet(const AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails& value) { m_networkInterfaceSetHasBeenSet = true; m_networkInterfaceSet.push_back(value); return *this; }

    /**
     * <p> Specifies the parameters for a network interface that is attached to the
     * instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& AddNetworkInterfaceSet(AwsEc2LaunchTemplateDataNetworkInterfaceSetDetails&& value) { m_networkInterfaceSetHasBeenSet = true; m_networkInterfaceSet.push_back(std::move(value)); return *this; }


    /**
     * <p> Specifies the placement of an instance. </p>
     */
    inline const AwsEc2LaunchTemplateDataPlacementDetails& GetPlacement() const{ return m_placement; }

    /**
     * <p> Specifies the placement of an instance. </p>
     */
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }

    /**
     * <p> Specifies the placement of an instance. </p>
     */
    inline void SetPlacement(const AwsEc2LaunchTemplateDataPlacementDetails& value) { m_placementHasBeenSet = true; m_placement = value; }

    /**
     * <p> Specifies the placement of an instance. </p>
     */
    inline void SetPlacement(AwsEc2LaunchTemplateDataPlacementDetails&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }

    /**
     * <p> Specifies the placement of an instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithPlacement(const AwsEc2LaunchTemplateDataPlacementDetails& value) { SetPlacement(value); return *this;}

    /**
     * <p> Specifies the placement of an instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithPlacement(AwsEc2LaunchTemplateDataPlacementDetails&& value) { SetPlacement(std::move(value)); return *this;}


    /**
     * <p> The options for the instance hostname. </p>
     */
    inline const AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails& GetPrivateDnsNameOptions() const{ return m_privateDnsNameOptions; }

    /**
     * <p> The options for the instance hostname. </p>
     */
    inline bool PrivateDnsNameOptionsHasBeenSet() const { return m_privateDnsNameOptionsHasBeenSet; }

    /**
     * <p> The options for the instance hostname. </p>
     */
    inline void SetPrivateDnsNameOptions(const AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails& value) { m_privateDnsNameOptionsHasBeenSet = true; m_privateDnsNameOptions = value; }

    /**
     * <p> The options for the instance hostname. </p>
     */
    inline void SetPrivateDnsNameOptions(AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails&& value) { m_privateDnsNameOptionsHasBeenSet = true; m_privateDnsNameOptions = std::move(value); }

    /**
     * <p> The options for the instance hostname. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithPrivateDnsNameOptions(const AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails& value) { SetPrivateDnsNameOptions(value); return *this;}

    /**
     * <p> The options for the instance hostname. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithPrivateDnsNameOptions(AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails&& value) { SetPrivateDnsNameOptions(std::move(value)); return *this;}


    /**
     * <p> The ID of the RAM disk. </p>
     */
    inline const Aws::String& GetRamDiskId() const{ return m_ramDiskId; }

    /**
     * <p> The ID of the RAM disk. </p>
     */
    inline bool RamDiskIdHasBeenSet() const { return m_ramDiskIdHasBeenSet; }

    /**
     * <p> The ID of the RAM disk. </p>
     */
    inline void SetRamDiskId(const Aws::String& value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId = value; }

    /**
     * <p> The ID of the RAM disk. </p>
     */
    inline void SetRamDiskId(Aws::String&& value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId = std::move(value); }

    /**
     * <p> The ID of the RAM disk. </p>
     */
    inline void SetRamDiskId(const char* value) { m_ramDiskIdHasBeenSet = true; m_ramDiskId.assign(value); }

    /**
     * <p> The ID of the RAM disk. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithRamDiskId(const Aws::String& value) { SetRamDiskId(value); return *this;}

    /**
     * <p> The ID of the RAM disk. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithRamDiskId(Aws::String&& value) { SetRamDiskId(std::move(value)); return *this;}

    /**
     * <p> The ID of the RAM disk. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithRamDiskId(const char* value) { SetRamDiskId(value); return *this;}


    /**
     * <p> One or more security group IDs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIdSet() const{ return m_securityGroupIdSet; }

    /**
     * <p> One or more security group IDs. </p>
     */
    inline bool SecurityGroupIdSetHasBeenSet() const { return m_securityGroupIdSetHasBeenSet; }

    /**
     * <p> One or more security group IDs. </p>
     */
    inline void SetSecurityGroupIdSet(const Aws::Vector<Aws::String>& value) { m_securityGroupIdSetHasBeenSet = true; m_securityGroupIdSet = value; }

    /**
     * <p> One or more security group IDs. </p>
     */
    inline void SetSecurityGroupIdSet(Aws::Vector<Aws::String>&& value) { m_securityGroupIdSetHasBeenSet = true; m_securityGroupIdSet = std::move(value); }

    /**
     * <p> One or more security group IDs. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithSecurityGroupIdSet(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIdSet(value); return *this;}

    /**
     * <p> One or more security group IDs. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithSecurityGroupIdSet(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIdSet(std::move(value)); return *this;}

    /**
     * <p> One or more security group IDs. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& AddSecurityGroupIdSet(const Aws::String& value) { m_securityGroupIdSetHasBeenSet = true; m_securityGroupIdSet.push_back(value); return *this; }

    /**
     * <p> One or more security group IDs. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& AddSecurityGroupIdSet(Aws::String&& value) { m_securityGroupIdSetHasBeenSet = true; m_securityGroupIdSet.push_back(std::move(value)); return *this; }

    /**
     * <p> One or more security group IDs. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& AddSecurityGroupIdSet(const char* value) { m_securityGroupIdSetHasBeenSet = true; m_securityGroupIdSet.push_back(value); return *this; }


    /**
     * <p> One or more security group names. For a nondefault VPC, you must use
     * security group IDs instead. You cannot specify both a security group ID and
     * security name in the same request. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupSet() const{ return m_securityGroupSet; }

    /**
     * <p> One or more security group names. For a nondefault VPC, you must use
     * security group IDs instead. You cannot specify both a security group ID and
     * security name in the same request. </p>
     */
    inline bool SecurityGroupSetHasBeenSet() const { return m_securityGroupSetHasBeenSet; }

    /**
     * <p> One or more security group names. For a nondefault VPC, you must use
     * security group IDs instead. You cannot specify both a security group ID and
     * security name in the same request. </p>
     */
    inline void SetSecurityGroupSet(const Aws::Vector<Aws::String>& value) { m_securityGroupSetHasBeenSet = true; m_securityGroupSet = value; }

    /**
     * <p> One or more security group names. For a nondefault VPC, you must use
     * security group IDs instead. You cannot specify both a security group ID and
     * security name in the same request. </p>
     */
    inline void SetSecurityGroupSet(Aws::Vector<Aws::String>&& value) { m_securityGroupSetHasBeenSet = true; m_securityGroupSet = std::move(value); }

    /**
     * <p> One or more security group names. For a nondefault VPC, you must use
     * security group IDs instead. You cannot specify both a security group ID and
     * security name in the same request. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithSecurityGroupSet(const Aws::Vector<Aws::String>& value) { SetSecurityGroupSet(value); return *this;}

    /**
     * <p> One or more security group names. For a nondefault VPC, you must use
     * security group IDs instead. You cannot specify both a security group ID and
     * security name in the same request. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithSecurityGroupSet(Aws::Vector<Aws::String>&& value) { SetSecurityGroupSet(std::move(value)); return *this;}

    /**
     * <p> One or more security group names. For a nondefault VPC, you must use
     * security group IDs instead. You cannot specify both a security group ID and
     * security name in the same request. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& AddSecurityGroupSet(const Aws::String& value) { m_securityGroupSetHasBeenSet = true; m_securityGroupSet.push_back(value); return *this; }

    /**
     * <p> One or more security group names. For a nondefault VPC, you must use
     * security group IDs instead. You cannot specify both a security group ID and
     * security name in the same request. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& AddSecurityGroupSet(Aws::String&& value) { m_securityGroupSetHasBeenSet = true; m_securityGroupSet.push_back(std::move(value)); return *this; }

    /**
     * <p> One or more security group names. For a nondefault VPC, you must use
     * security group IDs instead. You cannot specify both a security group ID and
     * security name in the same request. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& AddSecurityGroupSet(const char* value) { m_securityGroupSetHasBeenSet = true; m_securityGroupSet.push_back(value); return *this; }


    /**
     * <p> The user data to make available to the instance. </p>
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }

    /**
     * <p> The user data to make available to the instance. </p>
     */
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }

    /**
     * <p> The user data to make available to the instance. </p>
     */
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }

    /**
     * <p> The user data to make available to the instance. </p>
     */
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }

    /**
     * <p> The user data to make available to the instance. </p>
     */
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }

    /**
     * <p> The user data to make available to the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}

    /**
     * <p> The user data to make available to the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}

    /**
     * <p> The user data to make available to the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataDetails& WithUserData(const char* value) { SetUserData(value); return *this;}

  private:

    Aws::Vector<AwsEc2LaunchTemplateDataBlockDeviceMappingSetDetails> m_blockDeviceMappingSet;
    bool m_blockDeviceMappingSetHasBeenSet = false;

    AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails m_capacityReservationSpecification;
    bool m_capacityReservationSpecificationHasBeenSet = false;

    AwsEc2LaunchTemplateDataCpuOptionsDetails m_cpuOptions;
    bool m_cpuOptionsHasBeenSet = false;

    AwsEc2LaunchTemplateDataCreditSpecificationDetails m_creditSpecification;
    bool m_creditSpecificationHasBeenSet = false;

    bool m_disableApiStop;
    bool m_disableApiStopHasBeenSet = false;

    bool m_disableApiTermination;
    bool m_disableApiTerminationHasBeenSet = false;

    bool m_ebsOptimized;
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
