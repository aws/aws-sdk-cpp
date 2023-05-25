/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/UpdateAccountSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceGroups::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAccountSettingsRequest::UpdateAccountSettingsRequest() : 
    m_groupLifecycleEventsDesiredStatus(GroupLifecycleEventsDesiredStatus::NOT_SET),
    m_groupLifecycleEventsDesiredStatusHasBeenSet(false)
{
}

Aws::String UpdateAccountSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_groupLifecycleEventsDesiredStatusHasBeenSet)
  {
   payload.WithString("GroupLifecycleEventsDesiredStatus", GroupLifecycleEventsDesiredStatusMapper::GetNameForGroupLifecycleEventsDesiredStatus(m_groupLifecycleEventsDesiredStatus));
  }

  return payload.View().WriteReadable();
}




