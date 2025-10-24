﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-instances/model/ValidationExceptionField.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {

ValidationExceptionField::ValidationExceptionField(JsonView jsonValue) { *this = jsonValue; }

ValidationExceptionField& ValidationExceptionField::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Reason")) {
    m_reason = jsonValue.GetString("Reason");
    m_reasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationExceptionField::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("Reason", m_reason);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
