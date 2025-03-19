/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/model/QuickSetupTypeOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMQuickSetup
{
namespace Model
{

QuickSetupTypeOutput::QuickSetupTypeOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

QuickSetupTypeOutput& QuickSetupTypeOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LatestVersion"))
  {
    m_latestVersion = jsonValue.GetString("LatestVersion");
    m_latestVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue QuickSetupTypeOutput::Jsonize() const
{
  JsonValue payload;

  if(m_latestVersionHasBeenSet)
  {
   payload.WithString("LatestVersion", m_latestVersion);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
