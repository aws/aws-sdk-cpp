/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-quicksetup/model/ServiceSettings.h>
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

ServiceSettings::ServiceSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceSettings& ServiceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExplorerEnablingRoleArn"))
  {
    m_explorerEnablingRoleArn = jsonValue.GetString("ExplorerEnablingRoleArn");
    m_explorerEnablingRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_explorerEnablingRoleArnHasBeenSet)
  {
   payload.WithString("ExplorerEnablingRoleArn", m_explorerEnablingRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
