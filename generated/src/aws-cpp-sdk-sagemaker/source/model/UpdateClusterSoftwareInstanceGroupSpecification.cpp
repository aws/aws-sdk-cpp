/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateClusterSoftwareInstanceGroupSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

UpdateClusterSoftwareInstanceGroupSpecification::UpdateClusterSoftwareInstanceGroupSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateClusterSoftwareInstanceGroupSpecification& UpdateClusterSoftwareInstanceGroupSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceGroupName"))
  {
    m_instanceGroupName = jsonValue.GetString("InstanceGroupName");
    m_instanceGroupNameHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateClusterSoftwareInstanceGroupSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_instanceGroupNameHasBeenSet)
  {
   payload.WithString("InstanceGroupName", m_instanceGroupName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
