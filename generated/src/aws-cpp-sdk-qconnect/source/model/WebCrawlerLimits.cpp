/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/WebCrawlerLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

WebCrawlerLimits::WebCrawlerLimits(JsonView jsonValue)
{
  *this = jsonValue;
}

WebCrawlerLimits& WebCrawlerLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rateLimit"))
  {
    m_rateLimit = jsonValue.GetInteger("rateLimit");
    m_rateLimitHasBeenSet = true;
  }
  return *this;
}

JsonValue WebCrawlerLimits::Jsonize() const
{
  JsonValue payload;

  if(m_rateLimitHasBeenSet)
  {
   payload.WithInteger("rateLimit", m_rateLimit);

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
