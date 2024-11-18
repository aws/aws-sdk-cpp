/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ActivateMessageTemplateResult.h>
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

ActivateMessageTemplateResult::ActivateMessageTemplateResult() : 
    m_versionNumber(0)
{
}

ActivateMessageTemplateResult::ActivateMessageTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : ActivateMessageTemplateResult()
{
  *this = result;
}

ActivateMessageTemplateResult& ActivateMessageTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("messageTemplateArn"))
  {
    m_messageTemplateArn = jsonValue.GetString("messageTemplateArn");

  }

  if(jsonValue.ValueExists("messageTemplateId"))
  {
    m_messageTemplateId = jsonValue.GetString("messageTemplateId");

  }

  if(jsonValue.ValueExists("versionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("versionNumber");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
