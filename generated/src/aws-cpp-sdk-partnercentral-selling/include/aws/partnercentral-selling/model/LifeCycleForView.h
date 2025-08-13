/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/ReviewStatus.h>
#include <aws/partnercentral-selling/model/Stage.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p> Provides the lifecycle view of an opportunity resource shared through a
   * snapshot. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/LifeCycleForView">AWS
   * API Reference</a></p>
   */
  class LifeCycleForView
  {
  public:
    AWS_PARTNERCENTRALSELLING_API LifeCycleForView() = default;
    AWS_PARTNERCENTRALSELLING_API LifeCycleForView(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API LifeCycleForView& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The projected launch date of the opportunity shared through a snapshot. </p>
     */
    inline const Aws::String& GetTargetCloseDate() const { return m_targetCloseDate; }
    inline bool TargetCloseDateHasBeenSet() const { return m_targetCloseDateHasBeenSet; }
    template<typename TargetCloseDateT = Aws::String>
    void SetTargetCloseDate(TargetCloseDateT&& value) { m_targetCloseDateHasBeenSet = true; m_targetCloseDate = std::forward<TargetCloseDateT>(value); }
    template<typename TargetCloseDateT = Aws::String>
    LifeCycleForView& WithTargetCloseDate(TargetCloseDateT&& value) { SetTargetCloseDate(std::forward<TargetCloseDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Defines the approval status of the opportunity shared through a snapshot.
     * </p>
     */
    inline ReviewStatus GetReviewStatus() const { return m_reviewStatus; }
    inline bool ReviewStatusHasBeenSet() const { return m_reviewStatusHasBeenSet; }
    inline void SetReviewStatus(ReviewStatus value) { m_reviewStatusHasBeenSet = true; m_reviewStatus = value; }
    inline LifeCycleForView& WithReviewStatus(ReviewStatus value) { SetReviewStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Defines the current stage of the opportunity shared through a snapshot. </p>
     */
    inline Stage GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(Stage value) { m_stageHasBeenSet = true; m_stage = value; }
    inline LifeCycleForView& WithStage(Stage value) { SetStage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the next steps for the opportunity shared through a snapshot. </p>
     */
    inline const Aws::String& GetNextSteps() const { return m_nextSteps; }
    inline bool NextStepsHasBeenSet() const { return m_nextStepsHasBeenSet; }
    template<typename NextStepsT = Aws::String>
    void SetNextSteps(NextStepsT&& value) { m_nextStepsHasBeenSet = true; m_nextSteps = std::forward<NextStepsT>(value); }
    template<typename NextStepsT = Aws::String>
    LifeCycleForView& WithNextSteps(NextStepsT&& value) { SetNextSteps(std::forward<NextStepsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetCloseDate;
    bool m_targetCloseDateHasBeenSet = false;

    ReviewStatus m_reviewStatus{ReviewStatus::NOT_SET};
    bool m_reviewStatusHasBeenSet = false;

    Stage m_stage{Stage::NOT_SET};
    bool m_stageHasBeenSet = false;

    Aws::String m_nextSteps;
    bool m_nextStepsHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
