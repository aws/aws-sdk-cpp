/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3files/model/PutSynchronizationConfigurationRequest.h>

#include <utility>

using namespace Aws::S3Files::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutSynchronizationConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_latestVersionNumberHasBeenSet) {
    payload.WithInteger("latestVersionNumber", m_latestVersionNumber);
  }

  if (m_importDataRulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> importDataRulesJsonList(m_importDataRules.size());
    for (unsigned importDataRulesIndex = 0; importDataRulesIndex < importDataRulesJsonList.GetLength(); ++importDataRulesIndex) {
      importDataRulesJsonList[importDataRulesIndex].AsObject(m_importDataRules[importDataRulesIndex].Jsonize());
    }
    payload.WithArray("importDataRules", std::move(importDataRulesJsonList));
  }

  if (m_expirationDataRulesHasBeenSet) {
    Aws::Utils::Array<JsonValue> expirationDataRulesJsonList(m_expirationDataRules.size());
    for (unsigned expirationDataRulesIndex = 0; expirationDataRulesIndex < expirationDataRulesJsonList.GetLength();
         ++expirationDataRulesIndex) {
      expirationDataRulesJsonList[expirationDataRulesIndex].AsObject(m_expirationDataRules[expirationDataRulesIndex].Jsonize());
    }
    payload.WithArray("expirationDataRules", std::move(expirationDataRulesJsonList));
  }

  return payload.View().WriteReadable();
}
