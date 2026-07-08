/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ssm/model/ListCloudConnectorsResult.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCloudConnectorsResult::ListCloudConnectorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListCloudConnectorsResult& ListCloudConnectorsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("CloudConnectors")) {
    Aws::Utils::Array<JsonView> cloudConnectorsJsonList = jsonValue.GetArray("CloudConnectors");
    for (unsigned cloudConnectorsIndex = 0; cloudConnectorsIndex < cloudConnectorsJsonList.GetLength(); ++cloudConnectorsIndex) {
      m_cloudConnectors.push_back(cloudConnectorsJsonList[cloudConnectorsIndex].AsObject());
    }
    m_cloudConnectorsHasBeenSet = true;
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
