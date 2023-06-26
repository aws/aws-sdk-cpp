/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/LifecycleEventConfiguration.h>
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

LifecycleEventConfiguration::LifecycleEventConfiguration() : 
    m_shutdownHasBeenSet(false)
{
}

LifecycleEventConfiguration::LifecycleEventConfiguration(JsonView jsonValue) : 
    m_shutdownHasBeenSet(false)
{
  *this = jsonValue;
}

LifecycleEventConfiguration& LifecycleEventConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Shutdown"))
  {
    m_shutdown = jsonValue.GetObject("Shutdown");

    m_shutdownHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecycleEventConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_shutdownHasBeenSet)
  {
   payload.WithObject("Shutdown", m_shutdown.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
