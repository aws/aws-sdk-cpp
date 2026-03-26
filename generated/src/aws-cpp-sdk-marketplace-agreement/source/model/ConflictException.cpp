/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/ConflictException.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

ConflictException::ConflictException(JsonView jsonValue) { *this = jsonValue; }

ConflictException& ConflictException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("requestId")) {
    m_requestId = jsonValue.GetString("requestId");
    m_requestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceId")) {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceType")) {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ConflictException::Jsonize() const {
  JsonValue payload;

  if (m_requestIdHasBeenSet) {
    payload.WithString("requestId", m_requestId);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_resourceIdHasBeenSet) {
    payload.WithString("resourceId", m_resourceId);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
