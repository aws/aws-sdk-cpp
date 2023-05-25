/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RegisteredUserDashboardFeatureConfigurations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

RegisteredUserDashboardFeatureConfigurations::RegisteredUserDashboardFeatureConfigurations() : 
    m_statePersistenceHasBeenSet(false)
{
}

RegisteredUserDashboardFeatureConfigurations::RegisteredUserDashboardFeatureConfigurations(JsonView jsonValue) : 
    m_statePersistenceHasBeenSet(false)
{
  *this = jsonValue;
}

RegisteredUserDashboardFeatureConfigurations& RegisteredUserDashboardFeatureConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StatePersistence"))
  {
    m_statePersistence = jsonValue.GetObject("StatePersistence");

    m_statePersistenceHasBeenSet = true;
  }

  return *this;
}

JsonValue RegisteredUserDashboardFeatureConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_statePersistenceHasBeenSet)
  {
   payload.WithObject("StatePersistence", m_statePersistence.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
