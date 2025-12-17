/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/test-new-service-sdk-testing/model/GetFooRequest.h>

#include <utility>

using namespace Aws::TestNewServiceSDKTesting::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetFooRequest::SerializePayload() const {
  JsonValue payload;

  if (m_fooIdHasBeenSet) {
    payload.WithString("fooId", m_fooId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetFooRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TestNewServiceSDKTesting.GetFoo"));
  return headers;
}
