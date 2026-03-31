/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/StartNetworkMigrationCodeGenerationRequest.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartNetworkMigrationCodeGenerationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_networkMigrationExecutionIDHasBeenSet) {
    payload.WithString("networkMigrationExecutionID", m_networkMigrationExecutionID);
  }

  if (m_networkMigrationDefinitionIDHasBeenSet) {
    payload.WithString("networkMigrationDefinitionID", m_networkMigrationDefinitionID);
  }

  if (m_codeGenerationOutputFormatTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> codeGenerationOutputFormatTypesJsonList(m_codeGenerationOutputFormatTypes.size());
    for (unsigned codeGenerationOutputFormatTypesIndex = 0;
         codeGenerationOutputFormatTypesIndex < codeGenerationOutputFormatTypesJsonList.GetLength();
         ++codeGenerationOutputFormatTypesIndex) {
      codeGenerationOutputFormatTypesJsonList[codeGenerationOutputFormatTypesIndex].AsString(
          CodeGenerationOutputFormatTypeMapper::GetNameForCodeGenerationOutputFormatType(
              m_codeGenerationOutputFormatTypes[codeGenerationOutputFormatTypesIndex]));
    }
    payload.WithArray("codeGenerationOutputFormatTypes", std::move(codeGenerationOutputFormatTypesJsonList));
  }

  return payload.View().WriteReadable();
}
