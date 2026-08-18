/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/ValidationExceptionField.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

ValidationExceptionField::ValidationExceptionField(JsonView jsonValue) { *this = jsonValue; }

ValidationExceptionField& ValidationExceptionField::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Reason")) {
    m_reason = ValidationExceptionReasonMapper::GetValidationExceptionReasonForName(jsonValue.GetString("Reason"));
    m_reasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EntityType")) {
    m_entityType = jsonValue.GetString("EntityType");
    m_entityTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EntityId")) {
    m_entityId = jsonValue.GetString("EntityId");
    m_entityIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChangeType")) {
    m_changeType = jsonValue.GetString("ChangeType");
    m_changeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Field")) {
    m_field = jsonValue.GetString("Field");
    m_fieldHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationExceptionField::Jsonize() const {
  JsonValue payload;

  if (m_reasonHasBeenSet) {
    payload.WithString("Reason", ValidationExceptionReasonMapper::GetNameForValidationExceptionReason(m_reason));
  }

  if (m_entityTypeHasBeenSet) {
    payload.WithString("EntityType", m_entityType);
  }

  if (m_entityIdHasBeenSet) {
    payload.WithString("EntityId", m_entityId);
  }

  if (m_changeTypeHasBeenSet) {
    payload.WithString("ChangeType", m_changeType);
  }

  if (m_fieldHasBeenSet) {
    payload.WithString("Field", m_field);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
