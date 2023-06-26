/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GlobalTableBorderOptions.h>
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

GlobalTableBorderOptions::GlobalTableBorderOptions() : 
    m_uniformBorderHasBeenSet(false),
    m_sideSpecificBorderHasBeenSet(false)
{
}

GlobalTableBorderOptions::GlobalTableBorderOptions(JsonView jsonValue) : 
    m_uniformBorderHasBeenSet(false),
    m_sideSpecificBorderHasBeenSet(false)
{
  *this = jsonValue;
}

GlobalTableBorderOptions& GlobalTableBorderOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UniformBorder"))
  {
    m_uniformBorder = jsonValue.GetObject("UniformBorder");

    m_uniformBorderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SideSpecificBorder"))
  {
    m_sideSpecificBorder = jsonValue.GetObject("SideSpecificBorder");

    m_sideSpecificBorderHasBeenSet = true;
  }

  return *this;
}

JsonValue GlobalTableBorderOptions::Jsonize() const
{
  JsonValue payload;

  if(m_uniformBorderHasBeenSet)
  {
   payload.WithObject("UniformBorder", m_uniformBorder.Jsonize());

  }

  if(m_sideSpecificBorderHasBeenSet)
  {
   payload.WithObject("SideSpecificBorder", m_sideSpecificBorder.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
