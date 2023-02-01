/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/DescribeTrustedAdvisorCheckRefreshStatusesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTrustedAdvisorCheckRefreshStatusesResult::DescribeTrustedAdvisorCheckRefreshStatusesResult()
{
}

DescribeTrustedAdvisorCheckRefreshStatusesResult::DescribeTrustedAdvisorCheckRefreshStatusesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTrustedAdvisorCheckRefreshStatusesResult& DescribeTrustedAdvisorCheckRefreshStatusesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("statuses"))
  {
    Aws::Utils::Array<JsonView> statusesJsonList = jsonValue.GetArray("statuses");
    for(unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex)
    {
      m_statuses.push_back(statusesJsonList[statusesIndex].AsObject());
    }
  }



  return *this;
}
