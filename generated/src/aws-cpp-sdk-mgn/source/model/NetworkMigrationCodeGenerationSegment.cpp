/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/NetworkMigrationCodeGenerationSegment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

NetworkMigrationCodeGenerationSegment::NetworkMigrationCodeGenerationSegment(JsonView jsonValue) { *this = jsonValue; }

NetworkMigrationCodeGenerationSegment& NetworkMigrationCodeGenerationSegment::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("segmentID")) {
    m_segmentID = jsonValue.GetString("segmentID");
    m_segmentIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("segmentType")) {
    m_segmentType = NetworkMigrationCodeGenerationSegmentTypeMapper::GetNetworkMigrationCodeGenerationSegmentTypeForName(
        jsonValue.GetString("segmentType"));
    m_segmentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logicalID")) {
    m_logicalID = jsonValue.GetString("logicalID");
    m_logicalIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mapperSegmentID")) {
    m_mapperSegmentID = jsonValue.GetString("mapperSegmentID");
    m_mapperSegmentIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("artifacts")) {
    Aws::Utils::Array<JsonView> artifactsJsonList = jsonValue.GetArray("artifacts");
    for (unsigned artifactsIndex = 0; artifactsIndex < artifactsJsonList.GetLength(); ++artifactsIndex) {
      m_artifacts.push_back(artifactsJsonList[artifactsIndex].AsObject());
    }
    m_artifactsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkMigrationCodeGenerationSegment::Jsonize() const {
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

  if (m_segmentIDHasBeenSet) {
    payload.WithString("segmentID", m_segmentID);
  }

  if (m_segmentTypeHasBeenSet) {
    payload.WithString("segmentType",
                       NetworkMigrationCodeGenerationSegmentTypeMapper::GetNameForNetworkMigrationCodeGenerationSegmentType(m_segmentType));
  }

  if (m_logicalIDHasBeenSet) {
    payload.WithString("logicalID", m_logicalID);
  }

  if (m_mapperSegmentIDHasBeenSet) {
    payload.WithString("mapperSegmentID", m_mapperSegmentID);
  }

  if (m_artifactsHasBeenSet) {
    Aws::Utils::Array<JsonValue> artifactsJsonList(m_artifacts.size());
    for (unsigned artifactsIndex = 0; artifactsIndex < artifactsJsonList.GetLength(); ++artifactsIndex) {
      artifactsJsonList[artifactsIndex].AsObject(m_artifacts[artifactsIndex].Jsonize());
    }
    payload.WithArray("artifacts", std::move(artifactsJsonList));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
