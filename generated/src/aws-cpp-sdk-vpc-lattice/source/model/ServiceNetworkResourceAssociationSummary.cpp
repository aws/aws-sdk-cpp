/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ServiceNetworkResourceAssociationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

ServiceNetworkResourceAssociationSummary::ServiceNetworkResourceAssociationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceNetworkResourceAssociationSummary& ServiceNetworkResourceAssociationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dnsEntry"))
  {
    m_dnsEntry = jsonValue.GetObject("dnsEntry");
    m_dnsEntryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = jsonValue.GetString("failureCode");
    m_failureCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isManagedAssociation"))
  {
    m_isManagedAssociation = jsonValue.GetBool("isManagedAssociation");
    m_isManagedAssociationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("privateDnsEntry"))
  {
    m_privateDnsEntry = jsonValue.GetObject("privateDnsEntry");
    m_privateDnsEntryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceConfigurationArn"))
  {
    m_resourceConfigurationArn = jsonValue.GetString("resourceConfigurationArn");
    m_resourceConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceConfigurationId"))
  {
    m_resourceConfigurationId = jsonValue.GetString("resourceConfigurationId");
    m_resourceConfigurationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceConfigurationName"))
  {
    m_resourceConfigurationName = jsonValue.GetString("resourceConfigurationName");
    m_resourceConfigurationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceNetworkArn"))
  {
    m_serviceNetworkArn = jsonValue.GetString("serviceNetworkArn");
    m_serviceNetworkArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceNetworkId"))
  {
    m_serviceNetworkId = jsonValue.GetString("serviceNetworkId");
    m_serviceNetworkIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceNetworkName"))
  {
    m_serviceNetworkName = jsonValue.GetString("serviceNetworkName");
    m_serviceNetworkNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ServiceNetworkResourceAssociationStatusMapper::GetServiceNetworkResourceAssociationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceNetworkResourceAssociationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_dnsEntryHasBeenSet)
  {
   payload.WithObject("dnsEntry", m_dnsEntry.Jsonize());

  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("failureCode", m_failureCode);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_isManagedAssociationHasBeenSet)
  {
   payload.WithBool("isManagedAssociation", m_isManagedAssociation);

  }

  if(m_privateDnsEntryHasBeenSet)
  {
   payload.WithObject("privateDnsEntry", m_privateDnsEntry.Jsonize());

  }

  if(m_resourceConfigurationArnHasBeenSet)
  {
   payload.WithString("resourceConfigurationArn", m_resourceConfigurationArn);

  }

  if(m_resourceConfigurationIdHasBeenSet)
  {
   payload.WithString("resourceConfigurationId", m_resourceConfigurationId);

  }

  if(m_resourceConfigurationNameHasBeenSet)
  {
   payload.WithString("resourceConfigurationName", m_resourceConfigurationName);

  }

  if(m_serviceNetworkArnHasBeenSet)
  {
   payload.WithString("serviceNetworkArn", m_serviceNetworkArn);

  }

  if(m_serviceNetworkIdHasBeenSet)
  {
   payload.WithString("serviceNetworkId", m_serviceNetworkId);

  }

  if(m_serviceNetworkNameHasBeenSet)
  {
   payload.WithString("serviceNetworkName", m_serviceNetworkName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ServiceNetworkResourceAssociationStatusMapper::GetNameForServiceNetworkResourceAssociationStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
