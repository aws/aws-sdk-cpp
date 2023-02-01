/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DateTimePickerControlDisplayOptions.h>
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

DateTimePickerControlDisplayOptions::DateTimePickerControlDisplayOptions() : 
    m_titleOptionsHasBeenSet(false),
    m_dateTimeFormatHasBeenSet(false)
{
}

DateTimePickerControlDisplayOptions::DateTimePickerControlDisplayOptions(JsonView jsonValue) : 
    m_titleOptionsHasBeenSet(false),
    m_dateTimeFormatHasBeenSet(false)
{
  *this = jsonValue;
}

DateTimePickerControlDisplayOptions& DateTimePickerControlDisplayOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TitleOptions"))
  {
    m_titleOptions = jsonValue.GetObject("TitleOptions");

    m_titleOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateTimeFormat"))
  {
    m_dateTimeFormat = jsonValue.GetString("DateTimeFormat");

    m_dateTimeFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue DateTimePickerControlDisplayOptions::Jsonize() const
{
  JsonValue payload;

  if(m_titleOptionsHasBeenSet)
  {
   payload.WithObject("TitleOptions", m_titleOptions.Jsonize());

  }

  if(m_dateTimeFormatHasBeenSet)
  {
   payload.WithString("DateTimeFormat", m_dateTimeFormat);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
