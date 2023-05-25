/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/InstanceState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SnowDeviceManagement
{
namespace Model
{

InstanceState::InstanceState() : 
    m_code(0),
    m_codeHasBeenSet(false),
    m_name(InstanceStateName::NOT_SET),
    m_nameHasBeenSet(false)
{
}

InstanceState::InstanceState(JsonView jsonValue) : 
    m_code(0),
    m_codeHasBeenSet(false),
    m_name(InstanceStateName::NOT_SET),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceState& InstanceState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetInteger("code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = InstanceStateNameMapper::GetInstanceStateNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceState::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithInteger("code", m_code);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", InstanceStateNameMapper::GetNameForInstanceStateName(m_name));
  }

  return payload;
}

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
