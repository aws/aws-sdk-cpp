/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sustainability/Sustainability_EXPORTS.h>
#include <aws/sustainability/model/Dimension.h>
#include <aws/sustainability/model/TimePeriod.h>
#include <aws/sustainability/model/WaterAllocation.h>
#include <aws/sustainability/model/WaterAllocationType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Sustainability {
namespace Model {

/**
 * <p>Contains estimated water allocation data for a specific time period and
 * dimension grouping.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sustainability-2018-05-10/EstimatedWaterAllocation">AWS
 * API Reference</a></p>
 */
class EstimatedWaterAllocation {
 public:
  AWS_SUSTAINABILITY_API EstimatedWaterAllocation() = default;
  AWS_SUSTAINABILITY_API EstimatedWaterAllocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUSTAINABILITY_API EstimatedWaterAllocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUSTAINABILITY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reporting period for water allocation values.</p>
   */
  inline const TimePeriod& GetTimePeriod() const { return m_timePeriod; }
  inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
  template <typename TimePeriodT = TimePeriod>
  void SetTimePeriod(TimePeriodT&& value) {
    m_timePeriodHasBeenSet = true;
    m_timePeriod = std::forward<TimePeriodT>(value);
  }
  template <typename TimePeriodT = TimePeriod>
  EstimatedWaterAllocation& WithTimePeriod(TimePeriodT&& value) {
    SetTimePeriod(std::forward<TimePeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dimensions used to group water allocation values.</p>
   */
  inline const Aws::Map<Dimension, Aws::String>& GetDimensionsValues() const { return m_dimensionsValues; }
  inline bool DimensionsValuesHasBeenSet() const { return m_dimensionsValuesHasBeenSet; }
  template <typename DimensionsValuesT = Aws::Map<Dimension, Aws::String>>
  void SetDimensionsValues(DimensionsValuesT&& value) {
    m_dimensionsValuesHasBeenSet = true;
    m_dimensionsValues = std::forward<DimensionsValuesT>(value);
  }
  template <typename DimensionsValuesT = Aws::Map<Dimension, Aws::String>>
  EstimatedWaterAllocation& WithDimensionsValues(DimensionsValuesT&& value) {
    SetDimensionsValues(std::forward<DimensionsValuesT>(value));
    return *this;
  }
  inline EstimatedWaterAllocation& AddDimensionsValues(Dimension key, Aws::String value) {
    m_dimensionsValuesHasBeenSet = true;
    m_dimensionsValues.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The semantic version-formatted string that indicates the methodology version
   * used to calculate the water allocation values. </p>  <p> The AWS
   * Sustainability service reflects the most recent model version for every month.
   * You will not see two entries for the same month with different
   * <code>ModelVersion</code> values. </p>
   */
  inline const Aws::String& GetModelVersion() const { return m_modelVersion; }
  inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
  template <typename ModelVersionT = Aws::String>
  void SetModelVersion(ModelVersionT&& value) {
    m_modelVersionHasBeenSet = true;
    m_modelVersion = std::forward<ModelVersionT>(value);
  }
  template <typename ModelVersionT = Aws::String>
  EstimatedWaterAllocation& WithModelVersion(ModelVersionT&& value) {
    SetModelVersion(std::forward<ModelVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The allocation values for the requested water allocation types.</p>
   */
  inline const Aws::Map<WaterAllocationType, WaterAllocation>& GetAllocationValues() const { return m_allocationValues; }
  inline bool AllocationValuesHasBeenSet() const { return m_allocationValuesHasBeenSet; }
  template <typename AllocationValuesT = Aws::Map<WaterAllocationType, WaterAllocation>>
  void SetAllocationValues(AllocationValuesT&& value) {
    m_allocationValuesHasBeenSet = true;
    m_allocationValues = std::forward<AllocationValuesT>(value);
  }
  template <typename AllocationValuesT = Aws::Map<WaterAllocationType, WaterAllocation>>
  EstimatedWaterAllocation& WithAllocationValues(AllocationValuesT&& value) {
    SetAllocationValues(std::forward<AllocationValuesT>(value));
    return *this;
  }
  inline EstimatedWaterAllocation& AddAllocationValues(WaterAllocationType key, WaterAllocation value) {
    m_allocationValuesHasBeenSet = true;
    m_allocationValues.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  TimePeriod m_timePeriod;

  Aws::Map<Dimension, Aws::String> m_dimensionsValues;

  Aws::String m_modelVersion;

  Aws::Map<WaterAllocationType, WaterAllocation> m_allocationValues;
  bool m_timePeriodHasBeenSet = false;
  bool m_dimensionsValuesHasBeenSet = false;
  bool m_modelVersionHasBeenSet = false;
  bool m_allocationValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
