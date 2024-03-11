/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/CreateOriginEndpointResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::mediapackagev2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateOriginEndpointResult::CreateOriginEndpointResult() : 
    m_containerType(ContainerType::NOT_SET),
    m_startoverWindowSeconds(0)
{
}

CreateOriginEndpointResult::CreateOriginEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_containerType(ContainerType::NOT_SET),
    m_startoverWindowSeconds(0)
{
  *this = result;
}

CreateOriginEndpointResult& CreateOriginEndpointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("ChannelGroupName"))
  {
    m_channelGroupName = jsonValue.GetString("ChannelGroupName");

  }

  if(jsonValue.ValueExists("ChannelName"))
  {
    m_channelName = jsonValue.GetString("ChannelName");

  }

  if(jsonValue.ValueExists("OriginEndpointName"))
  {
    m_originEndpointName = jsonValue.GetString("OriginEndpointName");

  }

  if(jsonValue.ValueExists("ContainerType"))
  {
    m_containerType = ContainerTypeMapper::GetContainerTypeForName(jsonValue.GetString("ContainerType"));

  }

  if(jsonValue.ValueExists("Segment"))
  {
    m_segment = jsonValue.GetObject("Segment");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("ModifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("ModifiedAt");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("StartoverWindowSeconds"))
  {
    m_startoverWindowSeconds = jsonValue.GetInteger("StartoverWindowSeconds");

  }

  if(jsonValue.ValueExists("HlsManifests"))
  {
    Aws::Utils::Array<JsonView> hlsManifestsJsonList = jsonValue.GetArray("HlsManifests");
    for(unsigned hlsManifestsIndex = 0; hlsManifestsIndex < hlsManifestsJsonList.GetLength(); ++hlsManifestsIndex)
    {
      m_hlsManifests.push_back(hlsManifestsJsonList[hlsManifestsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("LowLatencyHlsManifests"))
  {
    Aws::Utils::Array<JsonView> lowLatencyHlsManifestsJsonList = jsonValue.GetArray("LowLatencyHlsManifests");
    for(unsigned lowLatencyHlsManifestsIndex = 0; lowLatencyHlsManifestsIndex < lowLatencyHlsManifestsJsonList.GetLength(); ++lowLatencyHlsManifestsIndex)
    {
      m_lowLatencyHlsManifests.push_back(lowLatencyHlsManifestsJsonList[lowLatencyHlsManifestsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ETag"))
  {
    m_eTag = jsonValue.GetString("ETag");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
