/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ServiceNetworkSummary.h>
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

ServiceNetworkSummary::ServiceNetworkSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceNetworkSummary& ServiceNetworkSummary::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("numberOfAssociatedResourceConfigurations"))
  {
    m_numberOfAssociatedResourceConfigurations = jsonValue.GetInt64("numberOfAssociatedResourceConfigurations");
    m_numberOfAssociatedResourceConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfAssociatedServices"))
  {
    m_numberOfAssociatedServices = jsonValue.GetInt64("numberOfAssociatedServices");
    m_numberOfAssociatedServicesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfAssociatedVPCs"))
  {
    m_numberOfAssociatedVPCs = jsonValue.GetInt64("numberOfAssociatedVPCs");
    m_numberOfAssociatedVPCsHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceNetworkSummary::Jsonize() const
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

  if(m_numberOfAssociatedResourceConfigurationsHasBeenSet)
  {
   payload.WithInt64("numberOfAssociatedResourceConfigurations", m_numberOfAssociatedResourceConfigurations);

  }

  if(m_numberOfAssociatedServicesHasBeenSet)
  {
   payload.WithInt64("numberOfAssociatedServices", m_numberOfAssociatedServices);

  }

  if(m_numberOfAssociatedVPCsHasBeenSet)
  {
   payload.WithInt64("numberOfAssociatedVPCs", m_numberOfAssociatedVPCs);

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
