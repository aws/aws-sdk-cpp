/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ComplianceSummaryItem.h>
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

ComplianceSummaryItem::ComplianceSummaryItem(JsonView jsonValue)
{
  *this = jsonValue;
}

ComplianceSummaryItem& ComplianceSummaryItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComplianceType"))
  {
    m_complianceType = jsonValue.GetString("ComplianceType");
    m_complianceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompliantSummary"))
  {
    m_compliantSummary = jsonValue.GetObject("CompliantSummary");
    m_compliantSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NonCompliantSummary"))
  {
    m_nonCompliantSummary = jsonValue.GetObject("NonCompliantSummary");
    m_nonCompliantSummaryHasBeenSet = true;
  }
  return *this;
}

JsonValue ComplianceSummaryItem::Jsonize() const
{
  JsonValue payload;

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("ComplianceType", m_complianceType);

  }

  if(m_compliantSummaryHasBeenSet)
  {
   payload.WithObject("CompliantSummary", m_compliantSummary.Jsonize());

  }

  if(m_nonCompliantSummaryHasBeenSet)
  {
   payload.WithObject("NonCompliantSummary", m_nonCompliantSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
