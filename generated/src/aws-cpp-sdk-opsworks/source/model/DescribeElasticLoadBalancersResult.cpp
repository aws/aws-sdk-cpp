﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeElasticLoadBalancersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeElasticLoadBalancersResult::DescribeElasticLoadBalancersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeElasticLoadBalancersResult& DescribeElasticLoadBalancersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ElasticLoadBalancers"))
  {
    Aws::Utils::Array<JsonView> elasticLoadBalancersJsonList = jsonValue.GetArray("ElasticLoadBalancers");
    for(unsigned elasticLoadBalancersIndex = 0; elasticLoadBalancersIndex < elasticLoadBalancersJsonList.GetLength(); ++elasticLoadBalancersIndex)
    {
      m_elasticLoadBalancers.push_back(elasticLoadBalancersJsonList[elasticLoadBalancersIndex].AsObject());
    }
    m_elasticLoadBalancersHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
