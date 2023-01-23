/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/FailurePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

FailurePolicy::FailurePolicy() : 
    m_rpoInSecs(0),
    m_rpoInSecsHasBeenSet(false),
    m_rtoInSecs(0),
    m_rtoInSecsHasBeenSet(false)
{
}

FailurePolicy::FailurePolicy(JsonView jsonValue) : 
    m_rpoInSecs(0),
    m_rpoInSecsHasBeenSet(false),
    m_rtoInSecs(0),
    m_rtoInSecsHasBeenSet(false)
{
  *this = jsonValue;
}

FailurePolicy& FailurePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rpoInSecs"))
  {
    m_rpoInSecs = jsonValue.GetInteger("rpoInSecs");

    m_rpoInSecsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rtoInSecs"))
  {
    m_rtoInSecs = jsonValue.GetInteger("rtoInSecs");

    m_rtoInSecsHasBeenSet = true;
  }

  return *this;
}

JsonValue FailurePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_rpoInSecsHasBeenSet)
  {
   payload.WithInteger("rpoInSecs", m_rpoInSecs);

  }

  if(m_rtoInSecsHasBeenSet)
  {
   payload.WithInteger("rtoInSecs", m_rtoInSecs);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
