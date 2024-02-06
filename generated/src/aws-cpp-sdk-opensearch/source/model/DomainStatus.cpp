/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DomainStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

DomainStatus::DomainStatus() : 
    m_domainIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_created(false),
    m_createdHasBeenSet(false),
    m_deleted(false),
    m_deletedHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_endpointV2HasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_processing(false),
    m_processingHasBeenSet(false),
    m_upgradeProcessing(false),
    m_upgradeProcessingHasBeenSet(false),
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
    m_serviceSoftwareOptionsHasBeenSet(false),
    m_domainEndpointOptionsHasBeenSet(false),
    m_advancedSecurityOptionsHasBeenSet(false),
    m_autoTuneOptionsHasBeenSet(false),
    m_changeProgressDetailsHasBeenSet(false),
    m_offPeakWindowOptionsHasBeenSet(false),
    m_softwareUpdateOptionsHasBeenSet(false),
    m_domainProcessingStatus(DomainProcessingStatusType::NOT_SET),
    m_domainProcessingStatusHasBeenSet(false),
    m_modifyingPropertiesHasBeenSet(false)
{
}

DomainStatus::DomainStatus(JsonView jsonValue) : 
    m_domainIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_created(false),
    m_createdHasBeenSet(false),
    m_deleted(false),
    m_deletedHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_endpointV2HasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_processing(false),
    m_processingHasBeenSet(false),
    m_upgradeProcessing(false),
    m_upgradeProcessingHasBeenSet(false),
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
    m_serviceSoftwareOptionsHasBeenSet(false),
    m_domainEndpointOptionsHasBeenSet(false),
    m_advancedSecurityOptionsHasBeenSet(false),
    m_autoTuneOptionsHasBeenSet(false),
    m_changeProgressDetailsHasBeenSet(false),
    m_offPeakWindowOptionsHasBeenSet(false),
    m_softwareUpdateOptionsHasBeenSet(false),
    m_domainProcessingStatus(DomainProcessingStatusType::NOT_SET),
    m_domainProcessingStatusHasBeenSet(false),
    m_modifyingPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

