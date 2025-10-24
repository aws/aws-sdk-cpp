/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rtbfabric/model/RateLimiterModuleParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RTBFabric
{
namespace Model
{

RateLimiterModuleParameters::RateLimiterModuleParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

RateLimiterModuleParameters& RateLimiterModuleParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tps"))
  {
    m_tps = jsonValue.GetDouble("tps");
    m_tpsHasBeenSet = true;
  }
  return *this;
}

JsonValue RateLimiterModuleParameters::Jsonize() const
{
  JsonValue payload;

  if(m_tpsHasBeenSet)
  {
   payload.WithDouble("tps", m_tps);

  }

  return payload;
}

} // namespace Model
} // namespace RTBFabric
} // namespace Aws
