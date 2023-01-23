/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/CompatibleEnvironmentTemplateInput.h>
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

CompatibleEnvironmentTemplateInput::CompatibleEnvironmentTemplateInput() : 
    m_majorVersionHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
}

CompatibleEnvironmentTemplateInput::CompatibleEnvironmentTemplateInput(JsonView jsonValue) : 
    m_majorVersionHasBeenSet(false),
    m_templateNameHasBeenSet(false)
{
  *this = jsonValue;
}

CompatibleEnvironmentTemplateInput& CompatibleEnvironmentTemplateInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("majorVersion"))
  {
    m_majorVersion = jsonValue.GetString("majorVersion");

    m_majorVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateName"))
  {
    m_templateName = jsonValue.GetString("templateName");

    m_templateNameHasBeenSet = true;
  }

  return *this;
}

JsonValue CompatibleEnvironmentTemplateInput::Jsonize() const
{
  JsonValue payload;

  if(m_majorVersionHasBeenSet)
  {
   payload.WithString("majorVersion", m_majorVersion);

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
