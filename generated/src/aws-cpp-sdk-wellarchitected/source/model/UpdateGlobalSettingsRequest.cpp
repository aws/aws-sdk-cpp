/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/UpdateGlobalSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateGlobalSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationSharingStatusHasBeenSet)
  {
   payload.WithString("OrganizationSharingStatus", OrganizationSharingStatusMapper::GetNameForOrganizationSharingStatus(m_organizationSharingStatus));
  }

  if(m_discoveryIntegrationStatusHasBeenSet)
  {
   payload.WithString("DiscoveryIntegrationStatus", DiscoveryIntegrationStatusMapper::GetNameForDiscoveryIntegrationStatus(m_discoveryIntegrationStatus));
  }

  if(m_jiraConfigurationHasBeenSet)
  {
   payload.WithObject("JiraConfiguration", m_jiraConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




