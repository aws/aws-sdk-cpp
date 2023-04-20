/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/S3OnDeviceServiceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

S3OnDeviceServiceConfiguration::S3OnDeviceServiceConfiguration() : 
    m_storageLimit(0.0),
    m_storageLimitHasBeenSet(false),
    m_storageUnit(StorageUnit::NOT_SET),
    m_storageUnitHasBeenSet(false),
    m_serviceSize(0),
    m_serviceSizeHasBeenSet(false),
    m_faultTolerance(0),
    m_faultToleranceHasBeenSet(false)
{
}

S3OnDeviceServiceConfiguration::S3OnDeviceServiceConfiguration(JsonView jsonValue) : 
    m_storageLimit(0.0),
    m_storageLimitHasBeenSet(false),
    m_storageUnit(StorageUnit::NOT_SET),
    m_storageUnitHasBeenSet(false),
    m_serviceSize(0),
    m_serviceSizeHasBeenSet(false),
    m_faultTolerance(0),
    m_faultToleranceHasBeenSet(false)
{
  *this = jsonValue;
}

S3OnDeviceServiceConfiguration& S3OnDeviceServiceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StorageLimit"))
  {
    m_storageLimit = jsonValue.GetDouble("StorageLimit");

    m_storageLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageUnit"))
  {
    m_storageUnit = StorageUnitMapper::GetStorageUnitForName(jsonValue.GetString("StorageUnit"));

    m_storageUnitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceSize"))
  {
    m_serviceSize = jsonValue.GetInteger("ServiceSize");

    m_serviceSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FaultTolerance"))
  {
    m_faultTolerance = jsonValue.GetInteger("FaultTolerance");

    m_faultToleranceHasBeenSet = true;
  }

  return *this;
}

JsonValue S3OnDeviceServiceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_storageLimitHasBeenSet)
  {
   payload.WithDouble("StorageLimit", m_storageLimit);

  }

  if(m_storageUnitHasBeenSet)
  {
   payload.WithString("StorageUnit", StorageUnitMapper::GetNameForStorageUnit(m_storageUnit));
  }

  if(m_serviceSizeHasBeenSet)
  {
   payload.WithInteger("ServiceSize", m_serviceSize);

  }

  if(m_faultToleranceHasBeenSet)
  {
   payload.WithInteger("FaultTolerance", m_faultTolerance);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
