/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ResourceConfigurationSummary.h>
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

ResourceConfigurationSummary::ResourceConfigurationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceConfigurationSummary& ResourceConfigurationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("amazonManaged"))
  {
    m_amazonManaged = jsonValue.GetBool("amazonManaged");
    m_amazonManagedHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceConfigurationGroupId"))
  {
    m_resourceConfigurationGroupId = jsonValue.GetString("resourceConfigurationGroupId");
    m_resourceConfigurationGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceGatewayId"))
  {
    m_resourceGatewayId = jsonValue.GetString("resourceGatewayId");
    m_resourceGatewayIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ResourceConfigurationStatusMapper::GetResourceConfigurationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = ResourceConfigurationTypeMapper::GetResourceConfigurationTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceConfigurationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_amazonManagedHasBeenSet)
  {
   payload.WithBool("amazonManaged", m_amazonManaged);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("lastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_resourceConfigurationGroupIdHasBeenSet)
  {
   payload.WithString("resourceConfigurationGroupId", m_resourceConfigurationGroupId);

  }

  if(m_resourceGatewayIdHasBeenSet)
  {
   payload.WithString("resourceGatewayId", m_resourceGatewayId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ResourceConfigurationStatusMapper::GetNameForResourceConfigurationStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ResourceConfigurationTypeMapper::GetNameForResourceConfigurationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
