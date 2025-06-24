/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/UpdateAggregatorV2Result.h>
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

UpdateAggregatorV2Result::UpdateAggregatorV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateAggregatorV2Result& UpdateAggregatorV2Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AggregatorV2Arn"))
  {
    m_aggregatorV2Arn = jsonValue.GetString("AggregatorV2Arn");
    m_aggregatorV2ArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AggregationRegion"))
  {
    m_aggregationRegion = jsonValue.GetString("AggregationRegion");
    m_aggregationRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegionLinkingMode"))
  {
    m_regionLinkingMode = jsonValue.GetString("RegionLinkingMode");
    m_regionLinkingModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LinkedRegions"))
  {
    Aws::Utils::Array<JsonView> linkedRegionsJsonList = jsonValue.GetArray("LinkedRegions");
    for(unsigned linkedRegionsIndex = 0; linkedRegionsIndex < linkedRegionsJsonList.GetLength(); ++linkedRegionsIndex)
    {
      m_linkedRegions.push_back(linkedRegionsJsonList[linkedRegionsIndex].AsString());
    }
    m_linkedRegionsHasBeenSet = true;
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
