/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ListAppComponentCompliancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAppComponentCompliancesResult::ListAppComponentCompliancesResult()
{
}

ListAppComponentCompliancesResult::ListAppComponentCompliancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAppComponentCompliancesResult& ListAppComponentCompliancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("componentCompliances"))
  {
    Aws::Utils::Array<JsonView> componentCompliancesJsonList = jsonValue.GetArray("componentCompliances");
    for(unsigned componentCompliancesIndex = 0; componentCompliancesIndex < componentCompliancesJsonList.GetLength(); ++componentCompliancesIndex)
    {
      m_componentCompliances.push_back(componentCompliancesJsonList[componentCompliancesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
