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
    AWS_PARTNERCENTRALSELLING_API LifeCycleForView();
    AWS_PARTNERCENTRALSELLING_API LifeCycleForView(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API LifeCycleForView& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Describes the next steps for the opportunity shared through a snapshot. </p>
     */
    inline const Aws::String& GetNextSteps() const{ return m_nextSteps; }
    inline bool NextStepsHasBeenSet() const { return m_nextStepsHasBeenSet; }
    inline void SetNextSteps(const Aws::String& value) { m_nextStepsHasBeenSet = true; m_nextSteps = value; }
    inline void SetNextSteps(Aws::String&& value) { m_nextStepsHasBeenSet = true; m_nextSteps = std::move(value); }
    inline void SetNextSteps(const char* value) { m_nextStepsHasBeenSet = true; m_nextSteps.assign(value); }
    inline LifeCycleForView& WithNextSteps(const Aws::String& value) { SetNextSteps(value); return *this;}
    inline LifeCycleForView& WithNextSteps(Aws::String&& value) { SetNextSteps(std::move(value)); return *this;}
    inline LifeCycleForView& WithNextSteps(const char* value) { SetNextSteps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Defines the approval status of the opportunity shared through a snapshot.
     * </p>
     */
    inline const ReviewStatus& GetReviewStatus() const{ return m_reviewStatus; }
    inline bool ReviewStatusHasBeenSet() const { return m_reviewStatusHasBeenSet; }
    inline void SetReviewStatus(const ReviewStatus& value) { m_reviewStatusHasBeenSet = true; m_reviewStatus = value; }
    inline void SetReviewStatus(ReviewStatus&& value) { m_reviewStatusHasBeenSet = true; m_reviewStatus = std::move(value); }
    inline LifeCycleForView& WithReviewStatus(const ReviewStatus& value) { SetReviewStatus(value); return *this;}
    inline LifeCycleForView& WithReviewStatus(ReviewStatus&& value) { SetReviewStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Defines the current stage of the opportunity shared through a snapshot. </p>
     */
    inline const Stage& GetStage() const{ return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(const Stage& value) { m_stageHasBeenSet = true; m_stage = value; }
    inline void SetStage(Stage&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }
    inline LifeCycleForView& WithStage(const Stage& value) { SetStage(value); return *this;}
    inline LifeCycleForView& WithStage(Stage&& value) { SetStage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The projected launch date of the opportunity shared through a snapshot. </p>
     */
    inline const Aws::String& GetTargetCloseDate() const{ return m_targetCloseDate; }
    inline bool TargetCloseDateHasBeenSet() const { return m_targetCloseDateHasBeenSet; }
    inline void SetTargetCloseDate(const Aws::String& value) { m_targetCloseDateHasBeenSet = true; m_targetCloseDate = value; }
    inline void SetTargetCloseDate(Aws::String&& value) { m_targetCloseDateHasBeenSet = true; m_targetCloseDate = std::move(value); }
    inline void SetTargetCloseDate(const char* value) { m_targetCloseDateHasBeenSet = true; m_targetCloseDate.assign(value); }
    inline LifeCycleForView& WithTargetCloseDate(const Aws::String& value) { SetTargetCloseDate(value); return *this;}
    inline LifeCycleForView& WithTargetCloseDate(Aws::String&& value) { SetTargetCloseDate(std::move(value)); return *this;}
    inline LifeCycleForView& WithTargetCloseDate(const char* value) { SetTargetCloseDate(value); return *this;}
    ///@}
  private:

    Aws::String m_nextSteps;
    bool m_nextStepsHasBeenSet = false;

    ReviewStatus m_reviewStatus;
    bool m_reviewStatusHasBeenSet = false;

    Stage m_stage;
    bool m_stageHasBeenSet = false;

    Aws::String m_targetCloseDate;
    bool m_targetCloseDateHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
