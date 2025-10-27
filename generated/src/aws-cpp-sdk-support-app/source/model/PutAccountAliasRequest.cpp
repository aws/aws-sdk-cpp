/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/support-app/model/PutAccountAliasRequest.h>

#include <utility>

using namespace Aws::SupportApp::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutAccountAliasRequest::SerializePayload() const {
  JsonValue payload;

  if (m_accountAliasHasBeenSet) {
    payload.WithString("accountAlias", m_accountAlias);
  }

  return payload.View().WriteReadable();
}
