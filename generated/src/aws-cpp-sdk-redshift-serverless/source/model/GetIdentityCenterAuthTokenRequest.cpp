/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/redshift-serverless/model/GetIdentityCenterAuthTokenRequest.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetIdentityCenterAuthTokenRequest::SerializePayload() const {
  JsonValue payload;

  if (m_workgroupNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> workgroupNamesJsonList(m_workgroupNames.size());
    for (unsigned workgroupNamesIndex = 0; workgroupNamesIndex < workgroupNamesJsonList.GetLength(); ++workgroupNamesIndex) {
      workgroupNamesJsonList[workgroupNamesIndex].AsString(m_workgroupNames[workgroupNamesIndex]);
    }
    payload.WithArray("workgroupNames", std::move(workgroupNamesJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetIdentityCenterAuthTokenRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RedshiftServerless.GetIdentityCenterAuthToken"));
  return headers;
}
