/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/NodeType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

NodeType::NodeType(JsonView jsonValue)
{
  *this = jsonValue;
}

NodeType& NodeType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Instance"))
  {
    m_instance = jsonValue.GetObject("Instance");
    m_instanceHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeType::Jsonize() const
{
  JsonValue payload;

  if(m_instanceHasBeenSet)
  {
   payload.WithObject("Instance", m_instance.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
