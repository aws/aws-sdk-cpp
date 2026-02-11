/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ram/model/ListSourceAssociationsResult.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSourceAssociationsResult::ListSourceAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListSourceAssociationsResult& ListSourceAssociationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_responseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("sourceAssociations")) {
    Aws::Utils::Array<JsonView> sourceAssociationsJsonList = jsonValue.GetArray("sourceAssociations");
    for (unsigned sourceAssociationsIndex = 0; sourceAssociationsIndex < sourceAssociationsJsonList.GetLength();
         ++sourceAssociationsIndex) {
      m_sourceAssociations.push_back(sourceAssociationsJsonList[sourceAssociationsIndex].AsObject());
    }
    m_sourceAssociationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
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
