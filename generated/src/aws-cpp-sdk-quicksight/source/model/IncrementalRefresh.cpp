/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/IncrementalRefresh.h>
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

IncrementalRefresh::IncrementalRefresh() : 
    m_lookbackWindowHasBeenSet(false)
{
}

IncrementalRefresh::IncrementalRefresh(JsonView jsonValue) : 
    m_lookbackWindowHasBeenSet(false)
{
  *this = jsonValue;
}

IncrementalRefresh& IncrementalRefresh::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LookbackWindow"))
  {
    m_lookbackWindow = jsonValue.GetObject("LookbackWindow");

    m_lookbackWindowHasBeenSet = true;
  }

  return *this;
}

JsonValue IncrementalRefresh::Jsonize() const
{
  JsonValue payload;

  if(m_lookbackWindowHasBeenSet)
  {
   payload.WithObject("LookbackWindow", m_lookbackWindow.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
