/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/SimulationSoftwareSuite.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

SimulationSoftwareSuite::SimulationSoftwareSuite() : 
    m_name(SimulationSoftwareSuiteType::NOT_SET),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

SimulationSoftwareSuite::SimulationSoftwareSuite(JsonView jsonValue) : 
    m_name(SimulationSoftwareSuiteType::NOT_SET),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

SimulationSoftwareSuite& SimulationSoftwareSuite::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = SimulationSoftwareSuiteTypeMapper::GetSimulationSoftwareSuiteTypeForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue SimulationSoftwareSuite::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", SimulationSoftwareSuiteTypeMapper::GetNameForSimulationSoftwareSuiteType(m_name));
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
