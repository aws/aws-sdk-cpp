﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/CreateFindingAggregatorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateFindingAggregatorResult::CreateFindingAggregatorResult()
{
}

CreateFindingAggregatorResult::CreateFindingAggregatorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateFindingAggregatorResult& CreateFindingAggregatorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FindingAggregatorArn"))
  {
    m_findingAggregatorArn = jsonValue.GetString("FindingAggregatorArn");

  }

  if(jsonValue.ValueExists("FindingAggregationRegion"))
  {
    m_findingAggregationRegion = jsonValue.GetString("FindingAggregationRegion");

  }

  if(jsonValue.ValueExists("RegionLinkingMode"))
  {
    m_regionLinkingMode = jsonValue.GetString("RegionLinkingMode");

  }

  if(jsonValue.ValueExists("Regions"))
  {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("Regions");
    for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
    {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
