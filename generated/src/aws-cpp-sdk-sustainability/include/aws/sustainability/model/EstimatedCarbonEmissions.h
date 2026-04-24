/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sustainability/Sustainability_EXPORTS.h>
#include <aws/sustainability/model/Dimension.h>
#include <aws/sustainability/model/Emissions.h>
#include <aws/sustainability/model/EmissionsType.h>
#include <aws/sustainability/model/TimePeriod.h>

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
 * <p>Contains estimated carbon emissions data for a specific time period and
 * dimension grouping.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sustainability-2018-05-10/EstimatedCarbonEmissions">AWS
 * API Reference</a></p>
 */
class EstimatedCarbonEmissions {
 public:
  AWS_SUSTAINABILITY_API EstimatedCarbonEmissions() = default;
  AWS_SUSTAINABILITY_API EstimatedCarbonEmissions(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUSTAINABILITY_API EstimatedCarbonEmissions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SUSTAINABILITY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reporting period for emission values.</p>
   */
  inline const TimePeriod& GetTimePeriod() const { return m_timePeriod; }
  inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
  template <typename TimePeriodT = TimePeriod>
  void SetTimePeriod(TimePeriodT&& value) {
    m_timePeriodHasBeenSet = true;
    m_timePeriod = std::forward<TimePeriodT>(value);
  }
  template <typename TimePeriodT = TimePeriod>
  EstimatedCarbonEmissions& WithTimePeriod(TimePeriodT&& value) {
    SetTimePeriod(std::forward<TimePeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dimensions used to group emissions values.</p>
   */
  inline const Aws::Map<Dimension, Aws::String>& GetDimensionsValues() const { return m_dimensionsValues; }
  inline bool DimensionsValuesHasBeenSet() const { return m_dimensionsValuesHasBeenSet; }
  template <typename DimensionsValuesT = Aws::Map<Dimension, Aws::String>>
  void SetDimensionsValues(DimensionsValuesT&& value) {
    m_dimensionsValuesHasBeenSet = true;
    m_dimensionsValues = std::forward<DimensionsValuesT>(value);
  }
  template <typename DimensionsValuesT = Aws::Map<Dimension, Aws::String>>
  EstimatedCarbonEmissions& WithDimensionsValues(DimensionsValuesT&& value) {
    SetDimensionsValues(std::forward<DimensionsValuesT>(value));
    return *this;
  }
  inline EstimatedCarbonEmissions& AddDimensionsValues(Dimension key, Aws::String value) {
    m_dimensionsValuesHasBeenSet = true;
    m_dimensionsValues.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The semantic version-formatted string that indicates the methodology version
   * used to calculate the emission values. </p>  <p> The AWS Sustainability
   * service reflects the most recent model version for every month. You will not see
   * two entries for the same month with different <code>ModelVersion</code> values.
   * To track the evolution of the methodology and compare emission values from
   * previous versions, we recommend creating a <a
   * href="https://docs.aws.amazon.com/cur/latest/userguide/what-is-data-exports.html">Data
   * Export</a>. </p>
   */
  inline const Aws::String& GetModelVersion() const { return m_modelVersion; }
  inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
  template <typename ModelVersionT = Aws::String>
  void SetModelVersion(ModelVersionT&& value) {
    m_modelVersionHasBeenSet = true;
    m_modelVersion = std::forward<ModelVersionT>(value);
  }
  template <typename ModelVersionT = Aws::String>
  EstimatedCarbonEmissions& WithModelVersion(ModelVersionT&& value) {
    SetModelVersion(std::forward<ModelVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The emissions values for the requested emissions types.</p>
   */
  inline const Aws::Map<EmissionsType, Emissions>& GetEmissionsValues() const { return m_emissionsValues; }
  inline bool EmissionsValuesHasBeenSet() const { return m_emissionsValuesHasBeenSet; }
  template <typename EmissionsValuesT = Aws::Map<EmissionsType, Emissions>>
  void SetEmissionsValues(EmissionsValuesT&& value) {
    m_emissionsValuesHasBeenSet = true;
    m_emissionsValues = std::forward<EmissionsValuesT>(value);
  }
  template <typename EmissionsValuesT = Aws::Map<EmissionsType, Emissions>>
  EstimatedCarbonEmissions& WithEmissionsValues(EmissionsValuesT&& value) {
    SetEmissionsValues(std::forward<EmissionsValuesT>(value));
    return *this;
  }
  inline EstimatedCarbonEmissions& AddEmissionsValues(EmissionsType key, Emissions value) {
    m_emissionsValuesHasBeenSet = true;
    m_emissionsValues.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  TimePeriod m_timePeriod;

  Aws::Map<Dimension, Aws::String> m_dimensionsValues;

  Aws::String m_modelVersion;

  Aws::Map<EmissionsType, Emissions> m_emissionsValues;
  bool m_timePeriodHasBeenSet = false;
  bool m_dimensionsValuesHasBeenSet = false;
  bool m_modelVersionHasBeenSet = false;
  bool m_emissionsValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
