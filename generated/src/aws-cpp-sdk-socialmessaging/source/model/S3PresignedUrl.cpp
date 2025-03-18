/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/socialmessaging/model/S3PresignedUrl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SocialMessaging
{
namespace Model
{

S3PresignedUrl::S3PresignedUrl(JsonView jsonValue)
{
  *this = jsonValue;
}

S3PresignedUrl& S3PresignedUrl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("headers"))
  {
    Aws::Map<Aws::String, JsonView> headersJsonMap = jsonValue.GetObject("headers").GetAllObjects();
    for(auto& headersItem : headersJsonMap)
    {
      m_headers[headersItem.first] = headersItem.second.AsString();
    }
    m_headersHasBeenSet = true;
  }
  return *this;
}

JsonValue S3PresignedUrl::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_headersHasBeenSet)
  {
   JsonValue headersJsonMap;
   for(auto& headersItem : m_headers)
   {
     headersJsonMap.WithString(headersItem.first, headersItem.second);
   }
   payload.WithObject("headers", std::move(headersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
