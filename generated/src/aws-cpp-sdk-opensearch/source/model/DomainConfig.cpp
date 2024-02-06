/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DomainConfig.h>
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

DomainConfig::DomainConfig() : 
    m_engineVersionHasBeenSet(false),
    m_clusterConfigHasBeenSet(false),
    m_eBSOptionsHasBeenSet(false),
    m_accessPoliciesHasBeenSet(false),
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
    m_autoTuneOptionsHasBeenSet(false),
    m_changeProgressDetailsHasBeenSet(false),
    m_offPeakWindowOptionsHasBeenSet(false),
    m_softwareUpdateOptionsHasBeenSet(false),
    m_modifyingPropertiesHasBeenSet(false)
{
}

DomainConfig::DomainConfig(JsonView jsonValue) : 
    m_engineVersionHasBeenSet(false),
    m_clusterConfigHasBeenSet(false),
    m_eBSOptionsHasBeenSet(false),
    m_accessPoliciesHasBeenSet(false),
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
    m_autoTuneOptionsHasBeenSet(false),
    m_changeProgressDetailsHasBeenSet(false),
    m_offPeakWindowOptionsHasBeenSet(false),
    m_softwareUpdateOptionsHasBeenSet(false),
    m_modifyingPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

DomainConfig& DomainConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetObject("EngineVersion");

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
    m_accessPolicies = jsonValue.GetObject("AccessPolicies");

    m_accessPoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IPAddressType"))
  {
    m_iPAddressType = jsonValue.GetObject("IPAddressType");

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
    m_advancedOptions = jsonValue.GetObject("AdvancedOptions");

    m_advancedOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogPublishingOptions"))
  {
    m_logPublishingOptions = jsonValue.GetObject("LogPublishingOptions");

    m_logPublishingOptionsHasBeenSet = true;
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

JsonValue DomainConfig::Jsonize() const
{
  JsonValue payload;

  if(m_engineVersionHasBeenSet)
  {
   payload.WithObject("EngineVersion", m_engineVersion.Jsonize());

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
   payload.WithObject("AccessPolicies", m_accessPolicies.Jsonize());

  }

  if(m_iPAddressTypeHasBeenSet)
  {
   payload.WithObject("IPAddressType", m_iPAddressType.Jsonize());

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
   payload.WithObject("AdvancedOptions", m_advancedOptions.Jsonize());

  }

  if(m_logPublishingOptionsHasBeenSet)
  {
   payload.WithObject("LogPublishingOptions", m_logPublishingOptions.Jsonize());

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
