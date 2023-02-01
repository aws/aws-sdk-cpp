/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdatePublicSharingSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePublicSharingSettingsRequest::UpdatePublicSharingSettingsRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_publicSharingEnabled(false),
    m_publicSharingEnabledHasBeenSet(false)
{
}

Aws::String UpdatePublicSharingSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_publicSharingEnabledHasBeenSet)
  {
   payload.WithBool("PublicSharingEnabled", m_publicSharingEnabled);

  }

  return payload.View().WriteReadable();
}




