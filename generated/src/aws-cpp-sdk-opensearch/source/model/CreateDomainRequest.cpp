﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/CreateDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDomainRequest::CreateDomainRequest() : 
    m_domainNameHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_clusterConfigHasBeenSet(false),
    m_eBSOptionsHasBeenSet(false),
    m_accessPoliciesHasBeenSet(false),
    m_iPAddressType(IPAddressType::NOT_SET),
    m_iPAddressTypeHasBeenSet(false),
    m_snapshotOptionsHasBeenSet(false),
    m_vPCOptionsHasBeenSet(false),
    m_cognitoOptionsHasBeenSet(false),
    m_encryptionAtRestOptionsHasBeenSet(false),
    m_nodeToNodeEncryptionOptionsHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false),
    m_logPublishingOptionsHasBeenSet(false),
    m_domainEndpointOptionsHasBeenSet(false),
    m_advancedSecurityOptionsHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_autoTuneOptionsHasBeenSet(false),
    m_offPeakWindowOptionsHasBeenSet(false),
    m_softwareUpdateOptionsHasBeenSet(false)
{
}

Aws::String CreateDomainRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_clusterConfigHasBeenSet)
  {
   payload.WithObject("ClusterConfig", m_clusterConfig.Jsonize());

  }

  if(m_eBSOptionsHasBeenSet)
  {
   payload.WithObject("EBSOptions", m_eBSOptions.Jsonize());

  }

  if(m_accessPoliciesHasBeenSet)
  {
   payload.WithString("AccessPolicies", m_accessPolicies);

  }

  if(m_iPAddressTypeHasBeenSet)
  {
   payload.WithString("IPAddressType", IPAddressTypeMapper::GetNameForIPAddressType(m_iPAddressType));
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

  if(m_encryptionAtRestOptionsHasBeenSet)
  {
   payload.WithObject("EncryptionAtRestOptions", m_encryptionAtRestOptions.Jsonize());

  }

  if(m_nodeToNodeEncryptionOptionsHasBeenSet)
  {
   payload.WithObject("NodeToNodeEncryptionOptions", m_nodeToNodeEncryptionOptions.Jsonize());

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

  if(m_logPublishingOptionsHasBeenSet)
  {
   JsonValue logPublishingOptionsJsonMap;
   for(auto& logPublishingOptionsItem : m_logPublishingOptions)
   {
     logPublishingOptionsJsonMap.WithObject(LogTypeMapper::GetNameForLogType(logPublishingOptionsItem.first), logPublishingOptionsItem.second.Jsonize());
   }
   payload.WithObject("LogPublishingOptions", std::move(logPublishingOptionsJsonMap));

  }

  if(m_domainEndpointOptionsHasBeenSet)
  {
   payload.WithObject("DomainEndpointOptions", m_domainEndpointOptions.Jsonize());

  }

  if(m_advancedSecurityOptionsHasBeenSet)
  {
   payload.WithObject("AdvancedSecurityOptions", m_advancedSecurityOptions.Jsonize());

  }

  if(m_tagListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagListJsonList(m_tagList.size());
   for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
   {
     tagListJsonList[tagListIndex].AsObject(m_tagList[tagListIndex].Jsonize());
   }
   payload.WithArray("TagList", std::move(tagListJsonList));

  }

  if(m_autoTuneOptionsHasBeenSet)
  {
   payload.WithObject("AutoTuneOptions", m_autoTuneOptions.Jsonize());

  }

  if(m_offPeakWindowOptionsHasBeenSet)
  {
   payload.WithObject("OffPeakWindowOptions", m_offPeakWindowOptions.Jsonize());

  }

  if(m_softwareUpdateOptionsHasBeenSet)
  {
   payload.WithObject("SoftwareUpdateOptions", m_softwareUpdateOptions.Jsonize());

  }

  return payload.View().WriteReadable();
}




