/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/LaunchProfileInitializationScript.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

LaunchProfileInitializationScript::LaunchProfileInitializationScript() : 
    m_runtimeRoleArnHasBeenSet(false),
    m_scriptHasBeenSet(false),
    m_secureInitializationRoleArnHasBeenSet(false),
    m_studioComponentIdHasBeenSet(false),
    m_studioComponentNameHasBeenSet(false)
{
}

LaunchProfileInitializationScript::LaunchProfileInitializationScript(JsonView jsonValue) : 
    m_runtimeRoleArnHasBeenSet(false),
    m_scriptHasBeenSet(false),
    m_secureInitializationRoleArnHasBeenSet(false),
    m_studioComponentIdHasBeenSet(false),
    m_studioComponentNameHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchProfileInitializationScript& LaunchProfileInitializationScript::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("runtimeRoleArn"))
  {
    m_runtimeRoleArn = jsonValue.GetString("runtimeRoleArn");

    m_runtimeRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("script"))
  {
    m_script = jsonValue.GetString("script");

    m_scriptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secureInitializationRoleArn"))
  {
    m_secureInitializationRoleArn = jsonValue.GetString("secureInitializationRoleArn");

    m_secureInitializationRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("studioComponentId"))
  {
    m_studioComponentId = jsonValue.GetString("studioComponentId");

    m_studioComponentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("studioComponentName"))
  {
    m_studioComponentName = jsonValue.GetString("studioComponentName");

    m_studioComponentNameHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchProfileInitializationScript::Jsonize() const
{
  JsonValue payload;

  if(m_runtimeRoleArnHasBeenSet)
  {
   payload.WithString("runtimeRoleArn", m_runtimeRoleArn);

  }

  if(m_scriptHasBeenSet)
  {
   payload.WithString("script", m_script);

  }

  if(m_secureInitializationRoleArnHasBeenSet)
  {
   payload.WithString("secureInitializationRoleArn", m_secureInitializationRoleArn);

  }

  if(m_studioComponentIdHasBeenSet)
  {
   payload.WithString("studioComponentId", m_studioComponentId);

  }

  if(m_studioComponentNameHasBeenSet)
  {
   payload.WithString("studioComponentName", m_studioComponentName);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
