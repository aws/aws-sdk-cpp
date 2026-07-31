/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/TopicNumericRangeFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

TopicNumericRangeFilter::TopicNumericRangeFilter(JsonView jsonValue) { *this = jsonValue; }

TopicNumericRangeFilter& TopicNumericRangeFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Inclusive")) {
    m_inclusive = jsonValue.GetBool("Inclusive");
    m_inclusiveHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Constant")) {
    m_constant = jsonValue.GetObject("Constant");
    m_constantHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Aggregation")) {
    m_aggregation = NamedFilterAggTypeMapper::GetNamedFilterAggTypeForName(jsonValue.GetString("Aggregation"));
    m_aggregationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Inverse")) {
    m_inverse = jsonValue.GetBool("Inverse");
    m_inverseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NullFilter")) {
    m_nullFilter = NullFilterTypeMapper::GetNullFilterTypeForName(jsonValue.GetString("NullFilter"));
    m_nullFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicNumericRangeFilter::Jsonize() const {
  JsonValue payload;

  if (m_inclusiveHasBeenSet) {
    payload.WithBool("Inclusive", m_inclusive);
  }

  if (m_constantHasBeenSet) {
    payload.WithObject("Constant", m_constant.Jsonize());
  }

  if (m_aggregationHasBeenSet) {
    payload.WithString("Aggregation", NamedFilterAggTypeMapper::GetNameForNamedFilterAggType(m_aggregation));
  }

  if (m_inverseHasBeenSet) {
    payload.WithBool("Inverse", m_inverse);
  }

  if (m_nullFilterHasBeenSet) {
    payload.WithString("NullFilter", NullFilterTypeMapper::GetNameForNullFilterType(m_nullFilter));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
