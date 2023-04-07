/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RefreshConfiguration.h>
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

RefreshConfiguration::RefreshConfiguration() : 
    m_incrementalRefreshHasBeenSet(false)
{
}

RefreshConfiguration::RefreshConfiguration(JsonView jsonValue) : 
    m_incrementalRefreshHasBeenSet(false)
{
  *this = jsonValue;
}

RefreshConfiguration& RefreshConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IncrementalRefresh"))
  {
    m_incrementalRefresh = jsonValue.GetObject("IncrementalRefresh");

    m_incrementalRefreshHasBeenSet = true;
  }

  return *this;
}

JsonValue RefreshConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_incrementalRefreshHasBeenSet)
  {
   payload.WithObject("IncrementalRefresh", m_incrementalRefresh.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
