/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/ListServiceQuotasResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListServiceQuotasResult::ListServiceQuotasResult()
{
}

ListServiceQuotasResult::ListServiceQuotasResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListServiceQuotasResult& ListServiceQuotasResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Quotas"))
  {
    Aws::Utils::Array<JsonView> quotasJsonList = jsonValue.GetArray("Quotas");
    for(unsigned quotasIndex = 0; quotasIndex < quotasJsonList.GetLength(); ++quotasIndex)
    {
      m_quotas.push_back(quotasJsonList[quotasIndex].AsObject());
    }
  }



  return *this;
}
