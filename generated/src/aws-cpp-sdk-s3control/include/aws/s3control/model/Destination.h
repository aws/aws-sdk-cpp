/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/ReplicationTime.h>
#include <aws/s3control/model/AccessControlTranslation.h>
#include <aws/s3control/model/EncryptionConfiguration.h>
#include <aws/s3control/model/Metrics.h>
#include <aws/s3control/model/ReplicationStorageClass.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p>Specifies information about the replication destination bucket and its
   * settings for an S3 on Outposts replication configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/Destination">AWS
   * API Reference</a></p>
   */
  class Destination
  {
  public:
    AWS_S3CONTROL_API Destination() = default;
    AWS_S3CONTROL_API Destination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API Destination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The destination bucket owner's account ID. </p>
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
     * <p>The Amazon Resource Name (ARN) of the access point for the destination bucket
     * where you want S3 on Outposts to store the replication results.</p>
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
     * <p>A container that specifies S3 Replication Time Control (S3 RTC) settings,
     * including whether S3 RTC is enabled and the time when all objects and operations
     * on objects must be replicated. Must be specified together with a
     * <code>Metrics</code> block. </p>  <p>This is not supported by Amazon S3 on
     * Outposts buckets.</p> 
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
     * <p>Specify this property only in a cross-account scenario (where the source and
     * destination bucket owners are not the same), and you want to change replica
     * ownership to the Amazon Web Services account that owns the destination bucket.
     * If this property is not specified in the replication configuration, the replicas
     * are owned by same Amazon Web Services account that owns the source object.</p>
     *  <p>This is not supported by Amazon S3 on Outposts buckets.</p> 
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
     * element.</p>  <p>This is not supported by Amazon S3 on Outposts
     * buckets.</p> 
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
     * <p> A container that specifies replication metrics-related settings. </p>
     */
    inline const Metrics& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Metrics>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Metrics>
    Destination& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The storage class to use when replicating objects. All objects stored on S3
     * on Outposts are stored in the <code>OUTPOSTS</code> storage class. S3 on
     * Outposts uses the <code>OUTPOSTS</code> storage class to create the object
     * replicas. </p>  <p>Values other than <code>OUTPOSTS</code> aren't
     * supported by Amazon S3 on Outposts. </p> 
     */
    inline ReplicationStorageClass GetStorageClass() const { return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(ReplicationStorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline Destination& WithStorageClass(ReplicationStorageClass value) { SetStorageClass(value); return *this;}
    ///@}
  private:

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    ReplicationTime m_replicationTime;
    bool m_replicationTimeHasBeenSet = false;

    AccessControlTranslation m_accessControlTranslation;
    bool m_accessControlTranslationHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    Metrics m_metrics;
    bool m_metricsHasBeenSet = false;

    ReplicationStorageClass m_storageClass{ReplicationStorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
