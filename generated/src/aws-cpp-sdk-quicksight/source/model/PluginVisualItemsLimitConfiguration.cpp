/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PluginVisualItemsLimitConfiguration.h>
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

PluginVisualItemsLimitConfiguration::PluginVisualItemsLimitConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PluginVisualItemsLimitConfiguration& PluginVisualItemsLimitConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ItemsLimit"))
  {
    m_itemsLimit = jsonValue.GetInt64("ItemsLimit");
    m_itemsLimitHasBeenSet = true;
  }
  return *this;
}

JsonValue PluginVisualItemsLimitConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_itemsLimitHasBeenSet)
  {
   payload.WithInt64("ItemsLimit", m_itemsLimit);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
