/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/UpdateSecurityHubConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSecurityHubConfigurationRequest::UpdateSecurityHubConfigurationRequest() : 
    m_autoEnableControls(false),
    m_autoEnableControlsHasBeenSet(false)
{
}

Aws::String UpdateSecurityHubConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoEnableControlsHasBeenSet)
  {
   payload.WithBool("AutoEnableControls", m_autoEnableControls);

  }

  return payload.View().WriteReadable();
}




