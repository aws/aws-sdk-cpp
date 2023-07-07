/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Thumbnail.h>
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

Thumbnail::Thumbnail() : 
    m_bodyHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_thumbnailType(ThumbnailType::NOT_SET),
    m_thumbnailTypeHasBeenSet(false),
    m_timeStampHasBeenSet(false)
{
}

Thumbnail::Thumbnail(JsonView jsonValue) : 
    m_bodyHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_thumbnailType(ThumbnailType::NOT_SET),
    m_thumbnailTypeHasBeenSet(false),
    m_timeStampHasBeenSet(false)
{
  *this = jsonValue;
}

Thumbnail& Thumbnail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("body"))
  {
    m_body = jsonValue.GetString("body");

    m_bodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentType"))
  {
    m_contentType = jsonValue.GetString("contentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thumbnailType"))
  {
    m_thumbnailType = ThumbnailTypeMapper::GetThumbnailTypeForName(jsonValue.GetString("thumbnailType"));

    m_thumbnailTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeStamp"))
  {
    m_timeStamp = jsonValue.GetString("timeStamp");

    m_timeStampHasBeenSet = true;
  }

  return *this;
}

JsonValue Thumbnail::Jsonize() const
{
  JsonValue payload;

  if(m_bodyHasBeenSet)
  {
   payload.WithString("body", m_body);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", m_contentType);

  }

  if(m_thumbnailTypeHasBeenSet)
  {
   payload.WithString("thumbnailType", ThumbnailTypeMapper::GetNameForThumbnailType(m_thumbnailType));
  }

  if(m_timeStampHasBeenSet)
  {
   payload.WithString("timeStamp", m_timeStamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
