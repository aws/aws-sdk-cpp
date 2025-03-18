/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/VideoSourceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

VideoSourceDetails::VideoSourceDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

VideoSourceDetails& VideoSourceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mediaId"))
  {
    m_mediaId = jsonValue.GetString("mediaId");
    m_mediaIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mediaMimeType"))
  {
    m_mediaMimeType = jsonValue.GetString("mediaMimeType");
    m_mediaMimeTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTimeMilliseconds"))
  {
    m_startTimeMilliseconds = jsonValue.GetInt64("startTimeMilliseconds");
    m_startTimeMillisecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTimeMilliseconds"))
  {
    m_endTimeMilliseconds = jsonValue.GetInt64("endTimeMilliseconds");
    m_endTimeMillisecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("videoExtractionType"))
  {
    m_videoExtractionType = VideoExtractionTypeMapper::GetVideoExtractionTypeForName(jsonValue.GetString("videoExtractionType"));
    m_videoExtractionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue VideoSourceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_mediaIdHasBeenSet)
  {
   payload.WithString("mediaId", m_mediaId);

  }

  if(m_mediaMimeTypeHasBeenSet)
  {
   payload.WithString("mediaMimeType", m_mediaMimeType);

  }

  if(m_startTimeMillisecondsHasBeenSet)
  {
   payload.WithInt64("startTimeMilliseconds", m_startTimeMilliseconds);

  }

  if(m_endTimeMillisecondsHasBeenSet)
  {
   payload.WithInt64("endTimeMilliseconds", m_endTimeMilliseconds);

  }

  if(m_videoExtractionTypeHasBeenSet)
  {
   payload.WithString("videoExtractionType", VideoExtractionTypeMapper::GetNameForVideoExtractionType(m_videoExtractionType));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
