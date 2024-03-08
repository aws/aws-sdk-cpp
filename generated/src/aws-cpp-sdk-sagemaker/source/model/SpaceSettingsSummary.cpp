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

SpaceSettingsSummary::SpaceSettingsSummary() : 
    m_appType(AppType::NOT_SET),
    m_appTypeHasBeenSet(false),
    m_spaceStorageSettingsHasBeenSet(false)
{
}

SpaceSettingsSummary::SpaceSettingsSummary(JsonView jsonValue) : 
    m_appType(AppType::NOT_SET),
    m_appTypeHasBeenSet(false),
    m_spaceStorageSettingsHasBeenSet(false)
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

  if(m_spaceStorageSettingsHasBeenSet)
  {
   payload.WithObject("SpaceStorageSettings", m_spaceStorageSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
