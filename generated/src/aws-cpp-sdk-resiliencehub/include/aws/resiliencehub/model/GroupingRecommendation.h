/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/GroupingRecommendationConfidenceLevel.h>
#include <aws/core/utils/DateTime.h>
#include <aws/resiliencehub/model/GroupingAppComponent.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/GroupingRecommendationRejectionReason.h>
#include <aws/resiliencehub/model/GroupingRecommendationStatusType.h>
#include <aws/resiliencehub/model/GroupingResource.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Creates a new grouping recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/GroupingRecommendation">AWS
   * API Reference</a></p>
   */
  class GroupingRecommendation
  {
  public:
    AWS_RESILIENCEHUB_API GroupingRecommendation();
    AWS_RESILIENCEHUB_API GroupingRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API GroupingRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the confidence level of Resilience Hub on the grouping
     * recommendation.</p>
     */
    inline const GroupingRecommendationConfidenceLevel& GetConfidenceLevel() const{ return m_confidenceLevel; }
    inline bool ConfidenceLevelHasBeenSet() const { return m_confidenceLevelHasBeenSet; }
    inline void SetConfidenceLevel(const GroupingRecommendationConfidenceLevel& value) { m_confidenceLevelHasBeenSet = true; m_confidenceLevel = value; }
    inline void SetConfidenceLevel(GroupingRecommendationConfidenceLevel&& value) { m_confidenceLevelHasBeenSet = true; m_confidenceLevel = std::move(value); }
    inline GroupingRecommendation& WithConfidenceLevel(const GroupingRecommendationConfidenceLevel& value) { SetConfidenceLevel(value); return *this;}
    inline GroupingRecommendation& WithConfidenceLevel(GroupingRecommendationConfidenceLevel&& value) { SetConfidenceLevel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the creation time of the grouping recommendation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline GroupingRecommendation& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GroupingRecommendation& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the name of the recommended Application Component
     * (AppComponent).</p>
     */
    inline const GroupingAppComponent& GetGroupingAppComponent() const{ return m_groupingAppComponent; }
    inline bool GroupingAppComponentHasBeenSet() const { return m_groupingAppComponentHasBeenSet; }
    inline void SetGroupingAppComponent(const GroupingAppComponent& value) { m_groupingAppComponentHasBeenSet = true; m_groupingAppComponent = value; }
    inline void SetGroupingAppComponent(GroupingAppComponent&& value) { m_groupingAppComponentHasBeenSet = true; m_groupingAppComponent = std::move(value); }
    inline GroupingRecommendation& WithGroupingAppComponent(const GroupingAppComponent& value) { SetGroupingAppComponent(value); return *this;}
    inline GroupingRecommendation& WithGroupingAppComponent(GroupingAppComponent&& value) { SetGroupingAppComponent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates all the reasons available for rejecting a grouping
     * recommendation.</p>
     */
    inline const Aws::String& GetGroupingRecommendationId() const{ return m_groupingRecommendationId; }
    inline bool GroupingRecommendationIdHasBeenSet() const { return m_groupingRecommendationIdHasBeenSet; }
    inline void SetGroupingRecommendationId(const Aws::String& value) { m_groupingRecommendationIdHasBeenSet = true; m_groupingRecommendationId = value; }
    inline void SetGroupingRecommendationId(Aws::String&& value) { m_groupingRecommendationIdHasBeenSet = true; m_groupingRecommendationId = std::move(value); }
    inline void SetGroupingRecommendationId(const char* value) { m_groupingRecommendationIdHasBeenSet = true; m_groupingRecommendationId.assign(value); }
    inline GroupingRecommendation& WithGroupingRecommendationId(const Aws::String& value) { SetGroupingRecommendationId(value); return *this;}
    inline GroupingRecommendation& WithGroupingRecommendationId(Aws::String&& value) { SetGroupingRecommendationId(std::move(value)); return *this;}
    inline GroupingRecommendation& WithGroupingRecommendationId(const char* value) { SetGroupingRecommendationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates all the reasons available for rejecting a grouping
     * recommendation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendationReasons() const{ return m_recommendationReasons; }
    inline bool RecommendationReasonsHasBeenSet() const { return m_recommendationReasonsHasBeenSet; }
    inline void SetRecommendationReasons(const Aws::Vector<Aws::String>& value) { m_recommendationReasonsHasBeenSet = true; m_recommendationReasons = value; }
    inline void SetRecommendationReasons(Aws::Vector<Aws::String>&& value) { m_recommendationReasonsHasBeenSet = true; m_recommendationReasons = std::move(value); }
    inline GroupingRecommendation& WithRecommendationReasons(const Aws::Vector<Aws::String>& value) { SetRecommendationReasons(value); return *this;}
    inline GroupingRecommendation& WithRecommendationReasons(Aws::Vector<Aws::String>&& value) { SetRecommendationReasons(std::move(value)); return *this;}
    inline GroupingRecommendation& AddRecommendationReasons(const Aws::String& value) { m_recommendationReasonsHasBeenSet = true; m_recommendationReasons.push_back(value); return *this; }
    inline GroupingRecommendation& AddRecommendationReasons(Aws::String&& value) { m_recommendationReasonsHasBeenSet = true; m_recommendationReasons.push_back(std::move(value)); return *this; }
    inline GroupingRecommendation& AddRecommendationReasons(const char* value) { m_recommendationReasonsHasBeenSet = true; m_recommendationReasons.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the reason you had selected while rejecting a grouping
     * recommendation.</p>
     */
    inline const GroupingRecommendationRejectionReason& GetRejectionReason() const{ return m_rejectionReason; }
    inline bool RejectionReasonHasBeenSet() const { return m_rejectionReasonHasBeenSet; }
    inline void SetRejectionReason(const GroupingRecommendationRejectionReason& value) { m_rejectionReasonHasBeenSet = true; m_rejectionReason = value; }
    inline void SetRejectionReason(GroupingRecommendationRejectionReason&& value) { m_rejectionReasonHasBeenSet = true; m_rejectionReason = std::move(value); }
    inline GroupingRecommendation& WithRejectionReason(const GroupingRecommendationRejectionReason& value) { SetRejectionReason(value); return *this;}
    inline GroupingRecommendation& WithRejectionReason(GroupingRecommendationRejectionReason&& value) { SetRejectionReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the resources that are grouped in a recommended AppComponent.</p>
     */
    inline const Aws::Vector<GroupingResource>& GetResources() const{ return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    inline void SetResources(const Aws::Vector<GroupingResource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }
    inline void SetResources(Aws::Vector<GroupingResource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }
    inline GroupingRecommendation& WithResources(const Aws::Vector<GroupingResource>& value) { SetResources(value); return *this;}
    inline GroupingRecommendation& WithResources(Aws::Vector<GroupingResource>&& value) { SetResources(std::move(value)); return *this;}
    inline GroupingRecommendation& AddResources(const GroupingResource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }
    inline GroupingRecommendation& AddResources(GroupingResource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the confidence level of the grouping recommendation.</p>
     */
    inline double GetScore() const{ return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline GroupingRecommendation& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of grouping resources into AppComponents.</p>
     */
    inline const GroupingRecommendationStatusType& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const GroupingRecommendationStatusType& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(GroupingRecommendationStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline GroupingRecommendation& WithStatus(const GroupingRecommendationStatusType& value) { SetStatus(value); return *this;}
    inline GroupingRecommendation& WithStatus(GroupingRecommendationStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    GroupingRecommendationConfidenceLevel m_confidenceLevel;
    bool m_confidenceLevelHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    GroupingAppComponent m_groupingAppComponent;
    bool m_groupingAppComponentHasBeenSet = false;

    Aws::String m_groupingRecommendationId;
    bool m_groupingRecommendationIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_recommendationReasons;
    bool m_recommendationReasonsHasBeenSet = false;

    GroupingRecommendationRejectionReason m_rejectionReason;
    bool m_rejectionReasonHasBeenSet = false;

    Aws::Vector<GroupingResource> m_resources;
    bool m_resourcesHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;

    GroupingRecommendationStatusType m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
