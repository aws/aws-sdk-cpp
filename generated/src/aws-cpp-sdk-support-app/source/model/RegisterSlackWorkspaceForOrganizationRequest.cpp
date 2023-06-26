/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support-app/model/RegisterSlackWorkspaceForOrganizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SupportApp::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterSlackWorkspaceForOrganizationRequest::RegisterSlackWorkspaceForOrganizationRequest() : 
    m_teamIdHasBeenSet(false)
{
}

Aws::String RegisterSlackWorkspaceForOrganizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_teamIdHasBeenSet)
  {
   payload.WithString("teamId", m_teamId);

  }

  return payload.View().WriteReadable();
}




