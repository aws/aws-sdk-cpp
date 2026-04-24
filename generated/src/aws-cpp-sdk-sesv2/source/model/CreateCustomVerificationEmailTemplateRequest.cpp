/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/CreateCustomVerificationEmailTemplateRequest.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCustomVerificationEmailTemplateRequest::SerializePayload() const {
  JsonValue payload;

  if (m_templateNameHasBeenSet) {
    payload.WithString("TemplateName", m_templateName);
  }

  if (m_fromEmailAddressHasBeenSet) {
    payload.WithString("FromEmailAddress", m_fromEmailAddress);
  }

  if (m_templateSubjectHasBeenSet) {
    payload.WithString("TemplateSubject", m_templateSubject);
  }

  if (m_templateContentHasBeenSet) {
    payload.WithString("TemplateContent", m_templateContent);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  if (m_successRedirectionURLHasBeenSet) {
    payload.WithString("SuccessRedirectionURL", m_successRedirectionURL);
  }

  if (m_failureRedirectionURLHasBeenSet) {
    payload.WithString("FailureRedirectionURL", m_failureRedirectionURL);
  }

  return payload.View().WriteReadable();
}
