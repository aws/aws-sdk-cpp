/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AmazonQInQuickSightDashboardConfigurations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AmazonQInQuickSightDashboardConfigurations::AmazonQInQuickSightDashboardConfigurations(JsonView jsonValue)
{
  *this = jsonValue;
}

AmazonQInQuickSightDashboardConfigurations& AmazonQInQuickSightDashboardConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExecutiveSummary"))
  {
    m_executiveSummary = jsonValue.GetObject("ExecutiveSummary");
    m_executiveSummaryHasBeenSet = true;
  }
  return *this;
}

JsonValue AmazonQInQuickSightDashboardConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_executiveSummaryHasBeenSet)
  {
   payload.WithObject("ExecutiveSummary", m_executiveSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
