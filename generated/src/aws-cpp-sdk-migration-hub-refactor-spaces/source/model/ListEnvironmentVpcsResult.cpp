﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/ListEnvironmentVpcsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MigrationHubRefactorSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEnvironmentVpcsResult::ListEnvironmentVpcsResult()
{
}

ListEnvironmentVpcsResult::ListEnvironmentVpcsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEnvironmentVpcsResult& ListEnvironmentVpcsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EnvironmentVpcList"))
  {
    Aws::Utils::Array<JsonView> environmentVpcListJsonList = jsonValue.GetArray("EnvironmentVpcList");
    for(unsigned environmentVpcListIndex = 0; environmentVpcListIndex < environmentVpcListJsonList.GetLength(); ++environmentVpcListIndex)
    {
      m_environmentVpcList.push_back(environmentVpcListJsonList[environmentVpcListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
