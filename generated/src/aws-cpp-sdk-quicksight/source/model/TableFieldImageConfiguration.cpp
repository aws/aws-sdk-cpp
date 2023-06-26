/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableFieldImageConfiguration.h>
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

TableFieldImageConfiguration::TableFieldImageConfiguration() : 
    m_sizingOptionsHasBeenSet(false)
{
}

TableFieldImageConfiguration::TableFieldImageConfiguration(JsonView jsonValue) : 
    m_sizingOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

TableFieldImageConfiguration& TableFieldImageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SizingOptions"))
  {
    m_sizingOptions = jsonValue.GetObject("SizingOptions");

    m_sizingOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue TableFieldImageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sizingOptionsHasBeenSet)
  {
   payload.WithObject("SizingOptions", m_sizingOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
