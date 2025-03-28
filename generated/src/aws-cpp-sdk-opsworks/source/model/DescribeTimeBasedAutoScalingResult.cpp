﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeTimeBasedAutoScalingResult.h>
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

DescribeTimeBasedAutoScalingResult::DescribeTimeBasedAutoScalingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTimeBasedAutoScalingResult& DescribeTimeBasedAutoScalingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TimeBasedAutoScalingConfigurations"))
  {
    Aws::Utils::Array<JsonView> timeBasedAutoScalingConfigurationsJsonList = jsonValue.GetArray("TimeBasedAutoScalingConfigurations");
    for(unsigned timeBasedAutoScalingConfigurationsIndex = 0; timeBasedAutoScalingConfigurationsIndex < timeBasedAutoScalingConfigurationsJsonList.GetLength(); ++timeBasedAutoScalingConfigurationsIndex)
    {
      m_timeBasedAutoScalingConfigurations.push_back(timeBasedAutoScalingConfigurationsJsonList[timeBasedAutoScalingConfigurationsIndex].AsObject());
    }
    m_timeBasedAutoScalingConfigurationsHasBeenSet = true;
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
