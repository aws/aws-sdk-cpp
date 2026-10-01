/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityhub/model/ListExposuresByRemediationV2Result.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListExposuresByRemediationV2Result::ListExposuresByRemediationV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListExposuresByRemediationV2Result& ListExposuresByRemediationV2Result::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Items")) {
    Aws::Utils::Array<JsonView> itemsJsonList = jsonValue.GetArray("Items");
    for (unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex) {
      m_items.push_back(itemsJsonList[itemsIndex].AsObject());
    }
    m_itemsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetUid")) {
    m_targetUid = jsonValue.GetString("TargetUid");
    m_targetUidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Resource")) {
    m_resource = jsonValue.GetObject("Resource");
    m_resourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalCount")) {
    m_totalCount = jsonValue.GetInteger("TotalCount");
    m_totalCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Trait")) {
    m_trait = jsonValue.GetObject("Trait");
    m_traitHasBeenSet = true;
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
