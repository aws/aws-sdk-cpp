/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/FindingDetails.h>
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

FindingDetails::FindingDetails() : 
    m_cloudFormationStackUpdateHasBeenSet(false),
    m_codeDeployDeploymentHasBeenSet(false)
{
}

FindingDetails::FindingDetails(JsonView jsonValue) : 
    m_cloudFormationStackUpdateHasBeenSet(false),
    m_codeDeployDeploymentHasBeenSet(false)
{
  *this = jsonValue;
}

FindingDetails& FindingDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudFormationStackUpdate"))
  {
    m_cloudFormationStackUpdate = jsonValue.GetObject("cloudFormationStackUpdate");

    m_cloudFormationStackUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codeDeployDeployment"))
  {
    m_codeDeployDeployment = jsonValue.GetObject("codeDeployDeployment");

    m_codeDeployDeploymentHasBeenSet = true;
  }

  return *this;
}

JsonValue FindingDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cloudFormationStackUpdateHasBeenSet)
  {
   payload.WithObject("cloudFormationStackUpdate", m_cloudFormationStackUpdate.Jsonize());

  }

  if(m_codeDeployDeploymentHasBeenSet)
  {
   payload.WithObject("codeDeployDeployment", m_codeDeployDeployment.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
