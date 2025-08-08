/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/model/ReservedCapacityInstanceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_SAGEMAKER_API SearchTrainingPlanOfferingsRequest() = default;

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
    inline ReservedCapacityInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(ReservedCapacityInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline SearchTrainingPlanOfferingsRequest& WithInstanceType(ReservedCapacityInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances you want to reserve in the training plan offerings.
     * This allows you to specify the quantity of compute resources needed for your
     * SageMaker training jobs or SageMaker HyperPod clusters, helping you find
     * reserved capacity offerings that match your requirements.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline SearchTrainingPlanOfferingsRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of UltraServer to search for, such as ml.u-p6e-gb200x72.</p>
     */
    inline const Aws::String& GetUltraServerType() const { return m_ultraServerType; }
    inline bool UltraServerTypeHasBeenSet() const { return m_ultraServerTypeHasBeenSet; }
    template<typename UltraServerTypeT = Aws::String>
    void SetUltraServerType(UltraServerTypeT&& value) { m_ultraServerTypeHasBeenSet = true; m_ultraServerType = std::forward<UltraServerTypeT>(value); }
    template<typename UltraServerTypeT = Aws::String>
    SearchTrainingPlanOfferingsRequest& WithUltraServerType(UltraServerTypeT&& value) { SetUltraServerType(std::forward<UltraServerTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of UltraServers to search for.</p>
     */
    inline int GetUltraServerCount() const { return m_ultraServerCount; }
    inline bool UltraServerCountHasBeenSet() const { return m_ultraServerCountHasBeenSet; }
    inline void SetUltraServerCount(int value) { m_ultraServerCountHasBeenSet = true; m_ultraServerCount = value; }
    inline SearchTrainingPlanOfferingsRequest& WithUltraServerCount(int value) { SetUltraServerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to search for training plan offerings with a start time after a
     * specified date.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimeAfter() const { return m_startTimeAfter; }
    inline bool StartTimeAfterHasBeenSet() const { return m_startTimeAfterHasBeenSet; }
    template<typename StartTimeAfterT = Aws::Utils::DateTime>
    void SetStartTimeAfter(StartTimeAfterT&& value) { m_startTimeAfterHasBeenSet = true; m_startTimeAfter = std::forward<StartTimeAfterT>(value); }
    template<typename StartTimeAfterT = Aws::Utils::DateTime>
    SearchTrainingPlanOfferingsRequest& WithStartTimeAfter(StartTimeAfterT&& value) { SetStartTimeAfter(std::forward<StartTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to search for reserved capacity offerings with an end time before a
     * specified date.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimeBefore() const { return m_endTimeBefore; }
    inline bool EndTimeBeforeHasBeenSet() const { return m_endTimeBeforeHasBeenSet; }
    template<typename EndTimeBeforeT = Aws::Utils::DateTime>
    void SetEndTimeBefore(EndTimeBeforeT&& value) { m_endTimeBeforeHasBeenSet = true; m_endTimeBefore = std::forward<EndTimeBeforeT>(value); }
    template<typename EndTimeBeforeT = Aws::Utils::DateTime>
    SearchTrainingPlanOfferingsRequest& WithEndTimeBefore(EndTimeBeforeT&& value) { SetEndTimeBefore(std::forward<EndTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired duration in hours for the training plan offerings.</p>
     */
    inline long long GetDurationHours() const { return m_durationHours; }
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
    inline const Aws::Vector<SageMakerResourceName>& GetTargetResources() const { return m_targetResources; }
    inline bool TargetResourcesHasBeenSet() const { return m_targetResourcesHasBeenSet; }
    template<typename TargetResourcesT = Aws::Vector<SageMakerResourceName>>
    void SetTargetResources(TargetResourcesT&& value) { m_targetResourcesHasBeenSet = true; m_targetResources = std::forward<TargetResourcesT>(value); }
    template<typename TargetResourcesT = Aws::Vector<SageMakerResourceName>>
    SearchTrainingPlanOfferingsRequest& WithTargetResources(TargetResourcesT&& value) { SetTargetResources(std::forward<TargetResourcesT>(value)); return *this;}
    inline SearchTrainingPlanOfferingsRequest& AddTargetResources(SageMakerResourceName value) { m_targetResourcesHasBeenSet = true; m_targetResources.push_back(value); return *this; }
    ///@}
  private:

    ReservedCapacityInstanceType m_instanceType{ReservedCapacityInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_ultraServerType;
    bool m_ultraServerTypeHasBeenSet = false;

    int m_ultraServerCount{0};
    bool m_ultraServerCountHasBeenSet = false;

    Aws::Utils::DateTime m_startTimeAfter{};
    bool m_startTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_endTimeBefore{};
    bool m_endTimeBeforeHasBeenSet = false;

    long long m_durationHours{0};
    bool m_durationHoursHasBeenSet = false;

    Aws::Vector<SageMakerResourceName> m_targetResources;
    bool m_targetResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
