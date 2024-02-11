/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/GetContentModerationRequestMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

GetContentModerationRequestMetadata::GetContentModerationRequestMetadata() : 
    m_sortBy(ContentModerationSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_aggregateBy(ContentModerationAggregateBy::NOT_SET),
    m_aggregateByHasBeenSet(false)
{
}

GetContentModerationRequestMetadata::GetContentModerationRequestMetadata(JsonView jsonValue) : 
    m_sortBy(ContentModerationSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_aggregateBy(ContentModerationAggregateBy::NOT_SET),
    m_aggregateByHasBeenSet(false)
{
  *this = jsonValue;
}

GetContentModerationRequestMetadata& GetContentModerationRequestMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SortBy"))
  {
    m_sortBy = ContentModerationSortByMapper::GetContentModerationSortByForName(jsonValue.GetString("SortBy"));

    m_sortByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AggregateBy"))
  {
    m_aggregateBy = ContentModerationAggregateByMapper::GetContentModerationAggregateByForName(jsonValue.GetString("AggregateBy"));

    m_aggregateByHasBeenSet = true;
  }

  return *this;
}

JsonValue GetContentModerationRequestMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", ContentModerationSortByMapper::GetNameForContentModerationSortBy(m_sortBy));
  }

  if(m_aggregateByHasBeenSet)
  {
   payload.WithString("AggregateBy", ContentModerationAggregateByMapper::GetNameForContentModerationAggregateBy(m_aggregateBy));
  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
