/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/EnvironmentState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Proton
{
namespace Model
{

EnvironmentState::EnvironmentState() : 
    m_specHasBeenSet(false),
    m_templateMajorVersionHasBeenSet(false),
    m_templateMinorVersionHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
}

EnvironmentState::EnvironmentState(JsonView jsonValue) : 
    m_specHasBeenSet(false),
    m_templateMajorVersionHasBeenSet(false),
    m_templateMinorVersionHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentState& EnvironmentState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("spec"))
  {
    m_spec = jsonValue.GetString("spec");

    m_specHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateMajorVersion"))
  {
    m_templateMajorVersion = jsonValue.GetString("templateMajorVersion");

    m_templateMajorVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateMinorVersion"))
  {
    m_templateMinorVersion = jsonValue.GetString("templateMinorVersion");

    m_templateMinorVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateName"))
  {
    m_templateName = jsonValue.GetString("templateName");

    m_templateNameHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentState::Jsonize() const
{
  JsonValue payload;

  if(m_specHasBeenSet)
  {
   payload.WithString("spec", m_spec);

  }

  if(m_templateMajorVersionHasBeenSet)
  {
   payload.WithString("templateMajorVersion", m_templateMajorVersion);

  }

  if(m_templateMinorVersionHasBeenSet)
  {
   payload.WithString("templateMinorVersion", m_templateMinorVersion);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  return payload;
}

} // namespace Model
} // namespace Proton
} // namespace Aws
