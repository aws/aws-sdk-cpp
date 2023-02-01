/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/BatchRetryStrategy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

BatchRetryStrategy::BatchRetryStrategy() : 
    m_attempts(0),
    m_attemptsHasBeenSet(false)
{
}

BatchRetryStrategy::BatchRetryStrategy(JsonView jsonValue) : 
    m_attempts(0),
    m_attemptsHasBeenSet(false)
{
  *this = jsonValue;
}

BatchRetryStrategy& BatchRetryStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attempts"))
  {
    m_attempts = jsonValue.GetInteger("Attempts");

    m_attemptsHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchRetryStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_attemptsHasBeenSet)
  {
   payload.WithInteger("Attempts", m_attempts);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
