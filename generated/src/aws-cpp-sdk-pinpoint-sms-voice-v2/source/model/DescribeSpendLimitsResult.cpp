/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeSpendLimitsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSpendLimitsResult::DescribeSpendLimitsResult()
{
}

DescribeSpendLimitsResult::DescribeSpendLimitsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSpendLimitsResult& DescribeSpendLimitsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SpendLimits"))
  {
    Aws::Utils::Array<JsonView> spendLimitsJsonList = jsonValue.GetArray("SpendLimits");
    for(unsigned spendLimitsIndex = 0; spendLimitsIndex < spendLimitsJsonList.GetLength(); ++spendLimitsIndex)
    {
      m_spendLimits.push_back(spendLimitsJsonList[spendLimitsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
