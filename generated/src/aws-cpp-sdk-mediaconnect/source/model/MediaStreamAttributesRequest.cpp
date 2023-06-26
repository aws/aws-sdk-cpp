/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/MediaStreamAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

MediaStreamAttributesRequest::MediaStreamAttributesRequest() : 
    m_fmtpHasBeenSet(false),
    m_langHasBeenSet(false)
{
}

MediaStreamAttributesRequest::MediaStreamAttributesRequest(JsonView jsonValue) : 
    m_fmtpHasBeenSet(false),
    m_langHasBeenSet(false)
{
  *this = jsonValue;
}

MediaStreamAttributesRequest& MediaStreamAttributesRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fmtp"))
  {
    m_fmtp = jsonValue.GetObject("fmtp");

    m_fmtpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lang"))
  {
    m_lang = jsonValue.GetString("lang");

    m_langHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaStreamAttributesRequest::Jsonize() const
{
  JsonValue payload;

  if(m_fmtpHasBeenSet)
  {
   payload.WithObject("fmtp", m_fmtp.Jsonize());

  }

  if(m_langHasBeenSet)
  {
   payload.WithString("lang", m_lang);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
