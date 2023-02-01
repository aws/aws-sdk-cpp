/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DefaultGridLayoutConfiguration.h>
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

DefaultGridLayoutConfiguration::DefaultGridLayoutConfiguration() : 
    m_canvasSizeOptionsHasBeenSet(false)
{
}

DefaultGridLayoutConfiguration::DefaultGridLayoutConfiguration(JsonView jsonValue) : 
    m_canvasSizeOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultGridLayoutConfiguration& DefaultGridLayoutConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CanvasSizeOptions"))
  {
    m_canvasSizeOptions = jsonValue.GetObject("CanvasSizeOptions");

    m_canvasSizeOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultGridLayoutConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_canvasSizeOptionsHasBeenSet)
  {
   payload.WithObject("CanvasSizeOptions", m_canvasSizeOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
