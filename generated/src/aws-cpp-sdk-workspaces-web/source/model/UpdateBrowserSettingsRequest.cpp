/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/UpdateBrowserSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBrowserSettingsRequest::UpdateBrowserSettingsRequest() : 
    m_browserPolicyHasBeenSet(false),
    m_browserSettingsArnHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String UpdateBrowserSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_browserPolicyHasBeenSet)
  {
   payload.WithString("browserPolicy", m_browserPolicy);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




