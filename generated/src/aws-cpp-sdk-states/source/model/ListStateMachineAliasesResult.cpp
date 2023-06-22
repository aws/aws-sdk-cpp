/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ListStateMachineAliasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SFN::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStateMachineAliasesResult::ListStateMachineAliasesResult()
{
}

ListStateMachineAliasesResult::ListStateMachineAliasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStateMachineAliasesResult& ListStateMachineAliasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("stateMachineAliases"))
  {
    Aws::Utils::Array<JsonView> stateMachineAliasesJsonList = jsonValue.GetArray("stateMachineAliases");
    for(unsigned stateMachineAliasesIndex = 0; stateMachineAliasesIndex < stateMachineAliasesJsonList.GetLength(); ++stateMachineAliasesIndex)
    {
      m_stateMachineAliases.push_back(stateMachineAliasesJsonList[stateMachineAliasesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
