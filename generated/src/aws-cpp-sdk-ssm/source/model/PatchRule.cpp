/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PatchRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

PatchRule::PatchRule() : 
    m_patchFilterGroupHasBeenSet(false),
    m_complianceLevel(PatchComplianceLevel::NOT_SET),
    m_complianceLevelHasBeenSet(false),
    m_approveAfterDays(0),
    m_approveAfterDaysHasBeenSet(false),
    m_approveUntilDateHasBeenSet(false),
    m_enableNonSecurity(false),
    m_enableNonSecurityHasBeenSet(false)
{
}

PatchRule::PatchRule(JsonView jsonValue) : 
    m_patchFilterGroupHasBeenSet(false),
    m_complianceLevel(PatchComplianceLevel::NOT_SET),
    m_complianceLevelHasBeenSet(false),
    m_approveAfterDays(0),
    m_approveAfterDaysHasBeenSet(false),
    m_approveUntilDateHasBeenSet(false),
    m_enableNonSecurity(false),
    m_enableNonSecurityHasBeenSet(false)
{
  *this = jsonValue;
}

PatchRule& PatchRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PatchFilterGroup"))
  {
    m_patchFilterGroup = jsonValue.GetObject("PatchFilterGroup");

    m_patchFilterGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceLevel"))
  {
    m_complianceLevel = PatchComplianceLevelMapper::GetPatchComplianceLevelForName(jsonValue.GetString("ComplianceLevel"));

    m_complianceLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApproveAfterDays"))
  {
    m_approveAfterDays = jsonValue.GetInteger("ApproveAfterDays");

    m_approveAfterDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApproveUntilDate"))
  {
    m_approveUntilDate = jsonValue.GetString("ApproveUntilDate");

    m_approveUntilDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableNonSecurity"))
  {
    m_enableNonSecurity = jsonValue.GetBool("EnableNonSecurity");

    m_enableNonSecurityHasBeenSet = true;
  }

  return *this;
}

JsonValue PatchRule::Jsonize() const
{
  JsonValue payload;

  if(m_patchFilterGroupHasBeenSet)
  {
   payload.WithObject("PatchFilterGroup", m_patchFilterGroup.Jsonize());

  }

  if(m_complianceLevelHasBeenSet)
  {
   payload.WithString("ComplianceLevel", PatchComplianceLevelMapper::GetNameForPatchComplianceLevel(m_complianceLevel));
  }

  if(m_approveAfterDaysHasBeenSet)
  {
   payload.WithInteger("ApproveAfterDays", m_approveAfterDays);

  }

  if(m_approveUntilDateHasBeenSet)
  {
   payload.WithString("ApproveUntilDate", m_approveUntilDate);

  }

  if(m_enableNonSecurityHasBeenSet)
  {
   payload.WithBool("EnableNonSecurity", m_enableNonSecurity);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
