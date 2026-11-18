/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/AnalyticsConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

AnalyticsConfig::AnalyticsConfig(JsonView jsonValue) { *this = jsonValue; }

AnalyticsConfig& AnalyticsConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Mode")) {
    m_mode = AnalyticsModeMapper::GetAnalyticsModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalyticsConfig::Jsonize() const {
  JsonValue payload;

  if (m_modeHasBeenSet) {
    payload.WithString("Mode", AnalyticsModeMapper::GetNameForAnalyticsMode(m_mode));
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
