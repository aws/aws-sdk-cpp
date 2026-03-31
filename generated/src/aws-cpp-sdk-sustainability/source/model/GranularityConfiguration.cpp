/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sustainability/model/GranularityConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Sustainability {
namespace Model {

GranularityConfiguration::GranularityConfiguration(JsonView jsonValue) { *this = jsonValue; }

GranularityConfiguration& GranularityConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FiscalYearStartMonth")) {
    m_fiscalYearStartMonth = jsonValue.GetInteger("FiscalYearStartMonth");
    m_fiscalYearStartMonthHasBeenSet = true;
  }
  return *this;
}

JsonValue GranularityConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_fiscalYearStartMonthHasBeenSet) {
    payload.WithInteger("FiscalYearStartMonth", m_fiscalYearStartMonth);
  }

  return payload;
}

}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
