/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/OrStatement.h>
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

OrStatement::OrStatement() : 
    m_statementsHasBeenSet(false)
{
}

OrStatement::OrStatement(JsonView jsonValue) : 
    m_statementsHasBeenSet(false)
{
  *this = jsonValue;
}

OrStatement& OrStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Statements"))
  {
    Aws::Utils::Array<JsonView> statementsJsonList = jsonValue.GetArray("Statements");
    for(unsigned statementsIndex = 0; statementsIndex < statementsJsonList.GetLength(); ++statementsIndex)
    {
      m_statements.push_back(statementsJsonList[statementsIndex].AsObject());
    }
    m_statementsHasBeenSet = true;
  }

  return *this;
}

JsonValue OrStatement::Jsonize() const
{
  JsonValue payload;

  if(m_statementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statementsJsonList(m_statements.size());
   for(unsigned statementsIndex = 0; statementsIndex < statementsJsonList.GetLength(); ++statementsIndex)
   {
     statementsJsonList[statementsIndex].AsObject(m_statements[statementsIndex].Jsonize());
   }
   payload.WithArray("Statements", std::move(statementsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
