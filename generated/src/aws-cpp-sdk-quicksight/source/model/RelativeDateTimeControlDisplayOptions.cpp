/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RelativeDateTimeControlDisplayOptions.h>
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

RelativeDateTimeControlDisplayOptions::RelativeDateTimeControlDisplayOptions() : 
    m_titleOptionsHasBeenSet(false),
    m_dateTimeFormatHasBeenSet(false),
    m_infoIconLabelOptionsHasBeenSet(false)
{
}

RelativeDateTimeControlDisplayOptions::RelativeDateTimeControlDisplayOptions(JsonView jsonValue) : 
    m_titleOptionsHasBeenSet(false),
    m_dateTimeFormatHasBeenSet(false),
    m_infoIconLabelOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

RelativeDateTimeControlDisplayOptions& RelativeDateTimeControlDisplayOptions::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("InfoIconLabelOptions"))
  {
    m_infoIconLabelOptions = jsonValue.GetObject("InfoIconLabelOptions");

    m_infoIconLabelOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue RelativeDateTimeControlDisplayOptions::Jsonize() const
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

  if(m_infoIconLabelOptionsHasBeenSet)
  {
   payload.WithObject("InfoIconLabelOptions", m_infoIconLabelOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
