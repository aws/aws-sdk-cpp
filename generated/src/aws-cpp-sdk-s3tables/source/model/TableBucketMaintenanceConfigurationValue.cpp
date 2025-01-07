﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/TableBucketMaintenanceConfigurationValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Tables
{
namespace Model
{

TableBucketMaintenanceConfigurationValue::TableBucketMaintenanceConfigurationValue() : 
    m_status(MaintenanceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
}

TableBucketMaintenanceConfigurationValue::TableBucketMaintenanceConfigurationValue(JsonView jsonValue)
  : TableBucketMaintenanceConfigurationValue()
{
  *this = jsonValue;
}

TableBucketMaintenanceConfigurationValue& TableBucketMaintenanceConfigurationValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = MaintenanceStatusMapper::GetMaintenanceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("settings"))
  {
    m_settings = jsonValue.GetObject("settings");

    m_settingsHasBeenSet = true;
  }

  return *this;
}

JsonValue TableBucketMaintenanceConfigurationValue::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", MaintenanceStatusMapper::GetNameForMaintenanceStatus(m_status));
  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("settings", m_settings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace S3Tables
} // namespace Aws
