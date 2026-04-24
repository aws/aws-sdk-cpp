/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UpdateSelfUpgradeRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSelfUpgradeRequest::SerializePayload() const {
  JsonValue payload;

  if (m_upgradeRequestIdHasBeenSet) {
    payload.WithString("UpgradeRequestId", m_upgradeRequestId);
  }

  if (m_actionHasBeenSet) {
    payload.WithString("Action", SelfUpgradeAdminActionMapper::GetNameForSelfUpgradeAdminAction(m_action));
  }

  return payload.View().WriteReadable();
}
