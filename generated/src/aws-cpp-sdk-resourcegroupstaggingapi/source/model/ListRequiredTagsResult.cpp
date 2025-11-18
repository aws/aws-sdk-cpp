/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/resourcegroupstaggingapi/model/ListRequiredTagsResult.h>

#include <utility>

using namespace Aws::ResourceGroupsTaggingAPI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRequiredTagsResult::ListRequiredTagsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListRequiredTagsResult& ListRequiredTagsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("RequiredTags")) {
    Aws::Utils::Array<JsonView> requiredTagsJsonList = jsonValue.GetArray("RequiredTags");
    for (unsigned requiredTagsIndex = 0; requiredTagsIndex < requiredTagsJsonList.GetLength(); ++requiredTagsIndex) {
      m_requiredTags.push_back(requiredTagsJsonList[requiredTagsIndex].AsObject());
    }
    m_requiredTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
