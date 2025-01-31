﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/UpdateSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSubscriptionRequest::UpdateSubscriptionRequest() : 
    m_applicationIdHasBeenSet(false),
    m_subscriptionIdHasBeenSet(false),
    m_type(SubscriptionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String UpdateSubscriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SubscriptionTypeMapper::GetNameForSubscriptionType(m_type));
  }

  return payload.View().WriteReadable();
}




