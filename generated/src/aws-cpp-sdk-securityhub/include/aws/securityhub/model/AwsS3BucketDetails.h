/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsS3BucketServerSideEncryptionConfiguration.h>
#include <aws/securityhub/model/AwsS3BucketBucketLifecycleConfigurationDetails.h>
#include <aws/securityhub/model/AwsS3AccountPublicAccessBlockDetails.h>
#include <aws/securityhub/model/AwsS3BucketLoggingConfiguration.h>
#include <aws/securityhub/model/AwsS3BucketWebsiteConfiguration.h>
#include <aws/securityhub/model/AwsS3BucketNotificationConfiguration.h>
#include <aws/securityhub/model/AwsS3BucketBucketVersioningConfiguration.h>
#include <aws/securityhub/model/AwsS3BucketObjectLockConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The details of an Amazon Simple Storage Service (Amazon S3)
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketDetails();
    AWS_SECURITYHUB_API AwsS3BucketDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The canonical user ID of the owner of the S3 bucket.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline AwsS3BucketDetails& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline AwsS3BucketDetails& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline AwsS3BucketDetails& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the owner of the S3 bucket.</p>
     */
    inline const Aws::String& GetOwnerName() const{ return m_ownerName; }
    inline bool OwnerNameHasBeenSet() const { return m_ownerNameHasBeenSet; }
    inline void SetOwnerName(const Aws::String& value) { m_ownerNameHasBeenSet = true; m_ownerName = value; }
    inline void SetOwnerName(Aws::String&& value) { m_ownerNameHasBeenSet = true; m_ownerName = std::move(value); }
    inline void SetOwnerName(const char* value) { m_ownerNameHasBeenSet = true; m_ownerName.assign(value); }
    inline AwsS3BucketDetails& WithOwnerName(const Aws::String& value) { SetOwnerName(value); return *this;}
    inline AwsS3BucketDetails& WithOwnerName(Aws::String&& value) { SetOwnerName(std::move(value)); return *this;}
    inline AwsS3BucketDetails& WithOwnerName(const char* value) { SetOwnerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account identifier of the account that owns the S3
     * bucket.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }
    inline AwsS3BucketDetails& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}
    inline AwsS3BucketDetails& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}
    inline AwsS3BucketDetails& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the S3 bucket was created.</p> <p>For more information about
     * the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }
    inline AwsS3BucketDetails& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}
    inline AwsS3BucketDetails& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}
    inline AwsS3BucketDetails& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption rules that are applied to the S3 bucket.</p>
     */
    inline const AwsS3BucketServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const{ return m_serverSideEncryptionConfiguration; }
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }
    inline void SetServerSideEncryptionConfiguration(const AwsS3BucketServerSideEncryptionConfiguration& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = value; }
    inline void SetServerSideEncryptionConfiguration(AwsS3BucketServerSideEncryptionConfiguration&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::move(value); }
    inline AwsS3BucketDetails& WithServerSideEncryptionConfiguration(const AwsS3BucketServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}
    inline AwsS3BucketDetails& WithServerSideEncryptionConfiguration(AwsS3BucketServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle configuration for objects in the specified bucket.</p>
     */
    inline const AwsS3BucketBucketLifecycleConfigurationDetails& GetBucketLifecycleConfiguration() const{ return m_bucketLifecycleConfiguration; }
    inline bool BucketLifecycleConfigurationHasBeenSet() const { return m_bucketLifecycleConfigurationHasBeenSet; }
    inline void SetBucketLifecycleConfiguration(const AwsS3BucketBucketLifecycleConfigurationDetails& value) { m_bucketLifecycleConfigurationHasBeenSet = true; m_bucketLifecycleConfiguration = value; }
    inline void SetBucketLifecycleConfiguration(AwsS3BucketBucketLifecycleConfigurationDetails&& value) { m_bucketLifecycleConfigurationHasBeenSet = true; m_bucketLifecycleConfiguration = std::move(value); }
    inline AwsS3BucketDetails& WithBucketLifecycleConfiguration(const AwsS3BucketBucketLifecycleConfigurationDetails& value) { SetBucketLifecycleConfiguration(value); return *this;}
    inline AwsS3BucketDetails& WithBucketLifecycleConfiguration(AwsS3BucketBucketLifecycleConfigurationDetails&& value) { SetBucketLifecycleConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the Amazon S3 Public Access Block configuration
     * for the S3 bucket.</p>
     */
    inline const AwsS3AccountPublicAccessBlockDetails& GetPublicAccessBlockConfiguration() const{ return m_publicAccessBlockConfiguration; }
    inline bool PublicAccessBlockConfigurationHasBeenSet() const { return m_publicAccessBlockConfigurationHasBeenSet; }
    inline void SetPublicAccessBlockConfiguration(const AwsS3AccountPublicAccessBlockDetails& value) { m_publicAccessBlockConfigurationHasBeenSet = true; m_publicAccessBlockConfiguration = value; }
    inline void SetPublicAccessBlockConfiguration(AwsS3AccountPublicAccessBlockDetails&& value) { m_publicAccessBlockConfigurationHasBeenSet = true; m_publicAccessBlockConfiguration = std::move(value); }
    inline AwsS3BucketDetails& WithPublicAccessBlockConfiguration(const AwsS3AccountPublicAccessBlockDetails& value) { SetPublicAccessBlockConfiguration(value); return *this;}
    inline AwsS3BucketDetails& WithPublicAccessBlockConfiguration(AwsS3AccountPublicAccessBlockDetails&& value) { SetPublicAccessBlockConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control list for the S3 bucket.</p>
     */
    inline const Aws::String& GetAccessControlList() const{ return m_accessControlList; }
    inline bool AccessControlListHasBeenSet() const { return m_accessControlListHasBeenSet; }
    inline void SetAccessControlList(const Aws::String& value) { m_accessControlListHasBeenSet = true; m_accessControlList = value; }
    inline void SetAccessControlList(Aws::String&& value) { m_accessControlListHasBeenSet = true; m_accessControlList = std::move(value); }
    inline void SetAccessControlList(const char* value) { m_accessControlListHasBeenSet = true; m_accessControlList.assign(value); }
    inline AwsS3BucketDetails& WithAccessControlList(const Aws::String& value) { SetAccessControlList(value); return *this;}
    inline AwsS3BucketDetails& WithAccessControlList(Aws::String&& value) { SetAccessControlList(std::move(value)); return *this;}
    inline AwsS3BucketDetails& WithAccessControlList(const char* value) { SetAccessControlList(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging configuration for the S3 bucket.</p>
     */
    inline const AwsS3BucketLoggingConfiguration& GetBucketLoggingConfiguration() const{ return m_bucketLoggingConfiguration; }
    inline bool BucketLoggingConfigurationHasBeenSet() const { return m_bucketLoggingConfigurationHasBeenSet; }
    inline void SetBucketLoggingConfiguration(const AwsS3BucketLoggingConfiguration& value) { m_bucketLoggingConfigurationHasBeenSet = true; m_bucketLoggingConfiguration = value; }
    inline void SetBucketLoggingConfiguration(AwsS3BucketLoggingConfiguration&& value) { m_bucketLoggingConfigurationHasBeenSet = true; m_bucketLoggingConfiguration = std::move(value); }
    inline AwsS3BucketDetails& WithBucketLoggingConfiguration(const AwsS3BucketLoggingConfiguration& value) { SetBucketLoggingConfiguration(value); return *this;}
    inline AwsS3BucketDetails& WithBucketLoggingConfiguration(AwsS3BucketLoggingConfiguration&& value) { SetBucketLoggingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The website configuration parameters for the S3 bucket.</p>
     */
    inline const AwsS3BucketWebsiteConfiguration& GetBucketWebsiteConfiguration() const{ return m_bucketWebsiteConfiguration; }
    inline bool BucketWebsiteConfigurationHasBeenSet() const { return m_bucketWebsiteConfigurationHasBeenSet; }
    inline void SetBucketWebsiteConfiguration(const AwsS3BucketWebsiteConfiguration& value) { m_bucketWebsiteConfigurationHasBeenSet = true; m_bucketWebsiteConfiguration = value; }
    inline void SetBucketWebsiteConfiguration(AwsS3BucketWebsiteConfiguration&& value) { m_bucketWebsiteConfigurationHasBeenSet = true; m_bucketWebsiteConfiguration = std::move(value); }
    inline AwsS3BucketDetails& WithBucketWebsiteConfiguration(const AwsS3BucketWebsiteConfiguration& value) { SetBucketWebsiteConfiguration(value); return *this;}
    inline AwsS3BucketDetails& WithBucketWebsiteConfiguration(AwsS3BucketWebsiteConfiguration&& value) { SetBucketWebsiteConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notification configuration for the S3 bucket.</p>
     */
    inline const AwsS3BucketNotificationConfiguration& GetBucketNotificationConfiguration() const{ return m_bucketNotificationConfiguration; }
    inline bool BucketNotificationConfigurationHasBeenSet() const { return m_bucketNotificationConfigurationHasBeenSet; }
    inline void SetBucketNotificationConfiguration(const AwsS3BucketNotificationConfiguration& value) { m_bucketNotificationConfigurationHasBeenSet = true; m_bucketNotificationConfiguration = value; }
    inline void SetBucketNotificationConfiguration(AwsS3BucketNotificationConfiguration&& value) { m_bucketNotificationConfigurationHasBeenSet = true; m_bucketNotificationConfiguration = std::move(value); }
    inline AwsS3BucketDetails& WithBucketNotificationConfiguration(const AwsS3BucketNotificationConfiguration& value) { SetBucketNotificationConfiguration(value); return *this;}
    inline AwsS3BucketDetails& WithBucketNotificationConfiguration(AwsS3BucketNotificationConfiguration&& value) { SetBucketNotificationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The versioning state of an S3 bucket.</p>
     */
    inline const AwsS3BucketBucketVersioningConfiguration& GetBucketVersioningConfiguration() const{ return m_bucketVersioningConfiguration; }
    inline bool BucketVersioningConfigurationHasBeenSet() const { return m_bucketVersioningConfigurationHasBeenSet; }
    inline void SetBucketVersioningConfiguration(const AwsS3BucketBucketVersioningConfiguration& value) { m_bucketVersioningConfigurationHasBeenSet = true; m_bucketVersioningConfiguration = value; }
    inline void SetBucketVersioningConfiguration(AwsS3BucketBucketVersioningConfiguration&& value) { m_bucketVersioningConfigurationHasBeenSet = true; m_bucketVersioningConfiguration = std::move(value); }
    inline AwsS3BucketDetails& WithBucketVersioningConfiguration(const AwsS3BucketBucketVersioningConfiguration& value) { SetBucketVersioningConfiguration(value); return *this;}
    inline AwsS3BucketDetails& WithBucketVersioningConfiguration(AwsS3BucketBucketVersioningConfiguration&& value) { SetBucketVersioningConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies which rule Amazon S3 applies by default to every new object placed
     * in the bucket. </p>
     */
    inline const AwsS3BucketObjectLockConfiguration& GetObjectLockConfiguration() const{ return m_objectLockConfiguration; }
    inline bool ObjectLockConfigurationHasBeenSet() const { return m_objectLockConfigurationHasBeenSet; }
    inline void SetObjectLockConfiguration(const AwsS3BucketObjectLockConfiguration& value) { m_objectLockConfigurationHasBeenSet = true; m_objectLockConfiguration = value; }
    inline void SetObjectLockConfiguration(AwsS3BucketObjectLockConfiguration&& value) { m_objectLockConfigurationHasBeenSet = true; m_objectLockConfiguration = std::move(value); }
    inline AwsS3BucketDetails& WithObjectLockConfiguration(const AwsS3BucketObjectLockConfiguration& value) { SetObjectLockConfiguration(value); return *this;}
    inline AwsS3BucketDetails& WithObjectLockConfiguration(AwsS3BucketObjectLockConfiguration&& value) { SetObjectLockConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the bucket. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AwsS3BucketDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AwsS3BucketDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AwsS3BucketDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_ownerName;
    bool m_ownerNameHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    AwsS3BucketServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet = false;

    AwsS3BucketBucketLifecycleConfigurationDetails m_bucketLifecycleConfiguration;
    bool m_bucketLifecycleConfigurationHasBeenSet = false;

    AwsS3AccountPublicAccessBlockDetails m_publicAccessBlockConfiguration;
    bool m_publicAccessBlockConfigurationHasBeenSet = false;

    Aws::String m_accessControlList;
    bool m_accessControlListHasBeenSet = false;

    AwsS3BucketLoggingConfiguration m_bucketLoggingConfiguration;
    bool m_bucketLoggingConfigurationHasBeenSet = false;

    AwsS3BucketWebsiteConfiguration m_bucketWebsiteConfiguration;
    bool m_bucketWebsiteConfigurationHasBeenSet = false;

    AwsS3BucketNotificationConfiguration m_bucketNotificationConfiguration;
    bool m_bucketNotificationConfigurationHasBeenSet = false;

    AwsS3BucketBucketVersioningConfiguration m_bucketVersioningConfiguration;
    bool m_bucketVersioningConfigurationHasBeenSet = false;

    AwsS3BucketObjectLockConfiguration m_objectLockConfiguration;
    bool m_objectLockConfigurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
