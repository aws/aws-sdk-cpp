/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ServiceNetworkServiceAssociationSummary.h>
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

ServiceNetworkServiceAssociationSummary::ServiceNetworkServiceAssociationSummary() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_customDomainNameHasBeenSet(false),
    m_dnsEntryHasBeenSet(false),
    m_idHasBeenSet(false),
    m_serviceArnHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceNetworkArnHasBeenSet(false),
    m_serviceNetworkIdHasBeenSet(false),
    m_serviceNetworkNameHasBeenSet(false),
    m_status(ServiceNetworkServiceAssociationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ServiceNetworkServiceAssociationSummary::ServiceNetworkServiceAssociationSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_customDomainNameHasBeenSet(false),
    m_dnsEntryHasBeenSet(false),
    m_idHasBeenSet(false),
    m_serviceArnHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceNetworkArnHasBeenSet(false),
    m_serviceNetworkIdHasBeenSet(false),
    m_serviceNetworkNameHasBeenSet(false),
    m_status(ServiceNetworkServiceAssociationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceNetworkServiceAssociationSummary& ServiceNetworkServiceAssociationSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("customDomainName"))
  {
    m_customDomainName = jsonValue.GetString("customDomainName");

    m_customDomainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dnsEntry"))
  {
    m_dnsEntry = jsonValue.GetObject("dnsEntry");

    m_dnsEntryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceArn"))
  {
    m_serviceArn = jsonValue.GetString("serviceArn");

    m_serviceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceId"))
  {
    m_serviceId = jsonValue.GetString("serviceId");

    m_serviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
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
    m_status = ServiceNetworkServiceAssociationStatusMapper::GetServiceNetworkServiceAssociationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceNetworkServiceAssociationSummary::Jsonize() const
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

  if(m_customDomainNameHasBeenSet)
  {
   payload.WithString("customDomainName", m_customDomainName);

  }

  if(m_dnsEntryHasBeenSet)
  {
   payload.WithObject("dnsEntry", m_dnsEntry.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_serviceArnHasBeenSet)
  {
   payload.WithString("serviceArn", m_serviceArn);

  }

  if(m_serviceIdHasBeenSet)
  {
   payload.WithString("serviceId", m_serviceId);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

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
   payload.WithString("status", ServiceNetworkServiceAssociationStatusMapper::GetNameForServiceNetworkServiceAssociationStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
