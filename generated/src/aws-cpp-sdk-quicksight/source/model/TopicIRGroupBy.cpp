/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TopicIRGroupBy.h>
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

TopicIRGroupBy::TopicIRGroupBy(JsonView jsonValue)
{
  *this = jsonValue;
}

TopicIRGroupBy& TopicIRGroupBy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldName"))
  {
    m_fieldName = jsonValue.GetObject("FieldName");
    m_fieldNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeGranularity"))
  {
    m_timeGranularity = TopicTimeGranularityMapper::GetTopicTimeGranularityForName(jsonValue.GetString("TimeGranularity"));
    m_timeGranularityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Sort"))
  {
    m_sort = jsonValue.GetObject("Sort");
    m_sortHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("NamedEntity"))
  {
    m_namedEntity = jsonValue.GetObject("NamedEntity");
    m_namedEntityHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicIRGroupBy::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithObject("FieldName", m_fieldName.Jsonize());

  }

  if(m_timeGranularityHasBeenSet)
  {
   payload.WithString("TimeGranularity", TopicTimeGranularityMapper::GetNameForTopicTimeGranularity(m_timeGranularity));
  }

  if(m_sortHasBeenSet)
  {
   payload.WithObject("Sort", m_sort.Jsonize());

  }

  if(m_displayFormatHasBeenSet)
  {
   payload.WithString("DisplayFormat", DisplayFormatMapper::GetNameForDisplayFormat(m_displayFormat));
  }

  if(m_displayFormatOptionsHasBeenSet)
  {
   payload.WithObject("DisplayFormatOptions", m_displayFormatOptions.Jsonize());

  }

  if(m_namedEntityHasBeenSet)
  {
   payload.WithObject("NamedEntity", m_namedEntity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
