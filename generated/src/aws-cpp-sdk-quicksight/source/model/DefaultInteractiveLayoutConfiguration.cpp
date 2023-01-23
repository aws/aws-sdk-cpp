/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DefaultInteractiveLayoutConfiguration.h>
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

DefaultInteractiveLayoutConfiguration::DefaultInteractiveLayoutConfiguration() : 
    m_gridHasBeenSet(false),
    m_freeFormHasBeenSet(false)
{
}

DefaultInteractiveLayoutConfiguration::DefaultInteractiveLayoutConfiguration(JsonView jsonValue) : 
    m_gridHasBeenSet(false),
    m_freeFormHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultInteractiveLayoutConfiguration& DefaultInteractiveLayoutConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Grid"))
  {
    m_grid = jsonValue.GetObject("Grid");

    m_gridHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FreeForm"))
  {
    m_freeForm = jsonValue.GetObject("FreeForm");

    m_freeFormHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultInteractiveLayoutConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_gridHasBeenSet)
  {
   payload.WithObject("Grid", m_grid.Jsonize());

  }

  if(m_freeFormHasBeenSet)
  {
   payload.WithObject("FreeForm", m_freeForm.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
