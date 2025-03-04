/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/StorageClass.h>
#include <aws/s3/model/AccessControlTranslation.h>
#include <aws/s3/model/EncryptionConfiguration.h>
#include <aws/s3/model/ReplicationTime.h>
#include <aws/s3/model/Metrics.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>Specifies information about where to publish analysis or configuration
   * results for an Amazon S3 bucket and S3 Replication Time Control (S3
   * RTC).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/Destination">AWS API
   * Reference</a></p>
   */
  class Destination
  {
  public:
    AWS_S3_API Destination() = default;
    AWS_S3_API Destination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API Destination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the bucket where you want Amazon S3 to
     * store the results.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    Destination& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Destination bucket owner account ID. In a cross-account scenario, if you
     * direct Amazon S3 to change replica ownership to the Amazon Web Services account
     * that owns the destination bucket by specifying the
     * <code>AccessControlTranslation</code> property, this is the account ID of the
     * destination bucket owner. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication-change-owner.html">Replication
     * Additional Configuration: Changing the Replica Owner</a> in the <i>Amazon S3
     * User Guide</i>.</p>
     */
    inline const Aws::String& GetAccount() const { return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    template<typename AccountT = Aws::String>
    void SetAccount(AccountT&& value) { m_accountHasBeenSet = true; m_account = std::forward<AccountT>(value); }
    template<typename AccountT = Aws::String>
    Destination& WithAccount(AccountT&& value) { SetAccount(std::forward<AccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The storage class to use when replicating objects, such as S3 Standard or
     * reduced redundancy. By default, Amazon S3 uses the storage class of the source
     * object to create the object replica. </p> <p>For valid values, see the
     * <code>StorageClass</code> element of the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTBucketPUTreplication.html">PUT
     * Bucket replication</a> action in the <i>Amazon S3 API Reference</i>.</p>
     */
    inline StorageClass GetStorageClass() const { return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(StorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline Destination& WithStorageClass(StorageClass value) { SetStorageClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify this only in a cross-account scenario (where source and destination
     * bucket owners are not the same), and you want to change replica ownership to the
     * Amazon Web Services account that owns the destination bucket. If this is not
     * specified in the replication configuration, the replicas are owned by same
     * Amazon Web Services account that owns the source object.</p>
     */
    inline const AccessControlTranslation& GetAccessControlTranslation() const { return m_accessControlTranslation; }
    inline bool AccessControlTranslationHasBeenSet() const { return m_accessControlTranslationHasBeenSet; }
    template<typename AccessControlTranslationT = AccessControlTranslation>
    void SetAccessControlTranslation(AccessControlTranslationT&& value) { m_accessControlTranslationHasBeenSet = true; m_accessControlTranslation = std::forward<AccessControlTranslationT>(value); }
    template<typename AccessControlTranslationT = AccessControlTranslation>
    Destination& WithAccessControlTranslation(AccessControlTranslationT&& value) { SetAccessControlTranslation(std::forward<AccessControlTranslationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container that provides information about encryption. If
     * <code>SourceSelectionCriteria</code> is specified, you must specify this
     * element.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    Destination& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A container specifying S3 Replication Time Control (S3 RTC), including
     * whether S3 RTC is enabled and the time when all objects and operations on
     * objects must be replicated. Must be specified together with a
     * <code>Metrics</code> block. </p>
     */
    inline const ReplicationTime& GetReplicationTime() const { return m_replicationTime; }
    inline bool ReplicationTimeHasBeenSet() const { return m_replicationTimeHasBeenSet; }
    template<typename ReplicationTimeT = ReplicationTime>
    void SetReplicationTime(ReplicationTimeT&& value) { m_replicationTimeHasBeenSet = true; m_replicationTime = std::forward<ReplicationTimeT>(value); }
    template<typename ReplicationTimeT = ReplicationTime>
    Destination& WithReplicationTime(ReplicationTimeT&& value) { SetReplicationTime(std::forward<ReplicationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A container specifying replication metrics-related settings enabling
     * replication metrics and events. </p>
     */
    inline const Metrics& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Metrics>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Metrics>
    Destination& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    StorageClass m_storageClass{StorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;

    AccessControlTranslation m_accessControlTranslation;
    bool m_accessControlTranslationHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    ReplicationTime m_replicationTime;
    bool m_replicationTimeHasBeenSet = false;

    Metrics m_metrics;
    bool m_metricsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
