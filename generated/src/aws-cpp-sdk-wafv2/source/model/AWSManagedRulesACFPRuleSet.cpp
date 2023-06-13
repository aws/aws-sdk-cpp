/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/AWSManagedRulesACFPRuleSet.h>
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

AWSManagedRulesACFPRuleSet::AWSManagedRulesACFPRuleSet() : 
    m_creationPathHasBeenSet(false),
    m_registrationPagePathHasBeenSet(false),
    m_requestInspectionHasBeenSet(false),
    m_responseInspectionHasBeenSet(false),
    m_enableRegexInPath(false),
    m_enableRegexInPathHasBeenSet(false)
{
}

AWSManagedRulesACFPRuleSet::AWSManagedRulesACFPRuleSet(JsonView jsonValue) : 
    m_creationPathHasBeenSet(false),
    m_registrationPagePathHasBeenSet(false),
    m_requestInspectionHasBeenSet(false),
    m_responseInspectionHasBeenSet(false),
    m_enableRegexInPath(false),
    m_enableRegexInPathHasBeenSet(false)
{
  *this = jsonValue;
}

AWSManagedRulesACFPRuleSet& AWSManagedRulesACFPRuleSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationPath"))
  {
    m_creationPath = jsonValue.GetString("CreationPath");

    m_creationPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistrationPagePath"))
  {
    m_registrationPagePath = jsonValue.GetString("RegistrationPagePath");

    m_registrationPagePathHasBeenSet = true;
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

JsonValue AWSManagedRulesACFPRuleSet::Jsonize() const
{
  JsonValue payload;

  if(m_creationPathHasBeenSet)
  {
   payload.WithString("CreationPath", m_creationPath);

  }

  if(m_registrationPagePathHasBeenSet)
  {
   payload.WithString("RegistrationPagePath", m_registrationPagePath);

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
