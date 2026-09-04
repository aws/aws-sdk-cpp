/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/YieldOptimizationConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

YieldOptimizationConfiguration::YieldOptimizationConfiguration(JsonView jsonValue) { *this = jsonValue; }

YieldOptimizationConfiguration& YieldOptimizationConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MinimumUnfilledDuration")) {
    m_minimumUnfilledDuration = jsonValue.GetInteger("MinimumUnfilledDuration");
    m_minimumUnfilledDurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PublisherId")) {
    m_publisherId = jsonValue.GetString("PublisherId");
    m_publisherIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Region")) {
    m_region = ApsRegionMapper::GetApsRegionForName(jsonValue.GetString("Region"));
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OpenRtbTemplate")) {
    m_openRtbTemplate = jsonValue.GetString("OpenRtbTemplate");
    m_openRtbTemplateHasBeenSet = true;
  }
  return *this;
}

JsonValue YieldOptimizationConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_minimumUnfilledDurationHasBeenSet) {
    payload.WithInteger("MinimumUnfilledDuration", m_minimumUnfilledDuration);
  }

  if (m_publisherIdHasBeenSet) {
    payload.WithString("PublisherId", m_publisherId);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("Region", ApsRegionMapper::GetNameForApsRegion(m_region));
  }

  if (m_openRtbTemplateHasBeenSet) {
    payload.WithString("OpenRtbTemplate", m_openRtbTemplate);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
