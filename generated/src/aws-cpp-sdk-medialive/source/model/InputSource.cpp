﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputSource.h>
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

InputSource::InputSource(JsonView jsonValue)
{
  *this = jsonValue;
}

InputSource& InputSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("passwordParam"))
  {
    m_passwordParam = jsonValue.GetString("passwordParam");
    m_passwordParamHasBeenSet = true;
  }
  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");
    m_urlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");
    m_usernameHasBeenSet = true;
  }
  return *this;
}

JsonValue InputSource::Jsonize() const
{
  JsonValue payload;

  if(m_passwordParamHasBeenSet)
  {
   payload.WithString("passwordParam", m_passwordParam);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
