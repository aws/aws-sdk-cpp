/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProvisionedProductPlanSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ProvisionedProductPlanSummary::ProvisionedProductPlanSummary() : 
    m_planNameHasBeenSet(false),
    m_planIdHasBeenSet(false),
    m_provisionProductIdHasBeenSet(false),
    m_provisionProductNameHasBeenSet(false),
    m_planType(ProvisionedProductPlanType::NOT_SET),
    m_planTypeHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false)
{
}

ProvisionedProductPlanSummary::ProvisionedProductPlanSummary(JsonView jsonValue) : 
    m_planNameHasBeenSet(false),
    m_planIdHasBeenSet(false),
    m_provisionProductIdHasBeenSet(false),
    m_provisionProductNameHasBeenSet(false),
    m_planType(ProvisionedProductPlanType::NOT_SET),
    m_planTypeHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisionedProductPlanSummary& ProvisionedProductPlanSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PlanName"))
  {
    m_planName = jsonValue.GetString("PlanName");

    m_planNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlanId"))
  {
    m_planId = jsonValue.GetString("PlanId");

    m_planIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionProductId"))
  {
    m_provisionProductId = jsonValue.GetString("ProvisionProductId");

    m_provisionProductIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionProductName"))
  {
    m_provisionProductName = jsonValue.GetString("ProvisionProductName");

    m_provisionProductNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlanType"))
  {
    m_planType = ProvisionedProductPlanTypeMapper::GetProvisionedProductPlanTypeForName(jsonValue.GetString("PlanType"));

    m_planTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisioningArtifactId"))
  {
    m_provisioningArtifactId = jsonValue.GetString("ProvisioningArtifactId");

    m_provisioningArtifactIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisionedProductPlanSummary::Jsonize() const
{
  JsonValue payload;

  if(m_planNameHasBeenSet)
  {
   payload.WithString("PlanName", m_planName);

  }

  if(m_planIdHasBeenSet)
  {
   payload.WithString("PlanId", m_planId);

  }

  if(m_provisionProductIdHasBeenSet)
  {
   payload.WithString("ProvisionProductId", m_provisionProductId);

  }

  if(m_provisionProductNameHasBeenSet)
  {
   payload.WithString("ProvisionProductName", m_provisionProductName);

  }

  if(m_planTypeHasBeenSet)
  {
   payload.WithString("PlanType", ProvisionedProductPlanTypeMapper::GetNameForProvisionedProductPlanType(m_planType));
  }

  if(m_provisioningArtifactIdHasBeenSet)
  {
   payload.WithString("ProvisioningArtifactId", m_provisioningArtifactId);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
