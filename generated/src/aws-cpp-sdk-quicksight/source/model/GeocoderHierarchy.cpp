/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/GeocoderHierarchy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

GeocoderHierarchy::GeocoderHierarchy(JsonView jsonValue) { *this = jsonValue; }

GeocoderHierarchy& GeocoderHierarchy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Country")) {
    m_country = jsonValue.GetString("Country");
    m_countryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = jsonValue.GetString("State");
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("County")) {
    m_county = jsonValue.GetString("County");
    m_countyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("City")) {
    m_city = jsonValue.GetString("City");
    m_cityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PostCode")) {
    m_postCode = jsonValue.GetString("PostCode");
    m_postCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue GeocoderHierarchy::Jsonize() const {
  JsonValue payload;

  if (m_countryHasBeenSet) {
    payload.WithString("Country", m_country);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", m_state);
  }

  if (m_countyHasBeenSet) {
    payload.WithString("County", m_county);
  }

  if (m_cityHasBeenSet) {
    payload.WithString("City", m_city);
  }

  if (m_postCodeHasBeenSet) {
    payload.WithString("PostCode", m_postCode);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
