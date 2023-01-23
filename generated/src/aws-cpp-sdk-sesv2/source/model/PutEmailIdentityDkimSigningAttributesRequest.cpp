/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/PutEmailIdentityDkimSigningAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutEmailIdentityDkimSigningAttributesRequest::PutEmailIdentityDkimSigningAttributesRequest() : 
    m_emailIdentityHasBeenSet(false),
    m_signingAttributesOrigin(DkimSigningAttributesOrigin::NOT_SET),
    m_signingAttributesOriginHasBeenSet(false),
    m_signingAttributesHasBeenSet(false)
{
}

Aws::String PutEmailIdentityDkimSigningAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_signingAttributesOriginHasBeenSet)
  {
   payload.WithString("SigningAttributesOrigin", DkimSigningAttributesOriginMapper::GetNameForDkimSigningAttributesOrigin(m_signingAttributesOrigin));
  }

  if(m_signingAttributesHasBeenSet)
  {
   payload.WithObject("SigningAttributes", m_signingAttributes.Jsonize());

  }

  return payload.View().WriteReadable();
}




