/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/oam/model/GetLinkResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLinkResult::GetLinkResult()
{
}

GetLinkResult::GetLinkResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLinkResult& GetLinkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetString("Label");

  }

  if(jsonValue.ValueExists("LabelTemplate"))
  {
    m_labelTemplate = jsonValue.GetString("LabelTemplate");

  }

  if(jsonValue.ValueExists("ResourceTypes"))
  {
    Aws::Utils::Array<JsonView> resourceTypesJsonList = jsonValue.GetArray("ResourceTypes");
    for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
    {
      m_resourceTypes.push_back(resourceTypesJsonList[resourceTypesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("SinkArn"))
  {
    m_sinkArn = jsonValue.GetString("SinkArn");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
