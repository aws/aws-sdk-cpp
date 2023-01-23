/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/CloseStatusFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

CloseStatusFilter::CloseStatusFilter() : 
    m_status(CloseStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

CloseStatusFilter::CloseStatusFilter(JsonView jsonValue) : 
    m_status(CloseStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

CloseStatusFilter& CloseStatusFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = CloseStatusMapper::GetCloseStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue CloseStatusFilter::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CloseStatusMapper::GetNameForCloseStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
