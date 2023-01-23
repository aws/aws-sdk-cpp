/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ListEnvironmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEnvironmentsResult::ListEnvironmentsResult()
{
}

ListEnvironmentsResult::ListEnvironmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEnvironmentsResult& ListEnvironmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("environments"))
  {
    Aws::Utils::Array<JsonView> environmentsJsonList = jsonValue.GetArray("environments");
    for(unsigned environmentsIndex = 0; environmentsIndex < environmentsJsonList.GetLength(); ++environmentsIndex)
    {
      m_environments.push_back(environmentsJsonList[environmentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
