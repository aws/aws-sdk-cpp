/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/OriginEndpointListConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

OriginEndpointListConfiguration::OriginEndpointListConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

OriginEndpointListConfiguration& OriginEndpointListConfiguration::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
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
  return *this;
}

JsonValue OriginEndpointListConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_channelGroupNameHasBeenSet)
  {
   payload.WithString("ChannelGroupName", m_channelGroupName);

  }

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("ChannelName", m_channelName);

  }

  if(m_originEndpointNameHasBeenSet)
  {
   payload.WithString("OriginEndpointName", m_originEndpointName);

  }

  if(m_containerTypeHasBeenSet)
  {
   payload.WithString("ContainerType", ContainerTypeMapper::GetNameForContainerType(m_containerType));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithDouble("ModifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  if(m_hlsManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hlsManifestsJsonList(m_hlsManifests.size());
   for(unsigned hlsManifestsIndex = 0; hlsManifestsIndex < hlsManifestsJsonList.GetLength(); ++hlsManifestsIndex)
   {
     hlsManifestsJsonList[hlsManifestsIndex].AsObject(m_hlsManifests[hlsManifestsIndex].Jsonize());
   }
   payload.WithArray("HlsManifests", std::move(hlsManifestsJsonList));

  }

  if(m_lowLatencyHlsManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lowLatencyHlsManifestsJsonList(m_lowLatencyHlsManifests.size());
   for(unsigned lowLatencyHlsManifestsIndex = 0; lowLatencyHlsManifestsIndex < lowLatencyHlsManifestsJsonList.GetLength(); ++lowLatencyHlsManifestsIndex)
   {
     lowLatencyHlsManifestsJsonList[lowLatencyHlsManifestsIndex].AsObject(m_lowLatencyHlsManifests[lowLatencyHlsManifestsIndex].Jsonize());
   }
   payload.WithArray("LowLatencyHlsManifests", std::move(lowLatencyHlsManifestsJsonList));

  }

  if(m_dashManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dashManifestsJsonList(m_dashManifests.size());
   for(unsigned dashManifestsIndex = 0; dashManifestsIndex < dashManifestsJsonList.GetLength(); ++dashManifestsIndex)
   {
     dashManifestsJsonList[dashManifestsIndex].AsObject(m_dashManifests[dashManifestsIndex].Jsonize());
   }
   payload.WithArray("DashManifests", std::move(dashManifestsJsonList));

  }

  if(m_mssManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mssManifestsJsonList(m_mssManifests.size());
   for(unsigned mssManifestsIndex = 0; mssManifestsIndex < mssManifestsJsonList.GetLength(); ++mssManifestsIndex)
   {
     mssManifestsJsonList[mssManifestsIndex].AsObject(m_mssManifests[mssManifestsIndex].Jsonize());
   }
   payload.WithArray("MssManifests", std::move(mssManifestsJsonList));

  }

  if(m_forceEndpointErrorConfigurationHasBeenSet)
  {
   payload.WithObject("ForceEndpointErrorConfiguration", m_forceEndpointErrorConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
