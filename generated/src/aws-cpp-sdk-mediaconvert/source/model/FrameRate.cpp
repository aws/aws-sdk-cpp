/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/FrameRate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

FrameRate::FrameRate(JsonView jsonValue)
{
  *this = jsonValue;
}

FrameRate& FrameRate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("denominator"))
  {
    m_denominator = jsonValue.GetInteger("denominator");
    m_denominatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numerator"))
  {
    m_numerator = jsonValue.GetInteger("numerator");
    m_numeratorHasBeenSet = true;
  }
  return *this;
}

JsonValue FrameRate::Jsonize() const
{
  JsonValue payload;

  if(m_denominatorHasBeenSet)
  {
   payload.WithInteger("denominator", m_denominator);

  }

  if(m_numeratorHasBeenSet)
  {
   payload.WithInteger("numerator", m_numerator);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
