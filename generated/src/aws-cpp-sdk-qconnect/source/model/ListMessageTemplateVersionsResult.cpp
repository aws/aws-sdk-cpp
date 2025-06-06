﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ListMessageTemplateVersionsResult.h>
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

ListMessageTemplateVersionsResult::ListMessageTemplateVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMessageTemplateVersionsResult& ListMessageTemplateVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("messageTemplateVersionSummaries"))
  {
    Aws::Utils::Array<JsonView> messageTemplateVersionSummariesJsonList = jsonValue.GetArray("messageTemplateVersionSummaries");
    for(unsigned messageTemplateVersionSummariesIndex = 0; messageTemplateVersionSummariesIndex < messageTemplateVersionSummariesJsonList.GetLength(); ++messageTemplateVersionSummariesIndex)
    {
      m_messageTemplateVersionSummaries.push_back(messageTemplateVersionSummariesJsonList[messageTemplateVersionSummariesIndex].AsObject());
    }
    m_messageTemplateVersionSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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
