/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeBandwidthRateLimitScheduleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeBandwidthRateLimitScheduleResult::DescribeBandwidthRateLimitScheduleResult()
{
}

DescribeBandwidthRateLimitScheduleResult::DescribeBandwidthRateLimitScheduleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeBandwidthRateLimitScheduleResult& DescribeBandwidthRateLimitScheduleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

  }

  if(jsonValue.ValueExists("BandwidthRateLimitIntervals"))
  {
    Aws::Utils::Array<JsonView> bandwidthRateLimitIntervalsJsonList = jsonValue.GetArray("BandwidthRateLimitIntervals");
    for(unsigned bandwidthRateLimitIntervalsIndex = 0; bandwidthRateLimitIntervalsIndex < bandwidthRateLimitIntervalsJsonList.GetLength(); ++bandwidthRateLimitIntervalsIndex)
    {
      m_bandwidthRateLimitIntervals.push_back(bandwidthRateLimitIntervalsJsonList[bandwidthRateLimitIntervalsIndex].AsObject());
    }
  }



  return *this;
}
