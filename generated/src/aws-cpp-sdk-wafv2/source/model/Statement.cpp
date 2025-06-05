/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/Statement.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/RateBasedStatement.h>
#include <aws/wafv2/model/AndStatement.h>
#include <aws/wafv2/model/OrStatement.h>
#include <aws/wafv2/model/NotStatement.h>
#include <aws/wafv2/model/ManagedRuleGroupStatement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

Statement::Statement(JsonView jsonValue)
{
  *this = jsonValue;
}

Statement& Statement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ByteMatchStatement"))
  {
    m_byteMatchStatement = jsonValue.GetObject("ByteMatchStatement");
    m_byteMatchStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SqliMatchStatement"))
  {
    m_sqliMatchStatement = jsonValue.GetObject("SqliMatchStatement");
    m_sqliMatchStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("XssMatchStatement"))
  {
    m_xssMatchStatement = jsonValue.GetObject("XssMatchStatement");
    m_xssMatchStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SizeConstraintStatement"))
  {
    m_sizeConstraintStatement = jsonValue.GetObject("SizeConstraintStatement");
    m_sizeConstraintStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GeoMatchStatement"))
  {
    m_geoMatchStatement = jsonValue.GetObject("GeoMatchStatement");
    m_geoMatchStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleGroupReferenceStatement"))
  {
    m_ruleGroupReferenceStatement = jsonValue.GetObject("RuleGroupReferenceStatement");
    m_ruleGroupReferenceStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IPSetReferenceStatement"))
  {
    m_iPSetReferenceStatement = jsonValue.GetObject("IPSetReferenceStatement");
    m_iPSetReferenceStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegexPatternSetReferenceStatement"))
  {
    m_regexPatternSetReferenceStatement = jsonValue.GetObject("RegexPatternSetReferenceStatement");
    m_regexPatternSetReferenceStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RateBasedStatement"))
  {
    m_rateBasedStatement = Aws::MakeShared<RateBasedStatement>("Statement", jsonValue.GetObject("RateBasedStatement"));
    m_rateBasedStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AndStatement"))
  {
    m_andStatement = Aws::MakeShared<AndStatement>("Statement", jsonValue.GetObject("AndStatement"));
    m_andStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OrStatement"))
  {
    m_orStatement = Aws::MakeShared<OrStatement>("Statement", jsonValue.GetObject("OrStatement"));
    m_orStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NotStatement"))
  {
    m_notStatement = Aws::MakeShared<NotStatement>("Statement", jsonValue.GetObject("NotStatement"));
    m_notStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ManagedRuleGroupStatement"))
  {
    m_managedRuleGroupStatement = Aws::MakeShared<ManagedRuleGroupStatement>("Statement", jsonValue.GetObject("ManagedRuleGroupStatement"));
    m_managedRuleGroupStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LabelMatchStatement"))
  {
    m_labelMatchStatement = jsonValue.GetObject("LabelMatchStatement");
    m_labelMatchStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegexMatchStatement"))
  {
    m_regexMatchStatement = jsonValue.GetObject("RegexMatchStatement");
    m_regexMatchStatementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AsnMatchStatement"))
  {
    m_asnMatchStatement = jsonValue.GetObject("AsnMatchStatement");
    m_asnMatchStatementHasBeenSet = true;
  }
  return *this;
}

JsonValue Statement::Jsonize() const
{
  JsonValue payload;

  if(m_byteMatchStatementHasBeenSet)
  {
   payload.WithObject("ByteMatchStatement", m_byteMatchStatement.Jsonize());

  }

  if(m_sqliMatchStatementHasBeenSet)
  {
   payload.WithObject("SqliMatchStatement", m_sqliMatchStatement.Jsonize());

  }

  if(m_xssMatchStatementHasBeenSet)
  {
   payload.WithObject("XssMatchStatement", m_xssMatchStatement.Jsonize());

  }

  if(m_sizeConstraintStatementHasBeenSet)
  {
   payload.WithObject("SizeConstraintStatement", m_sizeConstraintStatement.Jsonize());

  }

  if(m_geoMatchStatementHasBeenSet)
  {
   payload.WithObject("GeoMatchStatement", m_geoMatchStatement.Jsonize());

  }

  if(m_ruleGroupReferenceStatementHasBeenSet)
  {
   payload.WithObject("RuleGroupReferenceStatement", m_ruleGroupReferenceStatement.Jsonize());

  }

  if(m_iPSetReferenceStatementHasBeenSet)
  {
   payload.WithObject("IPSetReferenceStatement", m_iPSetReferenceStatement.Jsonize());

  }

  if(m_regexPatternSetReferenceStatementHasBeenSet)
  {
   payload.WithObject("RegexPatternSetReferenceStatement", m_regexPatternSetReferenceStatement.Jsonize());

  }

  if(m_rateBasedStatementHasBeenSet)
  {
   payload.WithObject("RateBasedStatement", m_rateBasedStatement->Jsonize());

  }

  if(m_andStatementHasBeenSet)
  {
   payload.WithObject("AndStatement", m_andStatement->Jsonize());

  }

  if(m_orStatementHasBeenSet)
  {
   payload.WithObject("OrStatement", m_orStatement->Jsonize());

  }

  if(m_notStatementHasBeenSet)
  {
   payload.WithObject("NotStatement", m_notStatement->Jsonize());

  }

  if(m_managedRuleGroupStatementHasBeenSet)
  {
   payload.WithObject("ManagedRuleGroupStatement", m_managedRuleGroupStatement->Jsonize());

  }

  if(m_labelMatchStatementHasBeenSet)
  {
   payload.WithObject("LabelMatchStatement", m_labelMatchStatement.Jsonize());

  }

  if(m_regexMatchStatementHasBeenSet)
  {
   payload.WithObject("RegexMatchStatement", m_regexMatchStatement.Jsonize());

  }

  if(m_asnMatchStatementHasBeenSet)
  {
   payload.WithObject("AsnMatchStatement", m_asnMatchStatement.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
