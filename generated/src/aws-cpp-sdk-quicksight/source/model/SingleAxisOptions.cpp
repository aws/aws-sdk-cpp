/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SingleAxisOptions.h>
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

SingleAxisOptions::SingleAxisOptions() : 
    m_yAxisOptionsHasBeenSet(false)
{
}

SingleAxisOptions::SingleAxisOptions(JsonView jsonValue) : 
    m_yAxisOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

SingleAxisOptions& SingleAxisOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("YAxisOptions"))
  {
    m_yAxisOptions = jsonValue.GetObject("YAxisOptions");

    m_yAxisOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue SingleAxisOptions::Jsonize() const
{
  JsonValue payload;

  if(m_yAxisOptionsHasBeenSet)
  {
   payload.WithObject("YAxisOptions", m_yAxisOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
