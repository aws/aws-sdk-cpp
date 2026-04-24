/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/DataSetDateRangeFilterCondition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

DataSetDateRangeFilterCondition::DataSetDateRangeFilterCondition(JsonView jsonValue) { *this = jsonValue; }

DataSetDateRangeFilterCondition& DataSetDateRangeFilterCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RangeMinimum")) {
    m_rangeMinimum = jsonValue.GetObject("RangeMinimum");
    m_rangeMinimumHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RangeMaximum")) {
    m_rangeMaximum = jsonValue.GetObject("RangeMaximum");
    m_rangeMaximumHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IncludeMinimum")) {
    m_includeMinimum = jsonValue.GetBool("IncludeMinimum");
    m_includeMinimumHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IncludeMaximum")) {
    m_includeMaximum = jsonValue.GetBool("IncludeMaximum");
    m_includeMaximumHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSetDateRangeFilterCondition::Jsonize() const {
  JsonValue payload;

  if (m_rangeMinimumHasBeenSet) {
    payload.WithObject("RangeMinimum", m_rangeMinimum.Jsonize());
  }

  if (m_rangeMaximumHasBeenSet) {
    payload.WithObject("RangeMaximum", m_rangeMaximum.Jsonize());
  }

  if (m_includeMinimumHasBeenSet) {
    payload.WithBool("IncludeMinimum", m_includeMinimum);
  }

  if (m_includeMaximumHasBeenSet) {
    payload.WithBool("IncludeMaximum", m_includeMaximum);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
