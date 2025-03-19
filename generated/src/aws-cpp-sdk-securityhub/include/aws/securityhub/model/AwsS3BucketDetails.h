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
    AWS_SECURITYHUB_API AwsS3BucketDetails() = default;
    AWS_SECURITYHUB_API AwsS3BucketDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The canonical user ID of the owner of the S3 bucket.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    AwsS3BucketDetails& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the owner of the S3 bucket.</p>
     */
    inline const Aws::String& GetOwnerName() const { return m_ownerName; }
    inline bool OwnerNameHasBeenSet() const { return m_ownerNameHasBeenSet; }
    template<typename OwnerNameT = Aws::String>
    void SetOwnerName(OwnerNameT&& value) { m_ownerNameHasBeenSet = true; m_ownerName = std::forward<OwnerNameT>(value); }
    template<typename OwnerNameT = Aws::String>
    AwsS3BucketDetails& WithOwnerName(OwnerNameT&& value) { SetOwnerName(std::forward<OwnerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account identifier of the account that owns the S3
     * bucket.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    AwsS3BucketDetails& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the S3 bucket was created.</p> <p>For more information about
     * the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    AwsS3BucketDetails& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption rules that are applied to the S3 bucket.</p>
     */
    inline const AwsS3BucketServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const { return m_serverSideEncryptionConfiguration; }
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }
    template<typename ServerSideEncryptionConfigurationT = AwsS3BucketServerSideEncryptionConfiguration>
    void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::forward<ServerSideEncryptionConfigurationT>(value); }
    template<typename ServerSideEncryptionConfigurationT = AwsS3BucketServerSideEncryptionConfiguration>
    AwsS3BucketDetails& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) { SetServerSideEncryptionConfiguration(std::forward<ServerSideEncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle configuration for objects in the specified bucket.</p>
     */
    inline const AwsS3BucketBucketLifecycleConfigurationDetails& GetBucketLifecycleConfiguration() const { return m_bucketLifecycleConfiguration; }
    inline bool BucketLifecycleConfigurationHasBeenSet() const { return m_bucketLifecycleConfigurationHasBeenSet; }
    template<typename BucketLifecycleConfigurationT = AwsS3BucketBucketLifecycleConfigurationDetails>
    void SetBucketLifecycleConfiguration(BucketLifecycleConfigurationT&& value) { m_bucketLifecycleConfigurationHasBeenSet = true; m_bucketLifecycleConfiguration = std::forward<BucketLifecycleConfigurationT>(value); }
    template<typename BucketLifecycleConfigurationT = AwsS3BucketBucketLifecycleConfigurationDetails>
    AwsS3BucketDetails& WithBucketLifecycleConfiguration(BucketLifecycleConfigurationT&& value) { SetBucketLifecycleConfiguration(std::forward<BucketLifecycleConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the Amazon S3 Public Access Block configuration
     * for the S3 bucket.</p>
     */
    inline const AwsS3AccountPublicAccessBlockDetails& GetPublicAccessBlockConfiguration() const { return m_publicAccessBlockConfiguration; }
    inline bool PublicAccessBlockConfigurationHasBeenSet() const { return m_publicAccessBlockConfigurationHasBeenSet; }
    template<typename PublicAccessBlockConfigurationT = AwsS3AccountPublicAccessBlockDetails>
    void SetPublicAccessBlockConfiguration(PublicAccessBlockConfigurationT&& value) { m_publicAccessBlockConfigurationHasBeenSet = true; m_publicAccessBlockConfiguration = std::forward<PublicAccessBlockConfigurationT>(value); }
    template<typename PublicAccessBlockConfigurationT = AwsS3AccountPublicAccessBlockDetails>
    AwsS3BucketDetails& WithPublicAccessBlockConfiguration(PublicAccessBlockConfigurationT&& value) { SetPublicAccessBlockConfiguration(std::forward<PublicAccessBlockConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access control list for the S3 bucket.</p>
     */
    inline const Aws::String& GetAccessControlList() const { return m_accessControlList; }
    inline bool AccessControlListHasBeenSet() const { return m_accessControlListHasBeenSet; }
    template<typename AccessControlListT = Aws::String>
    void SetAccessControlList(AccessControlListT&& value) { m_accessControlListHasBeenSet = true; m_accessControlList = std::forward<AccessControlListT>(value); }
    template<typename AccessControlListT = Aws::String>
    AwsS3BucketDetails& WithAccessControlList(AccessControlListT&& value) { SetAccessControlList(std::forward<AccessControlListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging configuration for the S3 bucket.</p>
     */
    inline const AwsS3BucketLoggingConfiguration& GetBucketLoggingConfiguration() const { return m_bucketLoggingConfiguration; }
    inline bool BucketLoggingConfigurationHasBeenSet() const { return m_bucketLoggingConfigurationHasBeenSet; }
    template<typename BucketLoggingConfigurationT = AwsS3BucketLoggingConfiguration>
    void SetBucketLoggingConfiguration(BucketLoggingConfigurationT&& value) { m_bucketLoggingConfigurationHasBeenSet = true; m_bucketLoggingConfiguration = std::forward<BucketLoggingConfigurationT>(value); }
    template<typename BucketLoggingConfigurationT = AwsS3BucketLoggingConfiguration>
    AwsS3BucketDetails& WithBucketLoggingConfiguration(BucketLoggingConfigurationT&& value) { SetBucketLoggingConfiguration(std::forward<BucketLoggingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The website configuration parameters for the S3 bucket.</p>
     */
    inline const AwsS3BucketWebsiteConfiguration& GetBucketWebsiteConfiguration() const { return m_bucketWebsiteConfiguration; }
    inline bool BucketWebsiteConfigurationHasBeenSet() const { return m_bucketWebsiteConfigurationHasBeenSet; }
    template<typename BucketWebsiteConfigurationT = AwsS3BucketWebsiteConfiguration>
    void SetBucketWebsiteConfiguration(BucketWebsiteConfigurationT&& value) { m_bucketWebsiteConfigurationHasBeenSet = true; m_bucketWebsiteConfiguration = std::forward<BucketWebsiteConfigurationT>(value); }
    template<typename BucketWebsiteConfigurationT = AwsS3BucketWebsiteConfiguration>
    AwsS3BucketDetails& WithBucketWebsiteConfiguration(BucketWebsiteConfigurationT&& value) { SetBucketWebsiteConfiguration(std::forward<BucketWebsiteConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notification configuration for the S3 bucket.</p>
     */
    inline const AwsS3BucketNotificationConfiguration& GetBucketNotificationConfiguration() const { return m_bucketNotificationConfiguration; }
    inline bool BucketNotificationConfigurationHasBeenSet() const { return m_bucketNotificationConfigurationHasBeenSet; }
    template<typename BucketNotificationConfigurationT = AwsS3BucketNotificationConfiguration>
    void SetBucketNotificationConfiguration(BucketNotificationConfigurationT&& value) { m_bucketNotificationConfigurationHasBeenSet = true; m_bucketNotificationConfiguration = std::forward<BucketNotificationConfigurationT>(value); }
    template<typename BucketNotificationConfigurationT = AwsS3BucketNotificationConfiguration>
    AwsS3BucketDetails& WithBucketNotificationConfiguration(BucketNotificationConfigurationT&& value) { SetBucketNotificationConfiguration(std::forward<BucketNotificationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The versioning state of an S3 bucket.</p>
     */
    inline const AwsS3BucketBucketVersioningConfiguration& GetBucketVersioningConfiguration() const { return m_bucketVersioningConfiguration; }
    inline bool BucketVersioningConfigurationHasBeenSet() const { return m_bucketVersioningConfigurationHasBeenSet; }
    template<typename BucketVersioningConfigurationT = AwsS3BucketBucketVersioningConfiguration>
    void SetBucketVersioningConfiguration(BucketVersioningConfigurationT&& value) { m_bucketVersioningConfigurationHasBeenSet = true; m_bucketVersioningConfiguration = std::forward<BucketVersioningConfigurationT>(value); }
    template<typename BucketVersioningConfigurationT = AwsS3BucketBucketVersioningConfiguration>
    AwsS3BucketDetails& WithBucketVersioningConfiguration(BucketVersioningConfigurationT&& value) { SetBucketVersioningConfiguration(std::forward<BucketVersioningConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies which rule Amazon S3 applies by default to every new object placed
     * in the bucket. </p>
     */
    inline const AwsS3BucketObjectLockConfiguration& GetObjectLockConfiguration() const { return m_objectLockConfiguration; }
    inline bool ObjectLockConfigurationHasBeenSet() const { return m_objectLockConfigurationHasBeenSet; }
    template<typename ObjectLockConfigurationT = AwsS3BucketObjectLockConfiguration>
    void SetObjectLockConfiguration(ObjectLockConfigurationT&& value) { m_objectLockConfigurationHasBeenSet = true; m_objectLockConfiguration = std::forward<ObjectLockConfigurationT>(value); }
    template<typename ObjectLockConfigurationT = AwsS3BucketObjectLockConfiguration>
    AwsS3BucketDetails& WithObjectLockConfiguration(ObjectLockConfigurationT&& value) { SetObjectLockConfiguration(std::forward<ObjectLockConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the bucket. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsS3BucketDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
