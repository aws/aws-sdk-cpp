/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/ReportedOs.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

ReportedOs::ReportedOs() : 
    m_familyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

ReportedOs::ReportedOs(JsonView jsonValue) : 
    m_familyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

ReportedOs& ReportedOs::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Family"))
  {
    m_family = jsonValue.GetString("Family");

    m_familyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportedOs::Jsonize() const
{
  JsonValue payload;

  if(m_familyHasBeenSet)
  {
   payload.WithString("Family", m_family);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
