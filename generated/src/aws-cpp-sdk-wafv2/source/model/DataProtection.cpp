/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/DataProtection.h>
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

DataProtection::DataProtection(JsonView jsonValue)
{
  *this = jsonValue;
}

DataProtection& DataProtection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Field"))
  {
    m_field = jsonValue.GetObject("Field");
    m_fieldHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Action"))
  {
    m_action = DataProtectionActionMapper::GetDataProtectionActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExcludeRuleMatchDetails"))
  {
    m_excludeRuleMatchDetails = jsonValue.GetBool("ExcludeRuleMatchDetails");
    m_excludeRuleMatchDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExcludeRateBasedDetails"))
  {
    m_excludeRateBasedDetails = jsonValue.GetBool("ExcludeRateBasedDetails");
    m_excludeRateBasedDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataProtection::Jsonize() const
{
  JsonValue payload;

  if(m_fieldHasBeenSet)
  {
   payload.WithObject("Field", m_field.Jsonize());

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", DataProtectionActionMapper::GetNameForDataProtectionAction(m_action));
  }

  if(m_excludeRuleMatchDetailsHasBeenSet)
  {
   payload.WithBool("ExcludeRuleMatchDetails", m_excludeRuleMatchDetails);

  }

  if(m_excludeRateBasedDetailsHasBeenSet)
  {
   payload.WithBool("ExcludeRateBasedDetails", m_excludeRateBasedDetails);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
