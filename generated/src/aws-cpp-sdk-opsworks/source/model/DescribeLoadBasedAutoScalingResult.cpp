/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeLoadBasedAutoScalingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLoadBasedAutoScalingResult::DescribeLoadBasedAutoScalingResult()
{
}

DescribeLoadBasedAutoScalingResult::DescribeLoadBasedAutoScalingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeLoadBasedAutoScalingResult& DescribeLoadBasedAutoScalingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LoadBasedAutoScalingConfigurations"))
  {
    Aws::Utils::Array<JsonView> loadBasedAutoScalingConfigurationsJsonList = jsonValue.GetArray("LoadBasedAutoScalingConfigurations");
    for(unsigned loadBasedAutoScalingConfigurationsIndex = 0; loadBasedAutoScalingConfigurationsIndex < loadBasedAutoScalingConfigurationsJsonList.GetLength(); ++loadBasedAutoScalingConfigurationsIndex)
    {
      m_loadBasedAutoScalingConfigurations.push_back(loadBasedAutoScalingConfigurationsJsonList[loadBasedAutoScalingConfigurationsIndex].AsObject());
    }
  }



  return *this;
}
