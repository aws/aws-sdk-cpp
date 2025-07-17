/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/PolicyStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

PolicyStatement::PolicyStatement(JsonView jsonValue)
{
  *this = jsonValue;
}

PolicyStatement& PolicyStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Conditions"))
  {
    Aws::Utils::Array<JsonView> conditionsJsonList = jsonValue.GetArray("Conditions");
    for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
    {
      m_conditions.push_back(conditionsJsonList[conditionsIndex].AsObject());
    }
    m_conditionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Action"))
  {
    m_action = AcceptActionMapper::GetAcceptActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyStatement::Jsonize() const
{
  JsonValue payload;

  if(m_conditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conditionsJsonList(m_conditions.size());
   for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
   {
     conditionsJsonList[conditionsIndex].AsObject(m_conditions[conditionsIndex].Jsonize());
   }
   payload.WithArray("Conditions", std::move(conditionsJsonList));

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", AcceptActionMapper::GetNameForAcceptAction(m_action));
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
