/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ValidationException.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ValidationException::ValidationException(JsonView jsonValue) { *this = jsonValue; }

ValidationException& ValidationException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ValidationExceptionFieldList")) {
    Aws::Utils::Array<JsonView> validationExceptionFieldListJsonList = jsonValue.GetArray("ValidationExceptionFieldList");
    for (unsigned validationExceptionFieldListIndex = 0;
         validationExceptionFieldListIndex < validationExceptionFieldListJsonList.GetLength(); ++validationExceptionFieldListIndex) {
      m_validationExceptionFieldList.push_back(validationExceptionFieldListJsonList[validationExceptionFieldListIndex].AsObject());
    }
    m_validationExceptionFieldListHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationException::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  if (m_validationExceptionFieldListHasBeenSet) {
    Aws::Utils::Array<JsonValue> validationExceptionFieldListJsonList(m_validationExceptionFieldList.size());
    for (unsigned validationExceptionFieldListIndex = 0;
         validationExceptionFieldListIndex < validationExceptionFieldListJsonList.GetLength(); ++validationExceptionFieldListIndex) {
      validationExceptionFieldListJsonList[validationExceptionFieldListIndex].AsObject(
          m_validationExceptionFieldList[validationExceptionFieldListIndex].Jsonize());
    }
    payload.WithArray("ValidationExceptionFieldList", std::move(validationExceptionFieldListJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
