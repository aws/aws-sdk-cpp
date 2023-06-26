/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/AWSManagedRulesATPRuleSet.h>
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

AWSManagedRulesATPRuleSet::AWSManagedRulesATPRuleSet() : 
    m_loginPathHasBeenSet(false),
    m_requestInspectionHasBeenSet(false),
    m_responseInspectionHasBeenSet(false),
    m_enableRegexInPath(false),
    m_enableRegexInPathHasBeenSet(false)
{
}

AWSManagedRulesATPRuleSet::AWSManagedRulesATPRuleSet(JsonView jsonValue) : 
    m_loginPathHasBeenSet(false),
    m_requestInspectionHasBeenSet(false),
    m_responseInspectionHasBeenSet(false),
    m_enableRegexInPath(false),
    m_enableRegexInPathHasBeenSet(false)
{
  *this = jsonValue;
}

AWSManagedRulesATPRuleSet& AWSManagedRulesATPRuleSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LoginPath"))
  {
    m_loginPath = jsonValue.GetString("LoginPath");

    m_loginPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestInspection"))
  {
    m_requestInspection = jsonValue.GetObject("RequestInspection");

    m_requestInspectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResponseInspection"))
  {
    m_responseInspection = jsonValue.GetObject("ResponseInspection");

    m_responseInspectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableRegexInPath"))
  {
    m_enableRegexInPath = jsonValue.GetBool("EnableRegexInPath");

    m_enableRegexInPathHasBeenSet = true;
  }

  return *this;
}

JsonValue AWSManagedRulesATPRuleSet::Jsonize() const
{
  JsonValue payload;

  if(m_loginPathHasBeenSet)
  {
   payload.WithString("LoginPath", m_loginPath);

  }

  if(m_requestInspectionHasBeenSet)
  {
   payload.WithObject("RequestInspection", m_requestInspection.Jsonize());

  }

  if(m_responseInspectionHasBeenSet)
  {
   payload.WithObject("ResponseInspection", m_responseInspection.Jsonize());

  }

  if(m_enableRegexInPathHasBeenSet)
  {
   payload.WithBool("EnableRegexInPath", m_enableRegexInPath);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
