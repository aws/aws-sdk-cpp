/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ExportToCSVOption.h>
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

ExportToCSVOption::ExportToCSVOption() : 
    m_availabilityStatus(DashboardBehavior::NOT_SET),
    m_availabilityStatusHasBeenSet(false)
{
}

ExportToCSVOption::ExportToCSVOption(JsonView jsonValue) : 
    m_availabilityStatus(DashboardBehavior::NOT_SET),
    m_availabilityStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ExportToCSVOption& ExportToCSVOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvailabilityStatus"))
  {
    m_availabilityStatus = DashboardBehaviorMapper::GetDashboardBehaviorForName(jsonValue.GetString("AvailabilityStatus"));

    m_availabilityStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportToCSVOption::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityStatusHasBeenSet)
  {
   payload.WithString("AvailabilityStatus", DashboardBehaviorMapper::GetNameForDashboardBehavior(m_availabilityStatus));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
