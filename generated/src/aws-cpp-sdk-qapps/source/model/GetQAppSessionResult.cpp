/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/GetQAppSessionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QApps::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetQAppSessionResult::GetQAppSessionResult() : 
    m_appVersion(0),
    m_latestPublishedAppVersion(0),
    m_status(ExecutionStatus::NOT_SET),
    m_userIsHost(false)
{
}

GetQAppSessionResult::GetQAppSessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetQAppSessionResult()
{
  *this = result;
}

GetQAppSessionResult& GetQAppSessionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

  }

  if(jsonValue.ValueExists("sessionArn"))
  {
    m_sessionArn = jsonValue.GetString("sessionArn");

  }

  if(jsonValue.ValueExists("sessionName"))
  {
    m_sessionName = jsonValue.GetString("sessionName");

  }

  if(jsonValue.ValueExists("appVersion"))
  {
    m_appVersion = jsonValue.GetInteger("appVersion");

  }

  if(jsonValue.ValueExists("latestPublishedAppVersion"))
  {
    m_latestPublishedAppVersion = jsonValue.GetInteger("latestPublishedAppVersion");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("cardStatus"))
  {
    Aws::Map<Aws::String, JsonView> cardStatusJsonMap = jsonValue.GetObject("cardStatus").GetAllObjects();
    for(auto& cardStatusItem : cardStatusJsonMap)
    {
      m_cardStatus[cardStatusItem.first] = cardStatusItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("userIsHost"))
  {
    m_userIsHost = jsonValue.GetBool("userIsHost");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
