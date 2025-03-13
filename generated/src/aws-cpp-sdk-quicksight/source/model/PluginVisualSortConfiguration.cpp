/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PluginVisualSortConfiguration.h>
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

PluginVisualSortConfiguration::PluginVisualSortConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PluginVisualSortConfiguration& PluginVisualSortConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PluginVisualTableQuerySort"))
  {
    m_pluginVisualTableQuerySort = jsonValue.GetObject("PluginVisualTableQuerySort");
    m_pluginVisualTableQuerySortHasBeenSet = true;
  }
  return *this;
}

JsonValue PluginVisualSortConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_pluginVisualTableQuerySortHasBeenSet)
  {
   payload.WithObject("PluginVisualTableQuerySort", m_pluginVisualTableQuerySort.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
