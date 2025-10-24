﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sso-admin/model/UpdatePermissionSetRequest.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePermissionSetRequest::SerializePayload() const {
  JsonValue payload;

  if (m_instanceArnHasBeenSet) {
    payload.WithString("InstanceArn", m_instanceArn);
  }

  if (m_permissionSetArnHasBeenSet) {
    payload.WithString("PermissionSetArn", m_permissionSetArn);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_sessionDurationHasBeenSet) {
    payload.WithString("SessionDuration", m_sessionDuration);
  }

  if (m_relayStateHasBeenSet) {
    payload.WithString("RelayState", m_relayState);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePermissionSetRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SWBExternalService.UpdatePermissionSet"));
  return headers;
}
