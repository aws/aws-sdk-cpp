/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/UpdateNetworkRequest.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateNetworkRequest::SerializePayload() const {
  JsonValue payload;

  if (m_networkNameHasBeenSet) {
    payload.WithString("networkName", m_networkName);
  }

  if (m_encryptionKeyArnHasBeenSet) {
    payload.WithString("encryptionKeyArn", m_encryptionKeyArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateNetworkRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_clientTokenHasBeenSet) {
    ss << m_clientToken;
    headers.emplace("x-client-token", ss.str());
    ss.str("");
  }

  return headers;
}
