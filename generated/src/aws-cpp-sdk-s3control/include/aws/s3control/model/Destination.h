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
    AWS_S3CONTROL_API Destination();
    AWS_S3CONTROL_API Destination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API Destination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The destination bucket owner's account ID. </p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }

    /**
     * <p>The destination bucket owner's account ID. </p>
     */
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }

    /**
     * <p>The destination bucket owner's account ID. </p>
     */
    inline void SetAccount(const Aws::String& value) { m_accountHasBeenSet = true; m_account = value; }

    /**
     * <p>The destination bucket owner's account ID. </p>
     */
    inline void SetAccount(Aws::String&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }

    /**
     * <p>The destination bucket owner's account ID. </p>
     */
    inline void SetAccount(const char* value) { m_accountHasBeenSet = true; m_account.assign(value); }

    /**
     * <p>The destination bucket owner's account ID. </p>
     */
    inline Destination& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}

    /**
     * <p>The destination bucket owner's account ID. </p>
     */
    inline Destination& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}

    /**
     * <p>The destination bucket owner's account ID. </p>
     */
    inline Destination& WithAccount(const char* value) { SetAccount(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the access point for the destination bucket
     * where you want S3 on Outposts to store the replication results.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The Amazon Resource Name (ARN) of the access point for the destination bucket
     * where you want S3 on Outposts to store the replication results.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the access point for the destination bucket
     * where you want S3 on Outposts to store the replication results.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the access point for the destination bucket
     * where you want S3 on Outposts to store the replication results.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the access point for the destination bucket
     * where you want S3 on Outposts to store the replication results.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the access point for the destination bucket
     * where you want S3 on Outposts to store the replication results.</p>
     */
    inline Destination& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the access point for the destination bucket
     * where you want S3 on Outposts to store the replication results.</p>
     */
    inline Destination& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the access point for the destination bucket
     * where you want S3 on Outposts to store the replication results.</p>
     */
    inline Destination& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>A container that specifies S3 Replication Time Control (S3 RTC) settings,
     * including whether S3 RTC is enabled and the time when all objects and operations
     * on objects must be replicated. Must be specified together with a
     * <code>Metrics</code> block. </p>  <p>This is not supported by Amazon S3 on
     * Outposts buckets.</p> 
     */
    inline const ReplicationTime& GetReplicationTime() const{ return m_replicationTime; }

    /**
     * <p>A container that specifies S3 Replication Time Control (S3 RTC) settings,
     * including whether S3 RTC is enabled and the time when all objects and operations
     * on objects must be replicated. Must be specified together with a
     * <code>Metrics</code> block. </p>  <p>This is not supported by Amazon S3 on
     * Outposts buckets.</p> 
     */
    inline bool ReplicationTimeHasBeenSet() const { return m_replicationTimeHasBeenSet; }

    /**
     * <p>A container that specifies S3 Replication Time Control (S3 RTC) settings,
     * including whether S3 RTC is enabled and the time when all objects and operations
     * on objects must be replicated. Must be specified together with a
     * <code>Metrics</code> block. </p>  <p>This is not supported by Amazon S3 on
     * Outposts buckets.</p> 
     */
    inline void SetReplicationTime(const ReplicationTime& value) { m_replicationTimeHasBeenSet = true; m_replicationTime = value; }

    /**
     * <p>A container that specifies S3 Replication Time Control (S3 RTC) settings,
     * including whether S3 RTC is enabled and the time when all objects and operations
     * on objects must be replicated. Must be specified together with a
     * <code>Metrics</code> block. </p>  <p>This is not supported by Amazon S3 on
     * Outposts buckets.</p> 
     */
    inline void SetReplicationTime(ReplicationTime&& value) { m_replicationTimeHasBeenSet = true; m_replicationTime = std::move(value); }

    /**
     * <p>A container that specifies S3 Replication Time Control (S3 RTC) settings,
     * including whether S3 RTC is enabled and the time when all objects and operations
     * on objects must be replicated. Must be specified together with a
     * <code>Metrics</code> block. </p>  <p>This is not supported by Amazon S3 on
     * Outposts buckets.</p> 
     */
    inline Destination& WithReplicationTime(const ReplicationTime& value) { SetReplicationTime(value); return *this;}

    /**
     * <p>A container that specifies S3 Replication Time Control (S3 RTC) settings,
     * including whether S3 RTC is enabled and the time when all objects and operations
     * on objects must be replicated. Must be specified together with a
     * <code>Metrics</code> block. </p>  <p>This is not supported by Amazon S3 on
     * Outposts buckets.</p> 
     */
    inline Destination& WithReplicationTime(ReplicationTime&& value) { SetReplicationTime(std::move(value)); return *this;}


    /**
     * <p>Specify this property only in a cross-account scenario (where the source and
     * destination bucket owners are not the same), and you want to change replica
     * ownership to the Amazon Web Services account that owns the destination bucket.
     * If this property is not specified in the replication configuration, the replicas
     * are owned by same Amazon Web Services account that owns the source object.</p>
     *  <p>This is not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline const AccessControlTranslation& GetAccessControlTranslation() const{ return m_accessControlTranslation; }

    /**
     * <p>Specify this property only in a cross-account scenario (where the source and
     * destination bucket owners are not the same), and you want to change replica
     * ownership to the Amazon Web Services account that owns the destination bucket.
     * If this property is not specified in the replication configuration, the replicas
     * are owned by same Amazon Web Services account that owns the source object.</p>
     *  <p>This is not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline bool AccessControlTranslationHasBeenSet() const { return m_accessControlTranslationHasBeenSet; }

    /**
     * <p>Specify this property only in a cross-account scenario (where the source and
     * destination bucket owners are not the same), and you want to change replica
     * ownership to the Amazon Web Services account that owns the destination bucket.
     * If this property is not specified in the replication configuration, the replicas
     * are owned by same Amazon Web Services account that owns the source object.</p>
     *  <p>This is not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline void SetAccessControlTranslation(const AccessControlTranslation& value) { m_accessControlTranslationHasBeenSet = true; m_accessControlTranslation = value; }

    /**
     * <p>Specify this property only in a cross-account scenario (where the source and
     * destination bucket owners are not the same), and you want to change replica
     * ownership to the Amazon Web Services account that owns the destination bucket.
     * If this property is not specified in the replication configuration, the replicas
     * are owned by same Amazon Web Services account that owns the source object.</p>
     *  <p>This is not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline void SetAccessControlTranslation(AccessControlTranslation&& value) { m_accessControlTranslationHasBeenSet = true; m_accessControlTranslation = std::move(value); }

    /**
     * <p>Specify this property only in a cross-account scenario (where the source and
     * destination bucket owners are not the same), and you want to change replica
     * ownership to the Amazon Web Services account that owns the destination bucket.
     * If this property is not specified in the replication configuration, the replicas
     * are owned by same Amazon Web Services account that owns the source object.</p>
     *  <p>This is not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline Destination& WithAccessControlTranslation(const AccessControlTranslation& value) { SetAccessControlTranslation(value); return *this;}

    /**
     * <p>Specify this property only in a cross-account scenario (where the source and
     * destination bucket owners are not the same), and you want to change replica
     * ownership to the Amazon Web Services account that owns the destination bucket.
     * If this property is not specified in the replication configuration, the replicas
     * are owned by same Amazon Web Services account that owns the source object.</p>
     *  <p>This is not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline Destination& WithAccessControlTranslation(AccessControlTranslation&& value) { SetAccessControlTranslation(std::move(value)); return *this;}


    /**
     * <p>A container that provides information about encryption. If
     * <code>SourceSelectionCriteria</code> is specified, you must specify this
     * element.</p>  <p>This is not supported by Amazon S3 on Outposts
     * buckets.</p> 
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>A container that provides information about encryption. If
     * <code>SourceSelectionCriteria</code> is specified, you must specify this
     * element.</p>  <p>This is not supported by Amazon S3 on Outposts
     * buckets.</p> 
     */
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    /**
     * <p>A container that provides information about encryption. If
     * <code>SourceSelectionCriteria</code> is specified, you must specify this
     * element.</p>  <p>This is not supported by Amazon S3 on Outposts
     * buckets.</p> 
     */
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>A container that provides information about encryption. If
     * <code>SourceSelectionCriteria</code> is specified, you must specify this
     * element.</p>  <p>This is not supported by Amazon S3 on Outposts
     * buckets.</p> 
     */
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>A container that provides information about encryption. If
     * <code>SourceSelectionCriteria</code> is specified, you must specify this
     * element.</p>  <p>This is not supported by Amazon S3 on Outposts
     * buckets.</p> 
     */
    inline Destination& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>A container that provides information about encryption. If
     * <code>SourceSelectionCriteria</code> is specified, you must specify this
     * element.</p>  <p>This is not supported by Amazon S3 on Outposts
     * buckets.</p> 
     */
    inline Destination& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p> A container that specifies replication metrics-related settings. </p>
     */
    inline const Metrics& GetMetrics() const{ return m_metrics; }

    /**
     * <p> A container that specifies replication metrics-related settings. </p>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p> A container that specifies replication metrics-related settings. </p>
     */
    inline void SetMetrics(const Metrics& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p> A container that specifies replication metrics-related settings. </p>
     */
    inline void SetMetrics(Metrics&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p> A container that specifies replication metrics-related settings. </p>
     */
    inline Destination& WithMetrics(const Metrics& value) { SetMetrics(value); return *this;}

    /**
     * <p> A container that specifies replication metrics-related settings. </p>
     */
    inline Destination& WithMetrics(Metrics&& value) { SetMetrics(std::move(value)); return *this;}


    /**
     * <p> The storage class to use when replicating objects. All objects stored on S3
     * on Outposts are stored in the <code>OUTPOSTS</code> storage class. S3 on
     * Outposts uses the <code>OUTPOSTS</code> storage class to create the object
     * replicas. </p>  <p>Values other than <code>OUTPOSTS</code> aren't
     * supported by Amazon S3 on Outposts. </p> 
     */
    inline const ReplicationStorageClass& GetStorageClass() const{ return m_storageClass; }

    /**
     * <p> The storage class to use when replicating objects. All objects stored on S3
     * on Outposts are stored in the <code>OUTPOSTS</code> storage class. S3 on
     * Outposts uses the <code>OUTPOSTS</code> storage class to create the object
     * replicas. </p>  <p>Values other than <code>OUTPOSTS</code> aren't
     * supported by Amazon S3 on Outposts. </p> 
     */
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }

    /**
     * <p> The storage class to use when replicating objects. All objects stored on S3
     * on Outposts are stored in the <code>OUTPOSTS</code> storage class. S3 on
     * Outposts uses the <code>OUTPOSTS</code> storage class to create the object
     * replicas. </p>  <p>Values other than <code>OUTPOSTS</code> aren't
     * supported by Amazon S3 on Outposts. </p> 
     */
    inline void SetStorageClass(const ReplicationStorageClass& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }

    /**
     * <p> The storage class to use when replicating objects. All objects stored on S3
     * on Outposts are stored in the <code>OUTPOSTS</code> storage class. S3 on
     * Outposts uses the <code>OUTPOSTS</code> storage class to create the object
     * replicas. </p>  <p>Values other than <code>OUTPOSTS</code> aren't
     * supported by Amazon S3 on Outposts. </p> 
     */
    inline void SetStorageClass(ReplicationStorageClass&& value) { m_storageClassHasBeenSet = true; m_storageClass = std::move(value); }

    /**
     * <p> The storage class to use when replicating objects. All objects stored on S3
     * on Outposts are stored in the <code>OUTPOSTS</code> storage class. S3 on
     * Outposts uses the <code>OUTPOSTS</code> storage class to create the object
     * replicas. </p>  <p>Values other than <code>OUTPOSTS</code> aren't
     * supported by Amazon S3 on Outposts. </p> 
     */
    inline Destination& WithStorageClass(const ReplicationStorageClass& value) { SetStorageClass(value); return *this;}

    /**
     * <p> The storage class to use when replicating objects. All objects stored on S3
     * on Outposts are stored in the <code>OUTPOSTS</code> storage class. S3 on
     * Outposts uses the <code>OUTPOSTS</code> storage class to create the object
     * replicas. </p>  <p>Values other than <code>OUTPOSTS</code> aren't
     * supported by Amazon S3 on Outposts. </p> 
     */
    inline Destination& WithStorageClass(ReplicationStorageClass&& value) { SetStorageClass(std::move(value)); return *this;}

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

    ReplicationStorageClass m_storageClass;
    bool m_storageClassHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
