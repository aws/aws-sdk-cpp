/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/RetryConfigOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

RetryConfigOutput::RetryConfigOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

RetryConfigOutput& RetryConfigOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxRetries"))
  {
    m_maxRetries = jsonValue.GetInteger("MaxRetries");
    m_maxRetriesHasBeenSet = true;
  }
  return *this;
}

JsonValue RetryConfigOutput::Jsonize() const
{
  JsonValue payload;

  if(m_maxRetriesHasBeenSet)
  {
   payload.WithInteger("MaxRetries", m_maxRetries);

  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
