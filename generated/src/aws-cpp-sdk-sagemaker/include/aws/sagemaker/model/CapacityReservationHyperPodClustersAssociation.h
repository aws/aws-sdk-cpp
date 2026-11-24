/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CapacityReservationOptInStatus.h>

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
 * <p>The association between the SageMaker AI HyperPod clusters in your account
 * and a SageMaker Capacity Reservation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CapacityReservationHyperPodClustersAssociation">AWS
 * API Reference</a></p>
 */
class CapacityReservationHyperPodClustersAssociation {
 public:
  AWS_SAGEMAKER_API CapacityReservationHyperPodClustersAssociation() = default;
  AWS_SAGEMAKER_API CapacityReservationHyperPodClustersAssociation(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API CapacityReservationHyperPodClustersAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of the association. Valid values:</p> <dl> <dt>Pending</dt> <dd>
   * <p>SageMaker AI is adding or removing the association.</p> </dd> <dt>Active</dt>
   * <dd> <p>The resources are associated with the SageMaker Capacity Reservation and
   * can use its instances.</p> </dd> <dt>Inactive</dt> <dd> <p>The resources are not
   * associated with the SageMaker Capacity Reservation.</p> </dd> </dl>
   */
  inline CapacityReservationOptInStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CapacityReservationOptInStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CapacityReservationHyperPodClustersAssociation& WithStatus(CapacityReservationOptInStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that the most recent attempt to add or remove the association
   * failed. This value is returned only when the most recent attempt failed. After a
   * failure to add the association, the status is <code>Inactive</code>. After a
   * failure to remove the association, the status is <code>Active</code>.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  CapacityReservationHyperPodClustersAssociation& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when SageMaker AI started the current association. This time resets
   * when you add the association again after it was removed or after it failed.</p>
   */
  inline const Aws::Utils::DateTime& GetAssociatedTime() const { return m_associatedTime; }
  inline bool AssociatedTimeHasBeenSet() const { return m_associatedTimeHasBeenSet; }
  template <typename AssociatedTimeT = Aws::Utils::DateTime>
  void SetAssociatedTime(AssociatedTimeT&& value) {
    m_associatedTimeHasBeenSet = true;
    m_associatedTime = std::forward<AssociatedTimeT>(value);
  }
  template <typename AssociatedTimeT = Aws::Utils::DateTime>
  CapacityReservationHyperPodClustersAssociation& WithAssociatedTime(AssociatedTimeT&& value) {
    SetAssociatedTime(std::forward<AssociatedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  CapacityReservationOptInStatus m_status{CapacityReservationOptInStatus::NOT_SET};

  Aws::String m_failureReason;

  Aws::Utils::DateTime m_associatedTime{};
  bool m_statusHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_associatedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
