/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsSsmComplianceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsSsmComplianceSummary::AwsSsmComplianceSummary() : 
    m_statusHasBeenSet(false),
    m_compliantCriticalCount(0),
    m_compliantCriticalCountHasBeenSet(false),
    m_compliantHighCount(0),
    m_compliantHighCountHasBeenSet(false),
    m_compliantMediumCount(0),
    m_compliantMediumCountHasBeenSet(false),
    m_executionTypeHasBeenSet(false),
    m_nonCompliantCriticalCount(0),
    m_nonCompliantCriticalCountHasBeenSet(false),
    m_compliantInformationalCount(0),
    m_compliantInformationalCountHasBeenSet(false),
    m_nonCompliantInformationalCount(0),
    m_nonCompliantInformationalCountHasBeenSet(false),
    m_compliantUnspecifiedCount(0),
    m_compliantUnspecifiedCountHasBeenSet(false),
    m_nonCompliantLowCount(0),
    m_nonCompliantLowCountHasBeenSet(false),
    m_nonCompliantHighCount(0),
    m_nonCompliantHighCountHasBeenSet(false),
    m_compliantLowCount(0),
    m_compliantLowCountHasBeenSet(false),
    m_complianceTypeHasBeenSet(false),
    m_patchBaselineIdHasBeenSet(false),
    m_overallSeverityHasBeenSet(false),
    m_nonCompliantMediumCount(0),
    m_nonCompliantMediumCountHasBeenSet(false),
    m_nonCompliantUnspecifiedCount(0),
    m_nonCompliantUnspecifiedCountHasBeenSet(false),
    m_patchGroupHasBeenSet(false)
{
}

AwsSsmComplianceSummary::AwsSsmComplianceSummary(JsonView jsonValue) : 
    m_statusHasBeenSet(false),
    m_compliantCriticalCount(0),
    m_compliantCriticalCountHasBeenSet(false),
    m_compliantHighCount(0),
    m_compliantHighCountHasBeenSet(false),
    m_compliantMediumCount(0),
    m_compliantMediumCountHasBeenSet(false),
    m_executionTypeHasBeenSet(false),
    m_nonCompliantCriticalCount(0),
    m_nonCompliantCriticalCountHasBeenSet(false),
    m_compliantInformationalCount(0),
    m_compliantInformationalCountHasBeenSet(false),
    m_nonCompliantInformationalCount(0),
    m_nonCompliantInformationalCountHasBeenSet(false),
    m_compliantUnspecifiedCount(0),
    m_compliantUnspecifiedCountHasBeenSet(false),
    m_nonCompliantLowCount(0),
    m_nonCompliantLowCountHasBeenSet(false),
    m_nonCompliantHighCount(0),
    m_nonCompliantHighCountHasBeenSet(false),
    m_compliantLowCount(0),
    m_compliantLowCountHasBeenSet(false),
    m_complianceTypeHasBeenSet(false),
    m_patchBaselineIdHasBeenSet(false),
    m_overallSeverityHasBeenSet(false),
    m_nonCompliantMediumCount(0),
    m_nonCompliantMediumCountHasBeenSet(false),
    m_nonCompliantUnspecifiedCount(0),
    m_nonCompliantUnspecifiedCountHasBeenSet(false),
    m_patchGroupHasBeenSet(false)
{
  *this = jsonValue;
}

