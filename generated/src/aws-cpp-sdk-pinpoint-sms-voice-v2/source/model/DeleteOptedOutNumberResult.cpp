/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DeleteOptedOutNumberResult.h>
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

DeleteOptedOutNumberResult::DeleteOptedOutNumberResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteOptedOutNumberResult& DeleteOptedOutNumberResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OptOutListArn"))
  {
    m_optOutListArn = jsonValue.GetString("OptOutListArn");
    m_optOutListArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptOutListName"))
  {
    m_optOutListName = jsonValue.GetString("OptOutListName");
    m_optOutListNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptedOutNumber"))
  {
    m_optedOutNumber = jsonValue.GetString("OptedOutNumber");
    m_optedOutNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OptedOutTimestamp"))
  {
    m_optedOutTimestamp = jsonValue.GetDouble("OptedOutTimestamp");
    m_optedOutTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndUserOptedOut"))
  {
    m_endUserOptedOut = jsonValue.GetBool("EndUserOptedOut");
    m_endUserOptedOutHasBeenSet = true;
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
