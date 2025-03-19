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
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsDetails() = default;
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceRequirementsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) on an instance. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorCountDetails& GetAcceleratorCount() const { return m_acceleratorCount; }
    inline bool AcceleratorCountHasBeenSet() const { return m_acceleratorCountHasBeenSet; }
    template<typename AcceleratorCountT = AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorCountDetails>
    void SetAcceleratorCount(AcceleratorCountT&& value) { m_acceleratorCountHasBeenSet = true; m_acceleratorCount = std::forward<AcceleratorCountT>(value); }
    template<typename AcceleratorCountT = AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorCountDetails>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithAcceleratorCount(AcceleratorCountT&& value) { SetAcceleratorCount(std::forward<AcceleratorCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAcceleratorManufacturers() const { return m_acceleratorManufacturers; }
    inline bool AcceleratorManufacturersHasBeenSet() const { return m_acceleratorManufacturersHasBeenSet; }
    template<typename AcceleratorManufacturersT = Aws::Vector<Aws::String>>
    void SetAcceleratorManufacturers(AcceleratorManufacturersT&& value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers = std::forward<AcceleratorManufacturersT>(value); }
    template<typename AcceleratorManufacturersT = Aws::Vector<Aws::String>>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithAcceleratorManufacturers(AcceleratorManufacturersT&& value) { SetAcceleratorManufacturers(std::forward<AcceleratorManufacturersT>(value)); return *this;}
    template<typename AcceleratorManufacturersT = Aws::String>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddAcceleratorManufacturers(AcceleratorManufacturersT&& value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers.emplace_back(std::forward<AcceleratorManufacturersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The accelerators that must be on the instance type. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAcceleratorNames() const { return m_acceleratorNames; }
    inline bool AcceleratorNamesHasBeenSet() const { return m_acceleratorNamesHasBeenSet; }
    template<typename AcceleratorNamesT = Aws::Vector<Aws::String>>
    void SetAcceleratorNames(AcceleratorNamesT&& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames = std::forward<AcceleratorNamesT>(value); }
    template<typename AcceleratorNamesT = Aws::Vector<Aws::String>>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithAcceleratorNames(AcceleratorNamesT&& value) { SetAcceleratorNames(std::forward<AcceleratorNamesT>(value)); return *this;}
    template<typename AcceleratorNamesT = Aws::String>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddAcceleratorNames(AcceleratorNamesT&& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames.emplace_back(std::forward<AcceleratorNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The minimum and maximum amount of total accelerator memory, in MiB. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails& GetAcceleratorTotalMemoryMiB() const { return m_acceleratorTotalMemoryMiB; }
    inline bool AcceleratorTotalMemoryMiBHasBeenSet() const { return m_acceleratorTotalMemoryMiBHasBeenSet; }
    template<typename AcceleratorTotalMemoryMiBT = AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails>
    void SetAcceleratorTotalMemoryMiB(AcceleratorTotalMemoryMiBT&& value) { m_acceleratorTotalMemoryMiBHasBeenSet = true; m_acceleratorTotalMemoryMiB = std::forward<AcceleratorTotalMemoryMiBT>(value); }
    template<typename AcceleratorTotalMemoryMiBT = AwsEc2LaunchTemplateDataInstanceRequirementsAcceleratorTotalMemoryMiBDetails>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithAcceleratorTotalMemoryMiB(AcceleratorTotalMemoryMiBT&& value) { SetAcceleratorTotalMemoryMiB(std::forward<AcceleratorTotalMemoryMiBT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The accelerator types that must be on the instance type. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAcceleratorTypes() const { return m_acceleratorTypes; }
    inline bool AcceleratorTypesHasBeenSet() const { return m_acceleratorTypesHasBeenSet; }
    template<typename AcceleratorTypesT = Aws::Vector<Aws::String>>
    void SetAcceleratorTypes(AcceleratorTypesT&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = std::forward<AcceleratorTypesT>(value); }
    template<typename AcceleratorTypesT = Aws::Vector<Aws::String>>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithAcceleratorTypes(AcceleratorTypesT&& value) { SetAcceleratorTypes(std::forward<AcceleratorTypesT>(value)); return *this;}
    template<typename AcceleratorTypesT = Aws::String>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddAcceleratorTypes(AcceleratorTypesT&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.emplace_back(std::forward<AcceleratorTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether bare metal instance types must be included, excluded, or
     * required. </p>
     */
    inline const Aws::String& GetBareMetal() const { return m_bareMetal; }
    inline bool BareMetalHasBeenSet() const { return m_bareMetalHasBeenSet; }
    template<typename BareMetalT = Aws::String>
    void SetBareMetal(BareMetalT&& value) { m_bareMetalHasBeenSet = true; m_bareMetal = std::forward<BareMetalT>(value); }
    template<typename BareMetalT = Aws::String>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithBareMetal(BareMetalT&& value) { SetBareMetal(std::forward<BareMetalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The minimum and maximum baseline bandwidth to Amazon EBS, in Mbps. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS optimized instances</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceRequirementsBaselineEbsBandwidthMbpsDetails& GetBaselineEbsBandwidthMbps() const { return m_baselineEbsBandwidthMbps; }
    inline bool BaselineEbsBandwidthMbpsHasBeenSet() const { return m_baselineEbsBandwidthMbpsHasBeenSet; }
    template<typename BaselineEbsBandwidthMbpsT = AwsEc2LaunchTemplateDataInstanceRequirementsBaselineEbsBandwidthMbpsDetails>
    void SetBaselineEbsBandwidthMbps(BaselineEbsBandwidthMbpsT&& value) { m_baselineEbsBandwidthMbpsHasBeenSet = true; m_baselineEbsBandwidthMbps = std::forward<BaselineEbsBandwidthMbpsT>(value); }
    template<typename BaselineEbsBandwidthMbpsT = AwsEc2LaunchTemplateDataInstanceRequirementsBaselineEbsBandwidthMbpsDetails>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithBaselineEbsBandwidthMbps(BaselineEbsBandwidthMbpsT&& value) { SetBaselineEbsBandwidthMbps(std::forward<BaselineEbsBandwidthMbpsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether burstable performance T instance types are included,
     * excluded, or required. For more information, <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline const Aws::String& GetBurstablePerformance() const { return m_burstablePerformance; }
    inline bool BurstablePerformanceHasBeenSet() const { return m_burstablePerformanceHasBeenSet; }
    template<typename BurstablePerformanceT = Aws::String>
    void SetBurstablePerformance(BurstablePerformanceT&& value) { m_burstablePerformanceHasBeenSet = true; m_burstablePerformance = std::forward<BurstablePerformanceT>(value); }
    template<typename BurstablePerformanceT = Aws::String>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithBurstablePerformance(BurstablePerformanceT&& value) { SetBurstablePerformance(std::forward<BurstablePerformanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The CPU manufacturers to include. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCpuManufacturers() const { return m_cpuManufacturers; }
    inline bool CpuManufacturersHasBeenSet() const { return m_cpuManufacturersHasBeenSet; }
    template<typename CpuManufacturersT = Aws::Vector<Aws::String>>
    void SetCpuManufacturers(CpuManufacturersT&& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers = std::forward<CpuManufacturersT>(value); }
    template<typename CpuManufacturersT = Aws::Vector<Aws::String>>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithCpuManufacturers(CpuManufacturersT&& value) { SetCpuManufacturers(std::forward<CpuManufacturersT>(value)); return *this;}
    template<typename CpuManufacturersT = Aws::String>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddCpuManufacturers(CpuManufacturersT&& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers.emplace_back(std::forward<CpuManufacturersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The instance types to exclude. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedInstanceTypes() const { return m_excludedInstanceTypes; }
    inline bool ExcludedInstanceTypesHasBeenSet() const { return m_excludedInstanceTypesHasBeenSet; }
    template<typename ExcludedInstanceTypesT = Aws::Vector<Aws::String>>
    void SetExcludedInstanceTypes(ExcludedInstanceTypesT&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes = std::forward<ExcludedInstanceTypesT>(value); }
    template<typename ExcludedInstanceTypesT = Aws::Vector<Aws::String>>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithExcludedInstanceTypes(ExcludedInstanceTypesT&& value) { SetExcludedInstanceTypes(std::forward<ExcludedInstanceTypesT>(value)); return *this;}
    template<typename ExcludedInstanceTypesT = Aws::String>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddExcludedInstanceTypes(ExcludedInstanceTypesT&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.emplace_back(std::forward<ExcludedInstanceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Indicates whether current or previous generation instance types are
     * included. </p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceGenerations() const { return m_instanceGenerations; }
    inline bool InstanceGenerationsHasBeenSet() const { return m_instanceGenerationsHasBeenSet; }
    template<typename InstanceGenerationsT = Aws::Vector<Aws::String>>
    void SetInstanceGenerations(InstanceGenerationsT&& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations = std::forward<InstanceGenerationsT>(value); }
    template<typename InstanceGenerationsT = Aws::Vector<Aws::String>>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithInstanceGenerations(InstanceGenerationsT&& value) { SetInstanceGenerations(std::forward<InstanceGenerationsT>(value)); return *this;}
    template<typename InstanceGenerationsT = Aws::String>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddInstanceGenerations(InstanceGenerationsT&& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations.emplace_back(std::forward<InstanceGenerationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide</i>. </p>
     */
    inline const Aws::String& GetLocalStorage() const { return m_localStorage; }
    inline bool LocalStorageHasBeenSet() const { return m_localStorageHasBeenSet; }
    template<typename LocalStorageT = Aws::String>
    void SetLocalStorage(LocalStorageT&& value) { m_localStorageHasBeenSet = true; m_localStorage = std::forward<LocalStorageT>(value); }
    template<typename LocalStorageT = Aws::String>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithLocalStorage(LocalStorageT&& value) { SetLocalStorage(std::forward<LocalStorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of local storage that is required. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLocalStorageTypes() const { return m_localStorageTypes; }
    inline bool LocalStorageTypesHasBeenSet() const { return m_localStorageTypesHasBeenSet; }
    template<typename LocalStorageTypesT = Aws::Vector<Aws::String>>
    void SetLocalStorageTypes(LocalStorageTypesT&& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes = std::forward<LocalStorageTypesT>(value); }
    template<typename LocalStorageTypesT = Aws::Vector<Aws::String>>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithLocalStorageTypes(LocalStorageTypesT&& value) { SetLocalStorageTypes(std::forward<LocalStorageTypesT>(value)); return *this;}
    template<typename LocalStorageTypesT = Aws::String>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AddLocalStorageTypes(LocalStorageTypesT&& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes.emplace_back(std::forward<LocalStorageTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The minimum and maximum amount of memory per vCPU, in GiB. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceRequirementsMemoryGiBPerVCpuDetails& GetMemoryGiBPerVCpu() const { return m_memoryGiBPerVCpu; }
    inline bool MemoryGiBPerVCpuHasBeenSet() const { return m_memoryGiBPerVCpuHasBeenSet; }
    template<typename MemoryGiBPerVCpuT = AwsEc2LaunchTemplateDataInstanceRequirementsMemoryGiBPerVCpuDetails>
    void SetMemoryGiBPerVCpu(MemoryGiBPerVCpuT&& value) { m_memoryGiBPerVCpuHasBeenSet = true; m_memoryGiBPerVCpu = std::forward<MemoryGiBPerVCpuT>(value); }
    template<typename MemoryGiBPerVCpuT = AwsEc2LaunchTemplateDataInstanceRequirementsMemoryGiBPerVCpuDetails>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithMemoryGiBPerVCpu(MemoryGiBPerVCpuT&& value) { SetMemoryGiBPerVCpu(std::forward<MemoryGiBPerVCpuT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The minimum and maximum amount of memory, in MiB. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceRequirementsMemoryMiBDetails& GetMemoryMiB() const { return m_memoryMiB; }
    inline bool MemoryMiBHasBeenSet() const { return m_memoryMiBHasBeenSet; }
    template<typename MemoryMiBT = AwsEc2LaunchTemplateDataInstanceRequirementsMemoryMiBDetails>
    void SetMemoryMiB(MemoryMiBT&& value) { m_memoryMiBHasBeenSet = true; m_memoryMiB = std::forward<MemoryMiBT>(value); }
    template<typename MemoryMiBT = AwsEc2LaunchTemplateDataInstanceRequirementsMemoryMiBDetails>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithMemoryMiB(MemoryMiBT&& value) { SetMemoryMiB(std::forward<MemoryMiBT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The minimum and maximum number of network interfaces. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceRequirementsNetworkInterfaceCountDetails& GetNetworkInterfaceCount() const { return m_networkInterfaceCount; }
    inline bool NetworkInterfaceCountHasBeenSet() const { return m_networkInterfaceCountHasBeenSet; }
    template<typename NetworkInterfaceCountT = AwsEc2LaunchTemplateDataInstanceRequirementsNetworkInterfaceCountDetails>
    void SetNetworkInterfaceCount(NetworkInterfaceCountT&& value) { m_networkInterfaceCountHasBeenSet = true; m_networkInterfaceCount = std::forward<NetworkInterfaceCountT>(value); }
    template<typename NetworkInterfaceCountT = AwsEc2LaunchTemplateDataInstanceRequirementsNetworkInterfaceCountDetails>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithNetworkInterfaceCount(NetworkInterfaceCountT&& value) { SetNetworkInterfaceCount(std::forward<NetworkInterfaceCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The price protection threshold for On-Demand Instances. This is the maximum
     * you'll pay for an On-Demand Instance, expressed as a percentage above the least
     * expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 selects instance types with your attributes, it
     * excludes instance types priced above your threshold.</p> <p>The parameter
     * accepts an integer, which Amazon EC2 interprets as a percentage.</p> <p>A high
     * value, such as <code>999999</code>, turns off price protection.</p>
     */
    inline int GetOnDemandMaxPricePercentageOverLowestPrice() const { return m_onDemandMaxPricePercentageOverLowestPrice; }
    inline bool OnDemandMaxPricePercentageOverLowestPriceHasBeenSet() const { return m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet; }
    inline void SetOnDemandMaxPricePercentageOverLowestPrice(int value) { m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet = true; m_onDemandMaxPricePercentageOverLowestPrice = value; }
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithOnDemandMaxPricePercentageOverLowestPrice(int value) { SetOnDemandMaxPricePercentageOverLowestPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether instance types must support hibernation for On-Demand
     * Instances. </p>
     */
    inline bool GetRequireHibernateSupport() const { return m_requireHibernateSupport; }
    inline bool RequireHibernateSupportHasBeenSet() const { return m_requireHibernateSupportHasBeenSet; }
    inline void SetRequireHibernateSupport(bool value) { m_requireHibernateSupportHasBeenSet = true; m_requireHibernateSupport = value; }
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithRequireHibernateSupport(bool value) { SetRequireHibernateSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The price protection threshold for Spot Instances. This is the maximum
     * you'll pay for a Spot Instance, expressed as a percentage above the least
     * expensive current generation M, C, or R instance type with your specified
     * attributes. When Amazon EC2 selects instance types with your attributes, it
     * excludes instance types priced above your threshold. </p> <p>The parameter
     * accepts an integer, which Amazon EC2 interprets as a percentage.</p> <p>A high
     * value, such as <code>999999</code>, turns off price protection.</p>
     */
    inline int GetSpotMaxPricePercentageOverLowestPrice() const { return m_spotMaxPricePercentageOverLowestPrice; }
    inline bool SpotMaxPricePercentageOverLowestPriceHasBeenSet() const { return m_spotMaxPricePercentageOverLowestPriceHasBeenSet; }
    inline void SetSpotMaxPricePercentageOverLowestPrice(int value) { m_spotMaxPricePercentageOverLowestPriceHasBeenSet = true; m_spotMaxPricePercentageOverLowestPrice = value; }
    inline AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithSpotMaxPricePercentageOverLowestPrice(int value) { SetSpotMaxPricePercentageOverLowestPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The minimum and maximum amount of total local storage, in GB. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails& GetTotalLocalStorageGB() const { return m_totalLocalStorageGB; }
    inline bool TotalLocalStorageGBHasBeenSet() const { return m_totalLocalStorageGBHasBeenSet; }
    template<typename TotalLocalStorageGBT = AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails>
    void SetTotalLocalStorageGB(TotalLocalStorageGBT&& value) { m_totalLocalStorageGBHasBeenSet = true; m_totalLocalStorageGB = std::forward<TotalLocalStorageGBT>(value); }
    template<typename TotalLocalStorageGBT = AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithTotalLocalStorageGB(TotalLocalStorageGBT&& value) { SetTotalLocalStorageGB(std::forward<TotalLocalStorageGBT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The minimum and maximum number of vCPUs. </p>
     */
    inline const AwsEc2LaunchTemplateDataInstanceRequirementsVCpuCountDetails& GetVCpuCount() const { return m_vCpuCount; }
    inline bool VCpuCountHasBeenSet() const { return m_vCpuCountHasBeenSet; }
    template<typename VCpuCountT = AwsEc2LaunchTemplateDataInstanceRequirementsVCpuCountDetails>
    void SetVCpuCount(VCpuCountT&& value) { m_vCpuCountHasBeenSet = true; m_vCpuCount = std::forward<VCpuCountT>(value); }
    template<typename VCpuCountT = AwsEc2LaunchTemplateDataInstanceRequirementsVCpuCountDetails>
    AwsEc2LaunchTemplateDataInstanceRequirementsDetails& WithVCpuCount(VCpuCountT&& value) { SetVCpuCount(std::forward<VCpuCountT>(value)); return *this;}
    ///@}
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

    int m_onDemandMaxPricePercentageOverLowestPrice{0};
    bool m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet = false;

    bool m_requireHibernateSupport{false};
    bool m_requireHibernateSupportHasBeenSet = false;

    int m_spotMaxPricePercentageOverLowestPrice{0};
    bool m_spotMaxPricePercentageOverLowestPriceHasBeenSet = false;

    AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails m_totalLocalStorageGB;
    bool m_totalLocalStorageGBHasBeenSet = false;

    AwsEc2LaunchTemplateDataInstanceRequirementsVCpuCountDetails m_vCpuCount;
    bool m_vCpuCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
