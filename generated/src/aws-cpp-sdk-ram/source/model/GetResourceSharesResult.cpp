/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/GetResourceSharesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourceSharesResult::GetResourceSharesResult()
{
}

GetResourceSharesResult::GetResourceSharesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResourceSharesResult& GetResourceSharesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("resourceShares"))
  {
    Aws::Utils::Array<JsonView> resourceSharesJsonList = jsonValue.GetArray("resourceShares");
    for(unsigned resourceSharesIndex = 0; resourceSharesIndex < resourceSharesJsonList.GetLength(); ++resourceSharesIndex)
    {
      m_resourceShares.push_back(resourceSharesJsonList[resourceSharesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
