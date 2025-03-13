/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/RobotSoftwareSuite.h>
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

RobotSoftwareSuite::RobotSoftwareSuite(JsonView jsonValue)
{
  *this = jsonValue;
}

RobotSoftwareSuite& RobotSoftwareSuite::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = RobotSoftwareSuiteTypeMapper::GetRobotSoftwareSuiteTypeForName(jsonValue.GetString("name"));
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = RobotSoftwareSuiteVersionTypeMapper::GetRobotSoftwareSuiteVersionTypeForName(jsonValue.GetString("version"));
    m_versionHasBeenSet = true;
  }
  return *this;
}

JsonValue RobotSoftwareSuite::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", RobotSoftwareSuiteTypeMapper::GetNameForRobotSoftwareSuiteType(m_name));
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", RobotSoftwareSuiteVersionTypeMapper::GetNameForRobotSoftwareSuiteVersionType(m_version));
  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
