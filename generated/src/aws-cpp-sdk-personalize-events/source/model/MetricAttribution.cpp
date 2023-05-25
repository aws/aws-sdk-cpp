/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-events/model/MetricAttribution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PersonalizeEvents
{
namespace Model
{

MetricAttribution::MetricAttribution() : 
    m_eventAttributionSourceHasBeenSet(false)
{
}

MetricAttribution::MetricAttribution(JsonView jsonValue) : 
    m_eventAttributionSourceHasBeenSet(false)
{
  *this = jsonValue;
}

MetricAttribution& MetricAttribution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventAttributionSource"))
  {
    m_eventAttributionSource = jsonValue.GetString("eventAttributionSource");

    m_eventAttributionSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricAttribution::Jsonize() const
{
  JsonValue payload;

  if(m_eventAttributionSourceHasBeenSet)
  {
   payload.WithString("eventAttributionSource", m_eventAttributionSource);

  }

  return payload;
}

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws
