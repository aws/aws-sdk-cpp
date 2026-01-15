/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/opensearchserverless/model/BatchGetCollectionGroupResult.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetCollectionGroupResult::BatchGetCollectionGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

BatchGetCollectionGroupResult& BatchGetCollectionGroupResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("collectionGroupDetails")) {
    Aws::Utils::Array<JsonView> collectionGroupDetailsJsonList = jsonValue.GetArray("collectionGroupDetails");
    for (unsigned collectionGroupDetailsIndex = 0; collectionGroupDetailsIndex < collectionGroupDetailsJsonList.GetLength();
         ++collectionGroupDetailsIndex) {
      m_collectionGroupDetails.push_back(collectionGroupDetailsJsonList[collectionGroupDetailsIndex].AsObject());
    }
    m_collectionGroupDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("collectionGroupErrorDetails")) {
    Aws::Utils::Array<JsonView> collectionGroupErrorDetailsJsonList = jsonValue.GetArray("collectionGroupErrorDetails");
    for (unsigned collectionGroupErrorDetailsIndex = 0; collectionGroupErrorDetailsIndex < collectionGroupErrorDetailsJsonList.GetLength();
         ++collectionGroupErrorDetailsIndex) {
      m_collectionGroupErrorDetails.push_back(collectionGroupErrorDetailsJsonList[collectionGroupErrorDetailsIndex].AsObject());
    }
    m_collectionGroupErrorDetailsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
