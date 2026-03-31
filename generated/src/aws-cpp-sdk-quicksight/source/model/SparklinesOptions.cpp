/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SparklinesOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SparklinesOptions::SparklinesOptions(JsonView jsonValue) { *this = jsonValue; }

SparklinesOptions& SparklinesOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FieldId")) {
    m_fieldId = jsonValue.GetString("FieldId");
    m_fieldIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("XAxisField")) {
    m_xAxisField = jsonValue.GetObject("XAxisField");
    m_xAxisFieldHasBeenSet = true;
  }
  if (jsonValue.ValueExists("YAxisBehavior")) {
    m_yAxisBehavior = SparklineAxisBehaviorMapper::GetSparklineAxisBehaviorForName(jsonValue.GetString("YAxisBehavior"));
    m_yAxisBehaviorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VisualType")) {
    m_visualType = SparklineVisualTypeMapper::GetSparklineVisualTypeForName(jsonValue.GetString("VisualType"));
    m_visualTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LineColor")) {
    m_lineColor = jsonValue.GetString("LineColor");
    m_lineColorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LineInterpolation")) {
    m_lineInterpolation = LineInterpolationMapper::GetLineInterpolationForName(jsonValue.GetString("LineInterpolation"));
    m_lineInterpolationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AllPointsMarker")) {
    m_allPointsMarker = jsonValue.GetObject("AllPointsMarker");
    m_allPointsMarkerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxValueMarker")) {
    m_maxValueMarker = jsonValue.GetObject("MaxValueMarker");
    m_maxValueMarkerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MinValueMarker")) {
    m_minValueMarker = jsonValue.GetObject("MinValueMarker");
    m_minValueMarkerHasBeenSet = true;
  }
  return *this;
}

JsonValue SparklinesOptions::Jsonize() const {
  JsonValue payload;

  if (m_fieldIdHasBeenSet) {
    payload.WithString("FieldId", m_fieldId);
  }

  if (m_xAxisFieldHasBeenSet) {
    payload.WithObject("XAxisField", m_xAxisField.Jsonize());
  }

  if (m_yAxisBehaviorHasBeenSet) {
    payload.WithString("YAxisBehavior", SparklineAxisBehaviorMapper::GetNameForSparklineAxisBehavior(m_yAxisBehavior));
  }

  if (m_visualTypeHasBeenSet) {
    payload.WithString("VisualType", SparklineVisualTypeMapper::GetNameForSparklineVisualType(m_visualType));
  }

  if (m_lineColorHasBeenSet) {
    payload.WithString("LineColor", m_lineColor);
  }

  if (m_lineInterpolationHasBeenSet) {
    payload.WithString("LineInterpolation", LineInterpolationMapper::GetNameForLineInterpolation(m_lineInterpolation));
  }

  if (m_allPointsMarkerHasBeenSet) {
    payload.WithObject("AllPointsMarker", m_allPointsMarker.Jsonize());
  }

  if (m_maxValueMarkerHasBeenSet) {
    payload.WithObject("MaxValueMarker", m_maxValueMarker.Jsonize());
  }

  if (m_minValueMarkerHasBeenSet) {
    payload.WithObject("MinValueMarker", m_minValueMarker.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
