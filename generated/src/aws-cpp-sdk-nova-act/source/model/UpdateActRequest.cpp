/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nova-act/model/UpdateActRequest.h>

#include <utility>

using namespace Aws::NovaAct::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateActRequest::SerializePayload() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("status", ActStatusMapper::GetNameForActStatus(m_status));
  }

  if (m_errorHasBeenSet) {
    payload.WithObject("error", m_error.Jsonize());
  }

  return payload.View().WriteReadable();
}
