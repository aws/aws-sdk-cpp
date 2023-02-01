/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorCountDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataInstanceRequirementsBaselineEbsBandwidthMbpsDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataInstanceRequirementsMemoryGiBPerVCpuDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataInstanceRequirementsMemoryMiBDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataInstanceRequirementsNetworkInterfaceCountDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataInstanceRequirementsVCpuCountDetails.h>
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
   * <p> The attributes for the Amazon EC2 instance types. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataInstanceRequirementsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataInstanceRequirementsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) on an instance. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorCountDetails& GetAcceleratorCount() const{ return m_acceleratorCount; }

    /**
     * <p> The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) on an instance. </p>
     */
    inline bool AcceleratorCountHasBeenSet() const { return m_acceleratorCountHasBeenSet; }

    /**
     * <p> The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) on an instance. </p>
     */
    inline void SetAcceleratorCount(const AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorCountDetails& value) { m_acceleratorCountHasBeenSet = true; m_acceleratorCount = value; }

    /**
     * <p> The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) on an instance. </p>
     */
    inline void SetAcceleratorCount(AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorCountDetails&& value) { m_acceleratorCountHasBeenSet = true; m_acceleratorCount = std::move(value); }

    /**
     * <p> The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) on an instance. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithAcceleratorCount(const AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorCountDetails& value) { SetAcceleratorCount(value); return *this;}

    /**
     * <p> The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) on an instance. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithAcceleratorCount(AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorCountDetails&& value) { SetAcceleratorCount(std::move(value)); return *this;}


    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAcceleratorManufacturers() const{ return m_acceleratorManufacturers; }

    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers. </p>
     */
    inline bool AcceleratorManufacturersHasBeenSet() const { return m_acceleratorManufacturersHasBeenSet; }

    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers. </p>
     */
    inline void SetAcceleratorManufacturers(const Aws::Vector<Aws::String>& value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers = value; }

    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers. </p>
     */
    inline void SetAcceleratorManufacturers(Aws::Vector<Aws::String>&& value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers = std::move(value); }

    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithAcceleratorManufacturers(const Aws::Vector<Aws::String>& value) { SetAcceleratorManufacturers(value); return *this;}

    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithAcceleratorManufacturers(Aws::Vector<Aws::String>&& value) { SetAcceleratorManufacturers(std::move(value)); return *this;}

    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddAcceleratorManufacturers(const Aws::String& value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers.push_back(value); return *this; }

    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddAcceleratorManufacturers(Aws::String&& value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers.push_back(std::move(value)); return *this; }

    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddAcceleratorManufacturers(const char* value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers.push_back(value); return *this; }


    /**
     * <p> The accelerators that must be on the instance type. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAcceleratorNames() const{ return m_acceleratorNames; }

    /**
     * <p> The accelerators that must be on the instance type. </p>
     */
    inline bool AcceleratorNamesHasBeenSet() const { return m_acceleratorNamesHasBeenSet; }

    /**
     * <p> The accelerators that must be on the instance type. </p>
     */
    inline void SetAcceleratorNames(const Aws::Vector<Aws::String>& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames = value; }

    /**
     * <p> The accelerators that must be on the instance type. </p>
     */
    inline void SetAcceleratorNames(Aws::Vector<Aws::String>&& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames = std::move(value); }

    /**
     * <p> The accelerators that must be on the instance type. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithAcceleratorNames(const Aws::Vector<Aws::String>& value) { SetAcceleratorNames(value); return *this;}

    /**
     * <p> The accelerators that must be on the instance type. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithAcceleratorNames(Aws::Vector<Aws::String>&& value) { SetAcceleratorNames(std::move(value)); return *this;}

    /**
     * <p> The accelerators that must be on the instance type. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddAcceleratorNames(const Aws::String& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames.push_back(value); return *this; }

    /**
     * <p> The accelerators that must be on the instance type. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddAcceleratorNames(Aws::String&& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames.push_back(std::move(value)); return *this; }

    /**
     * <p> The accelerators that must be on the instance type. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddAcceleratorNames(const char* value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames.push_back(value); return *this; }


    /**
     * <p> The minimum and maximum amount of total accelerator memory, in MiB. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails& GetAcceleratorTotalMemoryMiB() const{ return m_acceleratorTotalMemoryMiB; }

    /**
     * <p> The minimum and maximum amount of total accelerator memory, in MiB. </p>
     */
    inline bool AcceleratorTotalMemoryMiBHasBeenSet() const { return m_acceleratorTotalMemoryMiBHasBeenSet; }

    /**
     * <p> The minimum and maximum amount of total accelerator memory, in MiB. </p>
     */
    inline void SetAcceleratorTotalMemoryMiB(const AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails& value) { m_acceleratorTotalMemoryMiBHasBeenSet = true; m_acceleratorTotalMemoryMiB = value; }

    /**
     * <p> The minimum and maximum amount of total accelerator memory, in MiB. </p>
     */
    inline void SetAcceleratorTotalMemoryMiB(AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails&& value) { m_acceleratorTotalMemoryMiBHasBeenSet = true; m_acceleratorTotalMemoryMiB = std::move(value); }

    /**
     * <p> The minimum and maximum amount of total accelerator memory, in MiB. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithAcceleratorTotalMemoryMiB(const AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails& value) { SetAcceleratorTotalMemoryMiB(value); return *this;}

    /**
     * <p> The minimum and maximum amount of total accelerator memory, in MiB. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithAcceleratorTotalMemoryMiB(AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails&& value) { SetAcceleratorTotalMemoryMiB(std::move(value)); return *this;}


    /**
     * <p>The accelerator types that must be on the instance type. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAcceleratorTypes() const{ return m_acceleratorTypes; }

    /**
     * <p>The accelerator types that must be on the instance type. </p>
     */
    inline bool AcceleratorTypesHasBeenSet() const { return m_acceleratorTypesHasBeenSet; }

    /**
     * <p>The accelerator types that must be on the instance type. </p>
     */
    inline void SetAcceleratorTypes(const Aws::Vector<Aws::String>& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = value; }

    /**
     * <p>The accelerator types that must be on the instance type. </p>
     */
    inline void SetAcceleratorTypes(Aws::Vector<Aws::String>&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = std::move(value); }

    /**
     * <p>The accelerator types that must be on the instance type. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithAcceleratorTypes(const Aws::Vector<Aws::String>& value) { SetAcceleratorTypes(value); return *this;}

    /**
     * <p>The accelerator types that must be on the instance type. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithAcceleratorTypes(Aws::Vector<Aws::String>&& value) { SetAcceleratorTypes(std::move(value)); return *this;}

    /**
     * <p>The accelerator types that must be on the instance type. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddAcceleratorTypes(const Aws::String& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }

    /**
     * <p>The accelerator types that must be on the instance type. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddAcceleratorTypes(Aws::String&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The accelerator types that must be on the instance type. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddAcceleratorTypes(const char* value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }


    /**
     * <p>Indicates whether bare metal instance types must be included, excluded, or
     * required. </p>
     */
    inline const Aws::String& GetBareMetal() const{ return m_bareMetal; }

    /**
     * <p>Indicates whether bare metal instance types must be included, excluded, or
     * required. </p>
     */
    inline bool BareMetalHasBeenSet() const { return m_bareMetalHasBeenSet; }

    /**
     * <p>Indicates whether bare metal instance types must be included, excluded, or
     * required. </p>
     */
    inline void SetBareMetal(const Aws::String& value) { m_bareMetalHasBeenSet = true; m_bareMetal = value; }

    /**
     * <p>Indicates whether bare metal instance types must be included, excluded, or
     * required. </p>
     */
    inline void SetBareMetal(Aws::String&& value) { m_bareMetalHasBeenSet = true; m_bareMetal = std::move(value); }

    /**
     * <p>Indicates whether bare metal instance types must be included, excluded, or
     * required. </p>
     */
    inline void SetBareMetal(const char* value) { m_bareMetalHasBeenSet = true; m_bareMetal.assign(value); }

    /**
     * <p>Indicates whether bare metal instance types must be included, excluded, or
     * required. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithBareMetal(const Aws::String& value) { SetBareMetal(value); return *this;}

    /**
     * <p>Indicates whether bare metal instance types must be included, excluded, or
     * required. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithBareMetal(Aws::String&& value) { SetBareMetal(std::move(value)); return *this;}

    /**
     * <p>Indicates whether bare metal instance types must be included, excluded, or
     * required. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithBareMetal(const char* value) { SetBareMetal(value); return *this;}


    /**
     * <p> The minimum and maximum baseline bandwidth to Amazon EBS, in Mbps. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS optimized instances</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceRequirementsBaselineEbsBandwidthMbpsDetails& GetBaselineEbsBandwidthMbps() const{ return m_baselineEbsBandwidthMbps; }

    /**
     * <p> The minimum and maximum baseline bandwidth to Amazon EBS, in Mbps. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS optimized instances</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline bool BaselineEbsBandwidthMbpsHasBeenSet() const { return m_baselineEbsBandwidthMbpsHasBeenSet; }

    /**
     * <p> The minimum and maximum baseline bandwidth to Amazon EBS, in Mbps. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS optimized instances</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline void SetBaselineEbsBandwidthMbps(const AwsEc2LaunchTemplateDataInstanceRequirementsBaselineEbsBandwidthMbpsDetails& value) { m_baselineEbsBandwidthMbpsHasBeenSet = true; m_baselineEbsBandwidthMbps = value; }

    /**
     * <p> The minimum and maximum baseline bandwidth to Amazon EBS, in Mbps. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS optimized instances</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline void SetBaselineEbsBandwidthMbps(AwsEc2LaunchTemplateDataInstanceRequirementsBaselineEbsBandwidthMbpsDetails&& value) { m_baselineEbsBandwidthMbpsHasBeenSet = true; m_baselineEbsBandwidthMbps = std::move(value); }

    /**
     * <p> The minimum and maximum baseline bandwidth to Amazon EBS, in Mbps. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS optimized instances</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithBaselineEbsBandwidthMbps(const AwsEc2LaunchTemplateDataInstanceRequirementsBaselineEbsBandwidthMbpsDetails& value) { SetBaselineEbsBandwidthMbps(value); return *this;}

    /**
     * <p> The minimum and maximum baseline bandwidth to Amazon EBS, in Mbps. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS optimized instances</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithBaselineEbsBandwidthMbps(AwsEc2LaunchTemplateDataInstanceRequirementsBaselineEbsBandwidthMbpsDetails&& value) { SetBaselineEbsBandwidthMbps(std::move(value)); return *this;}


    /**
     * <p> Indicates whether burstable performance T instance types are included,
     * excluded, or required. For more information, <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline const Aws::String& GetBurstablePerformance() const{ return m_burstablePerformance; }

    /**
     * <p> Indicates whether burstable performance T instance types are included,
     * excluded, or required. For more information, <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline bool BurstablePerformanceHasBeenSet() const { return m_burstablePerformanceHasBeenSet; }

    /**
     * <p> Indicates whether burstable performance T instance types are included,
     * excluded, or required. For more information, <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline void SetBurstablePerformance(const Aws::String& value) { m_burstablePerformanceHasBeenSet = true; m_burstablePerformance = value; }

    /**
     * <p> Indicates whether burstable performance T instance types are included,
     * excluded, or required. For more information, <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline void SetBurstablePerformance(Aws::String&& value) { m_burstablePerformanceHasBeenSet = true; m_burstablePerformance = std::move(value); }

    /**
     * <p> Indicates whether burstable performance T instance types are included,
     * excluded, or required. For more information, <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline void SetBurstablePerformance(const char* value) { m_burstablePerformanceHasBeenSet = true; m_burstablePerformance.assign(value); }

    /**
     * <p> Indicates whether burstable performance T instance types are included,
     * excluded, or required. For more information, <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithBurstablePerformance(const Aws::String& value) { SetBurstablePerformance(value); return *this;}

    /**
     * <p> Indicates whether burstable performance T instance types are included,
     * excluded, or required. For more information, <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithBurstablePerformance(Aws::String&& value) { SetBurstablePerformance(std::move(value)); return *this;}

    /**
     * <p> Indicates whether burstable performance T instance types are included,
     * excluded, or required. For more information, <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithBurstablePerformance(const char* value) { SetBurstablePerformance(value); return *this;}


    /**
     * <p> The CPU manufacturers to include. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCpuManufacturers() const{ return m_cpuManufacturers; }

    /**
     * <p> The CPU manufacturers to include. </p>
     */
    inline bool CpuManufacturersHasBeenSet() const { return m_cpuManufacturersHasBeenSet; }

    /**
     * <p> The CPU manufacturers to include. </p>
     */
    inline void SetCpuManufacturers(const Aws::Vector<Aws::String>& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers = value; }

    /**
     * <p> The CPU manufacturers to include. </p>
     */
    inline void SetCpuManufacturers(Aws::Vector<Aws::String>&& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers = std::move(value); }

    /**
     * <p> The CPU manufacturers to include. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithCpuManufacturers(const Aws::Vector<Aws::String>& value) { SetCpuManufacturers(value); return *this;}

    /**
     * <p> The CPU manufacturers to include. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithCpuManufacturers(Aws::Vector<Aws::String>&& value) { SetCpuManufacturers(std::move(value)); return *this;}

    /**
     * <p> The CPU manufacturers to include. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddCpuManufacturers(const Aws::String& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers.push_back(value); return *this; }

    /**
     * <p> The CPU manufacturers to include. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddCpuManufacturers(Aws::String&& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers.push_back(std::move(value)); return *this; }

    /**
     * <p> The CPU manufacturers to include. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddCpuManufacturers(const char* value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers.push_back(value); return *this; }


    /**
     * <p> The instance types to exclude. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedInstanceTypes() const{ return m_excludedInstanceTypes; }

    /**
     * <p> The instance types to exclude. </p>
     */
    inline bool ExcludedInstanceTypesHasBeenSet() const { return m_excludedInstanceTypesHasBeenSet; }

    /**
     * <p> The instance types to exclude. </p>
     */
    inline void SetExcludedInstanceTypes(const Aws::Vector<Aws::String>& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes = value; }

    /**
     * <p> The instance types to exclude. </p>
     */
    inline void SetExcludedInstanceTypes(Aws::Vector<Aws::String>&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes = std::move(value); }

    /**
     * <p> The instance types to exclude. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithExcludedInstanceTypes(const Aws::Vector<Aws::String>& value) { SetExcludedInstanceTypes(value); return *this;}

    /**
     * <p> The instance types to exclude. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithExcludedInstanceTypes(Aws::Vector<Aws::String>&& value) { SetExcludedInstanceTypes(std::move(value)); return *this;}

    /**
     * <p> The instance types to exclude. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddExcludedInstanceTypes(const Aws::String& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.push_back(value); return *this; }

    /**
     * <p> The instance types to exclude. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddExcludedInstanceTypes(Aws::String&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p> The instance types to exclude. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddExcludedInstanceTypes(const char* value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.push_back(value); return *this; }


    /**
     * <p> Indicates whether current or previous generation instance types are
     * included. </p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceGenerations() const{ return m_instanceGenerations; }

    /**
     * <p> Indicates whether current or previous generation instance types are
     * included. </p>
     */
    inline bool InstanceGenerationsHasBeenSet() const { return m_instanceGenerationsHasBeenSet; }

    /**
     * <p> Indicates whether current or previous generation instance types are
     * included. </p>
     */
    inline void SetInstanceGenerations(const Aws::Vector<Aws::String>& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations = value; }

    /**
     * <p> Indicates whether current or previous generation instance types are
     * included. </p>
     */
    inline void SetInstanceGenerations(Aws::Vector<Aws::String>&& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations = std::move(value); }

    /**
     * <p> Indicates whether current or previous generation instance types are
     * included. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithInstanceGenerations(const Aws::Vector<Aws::String>& value) { SetInstanceGenerations(value); return *this;}

    /**
     * <p> Indicates whether current or previous generation instance types are
     * included. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithInstanceGenerations(Aws::Vector<Aws::String>&& value) { SetInstanceGenerations(std::move(value)); return *this;}

    /**
     * <p> Indicates whether current or previous generation instance types are
     * included. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddInstanceGenerations(const Aws::String& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations.push_back(value); return *this; }

    /**
     * <p> Indicates whether current or previous generation instance types are
     * included. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddInstanceGenerations(Aws::String&& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations.push_back(std::move(value)); return *this; }

    /**
     * <p> Indicates whether current or previous generation instance types are
     * included. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddInstanceGenerations(const char* value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations.push_back(value); return *this; }


    /**
     * <p> Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline const Aws::String& GetLocalStorage() const{ return m_localStorage; }

    /**
     * <p> Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline bool LocalStorageHasBeenSet() const { return m_localStorageHasBeenSet; }

    /**
     * <p> Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline void SetLocalStorage(const Aws::String& value) { m_localStorageHasBeenSet = true; m_localStorage = value; }

    /**
     * <p> Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline void SetLocalStorage(Aws::String&& value) { m_localStorageHasBeenSet = true; m_localStorage = std::move(value); }

    /**
     * <p> Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline void SetLocalStorage(const char* value) { m_localStorageHasBeenSet = true; m_localStorage.assign(value); }

    /**
     * <p> Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithLocalStorage(const Aws::String& value) { SetLocalStorage(value); return *this;}

    /**
     * <p> Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithLocalStorage(Aws::String&& value) { SetLocalStorage(std::move(value)); return *this;}

    /**
     * <p> Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithLocalStorage(const char* value) { SetLocalStorage(value); return *this;}


    /**
     * <p> The type of local storage that is required. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLocalStorageTypes() const{ return m_localStorageTypes; }

    /**
     * <p> The type of local storage that is required. </p>
     */
    inline bool LocalStorageTypesHasBeenSet() const { return m_localStorageTypesHasBeenSet; }

    /**
     * <p> The type of local storage that is required. </p>
     */
    inline void SetLocalStorageTypes(const Aws::Vector<Aws::String>& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes = value; }

    /**
     * <p> The type of local storage that is required. </p>
     */
    inline void SetLocalStorageTypes(Aws::Vector<Aws::String>&& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes = std::move(value); }

    /**
     * <p> The type of local storage that is required. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithLocalStorageTypes(const Aws::Vector<Aws::String>& value) { SetLocalStorageTypes(value); return *this;}

    /**
     * <p> The type of local storage that is required. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithLocalStorageTypes(Aws::Vector<Aws::String>&& value) { SetLocalStorageTypes(std::move(value)); return *this;}

    /**
     * <p> The type of local storage that is required. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddLocalStorageTypes(const Aws::String& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes.push_back(value); return *this; }

    /**
     * <p> The type of local storage that is required. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddLocalStorageTypes(Aws::String&& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes.push_back(std::move(value)); return *this; }

    /**
     * <p> The type of local storage that is required. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddLocalStorageTypes(const char* value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes.push_back(value); return *this; }


    /**
     * <p> The minimum and maximum amount of memory per vCPU, in GiB. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceRequirementsMemoryGiBPerVCpuDetails& GetMemoryGiBPerVCpu() const{ return m_memoryGiBPerVCpu; }

    /**
     * <p> The minimum and maximum amount of memory per vCPU, in GiB. </p>
     */
    inline bool MemoryGiBPerVCpuHasBeenSet() const { return m_memoryGiBPerVCpuHasBeenSet; }

    /**
     * <p> The minimum and maximum amount of memory per vCPU, in GiB. </p>
     */
    inline void SetMemoryGiBPerVCpu(const AwsEc2LaunchTemplateDataInstanceRequirementsMemoryGiBPerVCpuDetails& value) { m_memoryGiBPerVCpuHasBeenSet = true; m_memoryGiBPerVCpu = value; }

    /**
     * <p> The minimum and maximum amount of memory per vCPU, in GiB. </p>
     */
    inline void SetMemoryGiBPerVCpu(AwsEc2LaunchTemplateDataInstanceRequirementsMemoryGiBPerVCpuDetails&& value) { m_memoryGiBPerVCpuHasBeenSet = true; m_memoryGiBPerVCpu = std::move(value); }

    /**
     * <p> The minimum and maximum amount of memory per vCPU, in GiB. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithMemoryGiBPerVCpu(const AwsEc2LaunchTemplateDataInstanceRequirementsMemoryGiBPerVCpuDetails& value) { SetMemoryGiBPerVCpu(value); return *this;}

    /**
     * <p> The minimum and maximum amount of memory per vCPU, in GiB. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithMemoryGiBPerVCpu(AwsEc2LaunchTemplateDataInstanceRequirementsMemoryGiBPerVCpuDetails&& value) { SetMemoryGiBPerVCpu(std::move(value)); return *this;}


    /**
     * <p> The minimum and maximum amount of memory, in MiB. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceRequirementsMemoryMiBDetails& GetMemoryMiB() const{ return m_memoryMiB; }

    /**
     * <p> The minimum and maximum amount of memory, in MiB. </p>
     */
    inline bool MemoryMiBHasBeenSet() const { return m_memoryMiBHasBeenSet; }

    /**
     * <p> The minimum and maximum amount of memory, in MiB. </p>
     */
    inline void SetMemoryMiB(const AwsEc2LaunchTemplateDataInstanceRequirementsMemoryMiBDetails& value) { m_memoryMiBHasBeenSet = true; m_memoryMiB = value; }

    /**
     * <p> The minimum and maximum amount of memory, in MiB. </p>
     */
    inline void SetMemoryMiB(AwsEc2LaunchTemplateDataInstanceRequirementsMemoryMiBDetails&& value) { m_memoryMiBHasBeenSet = true; m_memoryMiB = std::move(value); }

    /**
     * <p> The minimum and maximum amount of memory, in MiB. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithMemoryMiB(const AwsEc2LaunchTemplateDataInstanceRequirementsMemoryMiBDetails& value) { SetMemoryMiB(value); return *this;}

    /**
     * <p> The minimum and maximum amount of memory, in MiB. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithMemoryMiB(AwsEc2LaunchTemplateDataInstanceRequirementsMemoryMiBDetails&& value) { SetMemoryMiB(std::move(value)); return *this;}


    /**
     * <p> The minimum and maximum number of network interfaces. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceRequirementsNetworkInterfaceCountDetails& GetNetworkInterfaceCount() const{ return m_networkInterfaceCount; }

    /**
     * <p> The minimum and maximum number of network interfaces. </p>
     */
    inline bool NetworkInterfaceCountHasBeenSet() const { return m_networkInterfaceCountHasBeenSet; }

    /**
     * <p> The minimum and maximum number of network interfaces. </p>
     */
    inline void SetNetworkInterfaceCount(const AwsEc2LaunchTemplateDataInstanceRequirementsNetworkInterfaceCountDetails& value) { m_networkInterfaceCountHasBeenSet = true; m_networkInterfaceCount = value; }

    /**
     * <p> The minimum and maximum number of network interfaces. </p>
     */
    inline void SetNetworkInterfaceCount(AwsEc2LaunchTemplateDataInstanceRequirementsNetworkInterfaceCountDetails&& value) { m_networkInterfaceCountHasBeenSet = true; m_networkInterfaceCount = std::move(value); }

    /**
     * <p> The minimum and maximum number of network interfaces. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithNetworkInterfaceCount(const AwsEc2LaunchTemplateDataInstanceRequirementsNetworkInterfaceCountDetails& value) { SetNetworkInterfaceCount(value); return *this;}

    /**
     * <p> The minimum and maximum number of network interfaces. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithNetworkInterfaceCount(AwsEc2LaunchTemplateDataInstanceRequirementsNetworkInterfaceCountDetails&& value) { SetNetworkInterfaceCount(std::move(value)); return *this;}


    /**
     * <p> The price protection threshold for On-Demand Instances. This is the maximum
     * you’ll pay for an On-Demand Instance, expressed as a percentage above the least
     * expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 selects instance types with your attributes, it
     * excludes instance types priced above your threshold.</p> <p>The parameter
     * accepts an integer, which Amazon EC2 interprets as a percentage.</p> <p>A high
     * value, such as <code>999999</code>, turns off price protection.</p>
     */
    inline int GetOnDemandMaxPricePercentageOverLowestPrice() const{ return m_onDemandMaxPricePercentageOverLowestPrice; }

    /**
     * <p> The price protection threshold for On-Demand Instances. This is the maximum
     * you’ll pay for an On-Demand Instance, expressed as a percentage above the least
     * expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 selects instance types with your attributes, it
     * excludes instance types priced above your threshold.</p> <p>The parameter
     * accepts an integer, which Amazon EC2 interprets as a percentage.</p> <p>A high
     * value, such as <code>999999</code>, turns off price protection.</p>
     */
    inline bool OnDemandMaxPricePercentageOverLowestPriceHasBeenSet() const { return m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet; }

    /**
     * <p> The price protection threshold for On-Demand Instances. This is the maximum
     * you’ll pay for an On-Demand Instance, expressed as a percentage above the least
     * expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 selects instance types with your attributes, it
     * excludes instance types priced above your threshold.</p> <p>The parameter
     * accepts an integer, which Amazon EC2 interprets as a percentage.</p> <p>A high
     * value, such as <code>999999</code>, turns off price protection.</p>
     */
    inline void SetOnDemandMaxPricePercentageOverLowestPrice(int value) { m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet = true; m_onDemandMaxPricePercentageOverLowestPrice = value; }

    /**
     * <p> The price protection threshold for On-Demand Instances. This is the maximum
     * you’ll pay for an On-Demand Instance, expressed as a percentage above the least
     * expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 selects instance types with your attributes, it
     * excludes instance types priced above your threshold.</p> <p>The parameter
     * accepts an integer, which Amazon EC2 interprets as a percentage.</p> <p>A high
     * value, such as <code>999999</code>, turns off price protection.</p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithOnDemandMaxPricePercentageOverLowestPrice(int value) { SetOnDemandMaxPricePercentageOverLowestPrice(value); return *this;}


    /**
     * <p> Indicates whether instance types must support hibernation for On-Demand
     * Instances. </p>
     */
    inline bool GetRequireHibernateSupport() const{ return m_requireHibernateSupport; }

    /**
     * <p> Indicates whether instance types must support hibernation for On-Demand
     * Instances. </p>
     */
    inline bool RequireHibernateSupportHasBeenSet() const { return m_requireHibernateSupportHasBeenSet; }

    /**
     * <p> Indicates whether instance types must support hibernation for On-Demand
     * Instances. </p>
     */
    inline void SetRequireHibernateSupport(bool value) { m_requireHibernateSupportHasBeenSet = true; m_requireHibernateSupport = value; }

    /**
     * <p> Indicates whether instance types must support hibernation for On-Demand
     * Instances. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithRequireHibernateSupport(bool value) { SetRequireHibernateSupport(value); return *this;}


    /**
     * <p> The price protection threshold for Spot Instances. This is the maximum
     * you’ll pay for a Spot Instance, expressed as a percentage above the least
     * expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 selects instance types with your attributes, it
     * excludes instance types priced above your threshold. </p> <p>The parameter
     * accepts an integer, which Amazon EC2 interprets as a percentage.</p> <p>A high
     * value, such as <code>999999</code>, turns off price protection.</p>
     */
    inline int GetSpotMaxPricePercentageOverLowestPrice() const{ return m_spotMaxPricePercentageOverLowestPrice; }

    /**
     * <p> The price protection threshold for Spot Instances. This is the maximum
     * you’ll pay for a Spot Instance, expressed as a percentage above the least
     * expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 selects instance types with your attributes, it
     * excludes instance types priced above your threshold. </p> <p>The parameter
     * accepts an integer, which Amazon EC2 interprets as a percentage.</p> <p>A high
     * value, such as <code>999999</code>, turns off price protection.</p>
     */
    inline bool SpotMaxPricePercentageOverLowestPriceHasBeenSet() const { return m_spotMaxPricePercentageOverLowestPriceHasBeenSet; }

    /**
     * <p> The price protection threshold for Spot Instances. This is the maximum
     * you’ll pay for a Spot Instance, expressed as a percentage above the least
     * expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 selects instance types with your attributes, it
     * excludes instance types priced above your threshold. </p> <p>The parameter
     * accepts an integer, which Amazon EC2 interprets as a percentage.</p> <p>A high
     * value, such as <code>999999</code>, turns off price protection.</p>
     */
    inline void SetSpotMaxPricePercentageOverLowestPrice(int value) { m_spotMaxPricePercentageOverLowestPriceHasBeenSet = true; m_spotMaxPricePercentageOverLowestPrice = value; }

    /**
     * <p> The price protection threshold for Spot Instances. This is the maximum
     * you’ll pay for a Spot Instance, expressed as a percentage above the least
     * expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 selects instance types with your attributes, it
     * excludes instance types priced above your threshold. </p> <p>The parameter
     * accepts an integer, which Amazon EC2 interprets as a percentage.</p> <p>A high
     * value, such as <code>999999</code>, turns off price protection.</p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithSpotMaxPricePercentageOverLowestPrice(int value) { SetSpotMaxPricePercentageOverLowestPrice(value); return *this;}


    /**
     * <p> The minimum and maximum amount of total local storage, in GB. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails& GetTotalLocalStorageGB() const{ return m_totalLocalStorageGB; }

    /**
     * <p> The minimum and maximum amount of total local storage, in GB. </p>
     */
    inline bool TotalLocalStorageGBHasBeenSet() const { return m_totalLocalStorageGBHasBeenSet; }

    /**
     * <p> The minimum and maximum amount of total local storage, in GB. </p>
     */
    inline void SetTotalLocalStorageGB(const AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails& value) { m_totalLocalStorageGBHasBeenSet = true; m_totalLocalStorageGB = value; }

    /**
     * <p> The minimum and maximum amount of total local storage, in GB. </p>
     */
    inline void SetTotalLocalStorageGB(AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails&& value) { m_totalLocalStorageGBHasBeenSet = true; m_totalLocalStorageGB = std::move(value); }

    /**
     * <p> The minimum and maximum amount of total local storage, in GB. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithTotalLocalStorageGB(const AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails& value) { SetTotalLocalStorageGB(value); return *this;}

    /**
     * <p> The minimum and maximum amount of total local storage, in GB. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithTotalLocalStorageGB(AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails&& value) { SetTotalLocalStorageGB(std::move(value)); return *this;}


    /**
     * <p> The minimum and maximum number of vCPUs. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceRequirementsVCpuCountDetails& GetVCpuCount() const{ return m_vCpuCount; }

    /**
     * <p> The minimum and maximum number of vCPUs. </p>
     */
    inline bool VCpuCountHasBeenSet() const { return m_vCpuCountHasBeenSet; }

    /**
     * <p> The minimum and maximum number of vCPUs. </p>
     */
    inline void SetVCpuCount(const AwsEc2LaunchTemplateDataInstanceRequirementsVCpuCountDetails& value) { m_vCpuCountHasBeenSet = true; m_vCpuCount = value; }

    /**
     * <p> The minimum and maximum number of vCPUs. </p>
     */
    inline void SetVCpuCount(AwsEc2LaunchTemplateDataInstanceRequirementsVCpuCountDetails&& value) { m_vCpuCountHasBeenSet = true; m_vCpuCount = std::move(value); }

    /**
     * <p> The minimum and maximum number of vCPUs. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithVCpuCount(const AwsEc2LaunchTemplateDataInstanceRequirementsVCpuCountDetails& value) { SetVCpuCount(value); return *this;}

    /**
     * <p> The minimum and maximum number of vCPUs. </p>
     */
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithVCpuCount(AwsEc2LaunchTemplateDataInstanceRequirementsVCpuCountDetails&& value) { SetVCpuCount(std::move(value)); return *this;}

  private:

    AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorCountDetails m_acceleratorCount;
    bool m_acceleratorCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_acceleratorManufacturers;
    bool m_acceleratorManufacturersHasBeenSet = false;

    Aws::Vector<Aws::String> m_acceleratorNames;
    bool m_acceleratorNamesHasBeenSet = false;

    AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails m_acceleratorTotalMemoryMiB;
    bool m_acceleratorTotalMemoryMiBHasBeenSet = false;

    Aws::Vector<Aws::String> m_acceleratorTypes;
    bool m_acceleratorTypesHasBeenSet = false;

    Aws::String m_bareMetal;
    bool m_bareMetalHasBeenSet = false;

    AwsEc2LaunchTemplateDataInstanceRequirementsBaselineEbsBandwidthMbpsDetails m_baselineEbsBandwidthMbps;
    bool m_baselineEbsBandwidthMbpsHasBeenSet = false;

    Aws::String m_burstablePerformance;
    bool m_burstablePerformanceHasBeenSet = false;

    Aws::Vector<Aws::String> m_cpuManufacturers;
    bool m_cpuManufacturersHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludedInstanceTypes;
    bool m_excludedInstanceTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceGenerations;
    bool m_instanceGenerationsHasBeenSet = false;

    Aws::String m_localStorage;
    bool m_localStorageHasBeenSet = false;

    Aws::Vector<Aws::String> m_localStorageTypes;
    bool m_localStorageTypesHasBeenSet = false;

    AwsEc2LaunchTemplateDataInstanceRequirementsMemoryGiBPerVCpuDetails m_memoryGiBPerVCpu;
    bool m_memoryGiBPerVCpuHasBeenSet = false;

    AwsEc2LaunchTemplateDataInstanceRequirementsMemoryMiBDetails m_memoryMiB;
    bool m_memoryMiBHasBeenSet = false;

    AwsEc2LaunchTemplateDataInstanceRequirementsNetworkInterfaceCountDetails m_networkInterfaceCount;
    bool m_networkInterfaceCountHasBeenSet = false;

    int m_onDemandMaxPricePercentageOverLowestPrice;
    bool m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet = false;

    bool m_requireHibernateSupport;
    bool m_requireHibernateSupportHasBeenSet = false;

    int m_spotMaxPricePercentageOverLowestPrice;
    bool m_spotMaxPricePercentageOverLowestPriceHasBeenSet = false;

    AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails m_totalLocalStorageGB;
    bool m_totalLocalStorageGBHasBeenSet = false;

    AwsEc2LaunchTemplateDataInstanceRequirementsVCpuCountDetails m_vCpuCount;
    bool m_vCpuCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
