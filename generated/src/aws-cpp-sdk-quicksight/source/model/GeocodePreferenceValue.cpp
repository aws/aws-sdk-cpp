/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/GeocodePreferenceValue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

GeocodePreferenceValue::GeocodePreferenceValue(JsonView jsonValue) { *this = jsonValue; }

GeocodePreferenceValue& GeocodePreferenceValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("GeocoderHierarchy")) {
    m_geocoderHierarchy = jsonValue.GetObject("GeocoderHierarchy");
    m_geocoderHierarchyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Coordinate")) {
    m_coordinate = jsonValue.GetObject("Coordinate");
    m_coordinateHasBeenSet = true;
  }
  return *this;
}

JsonValue GeocodePreferenceValue::Jsonize() const {
  JsonValue payload;

  if (m_geocoderHierarchyHasBeenSet) {
    payload.WithObject("GeocoderHierarchy", m_geocoderHierarchy.Jsonize());
  }

  if (m_coordinateHasBeenSet) {
    payload.WithObject("Coordinate", m_coordinate.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
