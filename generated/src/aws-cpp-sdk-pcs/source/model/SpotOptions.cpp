/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/SpotOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PCS
{
namespace Model
{

SpotOptions::SpotOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

SpotOptions& SpotOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allocationStrategy"))
  {
    m_allocationStrategy = SpotAllocationStrategyMapper::GetSpotAllocationStrategyForName(jsonValue.GetString("allocationStrategy"));
    m_allocationStrategyHasBeenSet = true;
  }
  return *this;
}

JsonValue SpotOptions::Jsonize() const
{
  JsonValue payload;

  if(m_allocationStrategyHasBeenSet)
  {
   payload.WithString("allocationStrategy", SpotAllocationStrategyMapper::GetNameForSpotAllocationStrategy(m_allocationStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace PCS
} // namespace Aws
