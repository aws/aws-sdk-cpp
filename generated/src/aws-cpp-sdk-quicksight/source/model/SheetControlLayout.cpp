/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetControlLayout.h>
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

SheetControlLayout::SheetControlLayout() : 
    m_configurationHasBeenSet(false)
{
}

SheetControlLayout::SheetControlLayout(JsonView jsonValue) : 
    m_configurationHasBeenSet(false)
{
  *this = jsonValue;
}

SheetControlLayout& SheetControlLayout::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Configuration"))
  {
    m_configuration = jsonValue.GetObject("Configuration");

    m_configurationHasBeenSet = true;
  }

  return *this;
}

JsonValue SheetControlLayout::Jsonize() const
{
  JsonValue payload;

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("Configuration", m_configuration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
