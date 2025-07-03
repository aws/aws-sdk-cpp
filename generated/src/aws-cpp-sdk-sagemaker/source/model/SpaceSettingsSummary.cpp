/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SpaceSettingsSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

SpaceSettingsSummary::SpaceSettingsSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

SpaceSettingsSummary& SpaceSettingsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppType"))
  {
    m_appType = AppTypeMapper::GetAppTypeForName(jsonValue.GetString("AppType"));
    m_appTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RemoteAccess"))
  {
    m_remoteAccess = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("RemoteAccess"));
    m_remoteAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpaceStorageSettings"))
  {
    m_spaceStorageSettings = jsonValue.GetObject("SpaceStorageSettings");
    m_spaceStorageSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue SpaceSettingsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_appTypeHasBeenSet)
  {
   payload.WithString("AppType", AppTypeMapper::GetNameForAppType(m_appType));
  }

  if(m_remoteAccessHasBeenSet)
  {
   payload.WithString("RemoteAccess", FeatureStatusMapper::GetNameForFeatureStatus(m_remoteAccess));
  }

  if(m_spaceStorageSettingsHasBeenSet)
  {
   payload.WithObject("SpaceStorageSettings", m_spaceStorageSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
