﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/SseKmsEncryptedObjects.h>
#include <aws/s3control/model/ReplicaModifications.h>
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
   * <p>A container that describes additional filters for identifying the source
   * objects that you want to replicate. You can choose to enable or disable the
   * replication of these objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/SourceSelectionCriteria">AWS
   * API Reference</a></p>
   */
  class SourceSelectionCriteria
  {
  public:
    AWS_S3CONTROL_API SourceSelectionCriteria() = default;
    AWS_S3CONTROL_API SourceSelectionCriteria(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API SourceSelectionCriteria& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A filter that you can use to select Amazon S3 objects that are encrypted with
     * server-side encryption by using Key Management Service (KMS) keys. If you
     * include <code>SourceSelectionCriteria</code> in the replication configuration,
     * this element is required. </p>  <p>This is not supported by Amazon S3 on
     * Outposts buckets.</p> 
     */
    inline const SseKmsEncryptedObjects& GetSseKmsEncryptedObjects() const { return m_sseKmsEncryptedObjects; }
    inline bool SseKmsEncryptedObjectsHasBeenSet() const { return m_sseKmsEncryptedObjectsHasBeenSet; }
    template<typename SseKmsEncryptedObjectsT = SseKmsEncryptedObjects>
    void SetSseKmsEncryptedObjects(SseKmsEncryptedObjectsT&& value) { m_sseKmsEncryptedObjectsHasBeenSet = true; m_sseKmsEncryptedObjects = std::forward<SseKmsEncryptedObjectsT>(value); }
    template<typename SseKmsEncryptedObjectsT = SseKmsEncryptedObjects>
    SourceSelectionCriteria& WithSseKmsEncryptedObjects(SseKmsEncryptedObjectsT&& value) { SetSseKmsEncryptedObjects(std::forward<SseKmsEncryptedObjectsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that you can use to specify whether replica modification sync is
     * enabled. S3 on Outposts replica modification sync can help you keep object
     * metadata synchronized between replicas and source objects. By default, S3 on
     * Outposts replicates metadata from the source objects to the replicas only. When
     * replica modification sync is enabled, S3 on Outposts replicates metadata changes
     * made to the replica copies back to the source object, making the replication
     * bidirectional.</p> <p>To replicate object metadata modifications on replicas,
     * you can specify this element and set the <code>Status</code> of this element to
     * <code>Enabled</code>.</p>  <p>You must enable replica modification sync on
     * the source and destination buckets to replicate replica metadata changes between
     * the source and the replicas.</p> 
     */
    inline const ReplicaModifications& GetReplicaModifications() const { return m_replicaModifications; }
    inline bool ReplicaModificationsHasBeenSet() const { return m_replicaModificationsHasBeenSet; }
    template<typename ReplicaModificationsT = ReplicaModifications>
    void SetReplicaModifications(ReplicaModificationsT&& value) { m_replicaModificationsHasBeenSet = true; m_replicaModifications = std::forward<ReplicaModificationsT>(value); }
    template<typename ReplicaModificationsT = ReplicaModifications>
    SourceSelectionCriteria& WithReplicaModifications(ReplicaModificationsT&& value) { SetReplicaModifications(std::forward<ReplicaModificationsT>(value)); return *this;}
    ///@}
  private:

    SseKmsEncryptedObjects m_sseKmsEncryptedObjects;
    bool m_sseKmsEncryptedObjectsHasBeenSet = false;

    ReplicaModifications m_replicaModifications;
    bool m_replicaModificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
