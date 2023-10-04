/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/AdBreakOpportunity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

AdBreakOpportunity::AdBreakOpportunity() : 
    m_offsetMillis(0),
    m_offsetMillisHasBeenSet(false)
{
}

AdBreakOpportunity::AdBreakOpportunity(JsonView jsonValue) : 
    m_offsetMillis(0),
    m_offsetMillisHasBeenSet(false)
{
  *this = jsonValue;
}

AdBreakOpportunity& AdBreakOpportunity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OffsetMillis"))
  {
    m_offsetMillis = jsonValue.GetInt64("OffsetMillis");

    m_offsetMillisHasBeenSet = true;
  }

  return *this;
}

JsonValue AdBreakOpportunity::Jsonize() const
{
  JsonValue payload;

  if(m_offsetMillisHasBeenSet)
  {
   payload.WithInt64("OffsetMillis", m_offsetMillis);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
