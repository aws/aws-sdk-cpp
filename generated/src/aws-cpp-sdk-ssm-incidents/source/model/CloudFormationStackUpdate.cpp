/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/CloudFormationStackUpdate.h>
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

CloudFormationStackUpdate::CloudFormationStackUpdate() : 
    m_endTimeHasBeenSet(false),
    m_stackArnHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

CloudFormationStackUpdate::CloudFormationStackUpdate(JsonView jsonValue) : 
    m_endTimeHasBeenSet(false),
    m_stackArnHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

CloudFormationStackUpdate& CloudFormationStackUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stackArn"))
  {
    m_stackArn = jsonValue.GetString("stackArn");

    m_stackArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudFormationStackUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_stackArnHasBeenSet)
  {
   payload.WithString("stackArn", m_stackArn);

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
