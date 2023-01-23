/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/WriteSegmentRequest.h>
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

WriteSegmentRequest::WriteSegmentRequest() : 
    m_dimensionsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_segmentGroupsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

WriteSegmentRequest::WriteSegmentRequest(JsonView jsonValue) : 
    m_dimensionsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_segmentGroupsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

WriteSegmentRequest& WriteSegmentRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dimensions"))
  {
    m_dimensions = jsonValue.GetObject("Dimensions");

    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentGroups"))
  {
    m_segmentGroups = jsonValue.GetObject("SegmentGroups");

    m_segmentGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue WriteSegmentRequest::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionsHasBeenSet)
  {
   payload.WithObject("Dimensions", m_dimensions.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_segmentGroupsHasBeenSet)
  {
   payload.WithObject("SegmentGroups", m_segmentGroups.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
