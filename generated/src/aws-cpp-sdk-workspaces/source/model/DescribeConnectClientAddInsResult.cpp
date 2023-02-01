/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeConnectClientAddInsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConnectClientAddInsResult::DescribeConnectClientAddInsResult()
{
}

DescribeConnectClientAddInsResult::DescribeConnectClientAddInsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConnectClientAddInsResult& DescribeConnectClientAddInsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AddIns"))
  {
    Aws::Utils::Array<JsonView> addInsJsonList = jsonValue.GetArray("AddIns");
    for(unsigned addInsIndex = 0; addInsIndex < addInsJsonList.GetLength(); ++addInsIndex)
    {
      m_addIns.push_back(addInsJsonList[addInsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
