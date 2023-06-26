/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/OverrideAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

OverrideAction::OverrideAction() : 
    m_countHasBeenSet(false),
    m_noneHasBeenSet(false)
{
}

OverrideAction::OverrideAction(JsonView jsonValue) : 
    m_countHasBeenSet(false),
    m_noneHasBeenSet(false)
{
  *this = jsonValue;
}

OverrideAction& OverrideAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetObject("Count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("None"))
  {
    m_none = jsonValue.GetObject("None");

    m_noneHasBeenSet = true;
  }

  return *this;
}

JsonValue OverrideAction::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithObject("Count", m_count.Jsonize());

  }

  if(m_noneHasBeenSet)
  {
   payload.WithObject("None", m_none.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
