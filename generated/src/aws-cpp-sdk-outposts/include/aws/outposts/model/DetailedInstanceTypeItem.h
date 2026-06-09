/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/FormFactorConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Outposts {
namespace Model {

/**
 * <p>Information about an instance type that can be ordered for an Outpost,
 * including hardware specifications and supported form factors.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/DetailedInstanceTypeItem">AWS
 * API Reference</a></p>
 */
class DetailedInstanceTypeItem {
 public:
  AWS_OUTPOSTS_API DetailedInstanceTypeItem() = default;
  AWS_OUTPOSTS_API DetailedInstanceTypeItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API DetailedInstanceTypeItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The instance type.</p>
   */
  inline const Aws::String& GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  template <typename InstanceTypeT = Aws::String>
  void SetInstanceType(InstanceTypeT&& value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = std::forward<InstanceTypeT>(value);
  }
  template <typename InstanceTypeT = Aws::String>
  DetailedInstanceTypeItem& WithInstanceType(InstanceTypeT&& value) {
    SetInstanceType(std::forward<InstanceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of default VCPUs in the instance type.</p>
   */
  inline int GetVCPUs() const { return m_vCPUs; }
  inline bool VCPUsHasBeenSet() const { return m_vCPUsHasBeenSet; }
  inline void SetVCPUs(int value) {
    m_vCPUsHasBeenSet = true;
    m_vCPUs = value;
  }
  inline DetailedInstanceTypeItem& WithVCPUs(int value) {
    SetVCPUs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The memory size of the instance type, in MiB.</p>
   */
  inline int GetMemoryInMib() const { return m_memoryInMib; }
  inline bool MemoryInMibHasBeenSet() const { return m_memoryInMibHasBeenSet; }
  inline void SetMemoryInMib(int value) {
    m_memoryInMibHasBeenSet = true;
    m_memoryInMib = value;
  }
  inline DetailedInstanceTypeItem& WithMemoryInMib(int value) {
    SetMemoryInMib(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network performance of the instance type.</p>
   */
  inline const Aws::String& GetNetworkPerformance() const { return m_networkPerformance; }
  inline bool NetworkPerformanceHasBeenSet() const { return m_networkPerformanceHasBeenSet; }
  template <typename NetworkPerformanceT = Aws::String>
  void SetNetworkPerformance(NetworkPerformanceT&& value) {
    m_networkPerformanceHasBeenSet = true;
    m_networkPerformance = std::forward<NetworkPerformanceT>(value);
  }
  template <typename NetworkPerformanceT = Aws::String>
  DetailedInstanceTypeItem& WithNetworkPerformance(NetworkPerformanceT&& value) {
    SetNetworkPerformance(std::forward<NetworkPerformanceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The supported form factor and Outpost generation configurations for the
   * instance type.</p>
   */
  inline const Aws::Vector<FormFactorConfig>& GetFormFactorConfigs() const { return m_formFactorConfigs; }
  inline bool FormFactorConfigsHasBeenSet() const { return m_formFactorConfigsHasBeenSet; }
  template <typename FormFactorConfigsT = Aws::Vector<FormFactorConfig>>
  void SetFormFactorConfigs(FormFactorConfigsT&& value) {
    m_formFactorConfigsHasBeenSet = true;
    m_formFactorConfigs = std::forward<FormFactorConfigsT>(value);
  }
  template <typename FormFactorConfigsT = Aws::Vector<FormFactorConfig>>
  DetailedInstanceTypeItem& WithFormFactorConfigs(FormFactorConfigsT&& value) {
    SetFormFactorConfigs(std::forward<FormFactorConfigsT>(value));
    return *this;
  }
  template <typename FormFactorConfigsT = FormFactorConfig>
  DetailedInstanceTypeItem& AddFormFactorConfigs(FormFactorConfigsT&& value) {
    m_formFactorConfigsHasBeenSet = true;
    m_formFactorConfigs.emplace_back(std::forward<FormFactorConfigsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceType;

  int m_vCPUs{0};

  int m_memoryInMib{0};

  Aws::String m_networkPerformance;

  Aws::Vector<FormFactorConfig> m_formFactorConfigs;
  bool m_instanceTypeHasBeenSet = false;
  bool m_vCPUsHasBeenSet = false;
  bool m_memoryInMibHasBeenSet = false;
  bool m_networkPerformanceHasBeenSet = false;
  bool m_formFactorConfigsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
