/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeAccountAttributesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAccountAttributesResult::DescribeAccountAttributesResult()
{
}

DescribeAccountAttributesResult::DescribeAccountAttributesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAccountAttributesResult& DescribeAccountAttributesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccountAttributes"))
  {
    Aws::Utils::Array<JsonView> accountAttributesJsonList = jsonValue.GetArray("AccountAttributes");
    for(unsigned accountAttributesIndex = 0; accountAttributesIndex < accountAttributesJsonList.GetLength(); ++accountAttributesIndex)
    {
      m_accountAttributes.push_back(accountAttributesJsonList[accountAttributesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
