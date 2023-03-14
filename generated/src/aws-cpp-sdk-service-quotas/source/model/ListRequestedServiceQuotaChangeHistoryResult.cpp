/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRequestedServiceQuotaChangeHistoryResult::ListRequestedServiceQuotaChangeHistoryResult()
{
}

ListRequestedServiceQuotaChangeHistoryResult::ListRequestedServiceQuotaChangeHistoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRequestedServiceQuotaChangeHistoryResult& ListRequestedServiceQuotaChangeHistoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("RequestedQuotas"))
  {
    Aws::Utils::Array<JsonView> requestedQuotasJsonList = jsonValue.GetArray("RequestedQuotas");
    for(unsigned requestedQuotasIndex = 0; requestedQuotasIndex < requestedQuotasJsonList.GetLength(); ++requestedQuotasIndex)
    {
      m_requestedQuotas.push_back(requestedQuotasJsonList[requestedQuotasIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
