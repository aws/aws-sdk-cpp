﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-instances/model/EnclaveOptionsRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {

EnclaveOptionsRequest::EnclaveOptionsRequest(JsonView jsonValue) { *this = jsonValue; }

EnclaveOptionsRequest& EnclaveOptionsRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Enabled")) {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  return *this;
}

JsonValue EnclaveOptionsRequest::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  return payload;
}

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
