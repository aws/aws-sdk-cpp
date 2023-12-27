/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsS3BucketDetails::AwsS3BucketDetails() : 
    m_ownerIdHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_serverSideEncryptionConfigurationHasBeenSet(false),
    m_bucketLifecycleConfigurationHasBeenSet(false),
    m_publicAccessBlockConfigurationHasBeenSet(false),
    m_accessControlListHasBeenSet(false),
    m_bucketLoggingConfigurationHasBeenSet(false),
    m_bucketWebsiteConfigurationHasBeenSet(false),
    m_bucketNotificationConfigurationHasBeenSet(false),
    m_bucketVersioningConfigurationHasBeenSet(false),
    m_objectLockConfigurationHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

AwsS3BucketDetails::AwsS3BucketDetails(JsonView jsonValue) : 
    m_ownerIdHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_serverSideEncryptionConfigurationHasBeenSet(false),
    m_bucketLifecycleConfigurationHasBeenSet(false),
    m_publicAccessBlockConfigurationHasBeenSet(false),
    m_accessControlListHasBeenSet(false),
    m_bucketLoggingConfigurationHasBeenSet(false),
    m_bucketWebsiteConfigurationHasBeenSet(false),
    m_bucketNotificationConfigurationHasBeenSet(false),
    m_bucketVersioningConfigurationHasBeenSet(false),
    m_objectLockConfigurationHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketDetails& AwsS3BucketDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerName"))
  {
    m_ownerName = jsonValue.GetString("OwnerName");

    m_ownerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("OwnerAccountId");

    m_ownerAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerSideEncryptionConfiguration"))
  {
    m_serverSideEncryptionConfiguration = jsonValue.GetObject("ServerSideEncryptionConfiguration");

    m_serverSideEncryptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketLifecycleConfiguration"))
  {
    m_bucketLifecycleConfiguration = jsonValue.GetObject("BucketLifecycleConfiguration");

    m_bucketLifecycleConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicAccessBlockConfiguration"))
  {
    m_publicAccessBlockConfiguration = jsonValue.GetObject("PublicAccessBlockConfiguration");

    m_publicAccessBlockConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessControlList"))
  {
    m_accessControlList = jsonValue.GetString("AccessControlList");

    m_accessControlListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketLoggingConfiguration"))
  {
    m_bucketLoggingConfiguration = jsonValue.GetObject("BucketLoggingConfiguration");

    m_bucketLoggingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketWebsiteConfiguration"))
  {
    m_bucketWebsiteConfiguration = jsonValue.GetObject("BucketWebsiteConfiguration");

    m_bucketWebsiteConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketNotificationConfiguration"))
  {
    m_bucketNotificationConfiguration = jsonValue.GetObject("BucketNotificationConfiguration");

    m_bucketNotificationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketVersioningConfiguration"))
  {
    m_bucketVersioningConfiguration = jsonValue.GetObject("BucketVersioningConfiguration");

    m_bucketVersioningConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectLockConfiguration"))
  {
    m_objectLockConfiguration = jsonValue.GetObject("ObjectLockConfiguration");

    m_objectLockConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketDetails::Jsonize() const
{
  JsonValue payload;

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_ownerNameHasBeenSet)
  {
   payload.WithString("OwnerName", m_ownerName);

  }

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("OwnerAccountId", m_ownerAccountId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt);

  }

  if(m_serverSideEncryptionConfigurationHasBeenSet)
  {
   payload.WithObject("ServerSideEncryptionConfiguration", m_serverSideEncryptionConfiguration.Jsonize());

  }

  if(m_bucketLifecycleConfigurationHasBeenSet)
  {
   payload.WithObject("BucketLifecycleConfiguration", m_bucketLifecycleConfiguration.Jsonize());

  }

  if(m_publicAccessBlockConfigurationHasBeenSet)
  {
   payload.WithObject("PublicAccessBlockConfiguration", m_publicAccessBlockConfiguration.Jsonize());

  }

  if(m_accessControlListHasBeenSet)
  {
   payload.WithString("AccessControlList", m_accessControlList);

  }

  if(m_bucketLoggingConfigurationHasBeenSet)
  {
   payload.WithObject("BucketLoggingConfiguration", m_bucketLoggingConfiguration.Jsonize());

  }

  if(m_bucketWebsiteConfigurationHasBeenSet)
  {
   payload.WithObject("BucketWebsiteConfiguration", m_bucketWebsiteConfiguration.Jsonize());

  }

  if(m_bucketNotificationConfigurationHasBeenSet)
  {
   payload.WithObject("BucketNotificationConfiguration", m_bucketNotificationConfiguration.Jsonize());

  }

  if(m_bucketVersioningConfigurationHasBeenSet)
  {
   payload.WithObject("BucketVersioningConfiguration", m_bucketVersioningConfiguration.Jsonize());

  }

  if(m_objectLockConfigurationHasBeenSet)
  {
   payload.WithObject("ObjectLockConfiguration", m_objectLockConfiguration.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
