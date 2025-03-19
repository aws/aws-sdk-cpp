/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/GetLabelDetectionRequestMetadata.h>
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

GetLabelDetectionRequestMetadata::GetLabelDetectionRequestMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

GetLabelDetectionRequestMetadata& GetLabelDetectionRequestMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SortBy"))
  {
    m_sortBy = LabelDetectionSortByMapper::GetLabelDetectionSortByForName(jsonValue.GetString("SortBy"));
    m_sortByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AggregateBy"))
  {
    m_aggregateBy = LabelDetectionAggregateByMapper::GetLabelDetectionAggregateByForName(jsonValue.GetString("AggregateBy"));
    m_aggregateByHasBeenSet = true;
  }
  return *this;
}

JsonValue GetLabelDetectionRequestMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", LabelDetectionSortByMapper::GetNameForLabelDetectionSortBy(m_sortBy));
  }

  if(m_aggregateByHasBeenSet)
  {
   payload.WithString("AggregateBy", LabelDetectionAggregateByMapper::GetNameForLabelDetectionAggregateBy(m_aggregateBy));
  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
