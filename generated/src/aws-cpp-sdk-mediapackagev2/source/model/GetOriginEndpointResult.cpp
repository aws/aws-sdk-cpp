/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/GetOriginEndpointResult.h>
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

GetOriginEndpointResult::GetOriginEndpointResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetOriginEndpointResult& GetOriginEndpointResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChannelGroupName"))
  {
    m_channelGroupName = jsonValue.GetString("ChannelGroupName");
    m_channelGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChannelName"))
  {
    m_channelName = jsonValue.GetString("ChannelName");
    m_channelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OriginEndpointName"))
  {
    m_originEndpointName = jsonValue.GetString("OriginEndpointName");
    m_originEndpointNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContainerType"))
  {
    m_containerType = ContainerTypeMapper::GetContainerTypeForName(jsonValue.GetString("ContainerType"));
    m_containerTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Segment"))
  {
    m_segment = jsonValue.GetObject("Segment");
    m_segmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("ModifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResetAt"))
  {
    m_resetAt = jsonValue.GetDouble("ResetAt");
    m_resetAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartoverWindowSeconds"))
  {
    m_startoverWindowSeconds = jsonValue.GetInteger("StartoverWindowSeconds");
    m_startoverWindowSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HlsManifests"))
  {
    Aws::Utils::Array<JsonView> hlsManifestsJsonList = jsonValue.GetArray("HlsManifests");
    for(unsigned hlsManifestsIndex = 0; hlsManifestsIndex < hlsManifestsJsonList.GetLength(); ++hlsManifestsIndex)
    {
      m_hlsManifests.push_back(hlsManifestsJsonList[hlsManifestsIndex].AsObject());
    }
    m_hlsManifestsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LowLatencyHlsManifests"))
  {
    Aws::Utils::Array<JsonView> lowLatencyHlsManifestsJsonList = jsonValue.GetArray("LowLatencyHlsManifests");
    for(unsigned lowLatencyHlsManifestsIndex = 0; lowLatencyHlsManifestsIndex < lowLatencyHlsManifestsJsonList.GetLength(); ++lowLatencyHlsManifestsIndex)
    {
      m_lowLatencyHlsManifests.push_back(lowLatencyHlsManifestsJsonList[lowLatencyHlsManifestsIndex].AsObject());
    }
    m_lowLatencyHlsManifestsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DashManifests"))
  {
    Aws::Utils::Array<JsonView> dashManifestsJsonList = jsonValue.GetArray("DashManifests");
    for(unsigned dashManifestsIndex = 0; dashManifestsIndex < dashManifestsJsonList.GetLength(); ++dashManifestsIndex)
    {
      m_dashManifests.push_back(dashManifestsJsonList[dashManifestsIndex].AsObject());
    }
    m_dashManifestsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MssManifests"))
  {
    Aws::Utils::Array<JsonView> mssManifestsJsonList = jsonValue.GetArray("MssManifests");
    for(unsigned mssManifestsIndex = 0; mssManifestsIndex < mssManifestsJsonList.GetLength(); ++mssManifestsIndex)
    {
      m_mssManifests.push_back(mssManifestsJsonList[mssManifestsIndex].AsObject());
    }
    m_mssManifestsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ForceEndpointErrorConfiguration"))
  {
    m_forceEndpointErrorConfiguration = jsonValue.GetObject("ForceEndpointErrorConfiguration");
    m_forceEndpointErrorConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ETag"))
  {
    m_eTag = jsonValue.GetString("ETag");
    m_eTagHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
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
