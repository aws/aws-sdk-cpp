/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ServiceNetworkVpcAssociationSummary.h>
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

ServiceNetworkVpcAssociationSummary::ServiceNetworkVpcAssociationSummary() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_serviceNetworkArnHasBeenSet(false),
    m_serviceNetworkIdHasBeenSet(false),
    m_serviceNetworkNameHasBeenSet(false),
    m_status(ServiceNetworkVpcAssociationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

ServiceNetworkVpcAssociationSummary::ServiceNetworkVpcAssociationSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_serviceNetworkArnHasBeenSet(false),
    m_serviceNetworkIdHasBeenSet(false),
    m_serviceNetworkNameHasBeenSet(false),
    m_status(ServiceNetworkVpcAssociationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceNetworkVpcAssociationSummary& ServiceNetworkVpcAssociationSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
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
    m_status = ServiceNetworkVpcAssociationStatusMapper::GetServiceNetworkVpcAssociationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcId"))
  {
    m_vpcId = jsonValue.GetString("vpcId");

    m_vpcIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceNetworkVpcAssociationSummary::Jsonize() const
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

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("lastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
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
   payload.WithString("status", ServiceNetworkVpcAssociationStatusMapper::GetNameForServiceNetworkVpcAssociationStatus(m_status));
  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("vpcId", m_vpcId);

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
