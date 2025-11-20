/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/SeverityTrendsCount.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

SeverityTrendsCount::SeverityTrendsCount(JsonView jsonValue) { *this = jsonValue; }

SeverityTrendsCount& SeverityTrendsCount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Unknown")) {
    m_unknown = jsonValue.GetInt64("Unknown");
    m_unknownHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Informational")) {
    m_informational = jsonValue.GetInt64("Informational");
    m_informationalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Low")) {
    m_low = jsonValue.GetInt64("Low");
    m_lowHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Medium")) {
    m_medium = jsonValue.GetInt64("Medium");
    m_mediumHasBeenSet = true;
  }
  if (jsonValue.ValueExists("High")) {
    m_high = jsonValue.GetInt64("High");
    m_highHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Critical")) {
    m_critical = jsonValue.GetInt64("Critical");
    m_criticalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Fatal")) {
    m_fatal = jsonValue.GetInt64("Fatal");
    m_fatalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Other")) {
    m_other = jsonValue.GetInt64("Other");
    m_otherHasBeenSet = true;
  }
  return *this;
}

JsonValue SeverityTrendsCount::Jsonize() const {
  JsonValue payload;

  if (m_unknownHasBeenSet) {
    payload.WithInt64("Unknown", m_unknown);
  }

  if (m_informationalHasBeenSet) {
    payload.WithInt64("Informational", m_informational);
  }

  if (m_lowHasBeenSet) {
    payload.WithInt64("Low", m_low);
  }

  if (m_mediumHasBeenSet) {
    payload.WithInt64("Medium", m_medium);
  }

  if (m_highHasBeenSet) {
    payload.WithInt64("High", m_high);
  }

  if (m_criticalHasBeenSet) {
    payload.WithInt64("Critical", m_critical);
  }

  if (m_fatalHasBeenSet) {
    payload.WithInt64("Fatal", m_fatal);
  }

  if (m_otherHasBeenSet) {
    payload.WithInt64("Other", m_other);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
