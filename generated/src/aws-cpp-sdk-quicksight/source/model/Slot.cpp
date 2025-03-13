/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Slot.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

Slot::Slot(JsonView jsonValue)
{
  *this = jsonValue;
}

Slot& Slot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SlotId"))
  {
    m_slotId = jsonValue.GetString("SlotId");
    m_slotIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VisualId"))
  {
    m_visualId = jsonValue.GetString("VisualId");
    m_visualIdHasBeenSet = true;
  }
  return *this;
}

JsonValue Slot::Jsonize() const
{
  JsonValue payload;

  if(m_slotIdHasBeenSet)
  {
   payload.WithString("SlotId", m_slotId);

  }

  if(m_visualIdHasBeenSet)
  {
   payload.WithString("VisualId", m_visualId);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
