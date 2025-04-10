﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeAutomationExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAutomationExecutionsResult::DescribeAutomationExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAutomationExecutionsResult& DescribeAutomationExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AutomationExecutionMetadataList"))
  {
    Aws::Utils::Array<JsonView> automationExecutionMetadataListJsonList = jsonValue.GetArray("AutomationExecutionMetadataList");
    for(unsigned automationExecutionMetadataListIndex = 0; automationExecutionMetadataListIndex < automationExecutionMetadataListJsonList.GetLength(); ++automationExecutionMetadataListIndex)
    {
      m_automationExecutionMetadataList.push_back(automationExecutionMetadataListJsonList[automationExecutionMetadataListIndex].AsObject());
    }
    m_automationExecutionMetadataListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
