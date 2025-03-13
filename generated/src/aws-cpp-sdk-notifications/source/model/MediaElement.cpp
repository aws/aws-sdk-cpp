/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/MediaElement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Notifications
{
namespace Model
{

MediaElement::MediaElement(JsonView jsonValue)
{
  *this = jsonValue;
}

MediaElement& MediaElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mediaId"))
  {
    m_mediaId = jsonValue.GetString("mediaId");
    m_mediaIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = MediaElementTypeMapper::GetMediaElementTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("caption"))
  {
    m_caption = jsonValue.GetString("caption");
    m_captionHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaElement::Jsonize() const
{
  JsonValue payload;

  if(m_mediaIdHasBeenSet)
  {
   payload.WithString("mediaId", m_mediaId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", MediaElementTypeMapper::GetNameForMediaElementType(m_type));
  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_captionHasBeenSet)
  {
   payload.WithString("caption", m_caption);

  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
