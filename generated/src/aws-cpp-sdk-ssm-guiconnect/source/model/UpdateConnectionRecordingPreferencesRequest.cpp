/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-guiconnect/model/UpdateConnectionRecordingPreferencesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMGuiConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateConnectionRecordingPreferencesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_connectionRecordingPreferencesHasBeenSet)
  {
   payload.WithObject("ConnectionRecordingPreferences", m_connectionRecordingPreferences.Jsonize());

  }

  return payload.View().WriteReadable();
}




