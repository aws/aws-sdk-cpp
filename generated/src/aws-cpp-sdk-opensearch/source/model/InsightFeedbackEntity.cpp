/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/InsightFeedbackEntity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

InsightFeedbackEntity::InsightFeedbackEntity(JsonView jsonValue) { *this = jsonValue; }

InsightFeedbackEntity& InsightFeedbackEntity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = InsightFeedbackEntityTypeMapper::GetInsightFeedbackEntityTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue InsightFeedbackEntity::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", InsightFeedbackEntityTypeMapper::GetNameForInsightFeedbackEntityType(m_type));
  }

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
