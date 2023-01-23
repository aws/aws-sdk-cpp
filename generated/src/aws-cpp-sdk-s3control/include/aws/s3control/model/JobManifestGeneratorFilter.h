/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/ReplicationStatus.h>
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


    /**
     * <p>Include objects in the generated manifest only if they are eligible for
     * replication according to the Replication configuration on the source bucket.</p>
     */
    inline bool GetEligibleForReplication() const{ return m_eligibleForReplication; }

    /**
     * <p>Include objects in the generated manifest only if they are eligible for
     * replication according to the Replication configuration on the source bucket.</p>
     */
    inline bool EligibleForReplicationHasBeenSet() const { return m_eligibleForReplicationHasBeenSet; }

    /**
     * <p>Include objects in the generated manifest only if they are eligible for
     * replication according to the Replication configuration on the source bucket.</p>
     */
    inline void SetEligibleForReplication(bool value) { m_eligibleForReplicationHasBeenSet = true; m_eligibleForReplication = value; }

    /**
     * <p>Include objects in the generated manifest only if they are eligible for
     * replication according to the Replication configuration on the source bucket.</p>
     */
    inline JobManifestGeneratorFilter& WithEligibleForReplication(bool value) { SetEligibleForReplication(value); return *this;}


    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that were created after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that were created after this time.</p>
     */
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }

    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that were created after this time.</p>
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that were created after this time.</p>
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }

    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that were created after this time.</p>
     */
    inline JobManifestGeneratorFilter& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that were created after this time.</p>
     */
    inline JobManifestGeneratorFilter& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that were created before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that were created before this time.</p>
     */
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }

    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that were created before this time.</p>
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that were created before this time.</p>
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }

    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that were created before this time.</p>
     */
    inline JobManifestGeneratorFilter& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that were created before this time.</p>
     */
    inline JobManifestGeneratorFilter& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}


    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that have one of the specified Replication statuses.</p>
     */
    inline const Aws::Vector<ReplicationStatus>& GetObjectReplicationStatuses() const{ return m_objectReplicationStatuses; }

    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that have one of the specified Replication statuses.</p>
     */
    inline bool ObjectReplicationStatusesHasBeenSet() const { return m_objectReplicationStatusesHasBeenSet; }

    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that have one of the specified Replication statuses.</p>
     */
    inline void SetObjectReplicationStatuses(const Aws::Vector<ReplicationStatus>& value) { m_objectReplicationStatusesHasBeenSet = true; m_objectReplicationStatuses = value; }

    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that have one of the specified Replication statuses.</p>
     */
    inline void SetObjectReplicationStatuses(Aws::Vector<ReplicationStatus>&& value) { m_objectReplicationStatusesHasBeenSet = true; m_objectReplicationStatuses = std::move(value); }

    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that have one of the specified Replication statuses.</p>
     */
    inline JobManifestGeneratorFilter& WithObjectReplicationStatuses(const Aws::Vector<ReplicationStatus>& value) { SetObjectReplicationStatuses(value); return *this;}

    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that have one of the specified Replication statuses.</p>
     */
    inline JobManifestGeneratorFilter& WithObjectReplicationStatuses(Aws::Vector<ReplicationStatus>&& value) { SetObjectReplicationStatuses(std::move(value)); return *this;}

    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that have one of the specified Replication statuses.</p>
     */
    inline JobManifestGeneratorFilter& AddObjectReplicationStatuses(const ReplicationStatus& value) { m_objectReplicationStatusesHasBeenSet = true; m_objectReplicationStatuses.push_back(value); return *this; }

    /**
     * <p>If provided, the generated manifest should include only source bucket objects
     * that have one of the specified Replication statuses.</p>
     */
    inline JobManifestGeneratorFilter& AddObjectReplicationStatuses(ReplicationStatus&& value) { m_objectReplicationStatusesHasBeenSet = true; m_objectReplicationStatuses.push_back(std::move(value)); return *this; }

  private:

    bool m_eligibleForReplication;
    bool m_eligibleForReplicationHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    Aws::Vector<ReplicationStatus> m_objectReplicationStatuses;
    bool m_objectReplicationStatusesHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
