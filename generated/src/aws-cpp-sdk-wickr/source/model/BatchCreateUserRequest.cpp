/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/BatchCreateUserRequest.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchCreateUserRequest::SerializePayload() const {
  JsonValue payload;

  if (m_usersHasBeenSet) {
    Aws::Utils::Array<JsonValue> usersJsonList(m_users.size());
    for (unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex) {
      usersJsonList[usersIndex].AsObject(m_users[usersIndex].Jsonize());
    }
    payload.WithArray("users", std::move(usersJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchCreateUserRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_clientTokenHasBeenSet) {
    ss << m_clientToken;
    headers.emplace("x-client-token", ss.str());
    ss.str("");
  }

  return headers;
}
