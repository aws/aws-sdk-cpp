/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/ListProfilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RolesAnywhere::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProfilesResult::ListProfilesResult()
{
}

ListProfilesResult::ListProfilesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProfilesResult& ListProfilesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("profiles"))
  {
    Aws::Utils::Array<JsonView> profilesJsonList = jsonValue.GetArray("profiles");
    for(unsigned profilesIndex = 0; profilesIndex < profilesJsonList.GetLength(); ++profilesIndex)
    {
      m_profiles.push_back(profilesJsonList[profilesIndex].AsObject());
    }
  }



  return *this;
}
