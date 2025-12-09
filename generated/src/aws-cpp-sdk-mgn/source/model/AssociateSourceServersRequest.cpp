/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/AssociateSourceServersRequest.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateSourceServersRequest::SerializePayload() const {
  JsonValue payload;

  if (m_applicationIDHasBeenSet) {
    payload.WithString("applicationID", m_applicationID);
  }

  if (m_sourceServerIDsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceServerIDsJsonList(m_sourceServerIDs.size());
    for (unsigned sourceServerIDsIndex = 0; sourceServerIDsIndex < sourceServerIDsJsonList.GetLength(); ++sourceServerIDsIndex) {
      sourceServerIDsJsonList[sourceServerIDsIndex].AsString(m_sourceServerIDs[sourceServerIDsIndex]);
    }
    payload.WithArray("sourceServerIDs", std::move(sourceServerIDsJsonList));
  }

  if (m_accountIDHasBeenSet) {
    payload.WithString("accountID", m_accountID);
  }

  return payload.View().WriteReadable();
}
