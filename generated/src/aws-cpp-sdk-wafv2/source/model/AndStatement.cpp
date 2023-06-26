/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/AndStatement.h>
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

AndStatement::AndStatement() : 
    m_statementsHasBeenSet(false)
{
}

AndStatement::AndStatement(JsonView jsonValue) : 
    m_statementsHasBeenSet(false)
{
  *this = jsonValue;
}

AndStatement& AndStatement::operator =(JsonView jsonValue)
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

JsonValue AndStatement::Jsonize() const
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
