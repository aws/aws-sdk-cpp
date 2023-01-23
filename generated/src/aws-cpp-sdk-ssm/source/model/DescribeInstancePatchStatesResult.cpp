/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeInstancePatchStatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeInstancePatchStatesResult::DescribeInstancePatchStatesResult()
{
}

DescribeInstancePatchStatesResult::DescribeInstancePatchStatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeInstancePatchStatesResult& DescribeInstancePatchStatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InstancePatchStates"))
  {
    Aws::Utils::Array<JsonView> instancePatchStatesJsonList = jsonValue.GetArray("InstancePatchStates");
    for(unsigned instancePatchStatesIndex = 0; instancePatchStatesIndex < instancePatchStatesJsonList.GetLength(); ++instancePatchStatesIndex)
    {
      m_instancePatchStates.push_back(instancePatchStatesJsonList[instancePatchStatesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
