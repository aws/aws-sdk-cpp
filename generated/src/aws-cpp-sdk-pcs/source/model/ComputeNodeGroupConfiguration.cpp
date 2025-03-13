/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/ComputeNodeGroupConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PCS
{
namespace Model
{

ComputeNodeGroupConfiguration::ComputeNodeGroupConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputeNodeGroupConfiguration& ComputeNodeGroupConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("computeNodeGroupId"))
  {
    m_computeNodeGroupId = jsonValue.GetString("computeNodeGroupId");
    m_computeNodeGroupIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeNodeGroupConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_computeNodeGroupIdHasBeenSet)
  {
   payload.WithString("computeNodeGroupId", m_computeNodeGroupId);

  }

  return payload;
}

} // namespace Model
} // namespace PCS
} // namespace Aws
