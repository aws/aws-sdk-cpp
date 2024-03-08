/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/VisualInteractionOptions.h>
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

VisualInteractionOptions::VisualInteractionOptions() : 
    m_visualMenuOptionHasBeenSet(false),
    m_contextMenuOptionHasBeenSet(false)
{
}

VisualInteractionOptions::VisualInteractionOptions(JsonView jsonValue) : 
    m_visualMenuOptionHasBeenSet(false),
    m_contextMenuOptionHasBeenSet(false)
{
  *this = jsonValue;
}

VisualInteractionOptions& VisualInteractionOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VisualMenuOption"))
  {
    m_visualMenuOption = jsonValue.GetObject("VisualMenuOption");

    m_visualMenuOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContextMenuOption"))
  {
    m_contextMenuOption = jsonValue.GetObject("ContextMenuOption");

    m_contextMenuOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue VisualInteractionOptions::Jsonize() const
{
  JsonValue payload;

  if(m_visualMenuOptionHasBeenSet)
  {
   payload.WithObject("VisualMenuOption", m_visualMenuOption.Jsonize());

  }

  if(m_contextMenuOptionHasBeenSet)
  {
   payload.WithObject("ContextMenuOption", m_contextMenuOption.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
