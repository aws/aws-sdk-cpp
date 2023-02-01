/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CampaignEventFilter.h>
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

CampaignEventFilter::CampaignEventFilter() : 
    m_dimensionsHasBeenSet(false),
    m_filterType(FilterType::NOT_SET),
    m_filterTypeHasBeenSet(false)
{
}

CampaignEventFilter::CampaignEventFilter(JsonView jsonValue) : 
    m_dimensionsHasBeenSet(false),
    m_filterType(FilterType::NOT_SET),
    m_filterTypeHasBeenSet(false)
{
  *this = jsonValue;
}

CampaignEventFilter& CampaignEventFilter::operator =(JsonView jsonValue)
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

JsonValue CampaignEventFilter::Jsonize() const
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
