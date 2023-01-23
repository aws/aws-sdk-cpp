/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/WaitTime.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

WaitTime::WaitTime() : 
    m_waitForHasBeenSet(false),
    m_waitUntilHasBeenSet(false)
{
}

WaitTime::WaitTime(JsonView jsonValue) : 
    m_waitForHasBeenSet(false),
    m_waitUntilHasBeenSet(false)
{
  *this = jsonValue;
}

WaitTime& WaitTime::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WaitFor"))
  {
    m_waitFor = jsonValue.GetString("WaitFor");

    m_waitForHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WaitUntil"))
  {
    m_waitUntil = jsonValue.GetString("WaitUntil");

    m_waitUntilHasBeenSet = true;
  }

  return *this;
}

JsonValue WaitTime::Jsonize() const
{
  JsonValue payload;

  if(m_waitForHasBeenSet)
  {
   payload.WithString("WaitFor", m_waitFor);

  }

  if(m_waitUntilHasBeenSet)
  {
   payload.WithString("WaitUntil", m_waitUntil);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
