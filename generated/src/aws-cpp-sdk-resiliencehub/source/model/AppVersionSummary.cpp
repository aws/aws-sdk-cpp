/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/AppVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

AppVersionSummary::AppVersionSummary() : 
    m_appVersionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_identifier(0),
    m_identifierHasBeenSet(false),
    m_versionNameHasBeenSet(false)
{
}

AppVersionSummary::AppVersionSummary(JsonView jsonValue) : 
    m_appVersionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_identifier(0),
    m_identifierHasBeenSet(false),
    m_versionNameHasBeenSet(false)
{
  *this = jsonValue;
}

AppVersionSummary& AppVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appVersion"))
  {
    m_appVersion = jsonValue.GetString("appVersion");

    m_appVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetInt64("identifier");

    m_identifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionName"))
  {
    m_versionName = jsonValue.GetString("versionName");

    m_versionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AppVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_appVersionHasBeenSet)
  {
   payload.WithString("appVersion", m_appVersion);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_identifierHasBeenSet)
  {
   payload.WithInt64("identifier", m_identifier);

  }

  if(m_versionNameHasBeenSet)
  {
   payload.WithString("versionName", m_versionName);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
