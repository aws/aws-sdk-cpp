/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/InputVideoGenerator.h>
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

InputVideoGenerator::InputVideoGenerator() : 
    m_duration(0),
    m_durationHasBeenSet(false)
{
}

InputVideoGenerator::InputVideoGenerator(JsonView jsonValue) : 
    m_duration(0),
    m_durationHasBeenSet(false)
{
  *this = jsonValue;
}

InputVideoGenerator& InputVideoGenerator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("duration"))
  {
    m_duration = jsonValue.GetInteger("duration");

    m_durationHasBeenSet = true;
  }

  return *this;
}

JsonValue InputVideoGenerator::Jsonize() const
{
  JsonValue payload;

  if(m_durationHasBeenSet)
  {
   payload.WithInteger("duration", m_duration);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
