/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/Workgroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

Workgroup::Workgroup() : 
    m_baseCapacity(0),
    m_baseCapacityHasBeenSet(false),
    m_configParametersHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_crossAccountVpcsHasBeenSet(false),
    m_customDomainCertificateArnHasBeenSet(false),
    m_customDomainCertificateExpiryTimeHasBeenSet(false),
    m_customDomainNameHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_enhancedVpcRouting(false),
    m_enhancedVpcRoutingHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_patchVersionHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_status(WorkgroupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_workgroupArnHasBeenSet(false),
    m_workgroupIdHasBeenSet(false),
    m_workgroupNameHasBeenSet(false),
    m_workgroupVersionHasBeenSet(false)
{
}

Workgroup::Workgroup(JsonView jsonValue) : 
    m_baseCapacity(0),
    m_baseCapacityHasBeenSet(false),
    m_configParametersHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_crossAccountVpcsHasBeenSet(false),
    m_customDomainCertificateArnHasBeenSet(false),
    m_customDomainCertificateExpiryTimeHasBeenSet(false),
    m_customDomainNameHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_enhancedVpcRouting(false),
    m_enhancedVpcRoutingHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_patchVersionHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_status(WorkgroupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_workgroupArnHasBeenSet(false),
    m_workgroupIdHasBeenSet(false),
    m_workgroupNameHasBeenSet(false),
    m_workgroupVersionHasBeenSet(false)
{
  *this = jsonValue;
}

Workgroup& Workgroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("baseCapacity"))
  {
    m_baseCapacity = jsonValue.GetInteger("baseCapacity");

    m_baseCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configParameters"))
  {
    Aws::Utils::Array<JsonView> configParametersJsonList = jsonValue.GetArray("configParameters");
    for(unsigned configParametersIndex = 0; configParametersIndex < configParametersJsonList.GetLength(); ++configParametersIndex)
    {
      m_configParameters.push_back(configParametersJsonList[configParametersIndex].AsObject());
    }
    m_configParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetString("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("crossAccountVpcs"))
  {
    Aws::Utils::Array<JsonView> crossAccountVpcsJsonList = jsonValue.GetArray("crossAccountVpcs");
    for(unsigned crossAccountVpcsIndex = 0; crossAccountVpcsIndex < crossAccountVpcsJsonList.GetLength(); ++crossAccountVpcsIndex)
    {
      m_crossAccountVpcs.push_back(crossAccountVpcsJsonList[crossAccountVpcsIndex].AsString());
    }
    m_crossAccountVpcsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customDomainCertificateArn"))
  {
    m_customDomainCertificateArn = jsonValue.GetString("customDomainCertificateArn");

    m_customDomainCertificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customDomainCertificateExpiryTime"))
  {
    m_customDomainCertificateExpiryTime = jsonValue.GetString("customDomainCertificateExpiryTime");

    m_customDomainCertificateExpiryTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customDomainName"))
  {
    m_customDomainName = jsonValue.GetString("customDomainName");

    m_customDomainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetObject("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enhancedVpcRouting"))
  {
    m_enhancedVpcRouting = jsonValue.GetBool("enhancedVpcRouting");

    m_enhancedVpcRoutingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxCapacity"))
  {
    m_maxCapacity = jsonValue.GetInteger("maxCapacity");

    m_maxCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespaceName"))
  {
    m_namespaceName = jsonValue.GetString("namespaceName");

    m_namespaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("patchVersion"))
  {
    m_patchVersion = jsonValue.GetString("patchVersion");

    m_patchVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publiclyAccessible"))
  {
    m_publiclyAccessible = jsonValue.GetBool("publiclyAccessible");

    m_publiclyAccessibleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkgroupStatusMapper::GetWorkgroupStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workgroupArn"))
  {
    m_workgroupArn = jsonValue.GetString("workgroupArn");

    m_workgroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workgroupId"))
  {
    m_workgroupId = jsonValue.GetString("workgroupId");

    m_workgroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workgroupName"))
  {
    m_workgroupName = jsonValue.GetString("workgroupName");

    m_workgroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workgroupVersion"))
  {
    m_workgroupVersion = jsonValue.GetString("workgroupVersion");

    m_workgroupVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue Workgroup::Jsonize() const
{
  JsonValue payload;

  if(m_baseCapacityHasBeenSet)
  {
   payload.WithInteger("baseCapacity", m_baseCapacity);

  }

  if(m_configParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configParametersJsonList(m_configParameters.size());
   for(unsigned configParametersIndex = 0; configParametersIndex < configParametersJsonList.GetLength(); ++configParametersIndex)
   {
     configParametersJsonList[configParametersIndex].AsObject(m_configParameters[configParametersIndex].Jsonize());
   }
   payload.WithArray("configParameters", std::move(configParametersJsonList));

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("creationDate", m_creationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_crossAccountVpcsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> crossAccountVpcsJsonList(m_crossAccountVpcs.size());
   for(unsigned crossAccountVpcsIndex = 0; crossAccountVpcsIndex < crossAccountVpcsJsonList.GetLength(); ++crossAccountVpcsIndex)
   {
     crossAccountVpcsJsonList[crossAccountVpcsIndex].AsString(m_crossAccountVpcs[crossAccountVpcsIndex]);
   }
   payload.WithArray("crossAccountVpcs", std::move(crossAccountVpcsJsonList));

  }

  if(m_customDomainCertificateArnHasBeenSet)
  {
   payload.WithString("customDomainCertificateArn", m_customDomainCertificateArn);

  }

  if(m_customDomainCertificateExpiryTimeHasBeenSet)
  {
   payload.WithString("customDomainCertificateExpiryTime", m_customDomainCertificateExpiryTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_customDomainNameHasBeenSet)
  {
   payload.WithString("customDomainName", m_customDomainName);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithObject("endpoint", m_endpoint.Jsonize());

  }

  if(m_enhancedVpcRoutingHasBeenSet)
  {
   payload.WithBool("enhancedVpcRouting", m_enhancedVpcRouting);

  }

  if(m_maxCapacityHasBeenSet)
  {
   payload.WithInteger("maxCapacity", m_maxCapacity);

  }

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("namespaceName", m_namespaceName);

  }

  if(m_patchVersionHasBeenSet)
  {
   payload.WithString("patchVersion", m_patchVersion);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("publiclyAccessible", m_publiclyAccessible);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("securityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", WorkgroupStatusMapper::GetNameForWorkgroupStatus(m_status));
  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("subnetIds", std::move(subnetIdsJsonList));

  }

  if(m_workgroupArnHasBeenSet)
  {
   payload.WithString("workgroupArn", m_workgroupArn);

  }

  if(m_workgroupIdHasBeenSet)
  {
   payload.WithString("workgroupId", m_workgroupId);

  }

  if(m_workgroupNameHasBeenSet)
  {
   payload.WithString("workgroupName", m_workgroupName);

  }

  if(m_workgroupVersionHasBeenSet)
  {
   payload.WithString("workgroupVersion", m_workgroupVersion);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
