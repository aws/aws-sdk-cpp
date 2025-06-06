﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/TemplateConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

TemplateConfiguration::TemplateConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

TemplateConfiguration& TemplateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EmailTemplate"))
  {
    m_emailTemplate = jsonValue.GetObject("EmailTemplate");
    m_emailTemplateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PushTemplate"))
  {
    m_pushTemplate = jsonValue.GetObject("PushTemplate");
    m_pushTemplateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SMSTemplate"))
  {
    m_sMSTemplate = jsonValue.GetObject("SMSTemplate");
    m_sMSTemplateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VoiceTemplate"))
  {
    m_voiceTemplate = jsonValue.GetObject("VoiceTemplate");
    m_voiceTemplateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InAppTemplate"))
  {
    m_inAppTemplate = jsonValue.GetObject("InAppTemplate");
    m_inAppTemplateHasBeenSet = true;
  }
  return *this;
}

JsonValue TemplateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_emailTemplateHasBeenSet)
  {
   payload.WithObject("EmailTemplate", m_emailTemplate.Jsonize());

  }

  if(m_pushTemplateHasBeenSet)
  {
   payload.WithObject("PushTemplate", m_pushTemplate.Jsonize());

  }

  if(m_sMSTemplateHasBeenSet)
  {
   payload.WithObject("SMSTemplate", m_sMSTemplate.Jsonize());

  }

  if(m_voiceTemplateHasBeenSet)
  {
   payload.WithObject("VoiceTemplate", m_voiceTemplate.Jsonize());

  }

  if(m_inAppTemplateHasBeenSet)
  {
   payload.WithObject("InAppTemplate", m_inAppTemplate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
