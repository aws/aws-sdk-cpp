/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/InAppMessageHeaderConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

InAppMessageHeaderConfig::InAppMessageHeaderConfig() : 
    m_alignment(Alignment::NOT_SET),
    m_alignmentHasBeenSet(false),
    m_headerHasBeenSet(false),
    m_textColorHasBeenSet(false)
{
}

InAppMessageHeaderConfig::InAppMessageHeaderConfig(JsonView jsonValue) : 
    m_alignment(Alignment::NOT_SET),
    m_alignmentHasBeenSet(false),
    m_headerHasBeenSet(false),
    m_textColorHasBeenSet(false)
{
  *this = jsonValue;
}

InAppMessageHeaderConfig& InAppMessageHeaderConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Alignment"))
  {
    m_alignment = AlignmentMapper::GetAlignmentForName(jsonValue.GetString("Alignment"));

    m_alignmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Header"))
  {
    m_header = jsonValue.GetString("Header");

    m_headerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextColor"))
  {
    m_textColor = jsonValue.GetString("TextColor");

    m_textColorHasBeenSet = true;
  }

  return *this;
}

JsonValue InAppMessageHeaderConfig::Jsonize() const
{
  JsonValue payload;

  if(m_alignmentHasBeenSet)
  {
   payload.WithString("Alignment", AlignmentMapper::GetNameForAlignment(m_alignment));
  }

  if(m_headerHasBeenSet)
  {
   payload.WithString("Header", m_header);

  }

  if(m_textColorHasBeenSet)
  {
   payload.WithString("TextColor", m_textColor);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