DomainStatus& DomainStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Created"))
  {
    m_created = jsonValue.GetBool("Created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Deleted"))
  {
    m_deleted = jsonValue.GetBool("Deleted");

    m_deletedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetString("Endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointV2"))
  {
    m_endpointV2 = jsonValue.GetString("EndpointV2");

    m_endpointV2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("Endpoints"))
  {
    Aws::Map<Aws::String, JsonView> endpointsJsonMap = jsonValue.GetObject("Endpoints").GetAllObjects();
    for(auto& endpointsItem : endpointsJsonMap)
    {
      m_endpoints[endpointsItem.first] = endpointsItem.second.AsString();
    }
    m_endpointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Processing"))
  {
    m_processing = jsonValue.GetBool("Processing");

    m_processingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpgradeProcessing"))
  {
    m_upgradeProcessing = jsonValue.GetBool("UpgradeProcessing");

    m_upgradeProcessingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterConfig"))
  {
    m_clusterConfig = jsonValue.GetObject("ClusterConfig");

    m_clusterConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EBSOptions"))
  {
    m_eBSOptions = jsonValue.GetObject("EBSOptions");

    m_eBSOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessPolicies"))
  {
    m_accessPolicies = jsonValue.GetString("AccessPolicies");

    m_accessPoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IPAddressType"))
  {
    m_iPAddressType = IPAddressTypeMapper::GetIPAddressTypeForName(jsonValue.GetString("IPAddressType"));

    m_iPAddressTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotOptions"))
  {
    m_snapshotOptions = jsonValue.GetObject("SnapshotOptions");

    m_snapshotOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VPCOptions"))
  {
    m_vPCOptions = jsonValue.GetObject("VPCOptions");

    m_vPCOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CognitoOptions"))
  {
    m_cognitoOptions = jsonValue.GetObject("CognitoOptions");

    m_cognitoOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionAtRestOptions"))
  {
    m_encryptionAtRestOptions = jsonValue.GetObject("EncryptionAtRestOptions");

    m_encryptionAtRestOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeToNodeEncryptionOptions"))
  {
    m_nodeToNodeEncryptionOptions = jsonValue.GetObject("NodeToNodeEncryptionOptions");

    m_nodeToNodeEncryptionOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdvancedOptions"))
  {
    Aws::Map<Aws::String, JsonView> advancedOptionsJsonMap = jsonValue.GetObject("AdvancedOptions").GetAllObjects();
    for(auto& advancedOptionsItem : advancedOptionsJsonMap)
    {
      m_advancedOptions[advancedOptionsItem.first] = advancedOptionsItem.second.AsString();
    }
    m_advancedOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogPublishingOptions"))
  {
    Aws::Map<Aws::String, JsonView> logPublishingOptionsJsonMap = jsonValue.GetObject("LogPublishingOptions").GetAllObjects();
    for(auto& logPublishingOptionsItem : logPublishingOptionsJsonMap)
    {
      m_logPublishingOptions[LogTypeMapper::GetLogTypeForName(logPublishingOptionsItem.first)] = logPublishingOptionsItem.second.AsObject();
    }
    m_logPublishingOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceSoftwareOptions"))
  {
    m_serviceSoftwareOptions = jsonValue.GetObject("ServiceSoftwareOptions");

    m_serviceSoftwareOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainEndpointOptions"))
  {
    m_domainEndpointOptions = jsonValue.GetObject("DomainEndpointOptions");

    m_domainEndpointOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdvancedSecurityOptions"))
  {
    m_advancedSecurityOptions = jsonValue.GetObject("AdvancedSecurityOptions");

    m_advancedSecurityOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoTuneOptions"))
  {
    m_autoTuneOptions = jsonValue.GetObject("AutoTuneOptions");

    m_autoTuneOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChangeProgressDetails"))
  {
    m_changeProgressDetails = jsonValue.GetObject("ChangeProgressDetails");

    m_changeProgressDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OffPeakWindowOptions"))
  {
    m_offPeakWindowOptions = jsonValue.GetObject("OffPeakWindowOptions");

    m_offPeakWindowOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SoftwareUpdateOptions"))
  {
    m_softwareUpdateOptions = jsonValue.GetObject("SoftwareUpdateOptions");

    m_softwareUpdateOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainProcessingStatus"))
  {
    m_domainProcessingStatus = DomainProcessingStatusTypeMapper::GetDomainProcessingStatusTypeForName(jsonValue.GetString("DomainProcessingStatus"));

    m_domainProcessingStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModifyingProperties"))
  {
    Aws::Utils::Array<JsonView> modifyingPropertiesJsonList = jsonValue.GetArray("ModifyingProperties");
    for(unsigned modifyingPropertiesIndex = 0; modifyingPropertiesIndex < modifyingPropertiesJsonList.GetLength(); ++modifyingPropertiesIndex)
    {
      m_modifyingProperties.push_back(modifyingPropertiesJsonList[modifyingPropertiesIndex].AsObject());
    }
    m_modifyingPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainStatus::Jsonize() const
{
  JsonValue payload;

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_createdHasBeenSet)
  {
   payload.WithBool("Created", m_created);

  }

  if(m_deletedHasBeenSet)
  {
   payload.WithBool("Deleted", m_deleted);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("Endpoint", m_endpoint);

  }

  if(m_endpointV2HasBeenSet)
  {
   payload.WithString("EndpointV2", m_endpointV2);

  }

  if(m_endpointsHasBeenSet)
  {
   JsonValue endpointsJsonMap;
   for(auto& endpointsItem : m_endpoints)
   {
     endpointsJsonMap.WithString(endpointsItem.first, endpointsItem.second);
   }
   payload.WithObject("Endpoints", std::move(endpointsJsonMap));

  }

  if(m_processingHasBeenSet)
  {
   payload.WithBool("Processing", m_processing);

  }

  if(m_upgradeProcessingHasBeenSet)
  {
   payload.WithBool("UpgradeProcessing", m_upgradeProcessing);

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

  if(m_serviceSoftwareOptionsHasBeenSet)
  {
   payload.WithObject("ServiceSoftwareOptions", m_serviceSoftwareOptions.Jsonize());

  }

  if(m_domainEndpointOptionsHasBeenSet)
  {
   payload.WithObject("DomainEndpointOptions", m_domainEndpointOptions.Jsonize());

  }

  if(m_advancedSecurityOptionsHasBeenSet)
  {
   payload.WithObject("AdvancedSecurityOptions", m_advancedSecurityOptions.Jsonize());

  }

  if(m_autoTuneOptionsHasBeenSet)
  {
   payload.WithObject("AutoTuneOptions", m_autoTuneOptions.Jsonize());

  }

  if(m_changeProgressDetailsHasBeenSet)
  {
   payload.WithObject("ChangeProgressDetails", m_changeProgressDetails.Jsonize());

  }

  if(m_offPeakWindowOptionsHasBeenSet)
  {
   payload.WithObject("OffPeakWindowOptions", m_offPeakWindowOptions.Jsonize());

  }

  if(m_softwareUpdateOptionsHasBeenSet)
  {
   payload.WithObject("SoftwareUpdateOptions", m_softwareUpdateOptions.Jsonize());

  }

  if(m_domainProcessingStatusHasBeenSet)
  {
   payload.WithString("DomainProcessingStatus", DomainProcessingStatusTypeMapper::GetNameForDomainProcessingStatusType(m_domainProcessingStatus));
  }

  if(m_modifyingPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modifyingPropertiesJsonList(m_modifyingProperties.size());
   for(unsigned modifyingPropertiesIndex = 0; modifyingPropertiesIndex < modifyingPropertiesJsonList.GetLength(); ++modifyingPropertiesIndex)
   {
     modifyingPropertiesJsonList[modifyingPropertiesIndex].AsObject(m_modifyingProperties[modifyingPropertiesIndex].Jsonize());
   }
   payload.WithArray("ModifyingProperties", std::move(modifyingPropertiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
