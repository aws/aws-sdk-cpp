/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CategoryFilterConfiguration.h>
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

CategoryFilterConfiguration::CategoryFilterConfiguration() : 
    m_filterListConfigurationHasBeenSet(false),
    m_customFilterListConfigurationHasBeenSet(false),
    m_customFilterConfigurationHasBeenSet(false)
{
}

CategoryFilterConfiguration::CategoryFilterConfiguration(JsonView jsonValue) : 
    m_filterListConfigurationHasBeenSet(false),
    m_customFilterListConfigurationHasBeenSet(false),
    m_customFilterConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

CategoryFilterConfiguration& CategoryFilterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilterListConfiguration"))
  {
    m_filterListConfiguration = jsonValue.GetObject("FilterListConfiguration");

    m_filterListConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomFilterListConfiguration"))
  {
    m_customFilterListConfiguration = jsonValue.GetObject("CustomFilterListConfiguration");

    m_customFilterListConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomFilterConfiguration"))
  {
    m_customFilterConfiguration = jsonValue.GetObject("CustomFilterConfiguration");

    m_customFilterConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue CategoryFilterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_filterListConfigurationHasBeenSet)
  {
   payload.WithObject("FilterListConfiguration", m_filterListConfiguration.Jsonize());

  }

  if(m_customFilterListConfigurationHasBeenSet)
  {
   payload.WithObject("CustomFilterListConfiguration", m_customFilterListConfiguration.Jsonize());

  }

  if(m_customFilterConfigurationHasBeenSet)
  {
   payload.WithObject("CustomFilterConfiguration", m_customFilterConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
