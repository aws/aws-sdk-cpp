/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/KnowledgeBaseSearchFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

KnowledgeBaseSearchFilter::KnowledgeBaseSearchFilter(JsonView jsonValue) { *this = jsonValue; }

KnowledgeBaseSearchFilter& KnowledgeBaseSearchFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = KnowledgeBaseSearchFilterNameMapper::GetKnowledgeBaseSearchFilterNameForName(jsonValue.GetString("name"));
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operator")) {
    m_operator = KnowledgeBaseSearchOperatorMapper::GetKnowledgeBaseSearchOperatorForName(jsonValue.GetString("operator"));
    m_operatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue KnowledgeBaseSearchFilter::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", KnowledgeBaseSearchFilterNameMapper::GetNameForKnowledgeBaseSearchFilterName(m_name));
  }

  if (m_operatorHasBeenSet) {
    payload.WithString("operator", KnowledgeBaseSearchOperatorMapper::GetNameForKnowledgeBaseSearchOperator(m_operator));
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
