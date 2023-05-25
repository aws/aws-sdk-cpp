/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Fmp4HlsSettings.h>
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

Fmp4HlsSettings::Fmp4HlsSettings() : 
    m_audioRenditionSetsHasBeenSet(false),
    m_nielsenId3Behavior(Fmp4NielsenId3Behavior::NOT_SET),
    m_nielsenId3BehaviorHasBeenSet(false),
    m_timedMetadataBehavior(Fmp4TimedMetadataBehavior::NOT_SET),
    m_timedMetadataBehaviorHasBeenSet(false)
{
}

Fmp4HlsSettings::Fmp4HlsSettings(JsonView jsonValue) : 
    m_audioRenditionSetsHasBeenSet(false),
    m_nielsenId3Behavior(Fmp4NielsenId3Behavior::NOT_SET),
    m_nielsenId3BehaviorHasBeenSet(false),
    m_timedMetadataBehavior(Fmp4TimedMetadataBehavior::NOT_SET),
    m_timedMetadataBehaviorHasBeenSet(false)
{
  *this = jsonValue;
}

Fmp4HlsSettings& Fmp4HlsSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioRenditionSets"))
  {
    m_audioRenditionSets = jsonValue.GetString("audioRenditionSets");

    m_audioRenditionSetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nielsenId3Behavior"))
  {
    m_nielsenId3Behavior = Fmp4NielsenId3BehaviorMapper::GetFmp4NielsenId3BehaviorForName(jsonValue.GetString("nielsenId3Behavior"));

    m_nielsenId3BehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataBehavior"))
  {
    m_timedMetadataBehavior = Fmp4TimedMetadataBehaviorMapper::GetFmp4TimedMetadataBehaviorForName(jsonValue.GetString("timedMetadataBehavior"));

    m_timedMetadataBehaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue Fmp4HlsSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioRenditionSetsHasBeenSet)
  {
   payload.WithString("audioRenditionSets", m_audioRenditionSets);

  }

  if(m_nielsenId3BehaviorHasBeenSet)
  {
   payload.WithString("nielsenId3Behavior", Fmp4NielsenId3BehaviorMapper::GetNameForFmp4NielsenId3Behavior(m_nielsenId3Behavior));
  }

  if(m_timedMetadataBehaviorHasBeenSet)
  {
   payload.WithString("timedMetadataBehavior", Fmp4TimedMetadataBehaviorMapper::GetNameForFmp4TimedMetadataBehavior(m_timedMetadataBehavior));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
