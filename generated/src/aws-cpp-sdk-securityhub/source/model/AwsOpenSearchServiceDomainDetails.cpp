/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsOpenSearchServiceDomainDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsOpenSearchServiceDomainDetails::AwsOpenSearchServiceDomainDetails() : 
    m_arnHasBeenSet(false),
    m_accessPoliciesHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_domainEndpointHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_encryptionAtRestOptionsHasBeenSet(false),
    m_nodeToNodeEncryptionOptionsHasBeenSet(false),
    m_serviceSoftwareOptionsHasBeenSet(false),
    m_clusterConfigHasBeenSet(false),
    m_domainEndpointOptionsHasBeenSet(false),
    m_vpcOptionsHasBeenSet(false),
    m_logPublishingOptionsHasBeenSet(false),
    m_domainEndpointsHasBeenSet(false),
    m_advancedSecurityOptionsHasBeenSet(false)
{
}

AwsOpenSearchServiceDomainDetails::AwsOpenSearchServiceDomainDetails(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_accessPoliciesHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_domainEndpointHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_encryptionAtRestOptionsHasBeenSet(false),
    m_nodeToNodeEncryptionOptionsHasBeenSet(false),
    m_serviceSoftwareOptionsHasBeenSet(false),
    m_clusterConfigHasBeenSet(false),
    m_domainEndpointOptionsHasBeenSet(false),
    m_vpcOptionsHasBeenSet(false),
    m_logPublishingOptionsHasBeenSet(false),
    m_domainEndpointsHasBeenSet(false),
    m_advancedSecurityOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsOpenSearchServiceDomainDetails& AwsOpenSearchServiceDomainDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessPolicies"))
  {
    m_accessPolicies = jsonValue.GetString("AccessPolicies");

    m_accessPoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainEndpoint"))
  {
    m_domainEndpoint = jsonValue.GetString("DomainEndpoint");

    m_domainEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");

    m_engineVersionHasBeenSet = true;
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

  if(jsonValue.ValueExists("ServiceSoftwareOptions"))
  {
    m_serviceSoftwareOptions = jsonValue.GetObject("ServiceSoftwareOptions");

    m_serviceSoftwareOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterConfig"))
  {
    m_clusterConfig = jsonValue.GetObject("ClusterConfig");

    m_clusterConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainEndpointOptions"))
  {
    m_domainEndpointOptions = jsonValue.GetObject("DomainEndpointOptions");

    m_domainEndpointOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcOptions"))
  {
    m_vpcOptions = jsonValue.GetObject("VpcOptions");

    m_vpcOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogPublishingOptions"))
  {
    m_logPublishingOptions = jsonValue.GetObject("LogPublishingOptions");

    m_logPublishingOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainEndpoints"))
  {
    Aws::Map<Aws::String, JsonView> domainEndpointsJsonMap = jsonValue.GetObject("DomainEndpoints").GetAllObjects();
    for(auto& domainEndpointsItem : domainEndpointsJsonMap)
    {
      m_domainEndpoints[domainEndpointsItem.first] = domainEndpointsItem.second.AsString();
    }
    m_domainEndpointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdvancedSecurityOptions"))
  {
    m_advancedSecurityOptions = jsonValue.GetObject("AdvancedSecurityOptions");

    m_advancedSecurityOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsOpenSearchServiceDomainDetails::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_accessPoliciesHasBeenSet)
  {
   payload.WithString("AccessPolicies", m_accessPolicies);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_domainEndpointHasBeenSet)
  {
   payload.WithString("DomainEndpoint", m_domainEndpoint);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_encryptionAtRestOptionsHasBeenSet)
  {
   payload.WithObject("EncryptionAtRestOptions", m_encryptionAtRestOptions.Jsonize());

  }

  if(m_nodeToNodeEncryptionOptionsHasBeenSet)
  {
   payload.WithObject("NodeToNodeEncryptionOptions", m_nodeToNodeEncryptionOptions.Jsonize());

  }

  if(m_serviceSoftwareOptionsHasBeenSet)
  {
   payload.WithObject("ServiceSoftwareOptions", m_serviceSoftwareOptions.Jsonize());

  }

  if(m_clusterConfigHasBeenSet)
  {
   payload.WithObject("ClusterConfig", m_clusterConfig.Jsonize());

  }

  if(m_domainEndpointOptionsHasBeenSet)
  {
   payload.WithObject("DomainEndpointOptions", m_domainEndpointOptions.Jsonize());

  }

  if(m_vpcOptionsHasBeenSet)
  {
   payload.WithObject("VpcOptions", m_vpcOptions.Jsonize());

  }

  if(m_logPublishingOptionsHasBeenSet)
  {
   payload.WithObject("LogPublishingOptions", m_logPublishingOptions.Jsonize());

  }

  if(m_domainEndpointsHasBeenSet)
  {
   JsonValue domainEndpointsJsonMap;
   for(auto& domainEndpointsItem : m_domainEndpoints)
   {
     domainEndpointsJsonMap.WithString(domainEndpointsItem.first, domainEndpointsItem.second);
   }
   payload.WithObject("DomainEndpoints", std::move(domainEndpointsJsonMap));

  }

  if(m_advancedSecurityOptionsHasBeenSet)
  {
   payload.WithObject("AdvancedSecurityOptions", m_advancedSecurityOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
