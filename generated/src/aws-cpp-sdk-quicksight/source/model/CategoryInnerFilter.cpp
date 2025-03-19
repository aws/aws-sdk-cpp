/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CategoryInnerFilter.h>
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

CategoryInnerFilter::CategoryInnerFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

CategoryInnerFilter& CategoryInnerFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Column"))
  {
    m_column = jsonValue.GetObject("Column");
    m_columnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Configuration"))
  {
    m_configuration = jsonValue.GetObject("Configuration");
    m_configurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultFilterControlConfiguration"))
  {
    m_defaultFilterControlConfiguration = jsonValue.GetObject("DefaultFilterControlConfiguration");
    m_defaultFilterControlConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue CategoryInnerFilter::Jsonize() const
{
  JsonValue payload;

  if(m_columnHasBeenSet)
  {
   payload.WithObject("Column", m_column.Jsonize());

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("Configuration", m_configuration.Jsonize());

  }

  if(m_defaultFilterControlConfigurationHasBeenSet)
  {
   payload.WithObject("DefaultFilterControlConfiguration", m_defaultFilterControlConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
