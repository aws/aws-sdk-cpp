/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/ListBrowserSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBrowserSettingsResult::ListBrowserSettingsResult()
{
}

ListBrowserSettingsResult::ListBrowserSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBrowserSettingsResult& ListBrowserSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("browserSettings"))
  {
    Aws::Utils::Array<JsonView> browserSettingsJsonList = jsonValue.GetArray("browserSettings");
    for(unsigned browserSettingsIndex = 0; browserSettingsIndex < browserSettingsJsonList.GetLength(); ++browserSettingsIndex)
    {
      m_browserSettings.push_back(browserSettingsJsonList[browserSettingsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
