/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/MediaStreamAttributes.h>
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

MediaStreamAttributes::MediaStreamAttributes() : 
    m_fmtpHasBeenSet(false),
    m_langHasBeenSet(false)
{
}

MediaStreamAttributes::MediaStreamAttributes(JsonView jsonValue) : 
    m_fmtpHasBeenSet(false),
    m_langHasBeenSet(false)
{
  *this = jsonValue;
}

MediaStreamAttributes& MediaStreamAttributes::operator =(JsonView jsonValue)
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

JsonValue MediaStreamAttributes::Jsonize() const
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
