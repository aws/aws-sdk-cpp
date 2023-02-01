/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/Domain.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SimSpaceWeaver
{
namespace Model
{

Domain::Domain() : 
    m_lifecycle(LifecycleManagementStrategy::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Domain::Domain(JsonView jsonValue) : 
    m_lifecycle(LifecycleManagementStrategy::NOT_SET),
    m_lifecycleHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

Domain& Domain::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = LifecycleManagementStrategyMapper::GetLifecycleManagementStrategyForName(jsonValue.GetString("Lifecycle"));

    m_lifecycleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue Domain::Jsonize() const
{
  JsonValue payload;

  if(m_lifecycleHasBeenSet)
  {
   payload.WithString("Lifecycle", LifecycleManagementStrategyMapper::GetNameForLifecycleManagementStrategy(m_lifecycle));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
