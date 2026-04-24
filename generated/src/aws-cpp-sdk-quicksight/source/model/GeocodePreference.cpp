/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/GeocodePreference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

GeocodePreference::GeocodePreference(JsonView jsonValue) { *this = jsonValue; }

GeocodePreference& GeocodePreference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RequestKey")) {
    m_requestKey = jsonValue.GetObject("RequestKey");
    m_requestKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Preference")) {
    m_preference = jsonValue.GetObject("Preference");
    m_preferenceHasBeenSet = true;
  }
  return *this;
}

JsonValue GeocodePreference::Jsonize() const {
  JsonValue payload;

  if (m_requestKeyHasBeenSet) {
    payload.WithObject("RequestKey", m_requestKey.Jsonize());
  }

  if (m_preferenceHasBeenSet) {
    payload.WithObject("Preference", m_preference.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
