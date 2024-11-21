/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/UpdateNotificationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Notifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNotificationConfigurationRequest::UpdateNotificationConfigurationRequest() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_aggregationDuration(AggregationDuration::NOT_SET),
    m_aggregationDurationHasBeenSet(false)
{
}

Aws::String UpdateNotificationConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_aggregationDurationHasBeenSet)
  {
   payload.WithString("aggregationDuration", AggregationDurationMapper::GetNameForAggregationDuration(m_aggregationDuration));
  }

  return payload.View().WriteReadable();
}




