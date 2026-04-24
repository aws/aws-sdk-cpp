/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/LineChartMarkerStyleSettings.h>
#include <aws/quicksight/model/LineInterpolation.h>
#include <aws/quicksight/model/SparklineAxisBehavior.h>
#include <aws/quicksight/model/SparklineVisualType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The options for sparklines in a table.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SparklinesOptions">AWS
 * API Reference</a></p>
 */
class SparklinesOptions {
 public:
  AWS_QUICKSIGHT_API SparklinesOptions() = default;
  AWS_QUICKSIGHT_API SparklinesOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SparklinesOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The field ID of the value column that the sparkline is applied to.</p>
   */
  inline const Aws::String& GetFieldId() const { return m_fieldId; }
  inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
  template <typename FieldIdT = Aws::String>
  void SetFieldId(FieldIdT&& value) {
    m_fieldIdHasBeenSet = true;
    m_fieldId = std::forward<FieldIdT>(value);
  }
  template <typename FieldIdT = Aws::String>
  SparklinesOptions& WithFieldId(FieldIdT&& value) {
    SetFieldId(std::forward<FieldIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const DimensionField& GetXAxisField() const { return m_xAxisField; }
  inline bool XAxisFieldHasBeenSet() const { return m_xAxisFieldHasBeenSet; }
  template <typename XAxisFieldT = DimensionField>
  void SetXAxisField(XAxisFieldT&& value) {
    m_xAxisFieldHasBeenSet = true;
    m_xAxisField = std::forward<XAxisFieldT>(value);
  }
  template <typename XAxisFieldT = DimensionField>
  SparklinesOptions& WithXAxisField(XAxisFieldT&& value) {
    SetXAxisField(std::forward<XAxisFieldT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Determines whether the Y axis is shared across all sparklines or independent
   * for each sparkline.</p>
   */
  inline SparklineAxisBehavior GetYAxisBehavior() const { return m_yAxisBehavior; }
  inline bool YAxisBehaviorHasBeenSet() const { return m_yAxisBehaviorHasBeenSet; }
  inline void SetYAxisBehavior(SparklineAxisBehavior value) {
    m_yAxisBehaviorHasBeenSet = true;
    m_yAxisBehavior = value;
  }
  inline SparklinesOptions& WithYAxisBehavior(SparklineAxisBehavior value) {
    SetYAxisBehavior(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the sparkline. Valid values are <code>LINE</code> and
   * <code>AREA_LINE</code>.</p>
   */
  inline SparklineVisualType GetVisualType() const { return m_visualType; }
  inline bool VisualTypeHasBeenSet() const { return m_visualTypeHasBeenSet; }
  inline void SetVisualType(SparklineVisualType value) {
    m_visualTypeHasBeenSet = true;
    m_visualType = value;
  }
  inline SparklinesOptions& WithVisualType(SparklineVisualType value) {
    SetVisualType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The color of the sparkline line.</p>
   */
  inline const Aws::String& GetLineColor() const { return m_lineColor; }
  inline bool LineColorHasBeenSet() const { return m_lineColorHasBeenSet; }
  template <typename LineColorT = Aws::String>
  void SetLineColor(LineColorT&& value) {
    m_lineColorHasBeenSet = true;
    m_lineColor = std::forward<LineColorT>(value);
  }
  template <typename LineColorT = Aws::String>
  SparklinesOptions& WithLineColor(LineColorT&& value) {
    SetLineColor(std::forward<LineColorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The interpolation style for the sparkline line.</p>
   */
  inline LineInterpolation GetLineInterpolation() const { return m_lineInterpolation; }
  inline bool LineInterpolationHasBeenSet() const { return m_lineInterpolationHasBeenSet; }
  inline void SetLineInterpolation(LineInterpolation value) {
    m_lineInterpolationHasBeenSet = true;
    m_lineInterpolation = value;
  }
  inline SparklinesOptions& WithLineInterpolation(LineInterpolation value) {
    SetLineInterpolation(value);
    return *this;
  }
  ///@}

  ///@{

  inline const LineChartMarkerStyleSettings& GetAllPointsMarker() const { return m_allPointsMarker; }
  inline bool AllPointsMarkerHasBeenSet() const { return m_allPointsMarkerHasBeenSet; }
  template <typename AllPointsMarkerT = LineChartMarkerStyleSettings>
  void SetAllPointsMarker(AllPointsMarkerT&& value) {
    m_allPointsMarkerHasBeenSet = true;
    m_allPointsMarker = std::forward<AllPointsMarkerT>(value);
  }
  template <typename AllPointsMarkerT = LineChartMarkerStyleSettings>
  SparklinesOptions& WithAllPointsMarker(AllPointsMarkerT&& value) {
    SetAllPointsMarker(std::forward<AllPointsMarkerT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const LineChartMarkerStyleSettings& GetMaxValueMarker() const { return m_maxValueMarker; }
  inline bool MaxValueMarkerHasBeenSet() const { return m_maxValueMarkerHasBeenSet; }
  template <typename MaxValueMarkerT = LineChartMarkerStyleSettings>
  void SetMaxValueMarker(MaxValueMarkerT&& value) {
    m_maxValueMarkerHasBeenSet = true;
    m_maxValueMarker = std::forward<MaxValueMarkerT>(value);
  }
  template <typename MaxValueMarkerT = LineChartMarkerStyleSettings>
  SparklinesOptions& WithMaxValueMarker(MaxValueMarkerT&& value) {
    SetMaxValueMarker(std::forward<MaxValueMarkerT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const LineChartMarkerStyleSettings& GetMinValueMarker() const { return m_minValueMarker; }
  inline bool MinValueMarkerHasBeenSet() const { return m_minValueMarkerHasBeenSet; }
  template <typename MinValueMarkerT = LineChartMarkerStyleSettings>
  void SetMinValueMarker(MinValueMarkerT&& value) {
    m_minValueMarkerHasBeenSet = true;
    m_minValueMarker = std::forward<MinValueMarkerT>(value);
  }
  template <typename MinValueMarkerT = LineChartMarkerStyleSettings>
  SparklinesOptions& WithMinValueMarker(MinValueMarkerT&& value) {
    SetMinValueMarker(std::forward<MinValueMarkerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fieldId;

  DimensionField m_xAxisField;

  SparklineAxisBehavior m_yAxisBehavior{SparklineAxisBehavior::NOT_SET};

  SparklineVisualType m_visualType{SparklineVisualType::NOT_SET};

  Aws::String m_lineColor;

  LineInterpolation m_lineInterpolation{LineInterpolation::NOT_SET};

  LineChartMarkerStyleSettings m_allPointsMarker;

  LineChartMarkerStyleSettings m_maxValueMarker;

  LineChartMarkerStyleSettings m_minValueMarker;
  bool m_fieldIdHasBeenSet = false;
  bool m_xAxisFieldHasBeenSet = false;
  bool m_yAxisBehaviorHasBeenSet = false;
  bool m_visualTypeHasBeenSet = false;
  bool m_lineColorHasBeenSet = false;
  bool m_lineInterpolationHasBeenSet = false;
  bool m_allPointsMarkerHasBeenSet = false;
  bool m_maxValueMarkerHasBeenSet = false;
  bool m_minValueMarkerHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
