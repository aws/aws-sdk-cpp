/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AvailConfiguration.h>
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

AvailConfiguration::AvailConfiguration() : 
    m_availSettingsHasBeenSet(false),
    m_scte35SegmentationScope(Scte35SegmentationScope::NOT_SET),
    m_scte35SegmentationScopeHasBeenSet(false)
{
}

AvailConfiguration::AvailConfiguration(JsonView jsonValue) : 
    m_availSettingsHasBeenSet(false),
    m_scte35SegmentationScope(Scte35SegmentationScope::NOT_SET),
    m_scte35SegmentationScopeHasBeenSet(false)
{
  *this = jsonValue;
}

AvailConfiguration& AvailConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("availSettings"))
  {
    m_availSettings = jsonValue.GetObject("availSettings");

    m_availSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35SegmentationScope"))
  {
    m_scte35SegmentationScope = Scte35SegmentationScopeMapper::GetScte35SegmentationScopeForName(jsonValue.GetString("scte35SegmentationScope"));

    m_scte35SegmentationScopeHasBeenSet = true;
  }

  return *this;
}

JsonValue AvailConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_availSettingsHasBeenSet)
  {
   payload.WithObject("availSettings", m_availSettings.Jsonize());

  }

  if(m_scte35SegmentationScopeHasBeenSet)
  {
   payload.WithString("scte35SegmentationScope", Scte35SegmentationScopeMapper::GetNameForScte35SegmentationScope(m_scte35SegmentationScope));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
