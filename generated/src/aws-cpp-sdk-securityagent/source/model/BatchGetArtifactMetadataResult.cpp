/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityagent/model/BatchGetArtifactMetadataResult.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetArtifactMetadataResult::BatchGetArtifactMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

BatchGetArtifactMetadataResult& BatchGetArtifactMetadataResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("artifactMetadataList")) {
    Aws::Utils::Array<JsonView> artifactMetadataListJsonList = jsonValue.GetArray("artifactMetadataList");
    for (unsigned artifactMetadataListIndex = 0; artifactMetadataListIndex < artifactMetadataListJsonList.GetLength();
         ++artifactMetadataListIndex) {
      m_artifactMetadataList.push_back(artifactMetadataListJsonList[artifactMetadataListIndex].AsObject());
    }
    m_artifactMetadataListHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
