/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/neptunedata/model/ExecuteFastResetRequest.h>

#include <utility>

using namespace Aws::neptunedata::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ExecuteFastResetRequest::SerializePayload() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithString("action", ActionMapper::GetNameForAction(m_action));
  }

  if (m_tokenHasBeenSet) {
    payload.WithString("token", m_token);
  }

  return payload.View().WriteReadable();
}
