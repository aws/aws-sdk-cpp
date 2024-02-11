/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/DataLakeStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/DataLakeEncryptionConfiguration.h>
#include <aws/securitylake/model/DataLakeLifecycleConfiguration.h>
#include <aws/securitylake/model/DataLakeReplicationConfiguration.h>
#include <aws/securitylake/model/DataLakeUpdateStatus.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Provides details of Amazon Security Lake object.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DataLakeResource">AWS
   * API Reference</a></p>
   */
  class DataLakeResource
  {
  public:
    AWS_SECURITYLAKE_API DataLakeResource();
    AWS_SECURITYLAKE_API DataLakeResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Retrieves the status of the configuration operation for an account in Amazon
     * Security Lake.</p>
     */
    inline const DataLakeStatus& GetCreateStatus() const{ return m_createStatus; }

    /**
     * <p>Retrieves the status of the configuration operation for an account in Amazon
     * Security Lake.</p>
     */
    inline bool CreateStatusHasBeenSet() const { return m_createStatusHasBeenSet; }

    /**
     * <p>Retrieves the status of the configuration operation for an account in Amazon
     * Security Lake.</p>
     */
    inline void SetCreateStatus(const DataLakeStatus& value) { m_createStatusHasBeenSet = true; m_createStatus = value; }

    /**
     * <p>Retrieves the status of the configuration operation for an account in Amazon
     * Security Lake.</p>
     */
    inline void SetCreateStatus(DataLakeStatus&& value) { m_createStatusHasBeenSet = true; m_createStatus = std::move(value); }

    /**
     * <p>Retrieves the status of the configuration operation for an account in Amazon
     * Security Lake.</p>
     */
    inline DataLakeResource& WithCreateStatus(const DataLakeStatus& value) { SetCreateStatus(value); return *this;}

    /**
     * <p>Retrieves the status of the configuration operation for an account in Amazon
     * Security Lake.</p>
     */
    inline DataLakeResource& WithCreateStatus(DataLakeStatus&& value) { SetCreateStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline const Aws::String& GetDataLakeArn() const{ return m_dataLakeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline bool DataLakeArnHasBeenSet() const { return m_dataLakeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline void SetDataLakeArn(const Aws::String& value) { m_dataLakeArnHasBeenSet = true; m_dataLakeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline void SetDataLakeArn(Aws::String&& value) { m_dataLakeArnHasBeenSet = true; m_dataLakeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline void SetDataLakeArn(const char* value) { m_dataLakeArnHasBeenSet = true; m_dataLakeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline DataLakeResource& WithDataLakeArn(const Aws::String& value) { SetDataLakeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline DataLakeResource& WithDataLakeArn(Aws::String&& value) { SetDataLakeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline DataLakeResource& WithDataLakeArn(const char* value) { SetDataLakeArn(value); return *this;}


    /**
     * <p>Provides encryption details of Amazon Security Lake object.</p>
     */
    inline const DataLakeEncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>Provides encryption details of Amazon Security Lake object.</p>
     */
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    /**
     * <p>Provides encryption details of Amazon Security Lake object.</p>
     */
    inline void SetEncryptionConfiguration(const DataLakeEncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>Provides encryption details of Amazon Security Lake object.</p>
     */
    inline void SetEncryptionConfiguration(DataLakeEncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>Provides encryption details of Amazon Security Lake object.</p>
     */
    inline DataLakeResource& WithEncryptionConfiguration(const DataLakeEncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>Provides encryption details of Amazon Security Lake object.</p>
     */
    inline DataLakeResource& WithEncryptionConfiguration(DataLakeEncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides lifecycle details of Amazon Security Lake object.</p>
     */
    inline const DataLakeLifecycleConfiguration& GetLifecycleConfiguration() const{ return m_lifecycleConfiguration; }

    /**
     * <p>Provides lifecycle details of Amazon Security Lake object.</p>
     */
    inline bool LifecycleConfigurationHasBeenSet() const { return m_lifecycleConfigurationHasBeenSet; }

    /**
     * <p>Provides lifecycle details of Amazon Security Lake object.</p>
     */
    inline void SetLifecycleConfiguration(const DataLakeLifecycleConfiguration& value) { m_lifecycleConfigurationHasBeenSet = true; m_lifecycleConfiguration = value; }

    /**
     * <p>Provides lifecycle details of Amazon Security Lake object.</p>
     */
    inline void SetLifecycleConfiguration(DataLakeLifecycleConfiguration&& value) { m_lifecycleConfigurationHasBeenSet = true; m_lifecycleConfiguration = std::move(value); }

    /**
     * <p>Provides lifecycle details of Amazon Security Lake object.</p>
     */
    inline DataLakeResource& WithLifecycleConfiguration(const DataLakeLifecycleConfiguration& value) { SetLifecycleConfiguration(value); return *this;}

    /**
     * <p>Provides lifecycle details of Amazon Security Lake object.</p>
     */
    inline DataLakeResource& WithLifecycleConfiguration(DataLakeLifecycleConfiguration&& value) { SetLifecycleConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services Regions where Security Lake is enabled.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Regions where Security Lake is enabled.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Regions where Security Lake is enabled.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Regions where Security Lake is enabled.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Regions where Security Lake is enabled.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Regions where Security Lake is enabled.</p>
     */
    inline DataLakeResource& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Regions where Security Lake is enabled.</p>
     */
    inline DataLakeResource& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Regions where Security Lake is enabled.</p>
     */
    inline DataLakeResource& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>Provides replication details of Amazon Security Lake object.</p>
     */
    inline const DataLakeReplicationConfiguration& GetReplicationConfiguration() const{ return m_replicationConfiguration; }

    /**
     * <p>Provides replication details of Amazon Security Lake object.</p>
     */
    inline bool ReplicationConfigurationHasBeenSet() const { return m_replicationConfigurationHasBeenSet; }

    /**
     * <p>Provides replication details of Amazon Security Lake object.</p>
     */
    inline void SetReplicationConfiguration(const DataLakeReplicationConfiguration& value) { m_replicationConfigurationHasBeenSet = true; m_replicationConfiguration = value; }

    /**
     * <p>Provides replication details of Amazon Security Lake object.</p>
     */
    inline void SetReplicationConfiguration(DataLakeReplicationConfiguration&& value) { m_replicationConfigurationHasBeenSet = true; m_replicationConfiguration = std::move(value); }

    /**
     * <p>Provides replication details of Amazon Security Lake object.</p>
     */
    inline DataLakeResource& WithReplicationConfiguration(const DataLakeReplicationConfiguration& value) { SetReplicationConfiguration(value); return *this;}

    /**
     * <p>Provides replication details of Amazon Security Lake object.</p>
     */
    inline DataLakeResource& WithReplicationConfiguration(DataLakeReplicationConfiguration&& value) { SetReplicationConfiguration(std::move(value)); return *this;}


    /**
     * <p>The ARN for the Amazon Security Lake Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3BucketArn() const{ return m_s3BucketArn; }

    /**
     * <p>The ARN for the Amazon Security Lake Amazon S3 bucket.</p>
     */
    inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }

    /**
     * <p>The ARN for the Amazon Security Lake Amazon S3 bucket.</p>
     */
    inline void SetS3BucketArn(const Aws::String& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = value; }

    /**
     * <p>The ARN for the Amazon Security Lake Amazon S3 bucket.</p>
     */
    inline void SetS3BucketArn(Aws::String&& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = std::move(value); }

    /**
     * <p>The ARN for the Amazon Security Lake Amazon S3 bucket.</p>
     */
    inline void SetS3BucketArn(const char* value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn.assign(value); }

    /**
     * <p>The ARN for the Amazon Security Lake Amazon S3 bucket.</p>
     */
    inline DataLakeResource& WithS3BucketArn(const Aws::String& value) { SetS3BucketArn(value); return *this;}

    /**
     * <p>The ARN for the Amazon Security Lake Amazon S3 bucket.</p>
     */
    inline DataLakeResource& WithS3BucketArn(Aws::String&& value) { SetS3BucketArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the Amazon Security Lake Amazon S3 bucket.</p>
     */
    inline DataLakeResource& WithS3BucketArn(const char* value) { SetS3BucketArn(value); return *this;}


    /**
     * <p>The status of the last <code>UpdateDataLake </code>or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline const DataLakeUpdateStatus& GetUpdateStatus() const{ return m_updateStatus; }

    /**
     * <p>The status of the last <code>UpdateDataLake </code>or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }

    /**
     * <p>The status of the last <code>UpdateDataLake </code>or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline void SetUpdateStatus(const DataLakeUpdateStatus& value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }

    /**
     * <p>The status of the last <code>UpdateDataLake </code>or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline void SetUpdateStatus(DataLakeUpdateStatus&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::move(value); }

    /**
     * <p>The status of the last <code>UpdateDataLake </code>or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline DataLakeResource& WithUpdateStatus(const DataLakeUpdateStatus& value) { SetUpdateStatus(value); return *this;}

    /**
     * <p>The status of the last <code>UpdateDataLake </code>or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline DataLakeResource& WithUpdateStatus(DataLakeUpdateStatus&& value) { SetUpdateStatus(std::move(value)); return *this;}

  private:

    DataLakeStatus m_createStatus;
    bool m_createStatusHasBeenSet = false;

    Aws::String m_dataLakeArn;
    bool m_dataLakeArnHasBeenSet = false;

    DataLakeEncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    DataLakeLifecycleConfiguration m_lifecycleConfiguration;
    bool m_lifecycleConfigurationHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    DataLakeReplicationConfiguration m_replicationConfiguration;
    bool m_replicationConfigurationHasBeenSet = false;

    Aws::String m_s3BucketArn;
    bool m_s3BucketArnHasBeenSet = false;

    DataLakeUpdateStatus m_updateStatus;
    bool m_updateStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
