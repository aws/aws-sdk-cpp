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

GetQAppSessionResult::GetQAppSessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetQAppSessionResult& GetQAppSessionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionArn"))
  {
    m_sessionArn = jsonValue.GetString("sessionArn");
    m_sessionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionName"))
  {
    m_sessionName = jsonValue.GetString("sessionName");
    m_sessionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("appVersion"))
  {
    m_appVersion = jsonValue.GetInteger("appVersion");
    m_appVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("latestPublishedAppVersion"))
  {
    m_latestPublishedAppVersion = jsonValue.GetInteger("latestPublishedAppVersion");
    m_latestPublishedAppVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cardStatus"))
  {
    Aws::Map<Aws::String, JsonView> cardStatusJsonMap = jsonValue.GetObject("cardStatus").GetAllObjects();
    for(auto& cardStatusItem : cardStatusJsonMap)
    {
      m_cardStatus[cardStatusItem.first] = cardStatusItem.second.AsObject();
    }
    m_cardStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userIsHost"))
  {
    m_userIsHost = jsonValue.GetBool("userIsHost");
    m_userIsHostHasBeenSet = true;
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
