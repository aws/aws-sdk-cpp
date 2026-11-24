/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/quicksight/model/ListInboundConnectorApplicationAssociationsResult.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInboundConnectorApplicationAssociationsResult::ListInboundConnectorApplicationAssociationsResult(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListInboundConnectorApplicationAssociationsResult& ListInboundConnectorApplicationAssociationsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ApplicationAssociations")) {
    Aws::Utils::Array<JsonView> applicationAssociationsJsonList = jsonValue.GetArray("ApplicationAssociations");
    for (unsigned applicationAssociationsIndex = 0; applicationAssociationsIndex < applicationAssociationsJsonList.GetLength();
         ++applicationAssociationsIndex) {
      m_applicationAssociations.push_back(applicationAssociationsJsonList[applicationAssociationsIndex].AsObject());
    }
    m_applicationAssociationsHasBeenSet = true;
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

  m_status = static_cast<int>(result.GetResponseCode());
  m_statusHasBeenSet = true;
  return *this;
}
