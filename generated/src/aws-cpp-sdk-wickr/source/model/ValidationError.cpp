/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/ValidationError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

ValidationError::ValidationError(JsonView jsonValue) { *this = jsonValue; }

ValidationError& ValidationError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reasons")) {
    Aws::Utils::Array<JsonView> reasonsJsonList = jsonValue.GetArray("reasons");
    for (unsigned reasonsIndex = 0; reasonsIndex < reasonsJsonList.GetLength(); ++reasonsIndex) {
      m_reasons.push_back(reasonsJsonList[reasonsIndex].AsObject());
    }
    m_reasonsHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationError::Jsonize() const {
  JsonValue payload;

  if (m_reasonsHasBeenSet) {
    Aws::Utils::Array<JsonValue> reasonsJsonList(m_reasons.size());
    for (unsigned reasonsIndex = 0; reasonsIndex < reasonsJsonList.GetLength(); ++reasonsIndex) {
      reasonsJsonList[reasonsIndex].AsObject(m_reasons[reasonsIndex].Jsonize());
    }
    payload.WithArray("reasons", std::move(reasonsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
