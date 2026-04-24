/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
 * <p>The preference coordinate for the geocode preference.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Coordinate">AWS
 * API Reference</a></p>
 */
class Coordinate {
 public:
  AWS_QUICKSIGHT_API Coordinate() = default;
  AWS_QUICKSIGHT_API Coordinate(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Coordinate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The latitude coordinate value for the geocode preference.</p>
   */
  inline double GetLatitude() const { return m_latitude; }
  inline bool LatitudeHasBeenSet() const { return m_latitudeHasBeenSet; }
  inline void SetLatitude(double value) {
    m_latitudeHasBeenSet = true;
    m_latitude = value;
  }
  inline Coordinate& WithLatitude(double value) {
    SetLatitude(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The longitude coordinate value for the geocode preference.</p>
   */
  inline double GetLongitude() const { return m_longitude; }
  inline bool LongitudeHasBeenSet() const { return m_longitudeHasBeenSet; }
  inline void SetLongitude(double value) {
    m_longitudeHasBeenSet = true;
    m_longitude = value;
  }
  inline Coordinate& WithLongitude(double value) {
    SetLongitude(value);
    return *this;
  }
  ///@}
 private:
  double m_latitude{0.0};

  double m_longitude{0.0};
  bool m_latitudeHasBeenSet = false;
  bool m_longitudeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
