/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DefaultFormatting.h>
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

DefaultFormatting::DefaultFormatting() : 
    m_displayFormat(DisplayFormat::NOT_SET),
    m_displayFormatHasBeenSet(false),
    m_displayFormatOptionsHasBeenSet(false)
{
}

DefaultFormatting::DefaultFormatting(JsonView jsonValue) : 
    m_displayFormat(DisplayFormat::NOT_SET),
    m_displayFormatHasBeenSet(false),
    m_displayFormatOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultFormatting& DefaultFormatting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DisplayFormat"))
  {
    m_displayFormat = DisplayFormatMapper::GetDisplayFormatForName(jsonValue.GetString("DisplayFormat"));

    m_displayFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayFormatOptions"))
  {
    m_displayFormatOptions = jsonValue.GetObject("DisplayFormatOptions");

    m_displayFormatOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultFormatting::Jsonize() const
{
  JsonValue payload;

  if(m_displayFormatHasBeenSet)
  {
   payload.WithString("DisplayFormat", DisplayFormatMapper::GetNameForDisplayFormat(m_displayFormat));
  }

  if(m_displayFormatOptionsHasBeenSet)
  {
   payload.WithObject("DisplayFormatOptions", m_displayFormatOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
