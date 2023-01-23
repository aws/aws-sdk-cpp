/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/NielsenWatermarksSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

NielsenWatermarksSettings::NielsenWatermarksSettings() : 
    m_nielsenCbetSettingsHasBeenSet(false),
    m_nielsenDistributionType(NielsenWatermarksDistributionTypes::NOT_SET),
    m_nielsenDistributionTypeHasBeenSet(false),
    m_nielsenNaesIiNwSettingsHasBeenSet(false)
{
}

NielsenWatermarksSettings::NielsenWatermarksSettings(JsonView jsonValue) : 
    m_nielsenCbetSettingsHasBeenSet(false),
    m_nielsenDistributionType(NielsenWatermarksDistributionTypes::NOT_SET),
    m_nielsenDistributionTypeHasBeenSet(false),
    m_nielsenNaesIiNwSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

NielsenWatermarksSettings& NielsenWatermarksSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nielsenCbetSettings"))
  {
    m_nielsenCbetSettings = jsonValue.GetObject("nielsenCbetSettings");

    m_nielsenCbetSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nielsenDistributionType"))
  {
    m_nielsenDistributionType = NielsenWatermarksDistributionTypesMapper::GetNielsenWatermarksDistributionTypesForName(jsonValue.GetString("nielsenDistributionType"));

    m_nielsenDistributionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nielsenNaesIiNwSettings"))
  {
    m_nielsenNaesIiNwSettings = jsonValue.GetObject("nielsenNaesIiNwSettings");

    m_nielsenNaesIiNwSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue NielsenWatermarksSettings::Jsonize() const
{
  JsonValue payload;

  if(m_nielsenCbetSettingsHasBeenSet)
  {
   payload.WithObject("nielsenCbetSettings", m_nielsenCbetSettings.Jsonize());

  }

  if(m_nielsenDistributionTypeHasBeenSet)
  {
   payload.WithString("nielsenDistributionType", NielsenWatermarksDistributionTypesMapper::GetNameForNielsenWatermarksDistributionTypes(m_nielsenDistributionType));
  }

  if(m_nielsenNaesIiNwSettingsHasBeenSet)
  {
   payload.WithObject("nielsenNaesIiNwSettings", m_nielsenNaesIiNwSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
