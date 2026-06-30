/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/network-firewall/model/ListContainerAssociationsResult.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListContainerAssociationsResult::ListContainerAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListContainerAssociationsResult& ListContainerAssociationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ContainerAssociations")) {
    Aws::Utils::Array<JsonView> containerAssociationsJsonList = jsonValue.GetArray("ContainerAssociations");
    for (unsigned containerAssociationsIndex = 0; containerAssociationsIndex < containerAssociationsJsonList.GetLength();
         ++containerAssociationsIndex) {
      m_containerAssociations.push_back(containerAssociationsJsonList[containerAssociationsIndex].AsObject());
    }
    m_containerAssociationsHasBeenSet = true;
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
