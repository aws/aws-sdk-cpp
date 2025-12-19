/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/GetIdentityContextRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetIdentityContextRequest::SerializePayload() const {
  JsonValue payload;

  if (m_userIdentifierHasBeenSet) {
    payload.WithObject("UserIdentifier", m_userIdentifier.Jsonize());
  }

  if (m_namespaceHasBeenSet) {
    payload.WithString("Namespace", m_namespace);
  }

  if (m_sessionExpiresAtHasBeenSet) {
    payload.WithDouble("SessionExpiresAt", m_sessionExpiresAt.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}
