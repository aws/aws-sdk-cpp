/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RegisteredUserDashboardVisualEmbeddingConfiguration.h>
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

RegisteredUserDashboardVisualEmbeddingConfiguration::RegisteredUserDashboardVisualEmbeddingConfiguration() : 
    m_initialDashboardVisualIdHasBeenSet(false)
{
}

RegisteredUserDashboardVisualEmbeddingConfiguration::RegisteredUserDashboardVisualEmbeddingConfiguration(JsonView jsonValue) : 
    m_initialDashboardVisualIdHasBeenSet(false)
{
  *this = jsonValue;
}

RegisteredUserDashboardVisualEmbeddingConfiguration& RegisteredUserDashboardVisualEmbeddingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InitialDashboardVisualId"))
  {
    m_initialDashboardVisualId = jsonValue.GetObject("InitialDashboardVisualId");

    m_initialDashboardVisualIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RegisteredUserDashboardVisualEmbeddingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_initialDashboardVisualIdHasBeenSet)
  {
   payload.WithObject("InitialDashboardVisualId", m_initialDashboardVisualId.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
