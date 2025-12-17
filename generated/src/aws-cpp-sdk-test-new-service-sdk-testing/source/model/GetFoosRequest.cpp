/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/test-new-service-sdk-testing/model/GetFoosRequest.h>

#include <utility>

using namespace Aws::TestNewServiceSDKTesting::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetFoosRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_debugHasBeenSet) {
    payload.WithString("debug", m_debug);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetFoosRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TestNewServiceSDKTesting.GetFoos"));
  return headers;
}
