﻿/**
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
  class CreateSnapshotScheduleResult
  {
  public:
    AWS_REDSHIFT_API CreateSnapshotScheduleResult();
    AWS_REDSHIFT_API CreateSnapshotScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API CreateSnapshotScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of ScheduleDefinitions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScheduleDefinitions() const{ return m_scheduleDefinitions; }
    inline void SetScheduleDefinitions(const Aws::Vector<Aws::String>& value) { m_scheduleDefinitions = value; }
    inline void SetScheduleDefinitions(Aws::Vector<Aws::String>&& value) { m_scheduleDefinitions = std::move(value); }
    inline CreateSnapshotScheduleResult& WithScheduleDefinitions(const Aws::Vector<Aws::String>& value) { SetScheduleDefinitions(value); return *this;}
    inline CreateSnapshotScheduleResult& WithScheduleDefinitions(Aws::Vector<Aws::String>&& value) { SetScheduleDefinitions(std::move(value)); return *this;}
    inline CreateSnapshotScheduleResult& AddScheduleDefinitions(const Aws::String& value) { m_scheduleDefinitions.push_back(value); return *this; }
    inline CreateSnapshotScheduleResult& AddScheduleDefinitions(Aws::String&& value) { m_scheduleDefinitions.push_back(std::move(value)); return *this; }
    inline CreateSnapshotScheduleResult& AddScheduleDefinitions(const char* value) { m_scheduleDefinitions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the schedule.</p>
     */
    inline const Aws::String& GetScheduleIdentifier() const{ return m_scheduleIdentifier; }
    inline void SetScheduleIdentifier(const Aws::String& value) { m_scheduleIdentifier = value; }
    inline void SetScheduleIdentifier(Aws::String&& value) { m_scheduleIdentifier = std::move(value); }
    inline void SetScheduleIdentifier(const char* value) { m_scheduleIdentifier.assign(value); }
    inline CreateSnapshotScheduleResult& WithScheduleIdentifier(const Aws::String& value) { SetScheduleIdentifier(value); return *this;}
    inline CreateSnapshotScheduleResult& WithScheduleIdentifier(Aws::String&& value) { SetScheduleIdentifier(std::move(value)); return *this;}
    inline CreateSnapshotScheduleResult& WithScheduleIdentifier(const char* value) { SetScheduleIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the schedule.</p>
     */
    inline const Aws::String& GetScheduleDescription() const{ return m_scheduleDescription; }
    inline void SetScheduleDescription(const Aws::String& value) { m_scheduleDescription = value; }
    inline void SetScheduleDescription(Aws::String&& value) { m_scheduleDescription = std::move(value); }
    inline void SetScheduleDescription(const char* value) { m_scheduleDescription.assign(value); }
    inline CreateSnapshotScheduleResult& WithScheduleDescription(const Aws::String& value) { SetScheduleDescription(value); return *this;}
    inline CreateSnapshotScheduleResult& WithScheduleDescription(Aws::String&& value) { SetScheduleDescription(std::move(value)); return *this;}
    inline CreateSnapshotScheduleResult& WithScheduleDescription(const char* value) { SetScheduleDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional set of tags describing the schedule.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline CreateSnapshotScheduleResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateSnapshotScheduleResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSnapshotScheduleResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline CreateSnapshotScheduleResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetNextInvocations() const{ return m_nextInvocations; }
    inline void SetNextInvocations(const Aws::Vector<Aws::Utils::DateTime>& value) { m_nextInvocations = value; }
    inline void SetNextInvocations(Aws::Vector<Aws::Utils::DateTime>&& value) { m_nextInvocations = std::move(value); }
    inline CreateSnapshotScheduleResult& WithNextInvocations(const Aws::Vector<Aws::Utils::DateTime>& value) { SetNextInvocations(value); return *this;}
    inline CreateSnapshotScheduleResult& WithNextInvocations(Aws::Vector<Aws::Utils::DateTime>&& value) { SetNextInvocations(std::move(value)); return *this;}
    inline CreateSnapshotScheduleResult& AddNextInvocations(const Aws::Utils::DateTime& value) { m_nextInvocations.push_back(value); return *this; }
    inline CreateSnapshotScheduleResult& AddNextInvocations(Aws::Utils::DateTime&& value) { m_nextInvocations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of clusters associated with the schedule.</p>
     */
    inline int GetAssociatedClusterCount() const{ return m_associatedClusterCount; }
    inline void SetAssociatedClusterCount(int value) { m_associatedClusterCount = value; }
    inline CreateSnapshotScheduleResult& WithAssociatedClusterCount(int value) { SetAssociatedClusterCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of clusters associated with the schedule. A maximum of 100 clusters is
     * returned.</p>
     */
    inline const Aws::Vector<ClusterAssociatedToSchedule>& GetAssociatedClusters() const{ return m_associatedClusters; }
    inline void SetAssociatedClusters(const Aws::Vector<ClusterAssociatedToSchedule>& value) { m_associatedClusters = value; }
    inline void SetAssociatedClusters(Aws::Vector<ClusterAssociatedToSchedule>&& value) { m_associatedClusters = std::move(value); }
    inline CreateSnapshotScheduleResult& WithAssociatedClusters(const Aws::Vector<ClusterAssociatedToSchedule>& value) { SetAssociatedClusters(value); return *this;}
    inline CreateSnapshotScheduleResult& WithAssociatedClusters(Aws::Vector<ClusterAssociatedToSchedule>&& value) { SetAssociatedClusters(std::move(value)); return *this;}
    inline CreateSnapshotScheduleResult& AddAssociatedClusters(const ClusterAssociatedToSchedule& value) { m_associatedClusters.push_back(value); return *this; }
    inline CreateSnapshotScheduleResult& AddAssociatedClusters(ClusterAssociatedToSchedule&& value) { m_associatedClusters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CreateSnapshotScheduleResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CreateSnapshotScheduleResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_scheduleDefinitions;

    Aws::String m_scheduleIdentifier;

    Aws::String m_scheduleDescription;

    Aws::Vector<Tag> m_tags;

    Aws::Vector<Aws::Utils::DateTime> m_nextInvocations;

    int m_associatedClusterCount;

    Aws::Vector<ClusterAssociatedToSchedule> m_associatedClusters;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
