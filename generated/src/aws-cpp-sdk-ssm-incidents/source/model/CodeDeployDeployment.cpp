/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/CodeDeployDeployment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

CodeDeployDeployment::CodeDeployDeployment() : 
    m_deploymentGroupArnHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

CodeDeployDeployment::CodeDeployDeployment(JsonView jsonValue) : 
    m_deploymentGroupArnHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

CodeDeployDeployment& CodeDeployDeployment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deploymentGroupArn"))
  {
    m_deploymentGroupArn = jsonValue.GetString("deploymentGroupArn");

    m_deploymentGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentId"))
  {
    m_deploymentId = jsonValue.GetString("deploymentId");

    m_deploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeDeployDeployment::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentGroupArnHasBeenSet)
  {
   payload.WithString("deploymentGroupArn", m_deploymentGroupArn);

  }

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
