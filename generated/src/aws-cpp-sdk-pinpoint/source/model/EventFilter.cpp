﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/EventFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

EventFilter::EventFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

EventFilter& EventFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dimensions"))
  {
    m_dimensions = jsonValue.GetObject("Dimensions");
    m_dimensionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilterType"))
  {
    m_filterType = FilterTypeMapper::GetFilterTypeForName(jsonValue.GetString("FilterType"));
    m_filterTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue EventFilter::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionsHasBeenSet)
  {
   payload.WithObject("Dimensions", m_dimensions.Jsonize());

  }

  if(m_filterTypeHasBeenSet)
  {
   payload.WithString("FilterType", FilterTypeMapper::GetNameForFilterType(m_filterType));
  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
