/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DestinationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

DestinationSettings::DestinationSettings() : 
    m_s3SettingsHasBeenSet(false)
{
}

DestinationSettings::DestinationSettings(JsonView jsonValue) : 
    m_s3SettingsHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationSettings& DestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Settings"))
  {
    m_s3Settings = jsonValue.GetObject("s3Settings");

    m_s3SettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_s3SettingsHasBeenSet)
  {
   payload.WithObject("s3Settings", m_s3Settings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
