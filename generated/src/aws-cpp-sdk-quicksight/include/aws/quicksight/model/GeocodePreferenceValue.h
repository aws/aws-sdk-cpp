/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Coordinate.h>
#include <aws/quicksight/model/GeocoderHierarchy.h>

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
 * <p>The preference value for the geocode preference.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeocodePreferenceValue">AWS
 * API Reference</a></p>
 */
class GeocodePreferenceValue {
 public:
  AWS_QUICKSIGHT_API GeocodePreferenceValue() = default;
  AWS_QUICKSIGHT_API GeocodePreferenceValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API GeocodePreferenceValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The preference hierarchy for the geocode preference.</p>
   */
  inline const GeocoderHierarchy& GetGeocoderHierarchy() const { return m_geocoderHierarchy; }
  inline bool GeocoderHierarchyHasBeenSet() const { return m_geocoderHierarchyHasBeenSet; }
  template <typename GeocoderHierarchyT = GeocoderHierarchy>
  void SetGeocoderHierarchy(GeocoderHierarchyT&& value) {
    m_geocoderHierarchyHasBeenSet = true;
    m_geocoderHierarchy = std::forward<GeocoderHierarchyT>(value);
  }
  template <typename GeocoderHierarchyT = GeocoderHierarchy>
  GeocodePreferenceValue& WithGeocoderHierarchy(GeocoderHierarchyT&& value) {
    SetGeocoderHierarchy(std::forward<GeocoderHierarchyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The preference coordinate for the geocode preference.</p>
   */
  inline const Coordinate& GetCoordinate() const { return m_coordinate; }
  inline bool CoordinateHasBeenSet() const { return m_coordinateHasBeenSet; }
  template <typename CoordinateT = Coordinate>
  void SetCoordinate(CoordinateT&& value) {
    m_coordinateHasBeenSet = true;
    m_coordinate = std::forward<CoordinateT>(value);
  }
  template <typename CoordinateT = Coordinate>
  GeocodePreferenceValue& WithCoordinate(CoordinateT&& value) {
    SetCoordinate(std::forward<CoordinateT>(value));
    return *this;
  }
  ///@}
 private:
  GeocoderHierarchy m_geocoderHierarchy;

  Coordinate m_coordinate;
  bool m_geocoderHierarchyHasBeenSet = false;
  bool m_coordinateHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
