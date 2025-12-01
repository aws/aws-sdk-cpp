/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/RetrieveRequest.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RetrieveRequest::SerializePayload() const {
  JsonValue payload;

  if (m_retrievalConfigurationHasBeenSet) {
    payload.WithObject("retrievalConfiguration", m_retrievalConfiguration.Jsonize());
  }

  if (m_retrievalQueryHasBeenSet) {
    payload.WithString("retrievalQuery", m_retrievalQuery);
  }

  return payload.View().WriteReadable();
}
