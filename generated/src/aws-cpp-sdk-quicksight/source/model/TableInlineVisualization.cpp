/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableInlineVisualization.h>
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

TableInlineVisualization::TableInlineVisualization() : 
    m_dataBarsHasBeenSet(false)
{
}

TableInlineVisualization::TableInlineVisualization(JsonView jsonValue) : 
    m_dataBarsHasBeenSet(false)
{
  *this = jsonValue;
}

TableInlineVisualization& TableInlineVisualization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataBars"))
  {
    m_dataBars = jsonValue.GetObject("DataBars");

    m_dataBarsHasBeenSet = true;
  }

  return *this;
}

JsonValue TableInlineVisualization::Jsonize() const
{
  JsonValue payload;

  if(m_dataBarsHasBeenSet)
  {
   payload.WithObject("DataBars", m_dataBars.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
