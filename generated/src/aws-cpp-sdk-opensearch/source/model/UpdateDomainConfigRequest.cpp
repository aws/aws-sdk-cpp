/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/UpdateDomainConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDomainConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterConfigHasBeenSet)
  {
   payload.WithObject("ClusterConfig", m_clusterConfig.Jsonize());

  }

  if(m_eBSOptionsHasBeenSet)
  {
   payload.WithObject("EBSOptions", m_eBSOptions.Jsonize());

  }

  if(m_snapshotOptionsHasBeenSet)
  {
   payload.WithObject("SnapshotOptions", m_snapshotOptions.Jsonize());

  }

  if(m_vPCOptionsHasBeenSet)
  {
   payload.WithObject("VPCOptions", m_vPCOptions.Jsonize());

  }

  if(m_cognitoOptionsHasBeenSet)
  {
   payload.WithObject("CognitoOptions", m_cognitoOptions.Jsonize());

  }

  if(m_advancedOptionsHasBeenSet)
  {
   JsonValue advancedOptionsJsonMap;
   for(auto& advancedOptionsItem : m_advancedOptions)
   {
     advancedOptionsJsonMap.WithString(advancedOptionsItem.first, advancedOptionsItem.second);
   }
   payload.WithObject("AdvancedOptions", std::move(advancedOptionsJsonMap));

  }

  if(m_accessPoliciesHasBeenSet)
  {
   payload.WithString("AccessPolicies", m_accessPolicies);

  }

  if(m_iPAddressTypeHasBeenSet)
  {
   payload.WithString("IPAddressType", IPAddressTypeMapper::GetNameForIPAddressType(m_iPAddressType));
  }

  if(m_logPublishingOptionsHasBeenSet)
  {
   JsonValue logPublishingOptionsJsonMap;
   for(auto& logPublishingOptionsItem : m_logPublishingOptions)
   {
     logPublishingOptionsJsonMap.WithObject(LogTypeMapper::GetNameForLogType(logPublishingOptionsItem.first), logPublishingOptionsItem.second.Jsonize());
   }
   payload.WithObject("LogPublishingOptions", std::move(logPublishingOptionsJsonMap));

  }

  if(m_encryptionAtRestOptionsHasBeenSet)
  {
   payload.WithObject("EncryptionAtRestOptions", m_encryptionAtRestOptions.Jsonize());

  }

  if(m_domainEndpointOptionsHasBeenSet)
  {
   payload.WithObject("DomainEndpointOptions", m_domainEndpointOptions.Jsonize());

  }

  if(m_nodeToNodeEncryptionOptionsHasBeenSet)
  {
   payload.WithObject("NodeToNodeEncryptionOptions", m_nodeToNodeEncryptionOptions.Jsonize());

  }

  if(m_advancedSecurityOptionsHasBeenSet)
  {
   payload.WithObject("AdvancedSecurityOptions", m_advancedSecurityOptions.Jsonize());

  }

  if(m_identityCenterOptionsHasBeenSet)
  {
   payload.WithObject("IdentityCenterOptions", m_identityCenterOptions.Jsonize());

  }

  if(m_autoTuneOptionsHasBeenSet)
  {
   payload.WithObject("AutoTuneOptions", m_autoTuneOptions.Jsonize());

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  if(m_dryRunModeHasBeenSet)
  {
   payload.WithString("DryRunMode", DryRunModeMapper::GetNameForDryRunMode(m_dryRunMode));
  }

  if(m_offPeakWindowOptionsHasBeenSet)
  {
   payload.WithObject("OffPeakWindowOptions", m_offPeakWindowOptions.Jsonize());

  }

  if(m_softwareUpdateOptionsHasBeenSet)
  {
   payload.WithObject("SoftwareUpdateOptions", m_softwareUpdateOptions.Jsonize());

  }

  if(m_aIMLOptionsHasBeenSet)
  {
   payload.WithObject("AIMLOptions", m_aIMLOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}




