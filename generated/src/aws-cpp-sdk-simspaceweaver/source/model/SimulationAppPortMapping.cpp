/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/SimulationAppPortMapping.h>
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

SimulationAppPortMapping::SimulationAppPortMapping() : 
    m_actual(0),
    m_actualHasBeenSet(false),
    m_declared(0),
    m_declaredHasBeenSet(false)
{
}

SimulationAppPortMapping::SimulationAppPortMapping(JsonView jsonValue) : 
    m_actual(0),
    m_actualHasBeenSet(false),
    m_declared(0),
    m_declaredHasBeenSet(false)
{
  *this = jsonValue;
}

SimulationAppPortMapping& SimulationAppPortMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Actual"))
  {
    m_actual = jsonValue.GetInteger("Actual");

    m_actualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Declared"))
  {
    m_declared = jsonValue.GetInteger("Declared");

    m_declaredHasBeenSet = true;
  }

  return *this;
}

JsonValue SimulationAppPortMapping::Jsonize() const
{
  JsonValue payload;

  if(m_actualHasBeenSet)
  {
   payload.WithInteger("Actual", m_actual);

  }

  if(m_declaredHasBeenSet)
  {
   payload.WithInteger("Declared", m_declared);

  }

  return payload;
}

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
