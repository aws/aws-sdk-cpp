/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/ReplicationRuleFilter.h>
#include <aws/s3/model/ReplicationRuleStatus.h>
#include <aws/s3/model/SourceSelectionCriteria.h>
#include <aws/s3/model/ExistingObjectReplication.h>
#include <aws/s3/model/Destination.h>
#include <aws/s3/model/DeleteMarkerReplication.h>
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
   * <p>Specifies which Amazon S3 objects to replicate and where to store the
   * replicas.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ReplicationRule">AWS
   * API Reference</a></p>
   */
  class ReplicationRule
  {
  public:
    AWS_S3_API ReplicationRule() = default;
    AWS_S3_API ReplicationRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API ReplicationRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A unique identifier for the rule. The maximum value is 255 characters.</p>
     */
    inline const Aws::String& GetID() const { return m_iD; }
    inline bool IDHasBeenSet() const { return m_iDHasBeenSet; }
    template<typename IDT = Aws::String>
    void SetID(IDT&& value) { m_iDHasBeenSet = true; m_iD = std::forward<IDT>(value); }
    template<typename IDT = Aws::String>
    ReplicationRule& WithID(IDT&& value) { SetID(std::forward<IDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority indicates which rule has precedence whenever two or more
     * replication rules conflict. Amazon S3 will attempt to replicate objects
     * according to all replication rules. However, if there are two or more rules with
     * the same destination bucket, then objects will be replicated according to the
     * rule with the highest priority. The higher the number, the higher the priority.
     * </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication.html">Replication</a>
     * in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline ReplicationRule& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    
    inline const ReplicationRuleFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = ReplicationRuleFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = ReplicationRuleFilter>
    ReplicationRule& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the rule is enabled.</p>
     */
    inline ReplicationRuleStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ReplicationRuleStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReplicationRule& WithStatus(ReplicationRuleStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container that describes additional filters for identifying the source
     * objects that you want to replicate. You can choose to enable or disable the
     * replication of these objects. Currently, Amazon S3 supports only the filter that
     * you can specify for objects created with server-side encryption using a customer
     * managed key stored in Amazon Web Services Key Management Service (SSE-KMS).</p>
     */
    inline const SourceSelectionCriteria& GetSourceSelectionCriteria() const { return m_sourceSelectionCriteria; }
    inline bool SourceSelectionCriteriaHasBeenSet() const { return m_sourceSelectionCriteriaHasBeenSet; }
    template<typename SourceSelectionCriteriaT = SourceSelectionCriteria>
    void SetSourceSelectionCriteria(SourceSelectionCriteriaT&& value) { m_sourceSelectionCriteriaHasBeenSet = true; m_sourceSelectionCriteria = std::forward<SourceSelectionCriteriaT>(value); }
    template<typename SourceSelectionCriteriaT = SourceSelectionCriteria>
    ReplicationRule& WithSourceSelectionCriteria(SourceSelectionCriteriaT&& value) { SetSourceSelectionCriteria(std::forward<SourceSelectionCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional configuration to replicate existing source bucket objects. </p>
     *  <p>This parameter is no longer supported. To replicate existing objects,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-batch-replication-batch.html">Replicating
     * existing objects with S3 Batch Replication</a> in the <i>Amazon S3 User
     * Guide</i>.</p> 
     */
    inline const ExistingObjectReplication& GetExistingObjectReplication() const { return m_existingObjectReplication; }
    inline bool ExistingObjectReplicationHasBeenSet() const { return m_existingObjectReplicationHasBeenSet; }
    template<typename ExistingObjectReplicationT = ExistingObjectReplication>
    void SetExistingObjectReplication(ExistingObjectReplicationT&& value) { m_existingObjectReplicationHasBeenSet = true; m_existingObjectReplication = std::forward<ExistingObjectReplicationT>(value); }
    template<typename ExistingObjectReplicationT = ExistingObjectReplication>
    ReplicationRule& WithExistingObjectReplication(ExistingObjectReplicationT&& value) { SetExistingObjectReplication(std::forward<ExistingObjectReplicationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for information about the replication destination and its
     * configurations including enabling the S3 Replication Time Control (S3 RTC).</p>
     */
    inline const Destination& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Destination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Destination>
    ReplicationRule& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DeleteMarkerReplication& GetDeleteMarkerReplication() const { return m_deleteMarkerReplication; }
    inline bool DeleteMarkerReplicationHasBeenSet() const { return m_deleteMarkerReplicationHasBeenSet; }
    template<typename DeleteMarkerReplicationT = DeleteMarkerReplication>
    void SetDeleteMarkerReplication(DeleteMarkerReplicationT&& value) { m_deleteMarkerReplicationHasBeenSet = true; m_deleteMarkerReplication = std::forward<DeleteMarkerReplicationT>(value); }
    template<typename DeleteMarkerReplicationT = DeleteMarkerReplication>
    ReplicationRule& WithDeleteMarkerReplication(DeleteMarkerReplicationT&& value) { SetDeleteMarkerReplication(std::forward<DeleteMarkerReplicationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_iD;
    bool m_iDHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    ReplicationRuleFilter m_filter;
    bool m_filterHasBeenSet = false;

    ReplicationRuleStatus m_status{ReplicationRuleStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    SourceSelectionCriteria m_sourceSelectionCriteria;
    bool m_sourceSelectionCriteriaHasBeenSet = false;

    ExistingObjectReplication m_existingObjectReplication;
    bool m_existingObjectReplicationHasBeenSet = false;

    Destination m_destination;
    bool m_destinationHasBeenSet = false;

    DeleteMarkerReplication m_deleteMarkerReplication;
    bool m_deleteMarkerReplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
