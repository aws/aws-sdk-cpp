/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/CreateAnonymousWebExperienceUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAnonymousWebExperienceUrlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sessionDurationInMinutesHasBeenSet)
  {
   payload.WithInteger("sessionDurationInMinutes", m_sessionDurationInMinutes);

  }

  return payload.View().WriteReadable();
}




