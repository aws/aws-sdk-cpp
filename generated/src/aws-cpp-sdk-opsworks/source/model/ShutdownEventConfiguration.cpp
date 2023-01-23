/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/ShutdownEventConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

ShutdownEventConfiguration::ShutdownEventConfiguration() : 
    m_executionTimeout(0),
    m_executionTimeoutHasBeenSet(false),
    m_delayUntilElbConnectionsDrained(false),
    m_delayUntilElbConnectionsDrainedHasBeenSet(false)
{
}

ShutdownEventConfiguration::ShutdownEventConfiguration(JsonView jsonValue) : 
    m_executionTimeout(0),
    m_executionTimeoutHasBeenSet(false),
    m_delayUntilElbConnectionsDrained(false),
    m_delayUntilElbConnectionsDrainedHasBeenSet(false)
{
  *this = jsonValue;
}

ShutdownEventConfiguration& ShutdownEventConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExecutionTimeout"))
  {
    m_executionTimeout = jsonValue.GetInteger("ExecutionTimeout");

    m_executionTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DelayUntilElbConnectionsDrained"))
  {
    m_delayUntilElbConnectionsDrained = jsonValue.GetBool("DelayUntilElbConnectionsDrained");

    m_delayUntilElbConnectionsDrainedHasBeenSet = true;
  }

  return *this;
}

JsonValue ShutdownEventConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_executionTimeoutHasBeenSet)
  {
   payload.WithInteger("ExecutionTimeout", m_executionTimeout);

  }

  if(m_delayUntilElbConnectionsDrainedHasBeenSet)
  {
   payload.WithBool("DelayUntilElbConnectionsDrained", m_delayUntilElbConnectionsDrained);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
