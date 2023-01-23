/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/NielsenNaesIiNw.h>
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

NielsenNaesIiNw::NielsenNaesIiNw() : 
    m_checkDigitStringHasBeenSet(false),
    m_sid(0.0),
    m_sidHasBeenSet(false)
{
}

NielsenNaesIiNw::NielsenNaesIiNw(JsonView jsonValue) : 
    m_checkDigitStringHasBeenSet(false),
    m_sid(0.0),
    m_sidHasBeenSet(false)
{
  *this = jsonValue;
}

NielsenNaesIiNw& NielsenNaesIiNw::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("checkDigitString"))
  {
    m_checkDigitString = jsonValue.GetString("checkDigitString");

    m_checkDigitStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sid"))
  {
    m_sid = jsonValue.GetDouble("sid");

    m_sidHasBeenSet = true;
  }

  return *this;
}

JsonValue NielsenNaesIiNw::Jsonize() const
{
  JsonValue payload;

  if(m_checkDigitStringHasBeenSet)
  {
   payload.WithString("checkDigitString", m_checkDigitString);

  }

  if(m_sidHasBeenSet)
  {
   payload.WithDouble("sid", m_sid);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
