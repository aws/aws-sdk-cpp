/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Hdr10Settings.h>
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

Hdr10Settings::Hdr10Settings() : 
    m_maxCll(0),
    m_maxCllHasBeenSet(false),
    m_maxFall(0),
    m_maxFallHasBeenSet(false)
{
}

Hdr10Settings::Hdr10Settings(JsonView jsonValue) : 
    m_maxCll(0),
    m_maxCllHasBeenSet(false),
    m_maxFall(0),
    m_maxFallHasBeenSet(false)
{
  *this = jsonValue;
}

Hdr10Settings& Hdr10Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxCll"))
  {
    m_maxCll = jsonValue.GetInteger("maxCll");

    m_maxCllHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxFall"))
  {
    m_maxFall = jsonValue.GetInteger("maxFall");

    m_maxFallHasBeenSet = true;
  }

  return *this;
}

JsonValue Hdr10Settings::Jsonize() const
{
  JsonValue payload;

  if(m_maxCllHasBeenSet)
  {
   payload.WithInteger("maxCll", m_maxCll);

  }

  if(m_maxFallHasBeenSet)
  {
   payload.WithInteger("maxFall", m_maxFall);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
