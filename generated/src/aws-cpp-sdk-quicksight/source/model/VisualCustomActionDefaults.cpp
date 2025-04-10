/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/VisualCustomActionDefaults.h>
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

VisualCustomActionDefaults::VisualCustomActionDefaults(JsonView jsonValue)
{
  *this = jsonValue;
}

VisualCustomActionDefaults& VisualCustomActionDefaults::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("highlightOperation"))
  {
    m_highlightOperation = jsonValue.GetObject("highlightOperation");
    m_highlightOperationHasBeenSet = true;
  }
  return *this;
}

JsonValue VisualCustomActionDefaults::Jsonize() const
{
  JsonValue payload;

  if(m_highlightOperationHasBeenSet)
  {
   payload.WithObject("highlightOperation", m_highlightOperation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
