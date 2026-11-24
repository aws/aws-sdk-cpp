/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/UpdateAccessControlApplicationSecretRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAccessControlApplicationSecretRequest::SerializePayload() const {
  JsonValue payload;

  if (m_updateRegionalSecretManagerArnsHasBeenSet) {
    JsonValue updateRegionalSecretManagerArnsJsonMap;
    for (auto& updateRegionalSecretManagerArnsItem : m_updateRegionalSecretManagerArns) {
      updateRegionalSecretManagerArnsJsonMap.WithString(updateRegionalSecretManagerArnsItem.first,
                                                        updateRegionalSecretManagerArnsItem.second);
    }
    payload.WithObject("UpdateRegionalSecretManagerArns", std::move(updateRegionalSecretManagerArnsJsonMap));
  }

  if (m_removeRegionalSecretManagerArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> removeRegionalSecretManagerArnsJsonList(m_removeRegionalSecretManagerArns.size());
    for (unsigned removeRegionalSecretManagerArnsIndex = 0;
         removeRegionalSecretManagerArnsIndex < removeRegionalSecretManagerArnsJsonList.GetLength();
         ++removeRegionalSecretManagerArnsIndex) {
      removeRegionalSecretManagerArnsJsonList[removeRegionalSecretManagerArnsIndex].AsString(
          m_removeRegionalSecretManagerArns[removeRegionalSecretManagerArnsIndex]);
    }
    payload.WithArray("RemoveRegionalSecretManagerArns", std::move(removeRegionalSecretManagerArnsJsonList));
  }

  return payload.View().WriteReadable();
}
