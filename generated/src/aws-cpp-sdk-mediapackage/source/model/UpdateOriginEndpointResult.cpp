/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/UpdateOriginEndpointResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaPackage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateOriginEndpointResult::UpdateOriginEndpointResult() : 
    m_origination(Origination::NOT_SET),
    m_startoverWindowSeconds(0),
    m_timeDelaySeconds(0)
{
}

UpdateOriginEndpointResult::UpdateOriginEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_origination(Origination::NOT_SET),
    m_startoverWindowSeconds(0),
    m_timeDelaySeconds(0)
{
  *this = result;
}

UpdateOriginEndpointResult& UpdateOriginEndpointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("authorization"))
  {
    m_authorization = jsonValue.GetObject("authorization");

  }

  if(jsonValue.ValueExists("channelId"))
  {
    m_channelId = jsonValue.GetString("channelId");

  }

  if(jsonValue.ValueExists("cmafPackage"))
  {
    m_cmafPackage = jsonValue.GetObject("cmafPackage");

  }

  if(jsonValue.ValueExists("dashPackage"))
  {
    m_dashPackage = jsonValue.GetObject("dashPackage");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("hlsPackage"))
  {
    m_hlsPackage = jsonValue.GetObject("hlsPackage");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("manifestName"))
  {
    m_manifestName = jsonValue.GetString("manifestName");

  }

  if(jsonValue.ValueExists("mssPackage"))
  {
    m_mssPackage = jsonValue.GetObject("mssPackage");

  }

  if(jsonValue.ValueExists("origination"))
  {
    m_origination = OriginationMapper::GetOriginationForName(jsonValue.GetString("origination"));

  }

  if(jsonValue.ValueExists("startoverWindowSeconds"))
  {
    m_startoverWindowSeconds = jsonValue.GetInteger("startoverWindowSeconds");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("timeDelaySeconds"))
  {
    m_timeDelaySeconds = jsonValue.GetInteger("timeDelaySeconds");

  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

  }

  if(jsonValue.ValueExists("whitelist"))
  {
    Aws::Utils::Array<JsonView> whitelistJsonList = jsonValue.GetArray("whitelist");
    for(unsigned whitelistIndex = 0; whitelistIndex < whitelistJsonList.GetLength(); ++whitelistIndex)
    {
      m_whitelist.push_back(whitelistJsonList[whitelistIndex].AsString());
    }
  }



  return *this;
}
