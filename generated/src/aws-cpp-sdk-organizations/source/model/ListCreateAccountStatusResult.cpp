/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/ListCreateAccountStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCreateAccountStatusResult::ListCreateAccountStatusResult()
{
}

ListCreateAccountStatusResult::ListCreateAccountStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCreateAccountStatusResult& ListCreateAccountStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CreateAccountStatuses"))
  {
    Aws::Utils::Array<JsonView> createAccountStatusesJsonList = jsonValue.GetArray("CreateAccountStatuses");
    for(unsigned createAccountStatusesIndex = 0; createAccountStatusesIndex < createAccountStatusesJsonList.GetLength(); ++createAccountStatusesIndex)
    {
      m_createAccountStatuses.push_back(createAccountStatusesJsonList[createAccountStatusesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
