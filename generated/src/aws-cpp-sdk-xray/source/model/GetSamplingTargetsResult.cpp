/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/GetSamplingTargetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSamplingTargetsResult::GetSamplingTargetsResult()
{
}

GetSamplingTargetsResult::GetSamplingTargetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSamplingTargetsResult& GetSamplingTargetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SamplingTargetDocuments"))
  {
    Aws::Utils::Array<JsonView> samplingTargetDocumentsJsonList = jsonValue.GetArray("SamplingTargetDocuments");
    for(unsigned samplingTargetDocumentsIndex = 0; samplingTargetDocumentsIndex < samplingTargetDocumentsJsonList.GetLength(); ++samplingTargetDocumentsIndex)
    {
      m_samplingTargetDocuments.push_back(samplingTargetDocumentsJsonList[samplingTargetDocumentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("LastRuleModification"))
  {
    m_lastRuleModification = jsonValue.GetDouble("LastRuleModification");

  }

  if(jsonValue.ValueExists("UnprocessedStatistics"))
  {
    Aws::Utils::Array<JsonView> unprocessedStatisticsJsonList = jsonValue.GetArray("UnprocessedStatistics");
    for(unsigned unprocessedStatisticsIndex = 0; unprocessedStatisticsIndex < unprocessedStatisticsJsonList.GetLength(); ++unprocessedStatisticsIndex)
    {
      m_unprocessedStatistics.push_back(unprocessedStatisticsJsonList[unprocessedStatisticsIndex].AsObject());
    }
  }



  return *this;
}
