/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/mgn/model/UpdateNetworkMigrationMapperSegmentResult.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateNetworkMigrationMapperSegmentResult::UpdateNetworkMigrationMapperSegmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

UpdateNetworkMigrationMapperSegmentResult& UpdateNetworkMigrationMapperSegmentResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
