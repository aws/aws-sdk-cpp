/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/TrafficShapingTpsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

TrafficShapingTpsConfiguration::TrafficShapingTpsConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

TrafficShapingTpsConfiguration& TrafficShapingTpsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PeakTps"))
  {
    m_peakTps = jsonValue.GetInteger("PeakTps");
    m_peakTpsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PeakConcurrentUsers"))
  {
    m_peakConcurrentUsers = jsonValue.GetInteger("PeakConcurrentUsers");
    m_peakConcurrentUsersHasBeenSet = true;
  }
  return *this;
}

JsonValue TrafficShapingTpsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_peakTpsHasBeenSet)
  {
   payload.WithInteger("PeakTps", m_peakTps);

  }

  if(m_peakConcurrentUsersHasBeenSet)
  {
   payload.WithInteger("PeakConcurrentUsers", m_peakConcurrentUsers);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
