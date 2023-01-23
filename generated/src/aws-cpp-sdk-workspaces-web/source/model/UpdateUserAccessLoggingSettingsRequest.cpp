/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/UpdateUserAccessLoggingSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserAccessLoggingSettingsRequest::UpdateUserAccessLoggingSettingsRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_kinesisStreamArnHasBeenSet(false),
    m_userAccessLoggingSettingsArnHasBeenSet(false)
{
}

Aws::String UpdateUserAccessLoggingSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_kinesisStreamArnHasBeenSet)
  {
   payload.WithString("kinesisStreamArn", m_kinesisStreamArn);

  }

  return payload.View().WriteReadable();
}




