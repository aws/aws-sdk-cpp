/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/LabelMatchStatement.h>
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

LabelMatchStatement::LabelMatchStatement() : 
    m_scope(LabelMatchScope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_keyHasBeenSet(false)
{
}

LabelMatchStatement::LabelMatchStatement(JsonView jsonValue) : 
    m_scope(LabelMatchScope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_keyHasBeenSet(false)
{
  *this = jsonValue;
}

LabelMatchStatement& LabelMatchStatement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Scope"))
  {
    m_scope = LabelMatchScopeMapper::GetLabelMatchScopeForName(jsonValue.GetString("Scope"));

    m_scopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelMatchStatement::Jsonize() const
{
  JsonValue payload;

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", LabelMatchScopeMapper::GetNameForLabelMatchScope(m_scope));
  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
