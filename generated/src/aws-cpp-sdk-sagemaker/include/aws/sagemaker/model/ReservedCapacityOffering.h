/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ReservedCapacityInstanceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Details about a reserved capacity offering for a training plan offering.</p>
   * <p>For more information about how to reserve GPU capacity for your SageMaker
   * HyperPod clusters using Amazon SageMaker Training Plan, see <code> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrainingPlan.html">CreateTrainingPlan</a>
   * </code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ReservedCapacityOffering">AWS
   * API Reference</a></p>
   */
  class ReservedCapacityOffering
  {
  public:
    AWS_SAGEMAKER_API ReservedCapacityOffering();
    AWS_SAGEMAKER_API ReservedCapacityOffering(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ReservedCapacityOffering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance type for the reserved capacity offering.</p>
     */
    inline const ReservedCapacityInstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const ReservedCapacityInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(ReservedCapacityInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline ReservedCapacityOffering& WithInstanceType(const ReservedCapacityInstanceType& value) { SetInstanceType(value); return *this;}
    inline ReservedCapacityOffering& WithInstanceType(ReservedCapacityInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in the reserved capacity offering.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline ReservedCapacityOffering& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability zone for the reserved capacity offering.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline ReservedCapacityOffering& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline ReservedCapacityOffering& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline ReservedCapacityOffering& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of whole hours in the total duration for this reserved capacity
     * offering.</p>
     */
    inline long long GetDurationHours() const{ return m_durationHours; }
    inline bool DurationHoursHasBeenSet() const { return m_durationHoursHasBeenSet; }
    inline void SetDurationHours(long long value) { m_durationHoursHasBeenSet = true; m_durationHours = value; }
    inline ReservedCapacityOffering& WithDurationHours(long long value) { SetDurationHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional minutes beyond whole hours in the total duration for this
     * reserved capacity offering.</p>
     */
    inline long long GetDurationMinutes() const{ return m_durationMinutes; }
    inline bool DurationMinutesHasBeenSet() const { return m_durationMinutesHasBeenSet; }
    inline void SetDurationMinutes(long long value) { m_durationMinutesHasBeenSet = true; m_durationMinutes = value; }
    inline ReservedCapacityOffering& WithDurationMinutes(long long value) { SetDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the reserved capacity offering.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ReservedCapacityOffering& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ReservedCapacityOffering& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the reserved capacity offering.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ReservedCapacityOffering& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ReservedCapacityOffering& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}
  private:

    ReservedCapacityInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

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
