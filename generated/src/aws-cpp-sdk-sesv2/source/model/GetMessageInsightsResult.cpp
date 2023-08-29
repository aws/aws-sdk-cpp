/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetMessageInsightsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMessageInsightsResult::GetMessageInsightsResult()
{
}

GetMessageInsightsResult::GetMessageInsightsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMessageInsightsResult& GetMessageInsightsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MessageId"))
  {
    m_messageId = jsonValue.GetString("MessageId");

  }

  if(jsonValue.ValueExists("FromEmailAddress"))
  {
    m_fromEmailAddress = jsonValue.GetString("FromEmailAddress");

  }

  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetString("Subject");

  }

  if(jsonValue.ValueExists("EmailTags"))
  {
    Aws::Utils::Array<JsonView> emailTagsJsonList = jsonValue.GetArray("EmailTags");
    for(unsigned emailTagsIndex = 0; emailTagsIndex < emailTagsJsonList.GetLength(); ++emailTagsIndex)
    {
      m_emailTags.push_back(emailTagsJsonList[emailTagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Insights"))
  {
    Aws::Utils::Array<JsonView> insightsJsonList = jsonValue.GetArray("Insights");
    for(unsigned insightsIndex = 0; insightsIndex < insightsJsonList.GetLength(); ++insightsIndex)
    {
      m_insights.push_back(insightsJsonList[insightsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
