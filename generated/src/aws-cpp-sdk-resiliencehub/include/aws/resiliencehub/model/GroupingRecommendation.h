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
    AWS_RESILIENCEHUB_API GroupingRecommendation() = default;
    AWS_RESILIENCEHUB_API GroupingRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API GroupingRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the confidence level of Resilience Hub on the grouping
     * recommendation.</p>
     */
    inline GroupingRecommendationConfidenceLevel GetConfidenceLevel() const { return m_confidenceLevel; }
    inline bool ConfidenceLevelHasBeenSet() const { return m_confidenceLevelHasBeenSet; }
    inline void SetConfidenceLevel(GroupingRecommendationConfidenceLevel value) { m_confidenceLevelHasBeenSet = true; m_confidenceLevel = value; }
    inline GroupingRecommendation& WithConfidenceLevel(GroupingRecommendationConfidenceLevel value) { SetConfidenceLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the creation time of the grouping recommendation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GroupingRecommendation& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the name of the recommended Application Component
     * (AppComponent).</p>
     */
    inline const GroupingAppComponent& GetGroupingAppComponent() const { return m_groupingAppComponent; }
    inline bool GroupingAppComponentHasBeenSet() const { return m_groupingAppComponentHasBeenSet; }
    template<typename GroupingAppComponentT = GroupingAppComponent>
    void SetGroupingAppComponent(GroupingAppComponentT&& value) { m_groupingAppComponentHasBeenSet = true; m_groupingAppComponent = std::forward<GroupingAppComponentT>(value); }
    template<typename GroupingAppComponentT = GroupingAppComponent>
    GroupingRecommendation& WithGroupingAppComponent(GroupingAppComponentT&& value) { SetGroupingAppComponent(std::forward<GroupingAppComponentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates all the reasons available for rejecting a grouping
     * recommendation.</p>
     */
    inline const Aws::String& GetGroupingRecommendationId() const { return m_groupingRecommendationId; }
    inline bool GroupingRecommendationIdHasBeenSet() const { return m_groupingRecommendationIdHasBeenSet; }
    template<typename GroupingRecommendationIdT = Aws::String>
    void SetGroupingRecommendationId(GroupingRecommendationIdT&& value) { m_groupingRecommendationIdHasBeenSet = true; m_groupingRecommendationId = std::forward<GroupingRecommendationIdT>(value); }
    template<typename GroupingRecommendationIdT = Aws::String>
    GroupingRecommendation& WithGroupingRecommendationId(GroupingRecommendationIdT&& value) { SetGroupingRecommendationId(std::forward<GroupingRecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates all the reasons available for rejecting a grouping
     * recommendation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecommendationReasons() const { return m_recommendationReasons; }
    inline bool RecommendationReasonsHasBeenSet() const { return m_recommendationReasonsHasBeenSet; }
    template<typename RecommendationReasonsT = Aws::Vector<Aws::String>>
    void SetRecommendationReasons(RecommendationReasonsT&& value) { m_recommendationReasonsHasBeenSet = true; m_recommendationReasons = std::forward<RecommendationReasonsT>(value); }
    template<typename RecommendationReasonsT = Aws::Vector<Aws::String>>
    GroupingRecommendation& WithRecommendationReasons(RecommendationReasonsT&& value) { SetRecommendationReasons(std::forward<RecommendationReasonsT>(value)); return *this;}
    template<typename RecommendationReasonsT = Aws::String>
    GroupingRecommendation& AddRecommendationReasons(RecommendationReasonsT&& value) { m_recommendationReasonsHasBeenSet = true; m_recommendationReasons.emplace_back(std::forward<RecommendationReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the reason you had selected while rejecting a grouping
     * recommendation.</p>
     */
    inline GroupingRecommendationRejectionReason GetRejectionReason() const { return m_rejectionReason; }
    inline bool RejectionReasonHasBeenSet() const { return m_rejectionReasonHasBeenSet; }
    inline void SetRejectionReason(GroupingRecommendationRejectionReason value) { m_rejectionReasonHasBeenSet = true; m_rejectionReason = value; }
    inline GroupingRecommendation& WithRejectionReason(GroupingRecommendationRejectionReason value) { SetRejectionReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the resources that are grouped in a recommended AppComponent.</p>
     */
    inline const Aws::Vector<GroupingResource>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<GroupingResource>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<GroupingResource>>
    GroupingRecommendation& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = GroupingResource>
    GroupingRecommendation& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the confidence level of the grouping recommendation.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline GroupingRecommendation& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of grouping resources into AppComponents.</p>
     */
    inline GroupingRecommendationStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(GroupingRecommendationStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline GroupingRecommendation& WithStatus(GroupingRecommendationStatusType value) { SetStatus(value); return *this;}
    ///@}
  private:

    GroupingRecommendationConfidenceLevel m_confidenceLevel{GroupingRecommendationConfidenceLevel::NOT_SET};
    bool m_confidenceLevelHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    GroupingAppComponent m_groupingAppComponent;
    bool m_groupingAppComponentHasBeenSet = false;

    Aws::String m_groupingRecommendationId;
    bool m_groupingRecommendationIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_recommendationReasons;
    bool m_recommendationReasonsHasBeenSet = false;

    GroupingRecommendationRejectionReason m_rejectionReason{GroupingRecommendationRejectionReason::NOT_SET};
    bool m_rejectionReasonHasBeenSet = false;

    Aws::Vector<GroupingResource> m_resources;
    bool m_resourcesHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;

    GroupingRecommendationStatusType m_status{GroupingRecommendationStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
