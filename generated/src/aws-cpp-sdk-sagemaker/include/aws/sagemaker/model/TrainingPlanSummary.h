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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Details of the training plan.</p> <p>For more information about how to
   * reserve GPU capacity for your SageMaker HyperPod clusters using Amazon SageMaker
   * Training Plan, see <code> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrainingPlan.html">CreateTrainingPlan</a>
   * </code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingPlanSummary">AWS
   * API Reference</a></p>
   */
  class TrainingPlanSummary
  {
  public:
    AWS_SAGEMAKER_API TrainingPlanSummary();
    AWS_SAGEMAKER_API TrainingPlanSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrainingPlanSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN); of the training plan.</p>
     */
    inline const Aws::String& GetTrainingPlanArn() const{ return m_trainingPlanArn; }
    inline bool TrainingPlanArnHasBeenSet() const { return m_trainingPlanArnHasBeenSet; }
    inline void SetTrainingPlanArn(const Aws::String& value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn = value; }
    inline void SetTrainingPlanArn(Aws::String&& value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn = std::move(value); }
    inline void SetTrainingPlanArn(const char* value) { m_trainingPlanArnHasBeenSet = true; m_trainingPlanArn.assign(value); }
    inline TrainingPlanSummary& WithTrainingPlanArn(const Aws::String& value) { SetTrainingPlanArn(value); return *this;}
    inline TrainingPlanSummary& WithTrainingPlanArn(Aws::String&& value) { SetTrainingPlanArn(std::move(value)); return *this;}
    inline TrainingPlanSummary& WithTrainingPlanArn(const char* value) { SetTrainingPlanArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the training plan.</p>
     */
    inline const Aws::String& GetTrainingPlanName() const{ return m_trainingPlanName; }
    inline bool TrainingPlanNameHasBeenSet() const { return m_trainingPlanNameHasBeenSet; }
    inline void SetTrainingPlanName(const Aws::String& value) { m_trainingPlanNameHasBeenSet = true; m_trainingPlanName = value; }
    inline void SetTrainingPlanName(Aws::String&& value) { m_trainingPlanNameHasBeenSet = true; m_trainingPlanName = std::move(value); }
    inline void SetTrainingPlanName(const char* value) { m_trainingPlanNameHasBeenSet = true; m_trainingPlanName.assign(value); }
    inline TrainingPlanSummary& WithTrainingPlanName(const Aws::String& value) { SetTrainingPlanName(value); return *this;}
    inline TrainingPlanSummary& WithTrainingPlanName(Aws::String&& value) { SetTrainingPlanName(std::move(value)); return *this;}
    inline TrainingPlanSummary& WithTrainingPlanName(const char* value) { SetTrainingPlanName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the training plan (e.g., Pending, Active, Expired). To
     * see the complete list of status values available for a training plan, refer to
     * the <code>Status</code> attribute within the <code> <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_TrainingPlanSummary.html">TrainingPlanSummary</a>
     * </code> object.</p>
     */
    inline const TrainingPlanStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TrainingPlanStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TrainingPlanStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TrainingPlanSummary& WithStatus(const TrainingPlanStatus& value) { SetStatus(value); return *this;}
    inline TrainingPlanSummary& WithStatus(TrainingPlanStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message providing additional information about the current status of the
     * training plan.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline TrainingPlanSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline TrainingPlanSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline TrainingPlanSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of whole hours in the total duration for this training plan.</p>
     */
    inline long long GetDurationHours() const{ return m_durationHours; }
    inline bool DurationHoursHasBeenSet() const { return m_durationHoursHasBeenSet; }
    inline void SetDurationHours(long long value) { m_durationHoursHasBeenSet = true; m_durationHours = value; }
    inline TrainingPlanSummary& WithDurationHours(long long value) { SetDurationHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional minutes beyond whole hours in the total duration for this
     * training plan.</p>
     */
    inline long long GetDurationMinutes() const{ return m_durationMinutes; }
    inline bool DurationMinutesHasBeenSet() const { return m_durationMinutesHasBeenSet; }
    inline void SetDurationMinutes(long long value) { m_durationMinutesHasBeenSet = true; m_durationMinutes = value; }
    inline TrainingPlanSummary& WithDurationMinutes(long long value) { SetDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the training plan.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline TrainingPlanSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline TrainingPlanSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the training plan.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline TrainingPlanSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline TrainingPlanSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront fee for the training plan.</p>
     */
    inline const Aws::String& GetUpfrontFee() const{ return m_upfrontFee; }
    inline bool UpfrontFeeHasBeenSet() const { return m_upfrontFeeHasBeenSet; }
    inline void SetUpfrontFee(const Aws::String& value) { m_upfrontFeeHasBeenSet = true; m_upfrontFee = value; }
    inline void SetUpfrontFee(Aws::String&& value) { m_upfrontFeeHasBeenSet = true; m_upfrontFee = std::move(value); }
    inline void SetUpfrontFee(const char* value) { m_upfrontFeeHasBeenSet = true; m_upfrontFee.assign(value); }
    inline TrainingPlanSummary& WithUpfrontFee(const Aws::String& value) { SetUpfrontFee(value); return *this;}
    inline TrainingPlanSummary& WithUpfrontFee(Aws::String&& value) { SetUpfrontFee(std::move(value)); return *this;}
    inline TrainingPlanSummary& WithUpfrontFee(const char* value) { SetUpfrontFee(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code for the upfront fee (e.g., USD).</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }
    inline TrainingPlanSummary& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline TrainingPlanSummary& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline TrainingPlanSummary& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of instances reserved in this training plan.</p>
     */
    inline int GetTotalInstanceCount() const{ return m_totalInstanceCount; }
    inline bool TotalInstanceCountHasBeenSet() const { return m_totalInstanceCountHasBeenSet; }
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCountHasBeenSet = true; m_totalInstanceCount = value; }
    inline TrainingPlanSummary& WithTotalInstanceCount(int value) { SetTotalInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances currently available for use in this training
     * plan.</p>
     */
    inline int GetAvailableInstanceCount() const{ return m_availableInstanceCount; }
    inline bool AvailableInstanceCountHasBeenSet() const { return m_availableInstanceCountHasBeenSet; }
    inline void SetAvailableInstanceCount(int value) { m_availableInstanceCountHasBeenSet = true; m_availableInstanceCount = value; }
    inline TrainingPlanSummary& WithAvailableInstanceCount(int value) { SetAvailableInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances currently in use from this training plan.</p>
     */
    inline int GetInUseInstanceCount() const{ return m_inUseInstanceCount; }
    inline bool InUseInstanceCountHasBeenSet() const { return m_inUseInstanceCountHasBeenSet; }
    inline void SetInUseInstanceCount(int value) { m_inUseInstanceCountHasBeenSet = true; m_inUseInstanceCount = value; }
    inline TrainingPlanSummary& WithInUseInstanceCount(int value) { SetInUseInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target resources (e.g., training jobs, HyperPod clusters) that can use
     * this training plan.</p> <p>Training plans are specific to their target
     * resource.</p> <ul> <li> <p>A training plan designed for SageMaker training jobs
     * can only be used to schedule and run training jobs.</p> </li> <li> <p>A training
     * plan for HyperPod clusters can be used exclusively to provide compute resources
     * to a cluster's instance group.</p> </li> </ul>
     */
    inline const Aws::Vector<SageMakerResourceName>& GetTargetResources() const{ return m_targetResources; }
    inline bool TargetResourcesHasBeenSet() const { return m_targetResourcesHasBeenSet; }
    inline void SetTargetResources(const Aws::Vector<SageMakerResourceName>& value) { m_targetResourcesHasBeenSet = true; m_targetResources = value; }
    inline void SetTargetResources(Aws::Vector<SageMakerResourceName>&& value) { m_targetResourcesHasBeenSet = true; m_targetResources = std::move(value); }
    inline TrainingPlanSummary& WithTargetResources(const Aws::Vector<SageMakerResourceName>& value) { SetTargetResources(value); return *this;}
    inline TrainingPlanSummary& WithTargetResources(Aws::Vector<SageMakerResourceName>&& value) { SetTargetResources(std::move(value)); return *this;}
    inline TrainingPlanSummary& AddTargetResources(const SageMakerResourceName& value) { m_targetResourcesHasBeenSet = true; m_targetResources.push_back(value); return *this; }
    inline TrainingPlanSummary& AddTargetResources(SageMakerResourceName&& value) { m_targetResourcesHasBeenSet = true; m_targetResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of reserved capacities associated with this training plan, including
     * details such as instance types, counts, and availability zones.</p>
     */
    inline const Aws::Vector<ReservedCapacitySummary>& GetReservedCapacitySummaries() const{ return m_reservedCapacitySummaries; }
    inline bool ReservedCapacitySummariesHasBeenSet() const { return m_reservedCapacitySummariesHasBeenSet; }
    inline void SetReservedCapacitySummaries(const Aws::Vector<ReservedCapacitySummary>& value) { m_reservedCapacitySummariesHasBeenSet = true; m_reservedCapacitySummaries = value; }
    inline void SetReservedCapacitySummaries(Aws::Vector<ReservedCapacitySummary>&& value) { m_reservedCapacitySummariesHasBeenSet = true; m_reservedCapacitySummaries = std::move(value); }
    inline TrainingPlanSummary& WithReservedCapacitySummaries(const Aws::Vector<ReservedCapacitySummary>& value) { SetReservedCapacitySummaries(value); return *this;}
    inline TrainingPlanSummary& WithReservedCapacitySummaries(Aws::Vector<ReservedCapacitySummary>&& value) { SetReservedCapacitySummaries(std::move(value)); return *this;}
    inline TrainingPlanSummary& AddReservedCapacitySummaries(const ReservedCapacitySummary& value) { m_reservedCapacitySummariesHasBeenSet = true; m_reservedCapacitySummaries.push_back(value); return *this; }
    inline TrainingPlanSummary& AddReservedCapacitySummaries(ReservedCapacitySummary&& value) { m_reservedCapacitySummariesHasBeenSet = true; m_reservedCapacitySummaries.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_trainingPlanArn;
    bool m_trainingPlanArnHasBeenSet = false;

    Aws::String m_trainingPlanName;
    bool m_trainingPlanNameHasBeenSet = false;

    TrainingPlanStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    long long m_durationHours;
    bool m_durationHoursHasBeenSet = false;

    long long m_durationMinutes;
    bool m_durationMinutesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_upfrontFee;
    bool m_upfrontFeeHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_totalInstanceCount;
    bool m_totalInstanceCountHasBeenSet = false;

    int m_availableInstanceCount;
    bool m_availableInstanceCountHasBeenSet = false;

    int m_inUseInstanceCount;
    bool m_inUseInstanceCountHasBeenSet = false;

    Aws::Vector<SageMakerResourceName> m_targetResources;
    bool m_targetResourcesHasBeenSet = false;

    Aws::Vector<ReservedCapacitySummary> m_reservedCapacitySummaries;
    bool m_reservedCapacitySummariesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
