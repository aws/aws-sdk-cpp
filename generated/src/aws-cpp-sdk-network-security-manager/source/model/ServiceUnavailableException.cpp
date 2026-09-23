/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/ServiceUnavailableException.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

ServiceUnavailableException::ServiceUnavailableException(JsonView jsonValue) { *this = jsonValue; }

ServiceUnavailableException& ServiceUnavailableException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retryAfterSeconds")) {
    m_retryAfterSeconds = jsonValue.GetInteger("retryAfterSeconds");
    m_retryAfterSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceUnavailableException::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_retryAfterSecondsHasBeenSet) {
    payload.WithInteger("retryAfterSeconds", m_retryAfterSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
