/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/SourceMetricsConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

SourceMetricsConfiguration::SourceMetricsConfiguration(JsonView jsonValue) { *this = jsonValue; }

SourceMetricsConfiguration& SourceMetricsConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MetricsSelectionCriteria")) {
    m_metricsSelectionCriteria = jsonValue.GetString("MetricsSelectionCriteria");
    m_metricsSelectionCriteriaHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceMetricsConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_metricsSelectionCriteriaHasBeenSet) {
    payload.WithString("MetricsSelectionCriteria", m_metricsSelectionCriteria);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
