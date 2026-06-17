/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mq/model/BadRequestException.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MQ {
namespace Model {

BadRequestException::BadRequestException(JsonView jsonValue) { *this = jsonValue; }

BadRequestException& BadRequestException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("errorAttribute")) {
    m_errorAttribute = jsonValue.GetString("errorAttribute");
    m_errorAttributeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceShareErrors")) {
    Aws::Utils::Array<JsonView> resourceShareErrorsJsonList = jsonValue.GetArray("resourceShareErrors");
    for (unsigned resourceShareErrorsIndex = 0; resourceShareErrorsIndex < resourceShareErrorsJsonList.GetLength();
         ++resourceShareErrorsIndex) {
      m_resourceShareErrors.push_back(resourceShareErrorsJsonList[resourceShareErrorsIndex].AsObject());
    }
    m_resourceShareErrorsHasBeenSet = true;
  }
  return *this;
}

JsonValue BadRequestException::Jsonize() const {
  JsonValue payload;

  if (m_errorAttributeHasBeenSet) {
    payload.WithString("errorAttribute", m_errorAttribute);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_resourceShareErrorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceShareErrorsJsonList(m_resourceShareErrors.size());
    for (unsigned resourceShareErrorsIndex = 0; resourceShareErrorsIndex < resourceShareErrorsJsonList.GetLength();
         ++resourceShareErrorsIndex) {
      resourceShareErrorsJsonList[resourceShareErrorsIndex].AsObject(m_resourceShareErrors[resourceShareErrorsIndex].Jsonize());
    }
    payload.WithArray("resourceShareErrors", std::move(resourceShareErrorsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MQ
}  // namespace Aws
