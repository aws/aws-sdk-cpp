/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RuleGroupVariablesPortSetsDetails.h>
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

RuleGroupVariablesPortSetsDetails::RuleGroupVariablesPortSetsDetails() : 
    m_definitionHasBeenSet(false)
{
}

RuleGroupVariablesPortSetsDetails::RuleGroupVariablesPortSetsDetails(JsonView jsonValue) : 
    m_definitionHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroupVariablesPortSetsDetails& RuleGroupVariablesPortSetsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Definition"))
  {
    Aws::Utils::Array<JsonView> definitionJsonList = jsonValue.GetArray("Definition");
    for(unsigned definitionIndex = 0; definitionIndex < definitionJsonList.GetLength(); ++definitionIndex)
    {
      m_definition.push_back(definitionJsonList[definitionIndex].AsString());
    }
    m_definitionHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroupVariablesPortSetsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_definitionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> definitionJsonList(m_definition.size());
   for(unsigned definitionIndex = 0; definitionIndex < definitionJsonList.GetLength(); ++definitionIndex)
   {
     definitionJsonList[definitionIndex].AsString(m_definition[definitionIndex]);
   }
   payload.WithArray("Definition", std::move(definitionJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
