/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeOptedOutNumbersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeOptedOutNumbersResult::DescribeOptedOutNumbersResult()
{
}

DescribeOptedOutNumbersResult::DescribeOptedOutNumbersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeOptedOutNumbersResult& DescribeOptedOutNumbersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OptOutListArn"))
  {
    m_optOutListArn = jsonValue.GetString("OptOutListArn");

  }

  if(jsonValue.ValueExists("OptOutListName"))
  {
    m_optOutListName = jsonValue.GetString("OptOutListName");

  }

  if(jsonValue.ValueExists("OptedOutNumbers"))
  {
    Aws::Utils::Array<JsonView> optedOutNumbersJsonList = jsonValue.GetArray("OptedOutNumbers");
    for(unsigned optedOutNumbersIndex = 0; optedOutNumbersIndex < optedOutNumbersJsonList.GetLength(); ++optedOutNumbersIndex)
    {
      m_optedOutNumbers.push_back(optedOutNumbersJsonList[optedOutNumbersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
