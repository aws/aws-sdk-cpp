/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/EventParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

EventParameters::EventParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

EventParameters& EventParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = jsonValue.GetString("eventType");
    m_eventTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventValueThreshold"))
  {
    m_eventValueThreshold = jsonValue.GetDouble("eventValueThreshold");
    m_eventValueThresholdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("weight"))
  {
    m_weight = jsonValue.GetDouble("weight");
    m_weightHasBeenSet = true;
  }
  return *this;
}

JsonValue EventParameters::Jsonize() const
{
  JsonValue payload;

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", m_eventType);

  }

  if(m_eventValueThresholdHasBeenSet)
  {
   payload.WithDouble("eventValueThreshold", m_eventValueThreshold);

  }

  if(m_weightHasBeenSet)
  {
   payload.WithDouble("weight", m_weight);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
