﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/PutEmailIdentityMailFromAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutEmailIdentityMailFromAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mailFromDomainHasBeenSet)
  {
   payload.WithString("MailFromDomain", m_mailFromDomain);

  }

  if(m_behaviorOnMxFailureHasBeenSet)
  {
   payload.WithString("BehaviorOnMxFailure", BehaviorOnMxFailureMapper::GetNameForBehaviorOnMxFailure(m_behaviorOnMxFailure));
  }

  return payload.View().WriteReadable();
}




