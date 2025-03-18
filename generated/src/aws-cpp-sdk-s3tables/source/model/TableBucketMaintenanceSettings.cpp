/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/TableBucketMaintenanceSettings.h>
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

TableBucketMaintenanceSettings::TableBucketMaintenanceSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

TableBucketMaintenanceSettings& TableBucketMaintenanceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("icebergUnreferencedFileRemoval"))
  {
    m_icebergUnreferencedFileRemoval = jsonValue.GetObject("icebergUnreferencedFileRemoval");
    m_icebergUnreferencedFileRemovalHasBeenSet = true;
  }
  return *this;
}

JsonValue TableBucketMaintenanceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_icebergUnreferencedFileRemovalHasBeenSet)
  {
   payload.WithObject("icebergUnreferencedFileRemoval", m_icebergUnreferencedFileRemoval.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace S3Tables
} // namespace Aws
