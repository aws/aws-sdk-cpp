/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/CreateCustomVerificationEmailTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCustomVerificationEmailTemplateRequest::CreateCustomVerificationEmailTemplateRequest() : 
    m_templateNameHasBeenSet(false),
    m_fromEmailAddressHasBeenSet(false),
    m_templateSubjectHasBeenSet(false),
    m_templateContentHasBeenSet(false),
    m_successRedirectionURLHasBeenSet(false),
    m_failureRedirectionURLHasBeenSet(false)
{
}

Aws::String CreateCustomVerificationEmailTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("TemplateName", m_templateName);

  }

  if(m_fromEmailAddressHasBeenSet)
  {
   payload.WithString("FromEmailAddress", m_fromEmailAddress);

  }

  if(m_templateSubjectHasBeenSet)
  {
   payload.WithString("TemplateSubject", m_templateSubject);

  }

  if(m_templateContentHasBeenSet)
  {
   payload.WithString("TemplateContent", m_templateContent);

  }

  if(m_successRedirectionURLHasBeenSet)
  {
   payload.WithString("SuccessRedirectionURL", m_successRedirectionURL);

  }

  if(m_failureRedirectionURLHasBeenSet)
  {
   payload.WithString("FailureRedirectionURL", m_failureRedirectionURL);

  }

  return payload.View().WriteReadable();
}




