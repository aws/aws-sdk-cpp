/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/PermissionCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

PermissionCondition::PermissionCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

PermissionCondition& PermissionCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("conditionOperator"))
  {
    m_conditionOperator = PermissionConditionOperatorMapper::GetPermissionConditionOperatorForName(jsonValue.GetString("conditionOperator"));
    m_conditionOperatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conditionKey"))
  {
    m_conditionKey = jsonValue.GetString("conditionKey");
    m_conditionKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conditionValues"))
  {
    Aws::Utils::Array<JsonView> conditionValuesJsonList = jsonValue.GetArray("conditionValues");
    for(unsigned conditionValuesIndex = 0; conditionValuesIndex < conditionValuesJsonList.GetLength(); ++conditionValuesIndex)
    {
      m_conditionValues.push_back(conditionValuesJsonList[conditionValuesIndex].AsString());
    }
    m_conditionValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue PermissionCondition::Jsonize() const
{
  JsonValue payload;

  if(m_conditionOperatorHasBeenSet)
  {
   payload.WithString("conditionOperator", PermissionConditionOperatorMapper::GetNameForPermissionConditionOperator(m_conditionOperator));
  }

  if(m_conditionKeyHasBeenSet)
  {
   payload.WithString("conditionKey", m_conditionKey);

  }

  if(m_conditionValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conditionValuesJsonList(m_conditionValues.size());
   for(unsigned conditionValuesIndex = 0; conditionValuesIndex < conditionValuesJsonList.GetLength(); ++conditionValuesIndex)
   {
     conditionValuesJsonList[conditionValuesIndex].AsString(m_conditionValues[conditionValuesIndex]);
   }
   payload.WithArray("conditionValues", std::move(conditionValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
