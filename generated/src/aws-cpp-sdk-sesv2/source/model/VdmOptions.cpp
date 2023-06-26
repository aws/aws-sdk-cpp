/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/VdmOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

VdmOptions::VdmOptions() : 
    m_dashboardOptionsHasBeenSet(false),
    m_guardianOptionsHasBeenSet(false)
{
}

VdmOptions::VdmOptions(JsonView jsonValue) : 
    m_dashboardOptionsHasBeenSet(false),
    m_guardianOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

VdmOptions& VdmOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DashboardOptions"))
  {
    m_dashboardOptions = jsonValue.GetObject("DashboardOptions");

    m_dashboardOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GuardianOptions"))
  {
    m_guardianOptions = jsonValue.GetObject("GuardianOptions");

    m_guardianOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue VdmOptions::Jsonize() const
{
  JsonValue payload;

  if(m_dashboardOptionsHasBeenSet)
  {
   payload.WithObject("DashboardOptions", m_dashboardOptions.Jsonize());

  }

  if(m_guardianOptionsHasBeenSet)
  {
   payload.WithObject("GuardianOptions", m_guardianOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
