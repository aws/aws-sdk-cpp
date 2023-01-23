/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/PutEmailIdentityFeedbackAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutEmailIdentityFeedbackAttributesRequest::PutEmailIdentityFeedbackAttributesRequest() : 
    m_emailIdentityHasBeenSet(false),
    m_emailForwardingEnabled(false),
    m_emailForwardingEnabledHasBeenSet(false)
{
}

Aws::String PutEmailIdentityFeedbackAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_emailForwardingEnabledHasBeenSet)
  {
   payload.WithBool("EmailForwardingEnabled", m_emailForwardingEnabled);

  }

  return payload.View().WriteReadable();
}




