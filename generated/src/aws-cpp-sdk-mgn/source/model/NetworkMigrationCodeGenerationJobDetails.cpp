/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/NetworkMigrationCodeGenerationJobDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

NetworkMigrationCodeGenerationJobDetails::NetworkMigrationCodeGenerationJobDetails(JsonView jsonValue) { *this = jsonValue; }

NetworkMigrationCodeGenerationJobDetails& NetworkMigrationCodeGenerationJobDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobID")) {
    m_jobID = jsonValue.GetString("jobID");
    m_jobIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkMigrationExecutionID")) {
    m_networkMigrationExecutionID = jsonValue.GetString("networkMigrationExecutionID");
    m_networkMigrationExecutionIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkMigrationDefinitionID")) {
    m_networkMigrationDefinitionID = jsonValue.GetString("networkMigrationDefinitionID");
    m_networkMigrationDefinitionIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endedAt")) {
    m_endedAt = jsonValue.GetDouble("endedAt");
    m_endedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = NetworkMigrationJobStatusMapper::GetNetworkMigrationJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusDetails")) {
    m_statusDetails = jsonValue.GetString("statusDetails");
    m_statusDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeGenerationOutputFormatStatusDetailsMap")) {
    Aws::Map<Aws::String, JsonView> codeGenerationOutputFormatStatusDetailsMapJsonMap =
        jsonValue.GetObject("codeGenerationOutputFormatStatusDetailsMap").GetAllObjects();
    for (auto& codeGenerationOutputFormatStatusDetailsMapItem : codeGenerationOutputFormatStatusDetailsMapJsonMap) {
      m_codeGenerationOutputFormatStatusDetailsMap[CodeGenerationOutputFormatTypeMapper::GetCodeGenerationOutputFormatTypeForName(
          codeGenerationOutputFormatStatusDetailsMapItem.first)] = codeGenerationOutputFormatStatusDetailsMapItem.second.AsObject();
    }
    m_codeGenerationOutputFormatStatusDetailsMapHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkMigrationCodeGenerationJobDetails::Jsonize() const {
  JsonValue payload;

  if (m_jobIDHasBeenSet) {
    payload.WithString("jobID", m_jobID);
  }

  if (m_networkMigrationExecutionIDHasBeenSet) {
    payload.WithString("networkMigrationExecutionID", m_networkMigrationExecutionID);
  }

  if (m_networkMigrationDefinitionIDHasBeenSet) {
    payload.WithString("networkMigrationDefinitionID", m_networkMigrationDefinitionID);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_endedAtHasBeenSet) {
    payload.WithDouble("endedAt", m_endedAt.SecondsWithMSPrecision());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", NetworkMigrationJobStatusMapper::GetNameForNetworkMigrationJobStatus(m_status));
  }

  if (m_statusDetailsHasBeenSet) {
    payload.WithString("statusDetails", m_statusDetails);
  }

  if (m_codeGenerationOutputFormatStatusDetailsMapHasBeenSet) {
    JsonValue codeGenerationOutputFormatStatusDetailsMapJsonMap;
    for (auto& codeGenerationOutputFormatStatusDetailsMapItem : m_codeGenerationOutputFormatStatusDetailsMap) {
      codeGenerationOutputFormatStatusDetailsMapJsonMap.WithObject(
          CodeGenerationOutputFormatTypeMapper::GetNameForCodeGenerationOutputFormatType(
              codeGenerationOutputFormatStatusDetailsMapItem.first),
          codeGenerationOutputFormatStatusDetailsMapItem.second.Jsonize());
    }
    payload.WithObject("codeGenerationOutputFormatStatusDetailsMap", std::move(codeGenerationOutputFormatStatusDetailsMapJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
