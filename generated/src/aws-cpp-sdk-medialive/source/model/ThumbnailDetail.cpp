/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ThumbnailDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

ThumbnailDetail::ThumbnailDetail() : 
    m_pipelineIdHasBeenSet(false),
    m_thumbnailsHasBeenSet(false)
{
}

ThumbnailDetail::ThumbnailDetail(JsonView jsonValue) : 
    m_pipelineIdHasBeenSet(false),
    m_thumbnailsHasBeenSet(false)
{
  *this = jsonValue;
}

ThumbnailDetail& ThumbnailDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pipelineId"))
  {
    m_pipelineId = jsonValue.GetString("pipelineId");

    m_pipelineIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thumbnails"))
  {
    Aws::Utils::Array<JsonView> thumbnailsJsonList = jsonValue.GetArray("thumbnails");
    for(unsigned thumbnailsIndex = 0; thumbnailsIndex < thumbnailsJsonList.GetLength(); ++thumbnailsIndex)
    {
      m_thumbnails.push_back(thumbnailsJsonList[thumbnailsIndex].AsObject());
    }
    m_thumbnailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ThumbnailDetail::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineIdHasBeenSet)
  {
   payload.WithString("pipelineId", m_pipelineId);

  }

  if(m_thumbnailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> thumbnailsJsonList(m_thumbnails.size());
   for(unsigned thumbnailsIndex = 0; thumbnailsIndex < thumbnailsJsonList.GetLength(); ++thumbnailsIndex)
   {
     thumbnailsJsonList[thumbnailsIndex].AsObject(m_thumbnails[thumbnailsIndex].Jsonize());
   }
   payload.WithArray("thumbnails", std::move(thumbnailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
