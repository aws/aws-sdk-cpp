/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeAccountLimitsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAccountLimitsResult::DescribeAccountLimitsResult()
{
}

DescribeAccountLimitsResult::DescribeAccountLimitsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAccountLimitsResult& DescribeAccountLimitsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccountLimits"))
  {
    Aws::Utils::Array<JsonView> accountLimitsJsonList = jsonValue.GetArray("AccountLimits");
    for(unsigned accountLimitsIndex = 0; accountLimitsIndex < accountLimitsJsonList.GetLength(); ++accountLimitsIndex)
    {
      m_accountLimits.push_back(accountLimitsJsonList[accountLimitsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
