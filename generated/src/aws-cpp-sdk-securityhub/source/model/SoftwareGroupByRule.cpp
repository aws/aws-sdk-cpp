/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/SoftwareGroupByRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

SoftwareGroupByRule::SoftwareGroupByRule(JsonView jsonValue) { *this = jsonValue; }

SoftwareGroupByRule& SoftwareGroupByRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("GroupByField")) {
    m_groupByField = SoftwareGroupByFieldMapper::GetSoftwareGroupByFieldForName(jsonValue.GetString("GroupByField"));
    m_groupByFieldHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Filters")) {
    m_filters = jsonValue.GetObject("Filters");
    m_filtersHasBeenSet = true;
  }
  return *this;
}

JsonValue SoftwareGroupByRule::Jsonize() const {
  JsonValue payload;

  if (m_groupByFieldHasBeenSet) {
    payload.WithString("GroupByField", SoftwareGroupByFieldMapper::GetNameForSoftwareGroupByField(m_groupByField));
  }

  if (m_filtersHasBeenSet) {
    payload.WithObject("Filters", m_filters.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
