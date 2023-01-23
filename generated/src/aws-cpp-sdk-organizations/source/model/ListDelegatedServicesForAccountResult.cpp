/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/ListDelegatedServicesForAccountResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDelegatedServicesForAccountResult::ListDelegatedServicesForAccountResult()
{
}

ListDelegatedServicesForAccountResult::ListDelegatedServicesForAccountResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDelegatedServicesForAccountResult& ListDelegatedServicesForAccountResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DelegatedServices"))
  {
    Aws::Utils::Array<JsonView> delegatedServicesJsonList = jsonValue.GetArray("DelegatedServices");
    for(unsigned delegatedServicesIndex = 0; delegatedServicesIndex < delegatedServicesJsonList.GetLength(); ++delegatedServicesIndex)
    {
      m_delegatedServices.push_back(delegatedServicesJsonList[delegatedServicesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
