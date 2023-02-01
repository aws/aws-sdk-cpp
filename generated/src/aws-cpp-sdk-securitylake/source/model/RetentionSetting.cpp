/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/RetentionSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

RetentionSetting::RetentionSetting() : 
    m_retentionPeriod(0),
    m_retentionPeriodHasBeenSet(false),
    m_storageClass(StorageClass::NOT_SET),
    m_storageClassHasBeenSet(false)
{
}

RetentionSetting::RetentionSetting(JsonView jsonValue) : 
    m_retentionPeriod(0),
    m_retentionPeriodHasBeenSet(false),
    m_storageClass(StorageClass::NOT_SET),
    m_storageClassHasBeenSet(false)
{
  *this = jsonValue;
}

RetentionSetting& RetentionSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("retentionPeriod"))
  {
    m_retentionPeriod = jsonValue.GetInteger("retentionPeriod");

    m_retentionPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storageClass"))
  {
    m_storageClass = StorageClassMapper::GetStorageClassForName(jsonValue.GetString("storageClass"));

    m_storageClassHasBeenSet = true;
  }

  return *this;
}

JsonValue RetentionSetting::Jsonize() const
{
  JsonValue payload;

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithInteger("retentionPeriod", m_retentionPeriod);

  }

  if(m_storageClassHasBeenSet)
  {
   payload.WithString("storageClass", StorageClassMapper::GetNameForStorageClass(m_storageClass));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
