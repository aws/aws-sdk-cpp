/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CapacityReservationStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Summary information about a SageMaker Capacity Reservation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CapacityReservationSummary">AWS
 * API Reference</a></p>
 */
class CapacityReservationSummary {
 public:
  AWS_SAGEMAKER_API CapacityReservationSummary() = default;
  AWS_SAGEMAKER_API CapacityReservationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API CapacityReservationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the SageMaker Capacity Reservation.</p>
   */
  inline const Aws::String& GetSMCapacityReservationArn() const { return m_sMCapacityReservationArn; }
  inline bool SMCapacityReservationArnHasBeenSet() const { return m_sMCapacityReservationArnHasBeenSet; }
  template <typename SMCapacityReservationArnT = Aws::String>
  void SetSMCapacityReservationArn(SMCapacityReservationArnT&& value) {
    m_sMCapacityReservationArnHasBeenSet = true;
    m_sMCapacityReservationArn = std::forward<SMCapacityReservationArnT>(value);
  }
  template <typename SMCapacityReservationArnT = Aws::String>
  CapacityReservationSummary& WithSMCapacityReservationArn(SMCapacityReservationArnT&& value) {
    SetSMCapacityReservationArn(std::forward<SMCapacityReservationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the SageMaker Capacity Reservation. The ID is the last part of the
   * ARN and starts with <code>smcr-</code>.</p>
   */
  inline const Aws::String& GetSMCapacityReservationId() const { return m_sMCapacityReservationId; }
  inline bool SMCapacityReservationIdHasBeenSet() const { return m_sMCapacityReservationIdHasBeenSet; }
  template <typename SMCapacityReservationIdT = Aws::String>
  void SetSMCapacityReservationId(SMCapacityReservationIdT&& value) {
    m_sMCapacityReservationIdHasBeenSet = true;
    m_sMCapacityReservationId = std::forward<SMCapacityReservationIdT>(value);
  }
  template <typename SMCapacityReservationIdT = Aws::String>
  CapacityReservationSummary& WithSMCapacityReservationId(SMCapacityReservationIdT&& value) {
    SetSMCapacityReservationId(std::forward<SMCapacityReservationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that owns the SageMaker Capacity
   * Reservation.</p>
   */
  inline const Aws::String& GetOwner() const { return m_owner; }
  inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
  template <typename OwnerT = Aws::String>
  void SetOwner(OwnerT&& value) {
    m_ownerHasBeenSet = true;
    m_owner = std::forward<OwnerT>(value);
  }
  template <typename OwnerT = Aws::String>
  CapacityReservationSummary& WithOwner(OwnerT&& value) {
    SetOwner(std::forward<OwnerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the SageMaker Capacity Reservation. SageMaker AI sets the
   * status from the start and end times of the reservation. Valid values:</p> <dl>
   * <dt>Scheduled</dt> <dd> <p>The current time is before
   * <code>StartTime</code>.</p> </dd> <dt>Active</dt> <dd> <p>The current time is
   * between <code>StartTime</code> and <code>EndTime</code>. You can use the
   * reserved instances.</p> </dd> <dt>Expired</dt> <dd> <p>The current time is at or
   * after <code>EndTime</code>.</p> </dd> </dl>
   */
  inline CapacityReservationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CapacityReservationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CapacityReservationSummary& WithStatus(CapacityReservationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SageMaker AI instance type of the reserved instances, for example
   * <code>ml.p5.48xlarge</code>.</p>
   */
  inline const Aws::String& GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  template <typename InstanceTypeT = Aws::String>
  void SetInstanceType(InstanceTypeT&& value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = std::forward<InstanceTypeT>(value);
  }
  template <typename InstanceTypeT = Aws::String>
  CapacityReservationSummary& WithInstanceType(InstanceTypeT&& value) {
    SetInstanceType(std::forward<InstanceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Availability Zone of the reserved instances, for example
   * <code>us-east-1a</code>. Availability Zone names can map to different physical
   * zones in different accounts. To identify the same zone across accounts, use
   * <code>AvailabilityZoneId</code>.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  CapacityReservationSummary& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Availability Zone of the reserved instances, for example
   * <code>use1-az1</code>. An Availability Zone ID identifies the same physical zone
   * in every account.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  CapacityReservationSummary& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of instances in the SageMaker Capacity Reservation.</p>
   */
  inline int GetTotalInstanceCount() const { return m_totalInstanceCount; }
  inline bool TotalInstanceCountHasBeenSet() const { return m_totalInstanceCountHasBeenSet; }
  inline void SetTotalInstanceCount(int value) {
    m_totalInstanceCountHasBeenSet = true;
    m_totalInstanceCount = value;
  }
  inline CapacityReservationSummary& WithTotalInstanceCount(int value) {
    SetTotalInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the reserved instances become available.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  CapacityReservationSummary& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the SageMaker Capacity Reservation ends. This value is not
   * returned if the reservation has no end time.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  CapacityReservationSummary& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the SageMaker Capacity Reservation was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  CapacityReservationSummary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sMCapacityReservationArn;

  Aws::String m_sMCapacityReservationId;

  Aws::String m_owner;

  CapacityReservationStatus m_status{CapacityReservationStatus::NOT_SET};

  Aws::String m_instanceType;

  Aws::String m_availabilityZone;

  Aws::String m_availabilityZoneId;

  int m_totalInstanceCount{0};

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::Utils::DateTime m_creationTime{};
  bool m_sMCapacityReservationArnHasBeenSet = false;
  bool m_sMCapacityReservationIdHasBeenSet = false;
  bool m_ownerHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_instanceTypeHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_totalInstanceCountHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
