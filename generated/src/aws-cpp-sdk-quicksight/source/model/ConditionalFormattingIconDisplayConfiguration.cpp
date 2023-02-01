/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ConditionalFormattingIconDisplayConfiguration.h>
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

ConditionalFormattingIconDisplayConfiguration::ConditionalFormattingIconDisplayConfiguration() : 
    m_iconDisplayOption(ConditionalFormattingIconDisplayOption::NOT_SET),
    m_iconDisplayOptionHasBeenSet(false)
{
}

ConditionalFormattingIconDisplayConfiguration::ConditionalFormattingIconDisplayConfiguration(JsonView jsonValue) : 
    m_iconDisplayOption(ConditionalFormattingIconDisplayOption::NOT_SET),
    m_iconDisplayOptionHasBeenSet(false)
{
  *this = jsonValue;
}

ConditionalFormattingIconDisplayConfiguration& ConditionalFormattingIconDisplayConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IconDisplayOption"))
  {
    m_iconDisplayOption = ConditionalFormattingIconDisplayOptionMapper::GetConditionalFormattingIconDisplayOptionForName(jsonValue.GetString("IconDisplayOption"));

    m_iconDisplayOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue ConditionalFormattingIconDisplayConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_iconDisplayOptionHasBeenSet)
  {
   payload.WithString("IconDisplayOption", ConditionalFormattingIconDisplayOptionMapper::GetNameForConditionalFormattingIconDisplayOption(m_iconDisplayOption));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
