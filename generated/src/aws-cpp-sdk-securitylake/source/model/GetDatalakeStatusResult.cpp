/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/GetDatalakeStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDatalakeStatusResult::GetDatalakeStatusResult()
{
}

GetDatalakeStatusResult::GetDatalakeStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDatalakeStatusResult& GetDatalakeStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accountSourcesList"))
  {
    Aws::Utils::Array<JsonView> accountSourcesListJsonList = jsonValue.GetArray("accountSourcesList");
    for(unsigned accountSourcesListIndex = 0; accountSourcesListIndex < accountSourcesListJsonList.GetLength(); ++accountSourcesListIndex)
    {
      m_accountSourcesList.push_back(accountSourcesListJsonList[accountSourcesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
