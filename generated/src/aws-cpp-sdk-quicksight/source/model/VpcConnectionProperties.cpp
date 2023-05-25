/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/VpcConnectionProperties.h>
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

VpcConnectionProperties::VpcConnectionProperties() : 
    m_vpcConnectionArnHasBeenSet(false)
{
}

VpcConnectionProperties::VpcConnectionProperties(JsonView jsonValue) : 
    m_vpcConnectionArnHasBeenSet(false)
{
  *this = jsonValue;
}

VpcConnectionProperties& VpcConnectionProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpcConnectionArn"))
  {
    m_vpcConnectionArn = jsonValue.GetString("VpcConnectionArn");

    m_vpcConnectionArnHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcConnectionProperties::Jsonize() const
{
  JsonValue payload;

  if(m_vpcConnectionArnHasBeenSet)
  {
   payload.WithString("VpcConnectionArn", m_vpcConnectionArn);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
