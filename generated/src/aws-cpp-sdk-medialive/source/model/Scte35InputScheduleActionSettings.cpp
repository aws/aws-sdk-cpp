/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte35InputScheduleActionSettings.h>
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

Scte35InputScheduleActionSettings::Scte35InputScheduleActionSettings() : 
    m_inputAttachmentNameReferenceHasBeenSet(false),
    m_mode(Scte35InputMode::NOT_SET),
    m_modeHasBeenSet(false)
{
}

Scte35InputScheduleActionSettings::Scte35InputScheduleActionSettings(JsonView jsonValue) : 
    m_inputAttachmentNameReferenceHasBeenSet(false),
    m_mode(Scte35InputMode::NOT_SET),
    m_modeHasBeenSet(false)
{
  *this = jsonValue;
}

Scte35InputScheduleActionSettings& Scte35InputScheduleActionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputAttachmentNameReference"))
  {
    m_inputAttachmentNameReference = jsonValue.GetString("inputAttachmentNameReference");

    m_inputAttachmentNameReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mode"))
  {
    m_mode = Scte35InputModeMapper::GetScte35InputModeForName(jsonValue.GetString("mode"));

    m_modeHasBeenSet = true;
  }

  return *this;
}

JsonValue Scte35InputScheduleActionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_inputAttachmentNameReferenceHasBeenSet)
  {
   payload.WithString("inputAttachmentNameReference", m_inputAttachmentNameReference);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", Scte35InputModeMapper::GetNameForScte35InputMode(m_mode));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
