/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/DashboardOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

DashboardOptions::DashboardOptions() : 
    m_engagementMetrics(FeatureStatus::NOT_SET),
    m_engagementMetricsHasBeenSet(false)
{
}

DashboardOptions::DashboardOptions(JsonView jsonValue) : 
    m_engagementMetrics(FeatureStatus::NOT_SET),
    m_engagementMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

DashboardOptions& DashboardOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EngagementMetrics"))
  {
    m_engagementMetrics = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("EngagementMetrics"));

    m_engagementMetricsHasBeenSet = true;
  }

  return *this;
}

JsonValue DashboardOptions::Jsonize() const
{
  JsonValue payload;

  if(m_engagementMetricsHasBeenSet)
  {
   payload.WithString("EngagementMetrics", FeatureStatusMapper::GetNameForFeatureStatus(m_engagementMetrics));
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
