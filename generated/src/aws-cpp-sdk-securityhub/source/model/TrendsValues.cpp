/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/TrendsValues.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

TrendsValues::TrendsValues(JsonView jsonValue) { *this = jsonValue; }

TrendsValues& TrendsValues::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SeverityTrends")) {
    m_severityTrends = jsonValue.GetObject("SeverityTrends");
    m_severityTrendsHasBeenSet = true;
  }
  return *this;
}

JsonValue TrendsValues::Jsonize() const {
  JsonValue payload;

  if (m_severityTrendsHasBeenSet) {
    payload.WithObject("SeverityTrends", m_severityTrends.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
