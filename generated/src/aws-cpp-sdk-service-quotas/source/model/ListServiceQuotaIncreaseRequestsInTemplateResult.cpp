/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/ListServiceQuotaIncreaseRequestsInTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListServiceQuotaIncreaseRequestsInTemplateResult::ListServiceQuotaIncreaseRequestsInTemplateResult()
{
}

ListServiceQuotaIncreaseRequestsInTemplateResult::ListServiceQuotaIncreaseRequestsInTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListServiceQuotaIncreaseRequestsInTemplateResult& ListServiceQuotaIncreaseRequestsInTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ServiceQuotaIncreaseRequestInTemplateList"))
  {
    Aws::Utils::Array<JsonView> serviceQuotaIncreaseRequestInTemplateListJsonList = jsonValue.GetArray("ServiceQuotaIncreaseRequestInTemplateList");
    for(unsigned serviceQuotaIncreaseRequestInTemplateListIndex = 0; serviceQuotaIncreaseRequestInTemplateListIndex < serviceQuotaIncreaseRequestInTemplateListJsonList.GetLength(); ++serviceQuotaIncreaseRequestInTemplateListIndex)
    {
      m_serviceQuotaIncreaseRequestInTemplateList.push_back(serviceQuotaIncreaseRequestInTemplateListJsonList[serviceQuotaIncreaseRequestInTemplateListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
