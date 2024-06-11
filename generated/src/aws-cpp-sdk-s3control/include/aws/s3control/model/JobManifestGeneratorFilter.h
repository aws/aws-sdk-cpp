﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/KeyNameConstraint.h>
#include <aws/s3control/model/ReplicationStatus.h>
#include <aws/s3control/model/S3StorageClass.h>
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
   * <p>The filter used to describe a set of objects for the job's
   * manifest.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobManifestGeneratorFilter">AWS
   * API Reference</a></p>
   */
  class JobManifestGeneratorFilter
  {
  public:
    AWS_S3CONTROL_API JobManifestGeneratorFilter();
    AWS_S3CONTROL_API JobManifestGeneratorFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API JobManifestGeneratorFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Include objects in the generated manifest only if they are eligible for
     * replication according to the Replication configuration on the source bucket.</p>
     */
    inline bool GetEligibleForReplication() const{ return m_eligibleForReplication; }
    inline bool EligibleForReplicationHasBeenSet() const { return m_eligibleForReplicationHasBeenSet; }
    inline void SetEligibleForReplication(bool value) { m_eligibleForReplicationHasBeenSet = true; m_eligibleForReplication = value; }
    inline JobManifestGeneratorFilter& WithEligibleForReplication(bool value) { SetEligibleForReplication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If provided, the generated manifest includes only source bucket objects that
     * were created after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }
    inline JobManifestGeneratorFilter& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}
    inline JobManifestGeneratorFilter& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If provided, the generated manifest includes only source bucket objects that
     * were created before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }
    inline JobManifestGeneratorFilter& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}
    inline JobManifestGeneratorFilter& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If provided, the generated manifest includes only source bucket objects that
     * have one of the specified Replication statuses.</p>
     */
    inline const Aws::Vector<ReplicationStatus>& GetObjectReplicationStatuses() const{ return m_objectReplicationStatuses; }
    inline bool ObjectReplicationStatusesHasBeenSet() const { return m_objectReplicationStatusesHasBeenSet; }
    inline void SetObjectReplicationStatuses(const Aws::Vector<ReplicationStatus>& value) { m_objectReplicationStatusesHasBeenSet = true; m_objectReplicationStatuses = value; }
    inline void SetObjectReplicationStatuses(Aws::Vector<ReplicationStatus>&& value) { m_objectReplicationStatusesHasBeenSet = true; m_objectReplicationStatuses = std::move(value); }
    inline JobManifestGeneratorFilter& WithObjectReplicationStatuses(const Aws::Vector<ReplicationStatus>& value) { SetObjectReplicationStatuses(value); return *this;}
    inline JobManifestGeneratorFilter& WithObjectReplicationStatuses(Aws::Vector<ReplicationStatus>&& value) { SetObjectReplicationStatuses(std::move(value)); return *this;}
    inline JobManifestGeneratorFilter& AddObjectReplicationStatuses(const ReplicationStatus& value) { m_objectReplicationStatusesHasBeenSet = true; m_objectReplicationStatuses.push_back(value); return *this; }
    inline JobManifestGeneratorFilter& AddObjectReplicationStatuses(ReplicationStatus&& value) { m_objectReplicationStatusesHasBeenSet = true; m_objectReplicationStatuses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If provided, the generated manifest includes only source bucket objects whose
     * object keys match the string constraints specified for
     * <code>MatchAnyPrefix</code>, <code>MatchAnySuffix</code>, and
     * <code>MatchAnySubstring</code>.</p>
     */
    inline const KeyNameConstraint& GetKeyNameConstraint() const{ return m_keyNameConstraint; }
    inline bool KeyNameConstraintHasBeenSet() const { return m_keyNameConstraintHasBeenSet; }
    inline void SetKeyNameConstraint(const KeyNameConstraint& value) { m_keyNameConstraintHasBeenSet = true; m_keyNameConstraint = value; }
    inline void SetKeyNameConstraint(KeyNameConstraint&& value) { m_keyNameConstraintHasBeenSet = true; m_keyNameConstraint = std::move(value); }
    inline JobManifestGeneratorFilter& WithKeyNameConstraint(const KeyNameConstraint& value) { SetKeyNameConstraint(value); return *this;}
    inline JobManifestGeneratorFilter& WithKeyNameConstraint(KeyNameConstraint&& value) { SetKeyNameConstraint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If provided, the generated manifest includes only source bucket objects whose
     * file size is greater than the specified number of bytes.</p>
     */
    inline long long GetObjectSizeGreaterThanBytes() const{ return m_objectSizeGreaterThanBytes; }
    inline bool ObjectSizeGreaterThanBytesHasBeenSet() const { return m_objectSizeGreaterThanBytesHasBeenSet; }
    inline void SetObjectSizeGreaterThanBytes(long long value) { m_objectSizeGreaterThanBytesHasBeenSet = true; m_objectSizeGreaterThanBytes = value; }
    inline JobManifestGeneratorFilter& WithObjectSizeGreaterThanBytes(long long value) { SetObjectSizeGreaterThanBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If provided, the generated manifest includes only source bucket objects whose
     * file size is less than the specified number of bytes.</p>
     */
    inline long long GetObjectSizeLessThanBytes() const{ return m_objectSizeLessThanBytes; }
    inline bool ObjectSizeLessThanBytesHasBeenSet() const { return m_objectSizeLessThanBytesHasBeenSet; }
    inline void SetObjectSizeLessThanBytes(long long value) { m_objectSizeLessThanBytesHasBeenSet = true; m_objectSizeLessThanBytes = value; }
    inline JobManifestGeneratorFilter& WithObjectSizeLessThanBytes(long long value) { SetObjectSizeLessThanBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If provided, the generated manifest includes only source bucket objects that
     * are stored with the specified storage class.</p>
     */
    inline const Aws::Vector<S3StorageClass>& GetMatchAnyStorageClass() const{ return m_matchAnyStorageClass; }
    inline bool MatchAnyStorageClassHasBeenSet() const { return m_matchAnyStorageClassHasBeenSet; }
    inline void SetMatchAnyStorageClass(const Aws::Vector<S3StorageClass>& value) { m_matchAnyStorageClassHasBeenSet = true; m_matchAnyStorageClass = value; }
    inline void SetMatchAnyStorageClass(Aws::Vector<S3StorageClass>&& value) { m_matchAnyStorageClassHasBeenSet = true; m_matchAnyStorageClass = std::move(value); }
    inline JobManifestGeneratorFilter& WithMatchAnyStorageClass(const Aws::Vector<S3StorageClass>& value) { SetMatchAnyStorageClass(value); return *this;}
    inline JobManifestGeneratorFilter& WithMatchAnyStorageClass(Aws::Vector<S3StorageClass>&& value) { SetMatchAnyStorageClass(std::move(value)); return *this;}
    inline JobManifestGeneratorFilter& AddMatchAnyStorageClass(const S3StorageClass& value) { m_matchAnyStorageClassHasBeenSet = true; m_matchAnyStorageClass.push_back(value); return *this; }
    inline JobManifestGeneratorFilter& AddMatchAnyStorageClass(S3StorageClass&& value) { m_matchAnyStorageClassHasBeenSet = true; m_matchAnyStorageClass.push_back(std::move(value)); return *this; }
    ///@}
  private:

    bool m_eligibleForReplication;
    bool m_eligibleForReplicationHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    Aws::Vector<ReplicationStatus> m_objectReplicationStatuses;
    bool m_objectReplicationStatusesHasBeenSet = false;

    KeyNameConstraint m_keyNameConstraint;
    bool m_keyNameConstraintHasBeenSet = false;

    long long m_objectSizeGreaterThanBytes;
    bool m_objectSizeGreaterThanBytesHasBeenSet = false;

    long long m_objectSizeLessThanBytes;
    bool m_objectSizeLessThanBytesHasBeenSet = false;

    Aws::Vector<S3StorageClass> m_matchAnyStorageClass;
    bool m_matchAnyStorageClassHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
