/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails.h>
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

AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails::AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails() : 
    m_conditionHasBeenSet(false),
    m_containerNameHasBeenSet(false)
{
}

AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails::AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails(JsonView jsonValue) : 
    m_conditionHasBeenSet(false),
    m_containerNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails& AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Condition"))
  {
    m_condition = jsonValue.GetString("Condition");

    m_conditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerName"))
  {
    m_containerName = jsonValue.GetString("ContainerName");

    m_containerNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails::Jsonize() const
{
  JsonValue payload;

  if(m_conditionHasBeenSet)
  {
   payload.WithString("Condition", m_condition);

  }

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("ContainerName", m_containerName);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
