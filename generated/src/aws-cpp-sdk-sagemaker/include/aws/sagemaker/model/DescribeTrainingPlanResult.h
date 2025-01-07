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
    AWS_SAGEMAKER_API DescribeTrainingPlanResult();
    AWS_SAGEMAKER_API DescribeTrainingPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeTrainingPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN); of the training plan.</p>
     */
    inline const Aws::String& GetTrainingPlanArn() const{ return m_trainingPlanArn; }
    inline void SetTrainingPlanArn(const Aws::String& value) { m_trainingPlanArn = value; }
    inline void SetTrainingPlanArn(Aws::String&& value) { m_trainingPlanArn = std::move(value); }
    inline void SetTrainingPlanArn(const char* value) { m_trainingPlanArn.assign(value); }
    inline DescribeTrainingPlanResult& WithTrainingPlanArn(const Aws::String& value) { SetTrainingPlanArn(value); return *this;}
    inline DescribeTrainingPlanResult& WithTrainingPlanArn(Aws::String&& value) { SetTrainingPlanArn(std::move(value)); return *this;}
    inline DescribeTrainingPlanResult& WithTrainingPlanArn(const char* value) { SetTrainingPlanArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the training plan.</p>
     */
    inline const Aws::String& GetTrainingPlanName() const{ return m_trainingPlanName; }
    inline void SetTrainingPlanName(const Aws::String& value) { m_trainingPlanName = value; }
    inline void SetTrainingPlanName(Aws::String&& value) { m_trainingPlanName = std::move(value); }
    inline void SetTrainingPlanName(const char* value) { m_trainingPlanName.assign(value); }
    inline DescribeTrainingPlanResult& WithTrainingPlanName(const Aws::String& value) { SetTrainingPlanName(value); return *this;}
    inline DescribeTrainingPlanResult& WithTrainingPlanName(Aws::String&& value) { SetTrainingPlanName(std::move(value)); return *this;}
    inline DescribeTrainingPlanResult& WithTrainingPlanName(const char* value) { SetTrainingPlanName(value); return *this;}
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
    inline void SetStatus(const TrainingPlanStatus& value) { m_status = value; }
    inline void SetStatus(TrainingPlanStatus&& value) { m_status = std::move(value); }
    inline DescribeTrainingPlanResult& WithStatus(const TrainingPlanStatus& value) { SetStatus(value); return *this;}
    inline DescribeTrainingPlanResult& WithStatus(TrainingPlanStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message providing additional information about the current status of the
     * training plan.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline DescribeTrainingPlanResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline DescribeTrainingPlanResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline DescribeTrainingPlanResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of whole hours in the total duration for this training plan.</p>
     */
    inline long long GetDurationHours() const{ return m_durationHours; }
    inline void SetDurationHours(long long value) { m_durationHours = value; }
    inline DescribeTrainingPlanResult& WithDurationHours(long long value) { SetDurationHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional minutes beyond whole hours in the total duration for this
     * training plan.</p>
     */
    inline long long GetDurationMinutes() const{ return m_durationMinutes; }
    inline void SetDurationMinutes(long long value) { m_durationMinutes = value; }
    inline DescribeTrainingPlanResult& WithDurationMinutes(long long value) { SetDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the training plan.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline DescribeTrainingPlanResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline DescribeTrainingPlanResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the training plan.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline DescribeTrainingPlanResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline DescribeTrainingPlanResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront fee for the training plan.</p>
     */
    inline const Aws::String& GetUpfrontFee() const{ return m_upfrontFee; }
    inline void SetUpfrontFee(const Aws::String& value) { m_upfrontFee = value; }
    inline void SetUpfrontFee(Aws::String&& value) { m_upfrontFee = std::move(value); }
    inline void SetUpfrontFee(const char* value) { m_upfrontFee.assign(value); }
    inline DescribeTrainingPlanResult& WithUpfrontFee(const Aws::String& value) { SetUpfrontFee(value); return *this;}
    inline DescribeTrainingPlanResult& WithUpfrontFee(Aws::String&& value) { SetUpfrontFee(std::move(value)); return *this;}
    inline DescribeTrainingPlanResult& WithUpfrontFee(const char* value) { SetUpfrontFee(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code for the upfront fee (e.g., USD).</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCode.assign(value); }
    inline DescribeTrainingPlanResult& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline DescribeTrainingPlanResult& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline DescribeTrainingPlanResult& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of instances reserved in this training plan.</p>
     */
    inline int GetTotalInstanceCount() const{ return m_totalInstanceCount; }
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCount = value; }
    inline DescribeTrainingPlanResult& WithTotalInstanceCount(int value) { SetTotalInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances currently available for use in this training
     * plan.</p>
     */
    inline int GetAvailableInstanceCount() const{ return m_availableInstanceCount; }
    inline void SetAvailableInstanceCount(int value) { m_availableInstanceCount = value; }
    inline DescribeTrainingPlanResult& WithAvailableInstanceCount(int value) { SetAvailableInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances currently in use from this training plan.</p>
     */
    inline int GetInUseInstanceCount() const{ return m_inUseInstanceCount; }
    inline void SetInUseInstanceCount(int value) { m_inUseInstanceCount = value; }
    inline DescribeTrainingPlanResult& WithInUseInstanceCount(int value) { SetInUseInstanceCount(value); return *this;}
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
    inline const Aws::Vector<SageMakerResourceName>& GetTargetResources() const{ return m_targetResources; }
    inline void SetTargetResources(const Aws::Vector<SageMakerResourceName>& value) { m_targetResources = value; }
    inline void SetTargetResources(Aws::Vector<SageMakerResourceName>&& value) { m_targetResources = std::move(value); }
    inline DescribeTrainingPlanResult& WithTargetResources(const Aws::Vector<SageMakerResourceName>& value) { SetTargetResources(value); return *this;}
    inline DescribeTrainingPlanResult& WithTargetResources(Aws::Vector<SageMakerResourceName>&& value) { SetTargetResources(std::move(value)); return *this;}
    inline DescribeTrainingPlanResult& AddTargetResources(const SageMakerResourceName& value) { m_targetResources.push_back(value); return *this; }
    inline DescribeTrainingPlanResult& AddTargetResources(SageMakerResourceName&& value) { m_targetResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of Reserved Capacity providing the underlying compute resources of
     * the plan. </p>
     */
    inline const Aws::Vector<ReservedCapacitySummary>& GetReservedCapacitySummaries() const{ return m_reservedCapacitySummaries; }
    inline void SetReservedCapacitySummaries(const Aws::Vector<ReservedCapacitySummary>& value) { m_reservedCapacitySummaries = value; }
    inline void SetReservedCapacitySummaries(Aws::Vector<ReservedCapacitySummary>&& value) { m_reservedCapacitySummaries = std::move(value); }
    inline DescribeTrainingPlanResult& WithReservedCapacitySummaries(const Aws::Vector<ReservedCapacitySummary>& value) { SetReservedCapacitySummaries(value); return *this;}
    inline DescribeTrainingPlanResult& WithReservedCapacitySummaries(Aws::Vector<ReservedCapacitySummary>&& value) { SetReservedCapacitySummaries(std::move(value)); return *this;}
    inline DescribeTrainingPlanResult& AddReservedCapacitySummaries(const ReservedCapacitySummary& value) { m_reservedCapacitySummaries.push_back(value); return *this; }
    inline DescribeTrainingPlanResult& AddReservedCapacitySummaries(ReservedCapacitySummary&& value) { m_reservedCapacitySummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTrainingPlanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTrainingPlanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTrainingPlanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_trainingPlanArn;

    Aws::String m_trainingPlanName;

    TrainingPlanStatus m_status;

    Aws::String m_statusMessage;

    long long m_durationHours;

    long long m_durationMinutes;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    Aws::String m_upfrontFee;

    Aws::String m_currencyCode;

    int m_totalInstanceCount;

    int m_availableInstanceCount;

    int m_inUseInstanceCount;

    Aws::Vector<SageMakerResourceName> m_targetResources;

    Aws::Vector<ReservedCapacitySummary> m_reservedCapacitySummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
