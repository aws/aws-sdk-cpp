/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/LakeConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

LakeConfigurationRequest::LakeConfigurationRequest() : 
    m_encryptionKeyHasBeenSet(false),
    m_replicationDestinationRegionsHasBeenSet(false),
    m_replicationRoleArnHasBeenSet(false),
    m_retentionSettingsHasBeenSet(false),
    m_tagsMapHasBeenSet(false)
{
}

LakeConfigurationRequest::LakeConfigurationRequest(JsonView jsonValue) : 
    m_encryptionKeyHasBeenSet(false),
    m_replicationDestinationRegionsHasBeenSet(false),
    m_replicationRoleArnHasBeenSet(false),
    m_retentionSettingsHasBeenSet(false),
    m_tagsMapHasBeenSet(false)
{
  *this = jsonValue;
}

LakeConfigurationRequest& LakeConfigurationRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryptionKey"))
  {
    m_encryptionKey = jsonValue.GetString("encryptionKey");

    m_encryptionKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationDestinationRegions"))
  {
    Aws::Utils::Array<JsonView> replicationDestinationRegionsJsonList = jsonValue.GetArray("replicationDestinationRegions");
    for(unsigned replicationDestinationRegionsIndex = 0; replicationDestinationRegionsIndex < replicationDestinationRegionsJsonList.GetLength(); ++replicationDestinationRegionsIndex)
    {
      m_replicationDestinationRegions.push_back(RegionMapper::GetRegionForName(replicationDestinationRegionsJsonList[replicationDestinationRegionsIndex].AsString()));
    }
    m_replicationDestinationRegionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationRoleArn"))
  {
    m_replicationRoleArn = jsonValue.GetString("replicationRoleArn");

    m_replicationRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retentionSettings"))
  {
    Aws::Utils::Array<JsonView> retentionSettingsJsonList = jsonValue.GetArray("retentionSettings");
    for(unsigned retentionSettingsIndex = 0; retentionSettingsIndex < retentionSettingsJsonList.GetLength(); ++retentionSettingsIndex)
    {
      m_retentionSettings.push_back(retentionSettingsJsonList[retentionSettingsIndex].AsObject());
    }
    m_retentionSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tagsMap"))
  {
    Aws::Map<Aws::String, JsonView> tagsMapJsonMap = jsonValue.GetObject("tagsMap").GetAllObjects();
    for(auto& tagsMapItem : tagsMapJsonMap)
    {
      m_tagsMap[tagsMapItem.first] = tagsMapItem.second.AsString();
    }
    m_tagsMapHasBeenSet = true;
  }

  return *this;
}

JsonValue LakeConfigurationRequest::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithString("encryptionKey", m_encryptionKey);

  }

  if(m_replicationDestinationRegionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicationDestinationRegionsJsonList(m_replicationDestinationRegions.size());
   for(unsigned replicationDestinationRegionsIndex = 0; replicationDestinationRegionsIndex < replicationDestinationRegionsJsonList.GetLength(); ++replicationDestinationRegionsIndex)
   {
     replicationDestinationRegionsJsonList[replicationDestinationRegionsIndex].AsString(RegionMapper::GetNameForRegion(m_replicationDestinationRegions[replicationDestinationRegionsIndex]));
   }
   payload.WithArray("replicationDestinationRegions", std::move(replicationDestinationRegionsJsonList));

  }

  if(m_replicationRoleArnHasBeenSet)
  {
   payload.WithString("replicationRoleArn", m_replicationRoleArn);

  }

  if(m_retentionSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> retentionSettingsJsonList(m_retentionSettings.size());
   for(unsigned retentionSettingsIndex = 0; retentionSettingsIndex < retentionSettingsJsonList.GetLength(); ++retentionSettingsIndex)
   {
     retentionSettingsJsonList[retentionSettingsIndex].AsObject(m_retentionSettings[retentionSettingsIndex].Jsonize());
   }
   payload.WithArray("retentionSettings", std::move(retentionSettingsJsonList));

  }

  if(m_tagsMapHasBeenSet)
  {
   JsonValue tagsMapJsonMap;
   for(auto& tagsMapItem : m_tagsMap)
   {
     tagsMapJsonMap.WithString(tagsMapItem.first, tagsMapItem.second);
   }
   payload.WithObject("tagsMap", std::move(tagsMapJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
