/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AutomationRulesAction.h>
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

AutomationRulesAction::AutomationRulesAction() : 
    m_type(AutomationRulesActionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_findingFieldsUpdateHasBeenSet(false)
{
}

AutomationRulesAction::AutomationRulesAction(JsonView jsonValue) : 
    m_type(AutomationRulesActionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_findingFieldsUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

AutomationRulesAction& AutomationRulesAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = AutomationRulesActionTypeMapper::GetAutomationRulesActionTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FindingFieldsUpdate"))
  {
    m_findingFieldsUpdate = jsonValue.GetObject("FindingFieldsUpdate");

    m_findingFieldsUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue AutomationRulesAction::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", AutomationRulesActionTypeMapper::GetNameForAutomationRulesActionType(m_type));
  }

  if(m_findingFieldsUpdateHasBeenSet)
  {
   payload.WithObject("FindingFieldsUpdate", m_findingFieldsUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
