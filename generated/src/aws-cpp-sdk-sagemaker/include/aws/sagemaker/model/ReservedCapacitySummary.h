/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ReservedCapacityInstanceType.h>
#include <aws/sagemaker/model/ReservedCapacityStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Details of a reserved capacity for the training plan.</p> <p>For more
   * information about how to reserve GPU capacity for your SageMaker HyperPod
   * clusters using Amazon SageMaker Training Plan, see <code> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrainingPlan.html">CreateTrainingPlan</a>
   * </code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ReservedCapacitySummary">AWS
   * API Reference</a></p>
   */
  class ReservedCapacitySummary
  {
  public:
    AWS_SAGEMAKER_API ReservedCapacitySummary();
    AWS_SAGEMAKER_API ReservedCapacitySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ReservedCapacitySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN); of the reserved capacity.</p>
     */
    inline const Aws::String& GetReservedCapacityArn() const{ return m_reservedCapacityArn; }
    inline bool ReservedCapacityArnHasBeenSet() const { return m_reservedCapacityArnHasBeenSet; }
    inline void SetReservedCapacityArn(const Aws::String& value) { m_reservedCapacityArnHasBeenSet = true; m_reservedCapacityArn = value; }
    inline void SetReservedCapacityArn(Aws::String&& value) { m_reservedCapacityArnHasBeenSet = true; m_reservedCapacityArn = std::move(value); }
    inline void SetReservedCapacityArn(const char* value) { m_reservedCapacityArnHasBeenSet = true; m_reservedCapacityArn.assign(value); }
    inline ReservedCapacitySummary& WithReservedCapacityArn(const Aws::String& value) { SetReservedCapacityArn(value); return *this;}
    inline ReservedCapacitySummary& WithReservedCapacityArn(Aws::String&& value) { SetReservedCapacityArn(std::move(value)); return *this;}
    inline ReservedCapacitySummary& WithReservedCapacityArn(const char* value) { SetReservedCapacityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type for the reserved capacity.</p>
     */
    inline const ReservedCapacityInstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const ReservedCapacityInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(ReservedCapacityInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline ReservedCapacitySummary& WithInstanceType(const ReservedCapacityInstanceType& value) { SetInstanceType(value); return *this;}
    inline ReservedCapacitySummary& WithInstanceType(ReservedCapacityInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of instances in the reserved capacity.</p>
     */
    inline int GetTotalInstanceCount() const{ return m_totalInstanceCount; }
    inline bool TotalInstanceCountHasBeenSet() const { return m_totalInstanceCountHasBeenSet; }
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCountHasBeenSet = true; m_totalInstanceCount = value; }
    inline ReservedCapacitySummary& WithTotalInstanceCount(int value) { SetTotalInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the reserved capacity.</p>
     */
    inline const ReservedCapacityStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ReservedCapacityStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ReservedCapacityStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ReservedCapacitySummary& WithStatus(const ReservedCapacityStatus& value) { SetStatus(value); return *this;}
    inline ReservedCapacitySummary& WithStatus(ReservedCapacityStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability zone for the reserved capacity.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline ReservedCapacitySummary& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline ReservedCapacitySummary& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline ReservedCapacitySummary& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of whole hours in the total duration for this reserved
     * capacity.</p>
     */
    inline long long GetDurationHours() const{ return m_durationHours; }
    inline bool DurationHoursHasBeenSet() const { return m_durationHoursHasBeenSet; }
    inline void SetDurationHours(long long value) { m_durationHoursHasBeenSet = true; m_durationHours = value; }
    inline ReservedCapacitySummary& WithDurationHours(long long value) { SetDurationHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional minutes beyond whole hours in the total duration for this
     * reserved capacity.</p>
     */
    inline long long GetDurationMinutes() const{ return m_durationMinutes; }
    inline bool DurationMinutesHasBeenSet() const { return m_durationMinutesHasBeenSet; }
    inline void SetDurationMinutes(long long value) { m_durationMinutesHasBeenSet = true; m_durationMinutes = value; }
    inline ReservedCapacitySummary& WithDurationMinutes(long long value) { SetDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the reserved capacity.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ReservedCapacitySummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ReservedCapacitySummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the reserved capacity.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ReservedCapacitySummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ReservedCapacitySummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservedCapacityArn;
    bool m_reservedCapacityArnHasBeenSet = false;

    ReservedCapacityInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_totalInstanceCount;
    bool m_totalInstanceCountHasBeenSet = false;

    ReservedCapacityStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    long long m_durationHours;
    bool m_durationHoursHasBeenSet = false;

    long long m_durationMinutes;
    bool m_durationMinutesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
