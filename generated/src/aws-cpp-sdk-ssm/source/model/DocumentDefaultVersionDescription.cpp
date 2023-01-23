/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentDefaultVersionDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

DocumentDefaultVersionDescription::DocumentDefaultVersionDescription() : 
    m_nameHasBeenSet(false),
    m_defaultVersionHasBeenSet(false),
    m_defaultVersionNameHasBeenSet(false)
{
}

DocumentDefaultVersionDescription::DocumentDefaultVersionDescription(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_defaultVersionHasBeenSet(false),
    m_defaultVersionNameHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentDefaultVersionDescription& DocumentDefaultVersionDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultVersion"))
  {
    m_defaultVersion = jsonValue.GetString("DefaultVersion");

    m_defaultVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultVersionName"))
  {
    m_defaultVersionName = jsonValue.GetString("DefaultVersionName");

    m_defaultVersionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentDefaultVersionDescription::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_defaultVersionHasBeenSet)
  {
   payload.WithString("DefaultVersion", m_defaultVersion);

  }

  if(m_defaultVersionNameHasBeenSet)
  {
   payload.WithString("DefaultVersionName", m_defaultVersionName);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
