/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/StartRemoteSourceActionJobRequest.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartRemoteSourceActionJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_remoteSourceActionArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> remoteSourceActionArnsJsonList(m_remoteSourceActionArns.size());
    for (unsigned remoteSourceActionArnsIndex = 0; remoteSourceActionArnsIndex < remoteSourceActionArnsJsonList.GetLength();
         ++remoteSourceActionArnsIndex) {
      remoteSourceActionArnsJsonList[remoteSourceActionArnsIndex].AsString(m_remoteSourceActionArns[remoteSourceActionArnsIndex]);
    }
    payload.WithArray("remoteSourceActionArns", std::move(remoteSourceActionArnsJsonList));
  }

  if (m_connectorArnHasBeenSet) {
    payload.WithString("connectorArn", m_connectorArn);
  }

  if (m_sourceServerArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceServerArnsJsonList(m_sourceServerArns.size());
    for (unsigned sourceServerArnsIndex = 0; sourceServerArnsIndex < sourceServerArnsJsonList.GetLength(); ++sourceServerArnsIndex) {
      sourceServerArnsJsonList[sourceServerArnsIndex].AsString(m_sourceServerArns[sourceServerArnsIndex]);
    }
    payload.WithArray("sourceServerArns", std::move(sourceServerArnsJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_accountIDHasBeenSet) {
    payload.WithString("accountID", m_accountID);
  }

  return payload.View().WriteReadable();
}
