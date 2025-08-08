/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrainingPlanStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/SageMakerResourceName.h>
#include <aws/sagemaker/model/ReservedCapacitySummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeTrainingPlanResult
  {
  public:
    AWS_SAGEMAKER_API DescribeTrainingPlanResult() = default;
    AWS_SAGEMAKER_API DescribeTrainingPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeTrainingPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN); of the training plan.</p>
     */
    inline const Aws::String& GetTrainingPlanArn() const { return m_trainingPlanArn; }
    template<typename TrainingPlanArnT = Aws::String>
    void SetTrainingPlanArn(TrainingPlanArnT&& value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn = std::forward<TrainingPlanArnT>(value); }
    template<typename TrainingPlanArnT = Aws::String>
    DescribeTrainingPlanResult& WithTrainingPlanArn(TrainingPlanArnT&& value) { SetTrainingPlanArn(std::forward<TrainingPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the training plan.</p>
     */
    inline const Aws::String& GetTrainingPlanName() const { return m_trainingPlanName; }
    template<typename TrainingPlanNameT = Aws::String>
    void SetTrainingPlanName(TrainingPlanNameT&& value) { m_trainingPlanNameHasBeenSet = true; m_trainingPlanName = std::forward<TrainingPlanNameT>(value); }
    template<typename TrainingPlanNameT = Aws::String>
    DescribeTrainingPlanResult& WithTrainingPlanName(TrainingPlanNameT&& value) { SetTrainingPlanName(std::forward<TrainingPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the training plan (e.g., Pending, Active, Expired). To
     * see the complete list of status values available for a training plan, refer to
     * the <code>Status</code> attribute within the <code> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TrainingPlanSummary.html">TrainingPlanSummary</a>
     * </code> object.</p>
     */
    inline TrainingPlanStatus GetStatus() const { return m_status; }
    inline void SetStatus(TrainingPlanStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeTrainingPlanResult& WithStatus(TrainingPlanStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message providing additional information about the current status of the
     * training plan.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    DescribeTrainingPlanResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of whole hours in the total duration for this training plan.</p>
     */
    inline long long GetDurationHours() const { return m_durationHours; }
    inline void SetDurationHours(long long value) { m_durationHoursHasBeenSet = true; m_durationHours = value; }
    inline DescribeTrainingPlanResult& WithDurationHours(long long value) { SetDurationHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional minutes beyond whole hours in the total duration for this
     * training plan.</p>
     */
    inline long long GetDurationMinutes() const { return m_durationMinutes; }
    inline void SetDurationMinutes(long long value) { m_durationMinutesHasBeenSet = true; m_durationMinutes = value; }
    inline DescribeTrainingPlanResult& WithDurationMinutes(long long value) { SetDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the training plan.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    DescribeTrainingPlanResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the training plan.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    DescribeTrainingPlanResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront fee for the training plan.</p>
     */
    inline const Aws::String& GetUpfrontFee() const { return m_upfrontFee; }
    template<typename UpfrontFeeT = Aws::String>
    void SetUpfrontFee(UpfrontFeeT&& value) { m_upfrontFeeHasBeenSet = true; m_upfrontFee = std::forward<UpfrontFeeT>(value); }
    template<typename UpfrontFeeT = Aws::String>
    DescribeTrainingPlanResult& WithUpfrontFee(UpfrontFeeT&& value) { SetUpfrontFee(std::forward<UpfrontFeeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code for the upfront fee (e.g., USD).</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    DescribeTrainingPlanResult& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of instances reserved in this training plan.</p>
     */
    inline int GetTotalInstanceCount() const { return m_totalInstanceCount; }
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCountHasBeenSet = true; m_totalInstanceCount = value; }
    inline DescribeTrainingPlanResult& WithTotalInstanceCount(int value) { SetTotalInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances currently available for use in this training
     * plan.</p>
     */
    inline int GetAvailableInstanceCount() const { return m_availableInstanceCount; }
    inline void SetAvailableInstanceCount(int value) { m_availableInstanceCountHasBeenSet = true; m_availableInstanceCount = value; }
    inline DescribeTrainingPlanResult& WithAvailableInstanceCount(int value) { SetAvailableInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances currently in use from this training plan.</p>
     */
    inline int GetInUseInstanceCount() const { return m_inUseInstanceCount; }
    inline void SetInUseInstanceCount(int value) { m_inUseInstanceCountHasBeenSet = true; m_inUseInstanceCount = value; }
    inline DescribeTrainingPlanResult& WithInUseInstanceCount(int value) { SetInUseInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in the training plan that are currently in an
     * unhealthy state.</p>
     */
    inline int GetUnhealthyInstanceCount() const { return m_unhealthyInstanceCount; }
    inline void SetUnhealthyInstanceCount(int value) { m_unhealthyInstanceCountHasBeenSet = true; m_unhealthyInstanceCount = value; }
    inline DescribeTrainingPlanResult& WithUnhealthyInstanceCount(int value) { SetUnhealthyInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of available spare instances in the training plan.</p>
     */
    inline int GetAvailableSpareInstanceCount() const { return m_availableSpareInstanceCount; }
    inline void SetAvailableSpareInstanceCount(int value) { m_availableSpareInstanceCountHasBeenSet = true; m_availableSpareInstanceCount = value; }
    inline DescribeTrainingPlanResult& WithAvailableSpareInstanceCount(int value) { SetAvailableSpareInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of UltraServers reserved to this training plan.</p>
     */
    inline int GetTotalUltraServerCount() const { return m_totalUltraServerCount; }
    inline void SetTotalUltraServerCount(int value) { m_totalUltraServerCountHasBeenSet = true; m_totalUltraServerCount = value; }
    inline DescribeTrainingPlanResult& WithTotalUltraServerCount(int value) { SetTotalUltraServerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target resources (e.g., SageMaker Training Jobs, SageMaker HyperPod) that
     * can use this training plan.</p> <p>Training plans are specific to their target
     * resource.</p> <ul> <li> <p>A training plan designed for SageMaker training jobs
     * can only be used to schedule and run training jobs.</p> </li> <li> <p>A training
     * plan for HyperPod clusters can be used exclusively to provide compute resources
     * to a cluster's instance group.</p> </li> </ul>
     */
    inline const Aws::Vector<SageMakerResourceName>& GetTargetResources() const { return m_targetResources; }
    template<typename TargetResourcesT = Aws::Vector<SageMakerResourceName>>
    void SetTargetResources(TargetResourcesT&& value) { m_targetResourcesHasBeenSet = true; m_targetResources = std::forward<TargetResourcesT>(value); }
    template<typename TargetResourcesT = Aws::Vector<SageMakerResourceName>>
    DescribeTrainingPlanResult& WithTargetResources(TargetResourcesT&& value) { SetTargetResources(std::forward<TargetResourcesT>(value)); return *this;}
    inline DescribeTrainingPlanResult& AddTargetResources(SageMakerResourceName value) { m_targetResourcesHasBeenSet = true; m_targetResources.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of Reserved Capacity providing the underlying compute resources of
     * the plan. </p>
     */
    inline const Aws::Vector<ReservedCapacitySummary>& GetReservedCapacitySummaries() const { return m_reservedCapacitySummaries; }
    template<typename ReservedCapacitySummariesT = Aws::Vector<ReservedCapacitySummary>>
    void SetReservedCapacitySummaries(ReservedCapacitySummariesT&& value) { m_reservedCapacitySummariesHasBeenSet = true; m_reservedCapacitySummaries = std::forward<ReservedCapacitySummariesT>(value); }
    template<typename ReservedCapacitySummariesT = Aws::Vector<ReservedCapacitySummary>>
    DescribeTrainingPlanResult& WithReservedCapacitySummaries(ReservedCapacitySummariesT&& value) { SetReservedCapacitySummaries(std::forward<ReservedCapacitySummariesT>(value)); return *this;}
    template<typename ReservedCapacitySummariesT = ReservedCapacitySummary>
    DescribeTrainingPlanResult& AddReservedCapacitySummaries(ReservedCapacitySummariesT&& value) { m_reservedCapacitySummariesHasBeenSet = true; m_reservedCapacitySummaries.emplace_back(std::forward<ReservedCapacitySummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTrainingPlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trainingPlanArn;
    bool m_trainingPlanArnHasBeenSet = false;

    Aws::String m_trainingPlanName;
    bool m_trainingPlanNameHasBeenSet = false;

    TrainingPlanStatus m_status{TrainingPlanStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    long long m_durationHours{0};
    bool m_durationHoursHasBeenSet = false;

    long long m_durationMinutes{0};
    bool m_durationMinutesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_upfrontFee;
    bool m_upfrontFeeHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_totalInstanceCount{0};
    bool m_totalInstanceCountHasBeenSet = false;

    int m_availableInstanceCount{0};
    bool m_availableInstanceCountHasBeenSet = false;

    int m_inUseInstanceCount{0};
    bool m_inUseInstanceCountHasBeenSet = false;

    int m_unhealthyInstanceCount{0};
    bool m_unhealthyInstanceCountHasBeenSet = false;

    int m_availableSpareInstanceCount{0};
    bool m_availableSpareInstanceCountHasBeenSet = false;

    int m_totalUltraServerCount{0};
    bool m_totalUltraServerCountHasBeenSet = false;

    Aws::Vector<SageMakerResourceName> m_targetResources;
    bool m_targetResourcesHasBeenSet = false;

    Aws::Vector<ReservedCapacitySummary> m_reservedCapacitySummaries;
    bool m_reservedCapacitySummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
