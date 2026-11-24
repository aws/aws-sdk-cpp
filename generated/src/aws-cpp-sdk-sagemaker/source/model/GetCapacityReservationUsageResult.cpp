/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker/model/GetCapacityReservationUsageResult.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCapacityReservationUsageResult::GetCapacityReservationUsageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetCapacityReservationUsageResult& GetCapacityReservationUsageResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("SMCapacityReservationId")) {
    m_sMCapacityReservationId = jsonValue.GetString("SMCapacityReservationId");
    m_sMCapacityReservationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalInstanceCount")) {
    m_totalInstanceCount = jsonValue.GetInteger("TotalInstanceCount");
    m_totalInstanceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AvailableInstanceCount")) {
    m_availableInstanceCount = jsonValue.GetInteger("AvailableInstanceCount");
    m_availableInstanceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastRefreshTime")) {
    m_lastRefreshTime = jsonValue.GetDouble("LastRefreshTime");
    m_lastRefreshTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstanceUsageSet")) {
    Aws::Utils::Array<JsonView> instanceUsageSetJsonList = jsonValue.GetArray("InstanceUsageSet");
    for (unsigned instanceUsageSetIndex = 0; instanceUsageSetIndex < instanceUsageSetJsonList.GetLength(); ++instanceUsageSetIndex) {
      m_instanceUsageSet.push_back(instanceUsageSetJsonList[instanceUsageSetIndex].AsObject());
    }
    m_instanceUsageSetHasBeenSet = true;
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
