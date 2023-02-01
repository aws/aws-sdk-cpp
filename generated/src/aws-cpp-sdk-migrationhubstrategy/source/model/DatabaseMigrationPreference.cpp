/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/DatabaseMigrationPreference.h>
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

DatabaseMigrationPreference::DatabaseMigrationPreference() : 
    m_heterogeneousHasBeenSet(false),
    m_homogeneousHasBeenSet(false),
    m_noPreferenceHasBeenSet(false)
{
}

DatabaseMigrationPreference::DatabaseMigrationPreference(JsonView jsonValue) : 
    m_heterogeneousHasBeenSet(false),
    m_homogeneousHasBeenSet(false),
    m_noPreferenceHasBeenSet(false)
{
  *this = jsonValue;
}

DatabaseMigrationPreference& DatabaseMigrationPreference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("heterogeneous"))
  {
    m_heterogeneous = jsonValue.GetObject("heterogeneous");

    m_heterogeneousHasBeenSet = true;
  }

  if(jsonValue.ValueExists("homogeneous"))
  {
    m_homogeneous = jsonValue.GetObject("homogeneous");

    m_homogeneousHasBeenSet = true;
  }

  if(jsonValue.ValueExists("noPreference"))
  {
    m_noPreference = jsonValue.GetObject("noPreference");

    m_noPreferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue DatabaseMigrationPreference::Jsonize() const
{
  JsonValue payload;

  if(m_heterogeneousHasBeenSet)
  {
   payload.WithObject("heterogeneous", m_heterogeneous.Jsonize());

  }

  if(m_homogeneousHasBeenSet)
  {
   payload.WithObject("homogeneous", m_homogeneous.Jsonize());

  }

  if(m_noPreferenceHasBeenSet)
  {
   payload.WithObject("noPreference", m_noPreference.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
