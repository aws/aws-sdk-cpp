/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/GetNextMessageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetNextMessageResult::GetNextMessageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetNextMessageResult& GetNextMessageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("type"))
  {
    m_type = MessageTypeMapper::GetMessageTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("response"))
  {
    m_response = jsonValue.GetObject("response");
    m_responseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("requestMessageId"))
  {
    m_requestMessageId = jsonValue.GetString("requestMessageId");
    m_requestMessageIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conversationState"))
  {
    m_conversationState = jsonValue.GetObject("conversationState");
    m_conversationStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextMessageToken"))
  {
    m_nextMessageToken = jsonValue.GetString("nextMessageToken");
    m_nextMessageTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conversationSessionData"))
  {
    Aws::Utils::Array<JsonView> conversationSessionDataJsonList = jsonValue.GetArray("conversationSessionData");
    for(unsigned conversationSessionDataIndex = 0; conversationSessionDataIndex < conversationSessionDataJsonList.GetLength(); ++conversationSessionDataIndex)
    {
      m_conversationSessionData.push_back(conversationSessionDataJsonList[conversationSessionDataIndex].AsObject());
    }
    m_conversationSessionDataHasBeenSet = true;
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
