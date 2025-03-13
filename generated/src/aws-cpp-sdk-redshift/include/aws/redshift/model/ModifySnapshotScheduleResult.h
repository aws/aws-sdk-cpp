/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/Tag.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift/model/ClusterAssociatedToSchedule.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{
  /**
   * <p>Describes a snapshot schedule. You can set a regular interval for creating
   * snapshots of a cluster. You can also schedule snapshots for specific dates.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/SnapshotSchedule">AWS
   * API Reference</a></p>
   */
  class ModifySnapshotScheduleResult
  {
  public:
    AWS_REDSHIFT_API ModifySnapshotScheduleResult() = default;
    AWS_REDSHIFT_API ModifySnapshotScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API ModifySnapshotScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of ScheduleDefinitions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScheduleDefinitions() const { return m_scheduleDefinitions; }
    template<typename ScheduleDefinitionsT = Aws::Vector<Aws::String>>
    void SetScheduleDefinitions(ScheduleDefinitionsT&& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions = std::forward<ScheduleDefinitionsT>(value); }
    template<typename ScheduleDefinitionsT = Aws::Vector<Aws::String>>
    ModifySnapshotScheduleResult& WithScheduleDefinitions(ScheduleDefinitionsT&& value) { SetScheduleDefinitions(std::forward<ScheduleDefinitionsT>(value)); return *this;}
    template<typename ScheduleDefinitionsT = Aws::String>
    ModifySnapshotScheduleResult& AddScheduleDefinitions(ScheduleDefinitionsT&& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions.emplace_back(std::forward<ScheduleDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the schedule.</p>
     */
    inline const Aws::String& GetScheduleIdentifier() const { return m_scheduleIdentifier; }
    template<typename ScheduleIdentifierT = Aws::String>
    void SetScheduleIdentifier(ScheduleIdentifierT&& value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier = std::forward<ScheduleIdentifierT>(value); }
    template<typename ScheduleIdentifierT = Aws::String>
    ModifySnapshotScheduleResult& WithScheduleIdentifier(ScheduleIdentifierT&& value) { SetScheduleIdentifier(std::forward<ScheduleIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the schedule.</p>
     */
    inline const Aws::String& GetScheduleDescription() const { return m_scheduleDescription; }
    template<typename ScheduleDescriptionT = Aws::String>
    void SetScheduleDescription(ScheduleDescriptionT&& value) { m_scheduleDescriptionHasBeenSet = true; m_scheduleDescription = std::forward<ScheduleDescriptionT>(value); }
    template<typename ScheduleDescriptionT = Aws::String>
    ModifySnapshotScheduleResult& WithScheduleDescription(ScheduleDescriptionT&& value) { SetScheduleDescription(std::forward<ScheduleDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional set of tags describing the schedule.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ModifySnapshotScheduleResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ModifySnapshotScheduleResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetNextInvocations() const { return m_nextInvocations; }
    template<typename NextInvocationsT = Aws::Vector<Aws::Utils::DateTime>>
    void SetNextInvocations(NextInvocationsT&& value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations = std::forward<NextInvocationsT>(value); }
    template<typename NextInvocationsT = Aws::Vector<Aws::Utils::DateTime>>
    ModifySnapshotScheduleResult& WithNextInvocations(NextInvocationsT&& value) { SetNextInvocations(std::forward<NextInvocationsT>(value)); return *this;}
    template<typename NextInvocationsT = Aws::Utils::DateTime>
    ModifySnapshotScheduleResult& AddNextInvocations(NextInvocationsT&& value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations.emplace_back(std::forward<NextInvocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of clusters associated with the schedule.</p>
     */
    inline int GetAssociatedClusterCount() const { return m_associatedClusterCount; }
    inline void SetAssociatedClusterCount(int value) { m_associatedClusterCountHasBeenSet = true; m_associatedClusterCount = value; }
    inline ModifySnapshotScheduleResult& WithAssociatedClusterCount(int value) { SetAssociatedClusterCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of clusters associated with the schedule. A maximum of 100 clusters is
     * returned.</p>
     */
    inline const Aws::Vector<ClusterAssociatedToSchedule>& GetAssociatedClusters() const { return m_associatedClusters; }
    template<typename AssociatedClustersT = Aws::Vector<ClusterAssociatedToSchedule>>
    void SetAssociatedClusters(AssociatedClustersT&& value) { m_associatedClustersHasBeenSet = true; m_associatedClusters = std::forward<AssociatedClustersT>(value); }
    template<typename AssociatedClustersT = Aws::Vector<ClusterAssociatedToSchedule>>
    ModifySnapshotScheduleResult& WithAssociatedClusters(AssociatedClustersT&& value) { SetAssociatedClusters(std::forward<AssociatedClustersT>(value)); return *this;}
    template<typename AssociatedClustersT = ClusterAssociatedToSchedule>
    ModifySnapshotScheduleResult& AddAssociatedClusters(AssociatedClustersT&& value) { m_associatedClustersHasBeenSet = true; m_associatedClusters.emplace_back(std::forward<AssociatedClustersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifySnapshotScheduleResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_scheduleDefinitions;
    bool m_scheduleDefinitionsHasBeenSet = false;

    Aws::String m_scheduleIdentifier;
    bool m_scheduleIdentifierHasBeenSet = false;

    Aws::String m_scheduleDescription;
    bool m_scheduleDescriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_nextInvocations;
    bool m_nextInvocationsHasBeenSet = false;

    int m_associatedClusterCount{0};
    bool m_associatedClusterCountHasBeenSet = false;

    Aws::Vector<ClusterAssociatedToSchedule> m_associatedClusters;
    bool m_associatedClustersHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
