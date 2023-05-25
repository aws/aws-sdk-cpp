/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ConditionalFormattingCustomIconOptions.h>
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

ConditionalFormattingCustomIconOptions::ConditionalFormattingCustomIconOptions() : 
    m_icon(Icon::NOT_SET),
    m_iconHasBeenSet(false),
    m_unicodeIconHasBeenSet(false)
{
}

ConditionalFormattingCustomIconOptions::ConditionalFormattingCustomIconOptions(JsonView jsonValue) : 
    m_icon(Icon::NOT_SET),
    m_iconHasBeenSet(false),
    m_unicodeIconHasBeenSet(false)
{
  *this = jsonValue;
}

ConditionalFormattingCustomIconOptions& ConditionalFormattingCustomIconOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Icon"))
  {
    m_icon = IconMapper::GetIconForName(jsonValue.GetString("Icon"));

    m_iconHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnicodeIcon"))
  {
    m_unicodeIcon = jsonValue.GetString("UnicodeIcon");

    m_unicodeIconHasBeenSet = true;
  }

  return *this;
}

JsonValue ConditionalFormattingCustomIconOptions::Jsonize() const
{
  JsonValue payload;

  if(m_iconHasBeenSet)
  {
   payload.WithString("Icon", IconMapper::GetNameForIcon(m_icon));
  }

  if(m_unicodeIconHasBeenSet)
  {
   payload.WithString("UnicodeIcon", m_unicodeIcon);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
