/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/SendCustomVerificationEmailRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendCustomVerificationEmailRequest::SendCustomVerificationEmailRequest() : 
    m_emailAddressHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_configurationSetNameHasBeenSet(false)
{
}

Aws::String SendCustomVerificationEmailRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("TemplateName", m_templateName);

  }

  if(m_configurationSetNameHasBeenSet)
  {
   payload.WithString("ConfigurationSetName", m_configurationSetName);

  }

  return payload.View().WriteReadable();
}




