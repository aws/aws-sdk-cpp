/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/DashDvbFontDownload.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

DashDvbFontDownload::DashDvbFontDownload(JsonView jsonValue)
{
  *this = jsonValue;
}

DashDvbFontDownload& DashDvbFontDownload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");
    m_urlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MimeType"))
  {
    m_mimeType = jsonValue.GetString("MimeType");
    m_mimeTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FontFamily"))
  {
    m_fontFamily = jsonValue.GetString("FontFamily");
    m_fontFamilyHasBeenSet = true;
  }
  return *this;
}

JsonValue DashDvbFontDownload::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_mimeTypeHasBeenSet)
  {
   payload.WithString("MimeType", m_mimeType);

  }

  if(m_fontFamilyHasBeenSet)
  {
   payload.WithString("FontFamily", m_fontFamily);

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
