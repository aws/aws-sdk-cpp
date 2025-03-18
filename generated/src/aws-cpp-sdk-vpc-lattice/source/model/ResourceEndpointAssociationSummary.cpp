/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ResourceEndpointAssociationSummary.h>
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

ResourceEndpointAssociationSummary::ResourceEndpointAssociationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceEndpointAssociationSummary& ResourceEndpointAssociationSummary::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("vpcEndpointId"))
  {
    m_vpcEndpointId = jsonValue.GetString("vpcEndpointId");
    m_vpcEndpointIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcEndpointOwner"))
  {
    m_vpcEndpointOwner = jsonValue.GetString("vpcEndpointOwner");
    m_vpcEndpointOwnerHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceEndpointAssociationSummary::Jsonize() const
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

  if(m_vpcEndpointIdHasBeenSet)
  {
   payload.WithString("vpcEndpointId", m_vpcEndpointId);

  }

  if(m_vpcEndpointOwnerHasBeenSet)
  {
   payload.WithString("vpcEndpointOwner", m_vpcEndpointOwner);

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