AwsSsmComplianceSummary& AwsSsmComplianceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompliantCriticalCount"))
  {
    m_compliantCriticalCount = jsonValue.GetInteger("CompliantCriticalCount");

    m_compliantCriticalCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompliantHighCount"))
  {
    m_compliantHighCount = jsonValue.GetInteger("CompliantHighCount");

    m_compliantHighCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompliantMediumCount"))
  {
    m_compliantMediumCount = jsonValue.GetInteger("CompliantMediumCount");

    m_compliantMediumCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionType"))
  {
    m_executionType = jsonValue.GetString("ExecutionType");

    m_executionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NonCompliantCriticalCount"))
  {
    m_nonCompliantCriticalCount = jsonValue.GetInteger("NonCompliantCriticalCount");

    m_nonCompliantCriticalCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompliantInformationalCount"))
  {
    m_compliantInformationalCount = jsonValue.GetInteger("CompliantInformationalCount");

    m_compliantInformationalCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NonCompliantInformationalCount"))
  {
    m_nonCompliantInformationalCount = jsonValue.GetInteger("NonCompliantInformationalCount");

    m_nonCompliantInformationalCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompliantUnspecifiedCount"))
  {
    m_compliantUnspecifiedCount = jsonValue.GetInteger("CompliantUnspecifiedCount");

    m_compliantUnspecifiedCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NonCompliantLowCount"))
  {
    m_nonCompliantLowCount = jsonValue.GetInteger("NonCompliantLowCount");

    m_nonCompliantLowCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NonCompliantHighCount"))
  {
    m_nonCompliantHighCount = jsonValue.GetInteger("NonCompliantHighCount");

    m_nonCompliantHighCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompliantLowCount"))
  {
    m_compliantLowCount = jsonValue.GetInteger("CompliantLowCount");

    m_compliantLowCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceType"))
  {
    m_complianceType = jsonValue.GetString("ComplianceType");

    m_complianceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PatchBaselineId"))
  {
    m_patchBaselineId = jsonValue.GetString("PatchBaselineId");

    m_patchBaselineIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OverallSeverity"))
  {
    m_overallSeverity = jsonValue.GetString("OverallSeverity");

    m_overallSeverityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NonCompliantMediumCount"))
  {
    m_nonCompliantMediumCount = jsonValue.GetInteger("NonCompliantMediumCount");

    m_nonCompliantMediumCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NonCompliantUnspecifiedCount"))
  {
    m_nonCompliantUnspecifiedCount = jsonValue.GetInteger("NonCompliantUnspecifiedCount");

    m_nonCompliantUnspecifiedCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PatchGroup"))
  {
    m_patchGroup = jsonValue.GetString("PatchGroup");

    m_patchGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsSsmComplianceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_compliantCriticalCountHasBeenSet)
  {
   payload.WithInteger("CompliantCriticalCount", m_compliantCriticalCount);

  }

  if(m_compliantHighCountHasBeenSet)
  {
   payload.WithInteger("CompliantHighCount", m_compliantHighCount);

  }

  if(m_compliantMediumCountHasBeenSet)
  {
   payload.WithInteger("CompliantMediumCount", m_compliantMediumCount);

  }

  if(m_executionTypeHasBeenSet)
  {
   payload.WithString("ExecutionType", m_executionType);

  }

  if(m_nonCompliantCriticalCountHasBeenSet)
  {
   payload.WithInteger("NonCompliantCriticalCount", m_nonCompliantCriticalCount);

  }

  if(m_compliantInformationalCountHasBeenSet)
  {
   payload.WithInteger("CompliantInformationalCount", m_compliantInformationalCount);

  }

  if(m_nonCompliantInformationalCountHasBeenSet)
  {
   payload.WithInteger("NonCompliantInformationalCount", m_nonCompliantInformationalCount);

  }

  if(m_compliantUnspecifiedCountHasBeenSet)
  {
   payload.WithInteger("CompliantUnspecifiedCount", m_compliantUnspecifiedCount);

  }

  if(m_nonCompliantLowCountHasBeenSet)
  {
   payload.WithInteger("NonCompliantLowCount", m_nonCompliantLowCount);

  }

  if(m_nonCompliantHighCountHasBeenSet)
  {
   payload.WithInteger("NonCompliantHighCount", m_nonCompliantHighCount);

  }

  if(m_compliantLowCountHasBeenSet)
  {
   payload.WithInteger("CompliantLowCount", m_compliantLowCount);

  }

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("ComplianceType", m_complianceType);

  }

  if(m_patchBaselineIdHasBeenSet)
  {
   payload.WithString("PatchBaselineId", m_patchBaselineId);

  }

  if(m_overallSeverityHasBeenSet)
  {
   payload.WithString("OverallSeverity", m_overallSeverity);

  }

  if(m_nonCompliantMediumCountHasBeenSet)
  {
   payload.WithInteger("NonCompliantMediumCount", m_nonCompliantMediumCount);

  }

  if(m_nonCompliantUnspecifiedCountHasBeenSet)
  {
   payload.WithInteger("NonCompliantUnspecifiedCount", m_nonCompliantUnspecifiedCount);

  }

  if(m_patchGroupHasBeenSet)
  {
   payload.WithString("PatchGroup", m_patchGroup);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
