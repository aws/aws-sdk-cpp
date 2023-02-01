/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/ListDeliverabilityTestReportsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDeliverabilityTestReportsResult::ListDeliverabilityTestReportsResult()
{
}

ListDeliverabilityTestReportsResult::ListDeliverabilityTestReportsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDeliverabilityTestReportsResult& ListDeliverabilityTestReportsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeliverabilityTestReports"))
  {
    Aws::Utils::Array<JsonView> deliverabilityTestReportsJsonList = jsonValue.GetArray("DeliverabilityTestReports");
    for(unsigned deliverabilityTestReportsIndex = 0; deliverabilityTestReportsIndex < deliverabilityTestReportsJsonList.GetLength(); ++deliverabilityTestReportsIndex)
    {
      m_deliverabilityTestReports.push_back(deliverabilityTestReportsJsonList[deliverabilityTestReportsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
