/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/ComponentInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SsmSap
{
namespace Model
{

ComponentInfo::ComponentInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

ComponentInfo& ComponentInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComponentType"))
  {
    m_componentType = ComponentTypeMapper::GetComponentTypeForName(jsonValue.GetString("ComponentType"));
    m_componentTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Sid"))
  {
    m_sid = jsonValue.GetString("Sid");
    m_sidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ec2InstanceId"))
  {
    m_ec2InstanceId = jsonValue.GetString("Ec2InstanceId");
    m_ec2InstanceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ComponentInfo::Jsonize() const
{
  JsonValue payload;

  if(m_componentTypeHasBeenSet)
  {
   payload.WithString("ComponentType", ComponentTypeMapper::GetNameForComponentType(m_componentType));
  }

  if(m_sidHasBeenSet)
  {
   payload.WithString("Sid", m_sid);

  }

  if(m_ec2InstanceIdHasBeenSet)
  {
   payload.WithString("Ec2InstanceId", m_ec2InstanceId);

  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
