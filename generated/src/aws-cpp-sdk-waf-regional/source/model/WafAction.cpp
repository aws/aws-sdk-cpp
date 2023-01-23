/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/WafAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

WafAction::WafAction() : 
    m_type(WafActionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

WafAction::WafAction(JsonView jsonValue) : 
    m_type(WafActionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

WafAction& WafAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = WafActionTypeMapper::GetWafActionTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue WafAction::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", WafActionTypeMapper::GetNameForWafActionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
