/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/VisualHighlightOperation.h>
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

VisualHighlightOperation::VisualHighlightOperation(JsonView jsonValue)
{
  *this = jsonValue;
}

VisualHighlightOperation& VisualHighlightOperation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Trigger"))
  {
    m_trigger = VisualHighlightTriggerMapper::GetVisualHighlightTriggerForName(jsonValue.GetString("Trigger"));
    m_triggerHasBeenSet = true;
  }
  return *this;
}

JsonValue VisualHighlightOperation::Jsonize() const
{
  JsonValue payload;

  if(m_triggerHasBeenSet)
  {
   payload.WithString("Trigger", VisualHighlightTriggerMapper::GetNameForVisualHighlightTrigger(m_trigger));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
