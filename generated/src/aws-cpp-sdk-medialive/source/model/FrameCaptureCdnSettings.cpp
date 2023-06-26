/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/FrameCaptureCdnSettings.h>
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

FrameCaptureCdnSettings::FrameCaptureCdnSettings() : 
    m_frameCaptureS3SettingsHasBeenSet(false)
{
}

FrameCaptureCdnSettings::FrameCaptureCdnSettings(JsonView jsonValue) : 
    m_frameCaptureS3SettingsHasBeenSet(false)
{
  *this = jsonValue;
}

FrameCaptureCdnSettings& FrameCaptureCdnSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("frameCaptureS3Settings"))
  {
    m_frameCaptureS3Settings = jsonValue.GetObject("frameCaptureS3Settings");

    m_frameCaptureS3SettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue FrameCaptureCdnSettings::Jsonize() const
{
  JsonValue payload;

  if(m_frameCaptureS3SettingsHasBeenSet)
  {
   payload.WithObject("frameCaptureS3Settings", m_frameCaptureS3Settings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
