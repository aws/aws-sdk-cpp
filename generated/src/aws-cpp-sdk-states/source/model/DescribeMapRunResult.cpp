/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/DescribeMapRunResult.h>
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

DescribeMapRunResult::DescribeMapRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeMapRunResult& DescribeMapRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("mapRunArn"))
  {
    m_mapRunArn = jsonValue.GetString("mapRunArn");
    m_mapRunArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionArn"))
  {
    m_executionArn = jsonValue.GetString("executionArn");
    m_executionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = MapRunStatusMapper::GetMapRunStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startDate"))
  {
    m_startDate = jsonValue.GetDouble("startDate");
    m_startDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stopDate"))
  {
    m_stopDate = jsonValue.GetDouble("stopDate");
    m_stopDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxConcurrency"))
  {
    m_maxConcurrency = jsonValue.GetInteger("maxConcurrency");
    m_maxConcurrencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("toleratedFailurePercentage"))
  {
    m_toleratedFailurePercentage = jsonValue.GetDouble("toleratedFailurePercentage");
    m_toleratedFailurePercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("toleratedFailureCount"))
  {
    m_toleratedFailureCount = jsonValue.GetInt64("toleratedFailureCount");
    m_toleratedFailureCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("itemCounts"))
  {
    m_itemCounts = jsonValue.GetObject("itemCounts");
    m_itemCountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionCounts"))
  {
    m_executionCounts = jsonValue.GetObject("executionCounts");
    m_executionCountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("redriveCount"))
  {
    m_redriveCount = jsonValue.GetInteger("redriveCount");
    m_redriveCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("redriveDate"))
  {
    m_redriveDate = jsonValue.GetDouble("redriveDate");
    m_redriveDateHasBeenSet = true;
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
