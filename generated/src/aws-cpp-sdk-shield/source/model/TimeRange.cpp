/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/TimeRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

TimeRange::TimeRange() : 
    m_fromInclusiveHasBeenSet(false),
    m_toExclusiveHasBeenSet(false)
{
}

TimeRange::TimeRange(JsonView jsonValue) : 
    m_fromInclusiveHasBeenSet(false),
    m_toExclusiveHasBeenSet(false)
{
  *this = jsonValue;
}

TimeRange& TimeRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FromInclusive"))
  {
    m_fromInclusive = jsonValue.GetDouble("FromInclusive");

    m_fromInclusiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ToExclusive"))
  {
    m_toExclusive = jsonValue.GetDouble("ToExclusive");

    m_toExclusiveHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeRange::Jsonize() const
{
  JsonValue payload;

  if(m_fromInclusiveHasBeenSet)
  {
   payload.WithDouble("FromInclusive", m_fromInclusive.SecondsWithMSPrecision());
  }

  if(m_toExclusiveHasBeenSet)
  {
   payload.WithDouble("ToExclusive", m_toExclusive.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
