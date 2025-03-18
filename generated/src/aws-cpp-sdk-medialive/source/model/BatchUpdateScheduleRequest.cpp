/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/BatchUpdateScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchUpdateScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_createsHasBeenSet)
  {
   payload.WithObject("creates", m_creates.Jsonize());

  }

  if(m_deletesHasBeenSet)
  {
   payload.WithObject("deletes", m_deletes.Jsonize());

  }

  return payload.View().WriteReadable();
}




