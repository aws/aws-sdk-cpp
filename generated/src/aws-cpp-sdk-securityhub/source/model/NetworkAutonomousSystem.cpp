/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/NetworkAutonomousSystem.h>
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

NetworkAutonomousSystem::NetworkAutonomousSystem(JsonView jsonValue)
{
  *this = jsonValue;
}

NetworkAutonomousSystem& NetworkAutonomousSystem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Number"))
  {
    m_number = jsonValue.GetInteger("Number");
    m_numberHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkAutonomousSystem::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_numberHasBeenSet)
  {
   payload.WithInteger("Number", m_number);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
