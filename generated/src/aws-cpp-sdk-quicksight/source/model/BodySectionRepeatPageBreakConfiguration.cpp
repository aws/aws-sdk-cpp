/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BodySectionRepeatPageBreakConfiguration.h>
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

BodySectionRepeatPageBreakConfiguration::BodySectionRepeatPageBreakConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

BodySectionRepeatPageBreakConfiguration& BodySectionRepeatPageBreakConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("After"))
  {
    m_after = jsonValue.GetObject("After");
    m_afterHasBeenSet = true;
  }
  return *this;
}

JsonValue BodySectionRepeatPageBreakConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_afterHasBeenSet)
  {
   payload.WithObject("After", m_after.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
