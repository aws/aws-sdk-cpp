/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/TimeShiftConfiguration.h>
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

TimeShiftConfiguration::TimeShiftConfiguration() : 
    m_maxTimeDelaySeconds(0),
    m_maxTimeDelaySecondsHasBeenSet(false)
{
}

TimeShiftConfiguration::TimeShiftConfiguration(JsonView jsonValue) : 
    m_maxTimeDelaySeconds(0),
    m_maxTimeDelaySecondsHasBeenSet(false)
{
  *this = jsonValue;
}

TimeShiftConfiguration& TimeShiftConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxTimeDelaySeconds"))
  {
    m_maxTimeDelaySeconds = jsonValue.GetInteger("MaxTimeDelaySeconds");

    m_maxTimeDelaySecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeShiftConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_maxTimeDelaySecondsHasBeenSet)
  {
   payload.WithInteger("MaxTimeDelaySeconds", m_maxTimeDelaySeconds);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
