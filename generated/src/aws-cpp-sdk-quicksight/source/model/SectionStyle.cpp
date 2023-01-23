/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SectionStyle.h>
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

SectionStyle::SectionStyle() : 
    m_heightHasBeenSet(false),
    m_paddingHasBeenSet(false)
{
}

SectionStyle::SectionStyle(JsonView jsonValue) : 
    m_heightHasBeenSet(false),
    m_paddingHasBeenSet(false)
{
  *this = jsonValue;
}

SectionStyle& SectionStyle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Height"))
  {
    m_height = jsonValue.GetString("Height");

    m_heightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Padding"))
  {
    m_padding = jsonValue.GetObject("Padding");

    m_paddingHasBeenSet = true;
  }

  return *this;
}

JsonValue SectionStyle::Jsonize() const
{
  JsonValue payload;

  if(m_heightHasBeenSet)
  {
   payload.WithString("Height", m_height);

  }

  if(m_paddingHasBeenSet)
  {
   payload.WithObject("Padding", m_padding.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
