/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AutomationRulesActionTypeObjectV2.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AutomationRulesActionTypeObjectV2::AutomationRulesActionTypeObjectV2(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomationRulesActionTypeObjectV2& AutomationRulesActionTypeObjectV2::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = AutomationRulesActionTypeV2Mapper::GetAutomationRulesActionTypeV2ForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomationRulesActionTypeObjectV2::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", AutomationRulesActionTypeV2Mapper::GetNameForAutomationRulesActionTypeV2(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
