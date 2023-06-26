/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/BusinessGoals.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

BusinessGoals::BusinessGoals() : 
    m_licenseCostReduction(0),
    m_licenseCostReductionHasBeenSet(false),
    m_modernizeInfrastructureWithCloudNativeTechnologies(0),
    m_modernizeInfrastructureWithCloudNativeTechnologiesHasBeenSet(false),
    m_reduceOperationalOverheadWithManagedServices(0),
    m_reduceOperationalOverheadWithManagedServicesHasBeenSet(false),
    m_speedOfMigration(0),
    m_speedOfMigrationHasBeenSet(false)
{
}

BusinessGoals::BusinessGoals(JsonView jsonValue) : 
    m_licenseCostReduction(0),
    m_licenseCostReductionHasBeenSet(false),
    m_modernizeInfrastructureWithCloudNativeTechnologies(0),
    m_modernizeInfrastructureWithCloudNativeTechnologiesHasBeenSet(false),
    m_reduceOperationalOverheadWithManagedServices(0),
    m_reduceOperationalOverheadWithManagedServicesHasBeenSet(false),
    m_speedOfMigration(0),
    m_speedOfMigrationHasBeenSet(false)
{
  *this = jsonValue;
}

BusinessGoals& BusinessGoals::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("licenseCostReduction"))
  {
    m_licenseCostReduction = jsonValue.GetInteger("licenseCostReduction");

    m_licenseCostReductionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modernizeInfrastructureWithCloudNativeTechnologies"))
  {
    m_modernizeInfrastructureWithCloudNativeTechnologies = jsonValue.GetInteger("modernizeInfrastructureWithCloudNativeTechnologies");

    m_modernizeInfrastructureWithCloudNativeTechnologiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reduceOperationalOverheadWithManagedServices"))
  {
    m_reduceOperationalOverheadWithManagedServices = jsonValue.GetInteger("reduceOperationalOverheadWithManagedServices");

    m_reduceOperationalOverheadWithManagedServicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("speedOfMigration"))
  {
    m_speedOfMigration = jsonValue.GetInteger("speedOfMigration");

    m_speedOfMigrationHasBeenSet = true;
  }

  return *this;
}

JsonValue BusinessGoals::Jsonize() const
{
  JsonValue payload;

  if(m_licenseCostReductionHasBeenSet)
  {
   payload.WithInteger("licenseCostReduction", m_licenseCostReduction);

  }

  if(m_modernizeInfrastructureWithCloudNativeTechnologiesHasBeenSet)
  {
   payload.WithInteger("modernizeInfrastructureWithCloudNativeTechnologies", m_modernizeInfrastructureWithCloudNativeTechnologies);

  }

  if(m_reduceOperationalOverheadWithManagedServicesHasBeenSet)
  {
   payload.WithInteger("reduceOperationalOverheadWithManagedServices", m_reduceOperationalOverheadWithManagedServices);

  }

  if(m_speedOfMigrationHasBeenSet)
  {
   payload.WithInteger("speedOfMigration", m_speedOfMigration);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
