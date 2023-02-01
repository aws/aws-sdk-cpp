/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/WorkflowStepOutputUnion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Model
{

WorkflowStepOutputUnion::WorkflowStepOutputUnion() : 
    m_integerValue(0),
    m_integerValueHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_listOfStringValueHasBeenSet(false)
{
}

WorkflowStepOutputUnion::WorkflowStepOutputUnion(JsonView jsonValue) : 
    m_integerValue(0),
    m_integerValueHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_listOfStringValueHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowStepOutputUnion& WorkflowStepOutputUnion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("integerValue"))
  {
    m_integerValue = jsonValue.GetInteger("integerValue");

    m_integerValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringValue"))
  {
    m_stringValue = jsonValue.GetString("stringValue");

    m_stringValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("listOfStringValue"))
  {
    Aws::Utils::Array<JsonView> listOfStringValueJsonList = jsonValue.GetArray("listOfStringValue");
    for(unsigned listOfStringValueIndex = 0; listOfStringValueIndex < listOfStringValueJsonList.GetLength(); ++listOfStringValueIndex)
    {
      m_listOfStringValue.push_back(listOfStringValueJsonList[listOfStringValueIndex].AsString());
    }
    m_listOfStringValueHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowStepOutputUnion::Jsonize() const
{
  JsonValue payload;

  if(m_integerValueHasBeenSet)
  {
   payload.WithInteger("integerValue", m_integerValue);

  }

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("stringValue", m_stringValue);

  }

  if(m_listOfStringValueHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> listOfStringValueJsonList(m_listOfStringValue.size());
   for(unsigned listOfStringValueIndex = 0; listOfStringValueIndex < listOfStringValueJsonList.GetLength(); ++listOfStringValueIndex)
   {
     listOfStringValueJsonList[listOfStringValueIndex].AsString(m_listOfStringValue[listOfStringValueIndex]);
   }
   payload.WithArray("listOfStringValue", std::move(listOfStringValueJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
