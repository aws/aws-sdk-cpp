/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/DescribeWorkflowExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeWorkflowExecutionResult::DescribeWorkflowExecutionResult()
{
}

DescribeWorkflowExecutionResult::DescribeWorkflowExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeWorkflowExecutionResult& DescribeWorkflowExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("executionInfo"))
  {
    m_executionInfo = jsonValue.GetObject("executionInfo");

  }

  if(jsonValue.ValueExists("executionConfiguration"))
  {
    m_executionConfiguration = jsonValue.GetObject("executionConfiguration");

  }

  if(jsonValue.ValueExists("openCounts"))
  {
    m_openCounts = jsonValue.GetObject("openCounts");

  }

  if(jsonValue.ValueExists("latestActivityTaskTimestamp"))
  {
    m_latestActivityTaskTimestamp = jsonValue.GetDouble("latestActivityTaskTimestamp");

  }

  if(jsonValue.ValueExists("latestExecutionContext"))
  {
    m_latestExecutionContext = jsonValue.GetString("latestExecutionContext");

  }



  return *this;
}
