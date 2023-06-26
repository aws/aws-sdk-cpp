/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/CustomEvents.h>
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

CustomEvents::CustomEvents() : 
    m_status(CustomEventsStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

CustomEvents::CustomEvents(JsonView jsonValue) : 
    m_status(CustomEventsStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

CustomEvents& CustomEvents::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = CustomEventsStatusMapper::GetCustomEventsStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomEvents::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CustomEventsStatusMapper::GetNameForCustomEventsStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
