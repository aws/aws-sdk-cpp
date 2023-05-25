/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsServiceDeploymentControllerDetails.h>
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

AwsEcsServiceDeploymentControllerDetails::AwsEcsServiceDeploymentControllerDetails() : 
    m_typeHasBeenSet(false)
{
}

AwsEcsServiceDeploymentControllerDetails::AwsEcsServiceDeploymentControllerDetails(JsonView jsonValue) : 
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsServiceDeploymentControllerDetails& AwsEcsServiceDeploymentControllerDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsServiceDeploymentControllerDetails::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
