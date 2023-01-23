/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataLabelType.h>
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

DataLabelType::DataLabelType() : 
    m_fieldLabelTypeHasBeenSet(false),
    m_dataPathLabelTypeHasBeenSet(false),
    m_rangeEndsLabelTypeHasBeenSet(false),
    m_minimumLabelTypeHasBeenSet(false),
    m_maximumLabelTypeHasBeenSet(false)
{
}

DataLabelType::DataLabelType(JsonView jsonValue) : 
    m_fieldLabelTypeHasBeenSet(false),
    m_dataPathLabelTypeHasBeenSet(false),
    m_rangeEndsLabelTypeHasBeenSet(false),
    m_minimumLabelTypeHasBeenSet(false),
    m_maximumLabelTypeHasBeenSet(false)
{
  *this = jsonValue;
}

DataLabelType& DataLabelType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldLabelType"))
  {
    m_fieldLabelType = jsonValue.GetObject("FieldLabelType");

    m_fieldLabelTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataPathLabelType"))
  {
    m_dataPathLabelType = jsonValue.GetObject("DataPathLabelType");

    m_dataPathLabelTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RangeEndsLabelType"))
  {
    m_rangeEndsLabelType = jsonValue.GetObject("RangeEndsLabelType");

    m_rangeEndsLabelTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinimumLabelType"))
  {
    m_minimumLabelType = jsonValue.GetObject("MinimumLabelType");

    m_minimumLabelTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumLabelType"))
  {
    m_maximumLabelType = jsonValue.GetObject("MaximumLabelType");

    m_maximumLabelTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue DataLabelType::Jsonize() const
{
  JsonValue payload;

  if(m_fieldLabelTypeHasBeenSet)
  {
   payload.WithObject("FieldLabelType", m_fieldLabelType.Jsonize());

  }

  if(m_dataPathLabelTypeHasBeenSet)
  {
   payload.WithObject("DataPathLabelType", m_dataPathLabelType.Jsonize());

  }

  if(m_rangeEndsLabelTypeHasBeenSet)
  {
   payload.WithObject("RangeEndsLabelType", m_rangeEndsLabelType.Jsonize());

  }

  if(m_minimumLabelTypeHasBeenSet)
  {
   payload.WithObject("MinimumLabelType", m_minimumLabelType.Jsonize());

  }

  if(m_maximumLabelTypeHasBeenSet)
  {
   payload.WithObject("MaximumLabelType", m_maximumLabelType.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
