/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/KeyRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

KeyRange::KeyRange() : 
    m_beginMarkerHasBeenSet(false),
    m_endMarkerHasBeenSet(false)
{
}

KeyRange::KeyRange(JsonView jsonValue) : 
    m_beginMarkerHasBeenSet(false),
    m_endMarkerHasBeenSet(false)
{
  *this = jsonValue;
}

KeyRange& KeyRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BeginMarker"))
  {
    m_beginMarker = jsonValue.GetString("BeginMarker");

    m_beginMarkerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndMarker"))
  {
    m_endMarker = jsonValue.GetString("EndMarker");

    m_endMarkerHasBeenSet = true;
  }

  return *this;
}

JsonValue KeyRange::Jsonize() const
{
  JsonValue payload;

  if(m_beginMarkerHasBeenSet)
  {
   payload.WithString("BeginMarker", m_beginMarker);

  }

  if(m_endMarkerHasBeenSet)
  {
   payload.WithString("EndMarker", m_endMarker);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
