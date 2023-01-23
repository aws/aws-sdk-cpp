/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H264FilterSettings.h>
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

H264FilterSettings::H264FilterSettings() : 
    m_temporalFilterSettingsHasBeenSet(false)
{
}

H264FilterSettings::H264FilterSettings(JsonView jsonValue) : 
    m_temporalFilterSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

H264FilterSettings& H264FilterSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("temporalFilterSettings"))
  {
    m_temporalFilterSettings = jsonValue.GetObject("temporalFilterSettings");

    m_temporalFilterSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue H264FilterSettings::Jsonize() const
{
  JsonValue payload;

  if(m_temporalFilterSettingsHasBeenSet)
  {
   payload.WithObject("temporalFilterSettings", m_temporalFilterSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
