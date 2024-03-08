/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/YAxisOptions.h>
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

YAxisOptions::YAxisOptions() : 
    m_yAxis(SingleYAxisOption::NOT_SET),
    m_yAxisHasBeenSet(false)
{
}

YAxisOptions::YAxisOptions(JsonView jsonValue) : 
    m_yAxis(SingleYAxisOption::NOT_SET),
    m_yAxisHasBeenSet(false)
{
  *this = jsonValue;
}

YAxisOptions& YAxisOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("YAxis"))
  {
    m_yAxis = SingleYAxisOptionMapper::GetSingleYAxisOptionForName(jsonValue.GetString("YAxis"));

    m_yAxisHasBeenSet = true;
  }

  return *this;
}

JsonValue YAxisOptions::Jsonize() const
{
  JsonValue payload;

  if(m_yAxisHasBeenSet)
  {
   payload.WithString("YAxis", SingleYAxisOptionMapper::GetNameForSingleYAxisOption(m_yAxis));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
