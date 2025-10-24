﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/CreateTenantResourceAssociationRequest.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateTenantResourceAssociationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_tenantNameHasBeenSet) {
    payload.WithString("TenantName", m_tenantName);
  }

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  return payload.View().WriteReadable();
}
