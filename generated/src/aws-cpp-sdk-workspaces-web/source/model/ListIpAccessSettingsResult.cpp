/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/ListIpAccessSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIpAccessSettingsResult::ListIpAccessSettingsResult()
{
}

ListIpAccessSettingsResult::ListIpAccessSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIpAccessSettingsResult& ListIpAccessSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ipAccessSettings"))
  {
    Aws::Utils::Array<JsonView> ipAccessSettingsJsonList = jsonValue.GetArray("ipAccessSettings");
    for(unsigned ipAccessSettingsIndex = 0; ipAccessSettingsIndex < ipAccessSettingsJsonList.GetLength(); ++ipAccessSettingsIndex)
    {
      m_ipAccessSettings.push_back(ipAccessSettingsJsonList[ipAccessSettingsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
