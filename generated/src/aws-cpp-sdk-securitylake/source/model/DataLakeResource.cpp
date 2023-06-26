/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/DataLakeResource.h>
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

DataLakeResource::DataLakeResource() : 
    m_createStatus(DataLakeStatus::NOT_SET),
    m_createStatusHasBeenSet(false),
    m_dataLakeArnHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_lifecycleConfigurationHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_replicationConfigurationHasBeenSet(false),
    m_s3BucketArnHasBeenSet(false),
    m_updateStatusHasBeenSet(false)
{
}

DataLakeResource::DataLakeResource(JsonView jsonValue) : 
    m_createStatus(DataLakeStatus::NOT_SET),
    m_createStatusHasBeenSet(false),
    m_dataLakeArnHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_lifecycleConfigurationHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_replicationConfigurationHasBeenSet(false),
    m_s3BucketArnHasBeenSet(false),
    m_updateStatusHasBeenSet(false)
{
  *this = jsonValue;
}

DataLakeResource& DataLakeResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createStatus"))
  {
    m_createStatus = DataLakeStatusMapper::GetDataLakeStatusForName(jsonValue.GetString("createStatus"));

    m_createStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataLakeArn"))
  {
    m_dataLakeArn = jsonValue.GetString("dataLakeArn");

    m_dataLakeArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("encryptionConfiguration");

    m_encryptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecycleConfiguration"))
  {
    m_lifecycleConfiguration = jsonValue.GetObject("lifecycleConfiguration");

    m_lifecycleConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationConfiguration"))
  {
    m_replicationConfiguration = jsonValue.GetObject("replicationConfiguration");

    m_replicationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3BucketArn"))
  {
    m_s3BucketArn = jsonValue.GetString("s3BucketArn");

    m_s3BucketArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateStatus"))
  {
    m_updateStatus = jsonValue.GetObject("updateStatus");

    m_updateStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue DataLakeResource::Jsonize() const
{
  JsonValue payload;

  if(m_createStatusHasBeenSet)
  {
   payload.WithString("createStatus", DataLakeStatusMapper::GetNameForDataLakeStatus(m_createStatus));
  }

  if(m_dataLakeArnHasBeenSet)
  {
   payload.WithString("dataLakeArn", m_dataLakeArn);

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_lifecycleConfigurationHasBeenSet)
  {
   payload.WithObject("lifecycleConfiguration", m_lifecycleConfiguration.Jsonize());

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_replicationConfigurationHasBeenSet)
  {
   payload.WithObject("replicationConfiguration", m_replicationConfiguration.Jsonize());

  }

  if(m_s3BucketArnHasBeenSet)
  {
   payload.WithString("s3BucketArn", m_s3BucketArn);

  }

  if(m_updateStatusHasBeenSet)
  {
   payload.WithObject("updateStatus", m_updateStatus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
