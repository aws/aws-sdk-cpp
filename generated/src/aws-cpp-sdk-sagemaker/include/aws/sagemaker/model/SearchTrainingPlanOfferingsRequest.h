/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/model/ReservedCapacityInstanceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/SageMakerResourceName.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class SearchTrainingPlanOfferingsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API SearchTrainingPlanOfferingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchTrainingPlanOfferings"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The type of instance you want to search for in the available training plan
     * offerings. This field allows you to filter the search results based on the
     * specific compute resources you require for your SageMaker training jobs or
     * SageMaker HyperPod clusters. When searching for training plan offerings,
     * specifying the instance type helps you find Reserved Instances that match your
     * computational needs.</p>
     */
    inline const ReservedCapacityInstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const ReservedCapacityInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(ReservedCapacityInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline SearchTrainingPlanOfferingsRequest& WithInstanceType(const ReservedCapacityInstanceType& value) { SetInstanceType(value); return *this;}
    inline SearchTrainingPlanOfferingsRequest& WithInstanceType(ReservedCapacityInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances you want to reserve in the training plan offerings.
     * This allows you to specify the quantity of compute resources needed for your
     * SageMaker training jobs or SageMaker HyperPod clusters, helping you find
     * reserved capacity offerings that match your requirements.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline SearchTrainingPlanOfferingsRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to search for training plan offerings with a start time after a
     * specified date.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimeAfter() const{ return m_startTimeAfter; }
    inline bool StartTimeAfterHasBeenSet() const { return m_startTimeAfterHasBeenSet; }
    inline void SetStartTimeAfter(const Aws::Utils::DateTime& value) { m_startTimeAfterHasBeenSet = true; m_startTimeAfter = value; }
    inline void SetStartTimeAfter(Aws::Utils::DateTime&& value) { m_startTimeAfterHasBeenSet = true; m_startTimeAfter = std::move(value); }
    inline SearchTrainingPlanOfferingsRequest& WithStartTimeAfter(const Aws::Utils::DateTime& value) { SetStartTimeAfter(value); return *this;}
    inline SearchTrainingPlanOfferingsRequest& WithStartTimeAfter(Aws::Utils::DateTime&& value) { SetStartTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to search for reserved capacity offerings with an end time before a
     * specified date.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimeBefore() const{ return m_endTimeBefore; }
    inline bool EndTimeBeforeHasBeenSet() const { return m_endTimeBeforeHasBeenSet; }
    inline void SetEndTimeBefore(const Aws::Utils::DateTime& value) { m_endTimeBeforeHasBeenSet = true; m_endTimeBefore = value; }
    inline void SetEndTimeBefore(Aws::Utils::DateTime&& value) { m_endTimeBeforeHasBeenSet = true; m_endTimeBefore = std::move(value); }
    inline SearchTrainingPlanOfferingsRequest& WithEndTimeBefore(const Aws::Utils::DateTime& value) { SetEndTimeBefore(value); return *this;}
    inline SearchTrainingPlanOfferingsRequest& WithEndTimeBefore(Aws::Utils::DateTime&& value) { SetEndTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired duration in hours for the training plan offerings.</p>
     */
    inline long long GetDurationHours() const{ return m_durationHours; }
    inline bool DurationHoursHasBeenSet() const { return m_durationHoursHasBeenSet; }
    inline void SetDurationHours(long long value) { m_durationHoursHasBeenSet = true; m_durationHours = value; }
    inline SearchTrainingPlanOfferingsRequest& WithDurationHours(long long value) { SetDurationHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target resources (e.g., SageMaker Training Jobs, SageMaker HyperPod) to
     * search for in the offerings.</p> <p>Training plans are specific to their target
     * resource.</p> <ul> <li> <p>A training plan designed for SageMaker training jobs
     * can only be used to schedule and run training jobs.</p> </li> <li> <p>A training
     * plan for HyperPod clusters can be used exclusively to provide compute resources
     * to a cluster's instance group.</p> </li> </ul>
     */
    inline const Aws::Vector<SageMakerResourceName>& GetTargetResources() const{ return m_targetResources; }
    inline bool TargetResourcesHasBeenSet() const { return m_targetResourcesHasBeenSet; }
    inline void SetTargetResources(const Aws::Vector<SageMakerResourceName>& value) { m_targetResourcesHasBeenSet = true; m_targetResources = value; }
    inline void SetTargetResources(Aws::Vector<SageMakerResourceName>&& value) { m_targetResourcesHasBeenSet = true; m_targetResources = std::move(value); }
    inline SearchTrainingPlanOfferingsRequest& WithTargetResources(const Aws::Vector<SageMakerResourceName>& value) { SetTargetResources(value); return *this;}
    inline SearchTrainingPlanOfferingsRequest& WithTargetResources(Aws::Vector<SageMakerResourceName>&& value) { SetTargetResources(std::move(value)); return *this;}
    inline SearchTrainingPlanOfferingsRequest& AddTargetResources(const SageMakerResourceName& value) { m_targetResourcesHasBeenSet = true; m_targetResources.push_back(value); return *this; }
    inline SearchTrainingPlanOfferingsRequest& AddTargetResources(SageMakerResourceName&& value) { m_targetResourcesHasBeenSet = true; m_targetResources.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ReservedCapacityInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::Utils::DateTime m_startTimeAfter;
    bool m_startTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_endTimeBefore;
    bool m_endTimeBeforeHasBeenSet = false;

    long long m_durationHours;
    bool m_durationHoursHasBeenSet = false;

    Aws::Vector<SageMakerResourceName> m_targetResources;
    bool m_targetResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
