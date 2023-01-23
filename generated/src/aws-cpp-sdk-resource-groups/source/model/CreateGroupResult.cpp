/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/CreateGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResourceGroups::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateGroupResult::CreateGroupResult()
{
}

CreateGroupResult::CreateGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateGroupResult& CreateGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Group"))
  {
    m_group = jsonValue.GetObject("Group");

  }

  if(jsonValue.ValueExists("ResourceQuery"))
  {
    m_resourceQuery = jsonValue.GetObject("ResourceQuery");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("GroupConfiguration"))
  {
    m_groupConfiguration = jsonValue.GetObject("GroupConfiguration");

  }



  return *this;
}
