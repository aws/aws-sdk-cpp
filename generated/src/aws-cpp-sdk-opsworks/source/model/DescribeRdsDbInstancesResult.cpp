/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeRdsDbInstancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRdsDbInstancesResult::DescribeRdsDbInstancesResult()
{
}

DescribeRdsDbInstancesResult::DescribeRdsDbInstancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRdsDbInstancesResult& DescribeRdsDbInstancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RdsDbInstances"))
  {
    Aws::Utils::Array<JsonView> rdsDbInstancesJsonList = jsonValue.GetArray("RdsDbInstances");
    for(unsigned rdsDbInstancesIndex = 0; rdsDbInstancesIndex < rdsDbInstancesJsonList.GetLength(); ++rdsDbInstancesIndex)
    {
      m_rdsDbInstances.push_back(rdsDbInstancesJsonList[rdsDbInstancesIndex].AsObject());
    }
  }



  return *this;
}
