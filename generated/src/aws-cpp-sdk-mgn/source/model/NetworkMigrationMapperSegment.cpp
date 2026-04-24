/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mgn/model/NetworkMigrationMapperSegment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

NetworkMigrationMapperSegment::NetworkMigrationMapperSegment(JsonView jsonValue) { *this = jsonValue; }

NetworkMigrationMapperSegment& NetworkMigrationMapperSegment::operator=(JsonView jsonValue) {
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
    m_segmentType =
        NetworkMigrationMapperSegmentTypeMapper::GetNetworkMigrationMapperSegmentTypeForName(jsonValue.GetString("segmentType"));
    m_segmentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logicalID")) {
    m_logicalID = jsonValue.GetString("logicalID");
    m_logicalIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("checksum")) {
    m_checksum = jsonValue.GetObject("checksum");
    m_checksumHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputS3Configuration")) {
    m_outputS3Configuration = jsonValue.GetObject("outputS3Configuration");
    m_outputS3ConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopeTags")) {
    Aws::Map<Aws::String, JsonView> scopeTagsJsonMap = jsonValue.GetObject("scopeTags").GetAllObjects();
    for (auto& scopeTagsItem : scopeTagsJsonMap) {
      m_scopeTags[scopeTagsItem.first] = scopeTagsItem.second.AsString();
    }
    m_scopeTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetAccount")) {
    m_targetAccount = jsonValue.GetString("targetAccount");
    m_targetAccountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("referencedSegments")) {
    Aws::Utils::Array<JsonView> referencedSegmentsJsonList = jsonValue.GetArray("referencedSegments");
    for (unsigned referencedSegmentsIndex = 0; referencedSegmentsIndex < referencedSegmentsJsonList.GetLength();
         ++referencedSegmentsIndex) {
      m_referencedSegments.push_back(referencedSegmentsJsonList[referencedSegmentsIndex].AsString());
    }
    m_referencedSegmentsHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkMigrationMapperSegment::Jsonize() const {
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
    payload.WithString("segmentType", NetworkMigrationMapperSegmentTypeMapper::GetNameForNetworkMigrationMapperSegmentType(m_segmentType));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_logicalIDHasBeenSet) {
    payload.WithString("logicalID", m_logicalID);
  }

  if (m_checksumHasBeenSet) {
    payload.WithObject("checksum", m_checksum.Jsonize());
  }

  if (m_outputS3ConfigurationHasBeenSet) {
    payload.WithObject("outputS3Configuration", m_outputS3Configuration.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_scopeTagsHasBeenSet) {
    JsonValue scopeTagsJsonMap;
    for (auto& scopeTagsItem : m_scopeTags) {
      scopeTagsJsonMap.WithString(scopeTagsItem.first, scopeTagsItem.second);
    }
    payload.WithObject("scopeTags", std::move(scopeTagsJsonMap));
  }

  if (m_targetAccountHasBeenSet) {
    payload.WithString("targetAccount", m_targetAccount);
  }

  if (m_referencedSegmentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> referencedSegmentsJsonList(m_referencedSegments.size());
    for (unsigned referencedSegmentsIndex = 0; referencedSegmentsIndex < referencedSegmentsJsonList.GetLength();
         ++referencedSegmentsIndex) {
      referencedSegmentsJsonList[referencedSegmentsIndex].AsString(m_referencedSegments[referencedSegmentsIndex]);
    }
    payload.WithArray("referencedSegments", std::move(referencedSegmentsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
