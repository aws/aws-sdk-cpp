/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/BatchPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

BatchPolicy::BatchPolicy() : 
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_maxConcurrency(0),
    m_maxConcurrencyHasBeenSet(false)
{
}

BatchPolicy::BatchPolicy(JsonView jsonValue) : 
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_maxConcurrency(0),
    m_maxConcurrencyHasBeenSet(false)
{
  *this = jsonValue;
}

BatchPolicy& BatchPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeoutInSeconds"))
  {
    m_timeoutInSeconds = jsonValue.GetInt64("timeoutInSeconds");

    m_timeoutInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxConcurrency"))
  {
    m_maxConcurrency = jsonValue.GetInteger("maxConcurrency");

    m_maxConcurrencyHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_timeoutInSecondsHasBeenSet)
  {
   payload.WithInt64("timeoutInSeconds", m_timeoutInSeconds);

  }

  if(m_maxConcurrencyHasBeenSet)
  {
   payload.WithInteger("maxConcurrency", m_maxConcurrency);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
