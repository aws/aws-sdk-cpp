/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ReservedCapacityType.h>
#include <aws/sagemaker/model/ReservedCapacityStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ReservedCapacityInstanceType.h>
#include <aws/sagemaker/model/UltraServerSummary.h>
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
  class DescribeReservedCapacityResult
  {
  public:
    AWS_SAGEMAKER_API DescribeReservedCapacityResult() = default;
    AWS_SAGEMAKER_API DescribeReservedCapacityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeReservedCapacityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of the reserved capacity.</p>
     */
    inline const Aws::String& GetReservedCapacityArn() const { return m_reservedCapacityArn; }
    template<typename ReservedCapacityArnT = Aws::String>
    void SetReservedCapacityArn(ReservedCapacityArnT&& value) { m_reservedCapacityArnHasBeenSet = true; m_reservedCapacityArn = std::forward<ReservedCapacityArnT>(value); }
    template<typename ReservedCapacityArnT = Aws::String>
    DescribeReservedCapacityResult& WithReservedCapacityArn(ReservedCapacityArnT&& value) { SetReservedCapacityArn(std::forward<ReservedCapacityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of reserved capacity.</p>
     */
    inline ReservedCapacityType GetReservedCapacityType() const { return m_reservedCapacityType; }
    inline void SetReservedCapacityType(ReservedCapacityType value) { m_reservedCapacityTypeHasBeenSet = true; m_reservedCapacityType = value; }
    inline DescribeReservedCapacityResult& WithReservedCapacityType(ReservedCapacityType value) { SetReservedCapacityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the reserved capacity.</p>
     */
    inline ReservedCapacityStatus GetStatus() const { return m_status; }
    inline void SetStatus(ReservedCapacityStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeReservedCapacityResult& WithStatus(ReservedCapacityStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone where the reserved capacity is provisioned.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    DescribeReservedCapacityResult& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total duration of the reserved capacity in hours.</p>
     */
    inline long long GetDurationHours() const { return m_durationHours; }
    inline void SetDurationHours(long long value) { m_durationHoursHasBeenSet = true; m_durationHours = value; }
    inline DescribeReservedCapacityResult& WithDurationHours(long long value) { SetDurationHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes for the duration of the reserved capacity. For example,
     * if a reserved capacity starts at 08:55 and ends at 11:30, the minutes field
     * would be 35.</p>
     */
    inline long long GetDurationMinutes() const { return m_durationMinutes; }
    inline void SetDurationMinutes(long long value) { m_durationMinutesHasBeenSet = true; m_durationMinutes = value; }
    inline DescribeReservedCapacityResult& WithDurationMinutes(long long value) { SetDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the reserved capacity becomes active.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    DescribeReservedCapacityResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the reserved capacity expires.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    DescribeReservedCapacityResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance type used in the reserved capacity.</p>
     */
    inline ReservedCapacityInstanceType GetInstanceType() const { return m_instanceType; }
    inline void SetInstanceType(ReservedCapacityInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline DescribeReservedCapacityResult& WithInstanceType(ReservedCapacityInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of instances allocated to this reserved capacity.</p>
     */
    inline int GetTotalInstanceCount() const { return m_totalInstanceCount; }
    inline void SetTotalInstanceCount(int value) { m_totalInstanceCountHasBeenSet = true; m_totalInstanceCount = value; }
    inline DescribeReservedCapacityResult& WithTotalInstanceCount(int value) { SetTotalInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances currently available for use in this reserved
     * capacity.</p>
     */
    inline int GetAvailableInstanceCount() const { return m_availableInstanceCount; }
    inline void SetAvailableInstanceCount(int value) { m_availableInstanceCountHasBeenSet = true; m_availableInstanceCount = value; }
    inline DescribeReservedCapacityResult& WithAvailableInstanceCount(int value) { SetAvailableInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances currently in use from this reserved capacity.</p>
     */
    inline int GetInUseInstanceCount() const { return m_inUseInstanceCount; }
    inline void SetInUseInstanceCount(int value) { m_inUseInstanceCountHasBeenSet = true; m_inUseInstanceCount = value; }
    inline DescribeReservedCapacityResult& WithInUseInstanceCount(int value) { SetInUseInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the UltraServer associated with this reserved capacity.</p>
     */
    inline const UltraServerSummary& GetUltraServerSummary() const { return m_ultraServerSummary; }
    template<typename UltraServerSummaryT = UltraServerSummary>
    void SetUltraServerSummary(UltraServerSummaryT&& value) { m_ultraServerSummaryHasBeenSet = true; m_ultraServerSummary = std::forward<UltraServerSummaryT>(value); }
    template<typename UltraServerSummaryT = UltraServerSummary>
    DescribeReservedCapacityResult& WithUltraServerSummary(UltraServerSummaryT&& value) { SetUltraServerSummary(std::forward<UltraServerSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReservedCapacityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservedCapacityArn;
    bool m_reservedCapacityArnHasBeenSet = false;

    ReservedCapacityType m_reservedCapacityType{ReservedCapacityType::NOT_SET};
    bool m_reservedCapacityTypeHasBeenSet = false;

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

    ReservedCapacityInstanceType m_instanceType{ReservedCapacityInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    int m_totalInstanceCount{0};
    bool m_totalInstanceCountHasBeenSet = false;

    int m_availableInstanceCount{0};
    bool m_availableInstanceCountHasBeenSet = false;

    int m_inUseInstanceCount{0};
    bool m_inUseInstanceCountHasBeenSet = false;

    UltraServerSummary m_ultraServerSummary;
    bool m_ultraServerSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
