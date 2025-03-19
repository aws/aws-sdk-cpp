/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/NotStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/Statement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

NotStatement::NotStatement(JsonView jsonValue)
{
  *this = jsonValue;
}

NotStatement& NotStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Statement"))
  {
    m_statement = Aws::MakeShared<Statement>("NotStatement", jsonValue.GetObject("Statement"));
    m_statementHasBeenSet = true;
  }
  return *this;
}

JsonValue NotStatement::Jsonize() const
{
  JsonValue payload;

  if(m_statementHasBeenSet)
  {
   payload.WithObject("Statement", m_statement->Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
