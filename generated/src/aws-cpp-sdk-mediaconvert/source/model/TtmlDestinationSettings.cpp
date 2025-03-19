/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/TtmlDestinationSettings.h>
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

TtmlDestinationSettings::TtmlDestinationSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

TtmlDestinationSettings& TtmlDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stylePassthrough"))
  {
    m_stylePassthrough = TtmlStylePassthroughMapper::GetTtmlStylePassthroughForName(jsonValue.GetString("stylePassthrough"));
    m_stylePassthroughHasBeenSet = true;
  }
  return *this;
}

JsonValue TtmlDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_stylePassthroughHasBeenSet)
  {
   payload.WithString("stylePassthrough", TtmlStylePassthroughMapper::GetNameForTtmlStylePassthrough(m_stylePassthrough));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
