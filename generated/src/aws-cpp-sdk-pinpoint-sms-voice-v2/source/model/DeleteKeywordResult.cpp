/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DeleteKeywordResult.h>
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

DeleteKeywordResult::DeleteKeywordResult() : 
    m_keywordAction(KeywordAction::NOT_SET)
{
}

DeleteKeywordResult::DeleteKeywordResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_keywordAction(KeywordAction::NOT_SET)
{
  *this = result;
}

DeleteKeywordResult& DeleteKeywordResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OriginationIdentityArn"))
  {
    m_originationIdentityArn = jsonValue.GetString("OriginationIdentityArn");

  }

  if(jsonValue.ValueExists("OriginationIdentity"))
  {
    m_originationIdentity = jsonValue.GetString("OriginationIdentity");

  }

  if(jsonValue.ValueExists("Keyword"))
  {
    m_keyword = jsonValue.GetString("Keyword");

  }

  if(jsonValue.ValueExists("KeywordMessage"))
  {
    m_keywordMessage = jsonValue.GetString("KeywordMessage");

  }

  if(jsonValue.ValueExists("KeywordAction"))
  {
    m_keywordAction = KeywordActionMapper::GetKeywordActionForName(jsonValue.GetString("KeywordAction"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
