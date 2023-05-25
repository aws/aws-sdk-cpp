/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SectionAfterPageBreak.h>
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

SectionAfterPageBreak::SectionAfterPageBreak() : 
    m_status(SectionPageBreakStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

SectionAfterPageBreak::SectionAfterPageBreak(JsonView jsonValue) : 
    m_status(SectionPageBreakStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

SectionAfterPageBreak& SectionAfterPageBreak::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = SectionPageBreakStatusMapper::GetSectionPageBreakStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue SectionAfterPageBreak::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SectionPageBreakStatusMapper::GetNameForSectionPageBreakStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
