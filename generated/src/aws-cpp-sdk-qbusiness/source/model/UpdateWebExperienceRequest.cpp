/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/UpdateWebExperienceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateWebExperienceRequest::UpdateWebExperienceRequest() : 
    m_applicationIdHasBeenSet(false),
    m_authenticationConfigurationHasBeenSet(false),
    m_samplePromptsControlMode(WebExperienceSamplePromptsControlMode::NOT_SET),
    m_samplePromptsControlModeHasBeenSet(false),
    m_subtitleHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_webExperienceIdHasBeenSet(false),
    m_welcomeMessageHasBeenSet(false)
{
}

Aws::String UpdateWebExperienceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authenticationConfigurationHasBeenSet)
  {
   payload.WithObject("authenticationConfiguration", m_authenticationConfiguration.Jsonize());

  }

  if(m_samplePromptsControlModeHasBeenSet)
  {
   payload.WithString("samplePromptsControlMode", WebExperienceSamplePromptsControlModeMapper::GetNameForWebExperienceSamplePromptsControlMode(m_samplePromptsControlMode));
  }

  if(m_subtitleHasBeenSet)
  {
   payload.WithString("subtitle", m_subtitle);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_welcomeMessageHasBeenSet)
  {
   payload.WithString("welcomeMessage", m_welcomeMessage);

  }

  return payload.View().WriteReadable();
}




