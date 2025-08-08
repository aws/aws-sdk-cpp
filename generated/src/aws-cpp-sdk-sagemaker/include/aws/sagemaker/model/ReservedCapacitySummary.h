/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ReservedCapacityType.h>
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
    AWS_SAGEMAKER_API ReservedCapacitySummary() = default;
    AWS_SAGEMAKER_API ReservedCapacitySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ReservedCapacitySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN); of the reserved capacity.</p>
     */
    inline const Aws::String& GetReservedCapacityArn() const { return m_reservedCapacityArn; }
    inline bool ReservedCapacityArnHasBeenSet() const { return m_reservedCapacityArnHasBeenSet; }
    template<typename ReservedCapacityArnT = Aws::String>
    void SetReservedCapacityArn(ReservedCapacityArnT&& value) { m_reservedCapacityArnHasBeenSet = true; m_reservedCapacityArn = std::forward<ReservedCapacityArnT>(value); }
    template<typename ReservedCapacityArnT = Aws::String>
    ReservedCapacitySummary& WithReservedCapacityArn(ReservedCapacityArnT&& value) { SetReservedCapacityArn(std::forward<ReservedCapacityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of reserved capacity.</p>
     */
    inline ReservedCapacityType GetReservedCapacityType() const { return m_reservedCapacityType; }
    inline bool ReservedCapacityTypeHasBeenSet() const { return m_reservedCapacityTypeHasBeenSet; }
    inline void SetReservedCapacityType(ReservedCapacityType value) { m_reservedCapacityTypeHasBeenSet = true; m_reservedCapacityType = value; }
    inline ReservedCapacitySummary& WithReservedCapacityType(ReservedCapacityType value) { SetReservedCapacityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of UltraServer included in this reserved capacity, such as
     * ml.u-p6e-gb200x72.</p>
     */
    inline const Aws::String& GetUltraServerType() const { return m_ultraServerType; }
    inline bool UltraServerTypeHasBeenSet() const { return m_ultraServerTypeHasBeenSet; }
    template<typename UltraServerTypeT = Aws::String>
    void SetUltraServerType(UltraServerTypeT&& value) { m_ultraServerTypeHasBeenSet = true; m_ultraServerType = std::forward<UltraServerTypeT>(value); }
    template<typename UltraServerTypeT = Aws::String>
    ReservedCapacitySummary& WithUltraServerType(UltraServerTypeT&& value) { SetUltraServerType(std::forward<UltraServerTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of UltraServers included in this reserved capacity.</p>
     */
    inline int GetUltraServerCount() const { return m_ultraServerCount; }
    inline bool UltraServerCountHasBeenSet() const { return m_ultraServerCountHasBeenSet; }
    inline void SetUltraServerCount(int value) { m_ultraServerCountHasBeenSet = true; m_ultraServerCount = value; }
    inline ReservedCapacitySummary& WithUltraServerCount(int value) { SetUltraServerCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type for the reserved capacity.</p>
     */
    inline ReservedCapacityInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(ReservedCapacityInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline ReservedCapacitySummary& WithInstanceType(ReservedCapacityInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of instances in the reserved capacity.</p>
     */
    inline int GetTotalInstanceCount() const { return m_totalInstanceCount; }
    inline bool TotalInstanceCountHasBeenSet() const { return m_totalInstanceCountHasBeenSet; }
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCountHasBeenSet = true; m_totalInstanceCount = value; }
    inline ReservedCapacitySummary& WithTotalInstanceCount(int value) { SetTotalInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the reserved capacity.</p>
     */
    inline ReservedCapacityStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ReservedCapacityStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReservedCapacitySummary& WithStatus(ReservedCapacityStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The availability zone for the reserved capacity.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    ReservedCapacitySummary& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of whole hours in the total duration for this reserved
     * capacity.</p>
     */
    inline long long GetDurationHours() const { return m_durationHours; }
    inline bool DurationHoursHasBeenSet() const { return m_durationHoursHasBeenSet; }
    inline void SetDurationHours(long long value) { m_durationHoursHasBeenSet = true; m_durationHours = value; }
    inline ReservedCapacitySummary& WithDurationHours(long long value) { SetDurationHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional minutes beyond whole hours in the total duration for this
     * reserved capacity.</p>
     */
    inline long long GetDurationMinutes() const { return m_durationMinutes; }
    inline bool DurationMinutesHasBeenSet() const { return m_durationMinutesHasBeenSet; }
    inline void SetDurationMinutes(long long value) { m_durationMinutesHasBeenSet = true; m_durationMinutes = value; }
    inline ReservedCapacitySummary& WithDurationMinutes(long long value) { SetDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the reserved capacity.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ReservedCapacitySummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the reserved capacity.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ReservedCapacitySummary& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservedCapacityArn;
    bool m_reservedCapacityArnHasBeenSet = false;

    ReservedCapacityType m_reservedCapacityType{ReservedCapacityType::NOT_SET};
    bool m_reservedCapacityTypeHasBeenSet = false;

    Aws::String m_ultraServerType;
    bool m_ultraServerTypeHasBeenSet = false;

    int m_ultraServerCount{0};
    bool m_ultraServerCountHasBeenSet = false;

    ReservedCapacityInstanceType m_instanceType{ReservedCapacityInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    int m_totalInstanceCount{0};
    bool m_totalInstanceCountHasBeenSet = false;

    ReservedCapacityStatus m_status{ReservedCapacityStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    long long m_durationHours{0};
    bool m_durationHoursHasBeenSet = false;

    long long m_durationMinutes{0};
    bool m_durationMinutesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
