/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CmafIngestCaptionLanguageMapping.h>
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

CmafIngestCaptionLanguageMapping::CmafIngestCaptionLanguageMapping(JsonView jsonValue)
{
  *this = jsonValue;
}

CmafIngestCaptionLanguageMapping& CmafIngestCaptionLanguageMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("captionChannel"))
  {
    m_captionChannel = jsonValue.GetInteger("captionChannel");
    m_captionChannelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("languageCode"))
  {
    m_languageCode = jsonValue.GetString("languageCode");
    m_languageCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue CmafIngestCaptionLanguageMapping::Jsonize() const
{
  JsonValue payload;

  if(m_captionChannelHasBeenSet)
  {
   payload.WithInteger("captionChannel", m_captionChannel);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("languageCode", m_languageCode);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
