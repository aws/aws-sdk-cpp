/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ChatSyncResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ChatSyncResult::ChatSyncResult()
{
}

ChatSyncResult::ChatSyncResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ChatSyncResult& ChatSyncResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("actionReview"))
  {
    m_actionReview = jsonValue.GetObject("actionReview");

  }

  if(jsonValue.ValueExists("conversationId"))
  {
    m_conversationId = jsonValue.GetString("conversationId");

  }

  if(jsonValue.ValueExists("failedAttachments"))
  {
    Aws::Utils::Array<JsonView> failedAttachmentsJsonList = jsonValue.GetArray("failedAttachments");
    for(unsigned failedAttachmentsIndex = 0; failedAttachmentsIndex < failedAttachmentsJsonList.GetLength(); ++failedAttachmentsIndex)
    {
      m_failedAttachments.push_back(failedAttachmentsJsonList[failedAttachmentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("sourceAttributions"))
  {
    Aws::Utils::Array<JsonView> sourceAttributionsJsonList = jsonValue.GetArray("sourceAttributions");
    for(unsigned sourceAttributionsIndex = 0; sourceAttributionsIndex < sourceAttributionsJsonList.GetLength(); ++sourceAttributionsIndex)
    {
      m_sourceAttributions.push_back(sourceAttributionsJsonList[sourceAttributionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("systemMessage"))
  {
    m_systemMessage = jsonValue.GetString("systemMessage");

  }

  if(jsonValue.ValueExists("systemMessageId"))
  {
    m_systemMessageId = jsonValue.GetString("systemMessageId");

  }

  if(jsonValue.ValueExists("userMessageId"))
  {
    m_userMessageId = jsonValue.GetString("userMessageId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
