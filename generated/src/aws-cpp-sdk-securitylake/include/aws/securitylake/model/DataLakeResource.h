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
    AWS_SECURITYLAKE_API DataLakeResource() = default;
    AWS_SECURITYLAKE_API DataLakeResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Retrieves the status of the <code>CreateDatalake</code> API call for an
     * account in Amazon Security Lake.</p>
     */
    inline DataLakeStatus GetCreateStatus() const { return m_createStatus; }
    inline bool CreateStatusHasBeenSet() const { return m_createStatusHasBeenSet; }
    inline void SetCreateStatus(DataLakeStatus value) { m_createStatusHasBeenSet = true; m_createStatus = value; }
    inline DataLakeResource& WithCreateStatus(DataLakeStatus value) { SetCreateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline const Aws::String& GetDataLakeArn() const { return m_dataLakeArn; }
    inline bool DataLakeArnHasBeenSet() const { return m_dataLakeArnHasBeenSet; }
    template<typename DataLakeArnT = Aws::String>
    void SetDataLakeArn(DataLakeArnT&& value) { m_dataLakeArnHasBeenSet = true; m_dataLakeArn = std::forward<DataLakeArnT>(value); }
    template<typename DataLakeArnT = Aws::String>
    DataLakeResource& WithDataLakeArn(DataLakeArnT&& value) { SetDataLakeArn(std::forward<DataLakeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides encryption details of Amazon Security Lake object.</p>
     */
    inline const DataLakeEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = DataLakeEncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = DataLakeEncryptionConfiguration>
    DataLakeResource& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides lifecycle details of Amazon Security Lake object.</p>
     */
    inline const DataLakeLifecycleConfiguration& GetLifecycleConfiguration() const { return m_lifecycleConfiguration; }
    inline bool LifecycleConfigurationHasBeenSet() const { return m_lifecycleConfigurationHasBeenSet; }
    template<typename LifecycleConfigurationT = DataLakeLifecycleConfiguration>
    void SetLifecycleConfiguration(LifecycleConfigurationT&& value) { m_lifecycleConfigurationHasBeenSet = true; m_lifecycleConfiguration = std::forward<LifecycleConfigurationT>(value); }
    template<typename LifecycleConfigurationT = DataLakeLifecycleConfiguration>
    DataLakeResource& WithLifecycleConfiguration(LifecycleConfigurationT&& value) { SetLifecycleConfiguration(std::forward<LifecycleConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Regions where Security Lake is enabled.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    DataLakeResource& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides replication details of Amazon Security Lake object.</p>
     */
    inline const DataLakeReplicationConfiguration& GetReplicationConfiguration() const { return m_replicationConfiguration; }
    inline bool ReplicationConfigurationHasBeenSet() const { return m_replicationConfigurationHasBeenSet; }
    template<typename ReplicationConfigurationT = DataLakeReplicationConfiguration>
    void SetReplicationConfiguration(ReplicationConfigurationT&& value) { m_replicationConfigurationHasBeenSet = true; m_replicationConfiguration = std::forward<ReplicationConfigurationT>(value); }
    template<typename ReplicationConfigurationT = DataLakeReplicationConfiguration>
    DataLakeResource& WithReplicationConfiguration(ReplicationConfigurationT&& value) { SetReplicationConfiguration(std::forward<ReplicationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the Amazon Security Lake Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3BucketArn() const { return m_s3BucketArn; }
    inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }
    template<typename S3BucketArnT = Aws::String>
    void SetS3BucketArn(S3BucketArnT&& value) { m_s3BucketArnHasBeenSet = true; m_s3BucketArn = std::forward<S3BucketArnT>(value); }
    template<typename S3BucketArnT = Aws::String>
    DataLakeResource& WithS3BucketArn(S3BucketArnT&& value) { SetS3BucketArn(std::forward<S3BucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last <code>UpdateDataLake </code>or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline const DataLakeUpdateStatus& GetUpdateStatus() const { return m_updateStatus; }
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
    template<typename UpdateStatusT = DataLakeUpdateStatus>
    void SetUpdateStatus(UpdateStatusT&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::forward<UpdateStatusT>(value); }
    template<typename UpdateStatusT = DataLakeUpdateStatus>
    DataLakeResource& WithUpdateStatus(UpdateStatusT&& value) { SetUpdateStatus(std::forward<UpdateStatusT>(value)); return *this;}
    ///@}
  private:

    DataLakeStatus m_createStatus{DataLakeStatus::NOT_SET};
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
