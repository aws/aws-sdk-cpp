/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeAutomationStepExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAutomationStepExecutionsResult::DescribeAutomationStepExecutionsResult()
{
}

DescribeAutomationStepExecutionsResult::DescribeAutomationStepExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAutomationStepExecutionsResult& DescribeAutomationStepExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StepExecutions"))
  {
    Aws::Utils::Array<JsonView> stepExecutionsJsonList = jsonValue.GetArray("StepExecutions");
    for(unsigned stepExecutionsIndex = 0; stepExecutionsIndex < stepExecutionsJsonList.GetLength(); ++stepExecutionsIndex)
    {
      m_stepExecutions.push_back(stepExecutionsJsonList[stepExecutionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
