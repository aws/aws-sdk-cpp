/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mq/model/ResourceShareError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MQ {
namespace Model {

ResourceShareError::ResourceShareError(JsonView jsonValue) { *this = jsonValue; }

ResourceShareError& ResourceShareError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = jsonValue.GetString("errorCode");
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceShareArn")) {
    m_resourceShareArn = jsonValue.GetString("resourceShareArn");
    m_resourceShareArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetString("status");
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceShareError::Jsonize() const {
  JsonValue payload;

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", m_errorCode);
  }

  if (m_resourceShareArnHasBeenSet) {
    payload.WithString("resourceShareArn", m_resourceShareArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", m_status);
  }

  return payload;
}

}  // namespace Model
}  // namespace MQ
}  // namespace Aws
