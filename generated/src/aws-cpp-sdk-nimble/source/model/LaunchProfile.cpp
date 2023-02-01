/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/LaunchProfile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

LaunchProfile::LaunchProfile() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ec2SubnetIdsHasBeenSet(false),
    m_launchProfileIdHasBeenSet(false),
    m_launchProfileProtocolVersionsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(LaunchProfileState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusCode(LaunchProfileStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_streamConfigurationHasBeenSet(false),
    m_studioComponentIdsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false),
    m_validationResultsHasBeenSet(false)
{
}

LaunchProfile::LaunchProfile(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ec2SubnetIdsHasBeenSet(false),
    m_launchProfileIdHasBeenSet(false),
    m_launchProfileProtocolVersionsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_state(LaunchProfileState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusCode(LaunchProfileStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_streamConfigurationHasBeenSet(false),
    m_studioComponentIdsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false),
    m_validationResultsHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchProfile& LaunchProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2SubnetIds"))
  {
    Aws::Utils::Array<JsonView> ec2SubnetIdsJsonList = jsonValue.GetArray("ec2SubnetIds");
    for(unsigned ec2SubnetIdsIndex = 0; ec2SubnetIdsIndex < ec2SubnetIdsJsonList.GetLength(); ++ec2SubnetIdsIndex)
    {
      m_ec2SubnetIds.push_back(ec2SubnetIdsJsonList[ec2SubnetIdsIndex].AsString());
    }
    m_ec2SubnetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchProfileId"))
  {
    m_launchProfileId = jsonValue.GetString("launchProfileId");

    m_launchProfileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchProfileProtocolVersions"))
  {
    Aws::Utils::Array<JsonView> launchProfileProtocolVersionsJsonList = jsonValue.GetArray("launchProfileProtocolVersions");
    for(unsigned launchProfileProtocolVersionsIndex = 0; launchProfileProtocolVersionsIndex < launchProfileProtocolVersionsJsonList.GetLength(); ++launchProfileProtocolVersionsIndex)
    {
      m_launchProfileProtocolVersions.push_back(launchProfileProtocolVersionsJsonList[launchProfileProtocolVersionsIndex].AsString());
    }
    m_launchProfileProtocolVersionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = LaunchProfileStateMapper::GetLaunchProfileStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = LaunchProfileStatusCodeMapper::GetLaunchProfileStatusCodeForName(jsonValue.GetString("statusCode"));

    m_statusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamConfiguration"))
  {
    m_streamConfiguration = jsonValue.GetObject("streamConfiguration");

    m_streamConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("studioComponentIds"))
  {
    Aws::Utils::Array<JsonView> studioComponentIdsJsonList = jsonValue.GetArray("studioComponentIds");
    for(unsigned studioComponentIdsIndex = 0; studioComponentIdsIndex < studioComponentIdsJsonList.GetLength(); ++studioComponentIdsIndex)
    {
      m_studioComponentIds.push_back(studioComponentIdsJsonList[studioComponentIdsIndex].AsString());
    }
    m_studioComponentIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

    m_updatedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validationResults"))
  {
    Aws::Utils::Array<JsonView> validationResultsJsonList = jsonValue.GetArray("validationResults");
    for(unsigned validationResultsIndex = 0; validationResultsIndex < validationResultsJsonList.GetLength(); ++validationResultsIndex)
    {
      m_validationResults.push_back(validationResultsJsonList[validationResultsIndex].AsObject());
    }
    m_validationResultsHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchProfile::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_ec2SubnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ec2SubnetIdsJsonList(m_ec2SubnetIds.size());
   for(unsigned ec2SubnetIdsIndex = 0; ec2SubnetIdsIndex < ec2SubnetIdsJsonList.GetLength(); ++ec2SubnetIdsIndex)
   {
     ec2SubnetIdsJsonList[ec2SubnetIdsIndex].AsString(m_ec2SubnetIds[ec2SubnetIdsIndex]);
   }
   payload.WithArray("ec2SubnetIds", std::move(ec2SubnetIdsJsonList));

  }

  if(m_launchProfileIdHasBeenSet)
  {
   payload.WithString("launchProfileId", m_launchProfileId);

  }

  if(m_launchProfileProtocolVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> launchProfileProtocolVersionsJsonList(m_launchProfileProtocolVersions.size());
   for(unsigned launchProfileProtocolVersionsIndex = 0; launchProfileProtocolVersionsIndex < launchProfileProtocolVersionsJsonList.GetLength(); ++launchProfileProtocolVersionsIndex)
   {
     launchProfileProtocolVersionsJsonList[launchProfileProtocolVersionsIndex].AsString(m_launchProfileProtocolVersions[launchProfileProtocolVersionsIndex]);
   }
   payload.WithArray("launchProfileProtocolVersions", std::move(launchProfileProtocolVersionsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", LaunchProfileStateMapper::GetNameForLaunchProfileState(m_state));
  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", LaunchProfileStatusCodeMapper::GetNameForLaunchProfileStatusCode(m_statusCode));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_streamConfigurationHasBeenSet)
  {
   payload.WithObject("streamConfiguration", m_streamConfiguration.Jsonize());

  }

  if(m_studioComponentIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> studioComponentIdsJsonList(m_studioComponentIds.size());
   for(unsigned studioComponentIdsIndex = 0; studioComponentIdsIndex < studioComponentIdsJsonList.GetLength(); ++studioComponentIdsIndex)
   {
     studioComponentIdsJsonList[studioComponentIdsIndex].AsString(m_studioComponentIds[studioComponentIdsIndex]);
   }
   payload.WithArray("studioComponentIds", std::move(studioComponentIdsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("updatedBy", m_updatedBy);

  }

  if(m_validationResultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validationResultsJsonList(m_validationResults.size());
   for(unsigned validationResultsIndex = 0; validationResultsIndex < validationResultsJsonList.GetLength(); ++validationResultsIndex)
   {
     validationResultsJsonList[validationResultsIndex].AsObject(m_validationResults[validationResultsIndex].Jsonize());
   }
   payload.WithArray("validationResults", std::move(validationResultsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
