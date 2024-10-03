/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/StartTag.h>
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

StartTag::StartTag() : 
    m_timeOffset(0.0),
    m_timeOffsetHasBeenSet(false),
    m_precise(false),
    m_preciseHasBeenSet(false)
{
}

StartTag::StartTag(JsonView jsonValue)
  : StartTag()
{
  *this = jsonValue;
}

StartTag& StartTag::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimeOffset"))
  {
    m_timeOffset = jsonValue.GetDouble("TimeOffset");

    m_timeOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Precise"))
  {
    m_precise = jsonValue.GetBool("Precise");

    m_preciseHasBeenSet = true;
  }

  return *this;
}

JsonValue StartTag::Jsonize() const
{
  JsonValue payload;

  if(m_timeOffsetHasBeenSet)
  {
   payload.WithDouble("TimeOffset", m_timeOffset);

  }

  if(m_preciseHasBeenSet)
  {
   payload.WithBool("Precise", m_precise);

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
