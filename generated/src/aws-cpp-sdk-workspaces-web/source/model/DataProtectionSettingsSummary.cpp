﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/DataProtectionSettingsSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

DataProtectionSettingsSummary::DataProtectionSettingsSummary() : 
    m_creationDateHasBeenSet(false),
    m_dataProtectionSettingsArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false)
{
}

DataProtectionSettingsSummary::DataProtectionSettingsSummary(JsonView jsonValue)
  : DataProtectionSettingsSummary()
{
  *this = jsonValue;
}

DataProtectionSettingsSummary& DataProtectionSettingsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataProtectionSettingsArn"))
  {
    m_dataProtectionSettingsArn = jsonValue.GetString("dataProtectionSettingsArn");

    m_dataProtectionSettingsArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DataProtectionSettingsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_dataProtectionSettingsArnHasBeenSet)
  {
   payload.WithString("dataProtectionSettingsArn", m_dataProtectionSettingsArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
