/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/SearchAppsFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

SearchAppsFilter::SearchAppsFilter(JsonView jsonValue) { *this = jsonValue; }

SearchAppsFilter& SearchAppsFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = SearchAppsFilterNameMapper::GetSearchAppsFilterNameForName(jsonValue.GetString("Name"));
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Operator")) {
    m_operator = FilterOperatorMapper::GetFilterOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchAppsFilter::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", SearchAppsFilterNameMapper::GetNameForSearchAppsFilterName(m_name));
  }

  if (m_operatorHasBeenSet) {
    payload.WithString("Operator", FilterOperatorMapper::GetNameForFilterOperator(m_operator));
  }

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
