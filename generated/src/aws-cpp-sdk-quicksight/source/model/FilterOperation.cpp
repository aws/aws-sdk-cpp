/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/FilterOperation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

FilterOperation::FilterOperation(JsonView jsonValue) { *this = jsonValue; }

FilterOperation& FilterOperation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ConditionExpression")) {
    m_conditionExpression = jsonValue.GetString("ConditionExpression");
    m_conditionExpressionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StringFilterCondition")) {
    m_stringFilterCondition = jsonValue.GetObject("StringFilterCondition");
    m_stringFilterConditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NumericFilterCondition")) {
    m_numericFilterCondition = jsonValue.GetObject("NumericFilterCondition");
    m_numericFilterConditionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DateFilterCondition")) {
    m_dateFilterCondition = jsonValue.GetObject("DateFilterCondition");
    m_dateFilterConditionHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterOperation::Jsonize() const {
  JsonValue payload;

  if (m_conditionExpressionHasBeenSet) {
    payload.WithString("ConditionExpression", m_conditionExpression);
  }

  if (m_stringFilterConditionHasBeenSet) {
    payload.WithObject("StringFilterCondition", m_stringFilterCondition.Jsonize());
  }

  if (m_numericFilterConditionHasBeenSet) {
    payload.WithObject("NumericFilterCondition", m_numericFilterCondition.Jsonize());
  }

  if (m_dateFilterConditionHasBeenSet) {
    payload.WithObject("DateFilterCondition", m_dateFilterCondition.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
