/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/model/UpdateServiceSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMQuickSetup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateServiceSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_explorerEnablingRoleArnHasBeenSet)
  {
   payload.WithString("ExplorerEnablingRoleArn", m_explorerEnablingRoleArn);

  }

  return payload.View().WriteReadable();
}




