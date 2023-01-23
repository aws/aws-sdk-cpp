/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/TimeRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{

TimeRange::TimeRange() : 
    m_after(0),
    m_afterHasBeenSet(false),
    m_before(0),
    m_beforeHasBeenSet(false)
{
}

TimeRange::TimeRange(JsonView jsonValue) : 
    m_after(0),
    m_afterHasBeenSet(false),
    m_before(0),
    m_beforeHasBeenSet(false)
{
  *this = jsonValue;
}

TimeRange& TimeRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("After"))
  {
    m_after = jsonValue.GetInt64("After");

    m_afterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Before"))
  {
    m_before = jsonValue.GetInt64("Before");

    m_beforeHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeRange::Jsonize() const
{
  JsonValue payload;

  if(m_afterHasBeenSet)
  {
   payload.WithInt64("After", m_after);

  }

  if(m_beforeHasBeenSet)
  {
   payload.WithInt64("Before", m_before);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
