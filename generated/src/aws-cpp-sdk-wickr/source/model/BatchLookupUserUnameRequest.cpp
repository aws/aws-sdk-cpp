/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/BatchLookupUserUnameRequest.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchLookupUserUnameRequest::SerializePayload() const {
  JsonValue payload;

  if (m_unamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> unamesJsonList(m_unames.size());
    for (unsigned unamesIndex = 0; unamesIndex < unamesJsonList.GetLength(); ++unamesIndex) {
      unamesJsonList[unamesIndex].AsString(m_unames[unamesIndex]);
    }
    payload.WithArray("unames", std::move(unamesJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchLookupUserUnameRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_clientTokenHasBeenSet) {
    ss << m_clientToken;
    headers.emplace("x-client-token", ss.str());
    ss.str("");
  }

  return headers;
}
