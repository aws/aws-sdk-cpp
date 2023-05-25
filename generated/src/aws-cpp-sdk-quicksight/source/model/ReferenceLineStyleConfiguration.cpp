/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ReferenceLineStyleConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ReferenceLineStyleConfiguration::ReferenceLineStyleConfiguration() : 
    m_pattern(ReferenceLinePatternType::NOT_SET),
    m_patternHasBeenSet(false),
    m_colorHasBeenSet(false)
{
}

ReferenceLineStyleConfiguration::ReferenceLineStyleConfiguration(JsonView jsonValue) : 
    m_pattern(ReferenceLinePatternType::NOT_SET),
    m_patternHasBeenSet(false),
    m_colorHasBeenSet(false)
{
  *this = jsonValue;
}

ReferenceLineStyleConfiguration& ReferenceLineStyleConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Pattern"))
  {
    m_pattern = ReferenceLinePatternTypeMapper::GetReferenceLinePatternTypeForName(jsonValue.GetString("Pattern"));

    m_patternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Color"))
  {
    m_color = jsonValue.GetString("Color");

    m_colorHasBeenSet = true;
  }

  return *this;
}

JsonValue ReferenceLineStyleConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_patternHasBeenSet)
  {
   payload.WithString("Pattern", ReferenceLinePatternTypeMapper::GetNameForReferenceLinePatternType(m_pattern));
  }

  if(m_colorHasBeenSet)
  {
   payload.WithString("Color", m_color);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
