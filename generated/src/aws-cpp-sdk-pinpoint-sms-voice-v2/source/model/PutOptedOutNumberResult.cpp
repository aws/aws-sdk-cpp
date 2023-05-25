/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/PutOptedOutNumberResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutOptedOutNumberResult::PutOptedOutNumberResult() : 
    m_endUserOptedOut(false)
{
}

PutOptedOutNumberResult::PutOptedOutNumberResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_endUserOptedOut(false)
{
  *this = result;
}

PutOptedOutNumberResult& PutOptedOutNumberResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("OptedOutNumber"))
  {
    m_optedOutNumber = jsonValue.GetString("OptedOutNumber");

  }

  if(jsonValue.ValueExists("OptedOutTimestamp"))
  {
    m_optedOutTimestamp = jsonValue.GetDouble("OptedOutTimestamp");

  }

  if(jsonValue.ValueExists("EndUserOptedOut"))
  {
    m_endUserOptedOut = jsonValue.GetBool("EndUserOptedOut");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
