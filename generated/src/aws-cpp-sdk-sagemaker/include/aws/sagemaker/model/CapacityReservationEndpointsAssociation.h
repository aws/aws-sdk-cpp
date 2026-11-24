/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CapacityReservationEndpointSharing.h>
#include <aws/sagemaker/model/CapacityReservationMatchCriteria.h>
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
 * <p>The association between the SageMaker AI endpoints in your account and a
 * SageMaker Capacity Reservation, through one ML capacity reservation. To use the
 * reserved instances for an endpoint, specify the ML capacity reservation ARN in
 * the <code>MlReservationArn</code> field of
 * <code>ProductionVariantCapacityReservationConfig</code> when you call
 * <code>CreateEndpointConfig</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CapacityReservationEndpointsAssociation">AWS
 * API Reference</a></p>
 */
class CapacityReservationEndpointsAssociation {
 public:
  AWS_SAGEMAKER_API CapacityReservationEndpointsAssociation() = default;
  AWS_SAGEMAKER_API CapacityReservationEndpointsAssociation(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API CapacityReservationEndpointsAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the ML capacity reservation. The name is the last part of the ML
   * capacity reservation ARN.</p>
   */
  inline const Aws::String& GetMlReservationId() const { return m_mlReservationId; }
  inline bool MlReservationIdHasBeenSet() const { return m_mlReservationIdHasBeenSet; }
  template <typename MlReservationIdT = Aws::String>
  void SetMlReservationId(MlReservationIdT&& value) {
    m_mlReservationIdHasBeenSet = true;
    m_mlReservationId = std::forward<MlReservationIdT>(value);
  }
  template <typename MlReservationIdT = Aws::String>
  CapacityReservationEndpointsAssociation& WithMlReservationId(MlReservationIdT&& value) {
    SetMlReservationId(std::forward<MlReservationIdT>(value));
    return *this;
  }
  ///@}

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
  inline CapacityReservationEndpointsAssociation& WithStatus(CapacityReservationOptInStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How endpoints in your account match the ML capacity reservation. Valid
   * values:</p> <dl> <dt>Open</dt> <dd> <p>Endpoints in your account use the ML
   * capacity reservation automatically when their instance type matches. You don't
   * specify the ML capacity reservation ARN when you create the endpoint.</p> </dd>
   * <dt>Targeted</dt> <dd> <p>An endpoint uses the ML capacity reservation only when
   * you specify its ARN when you create or update the endpoint.</p> </dd> </dl>
   */
  inline CapacityReservationMatchCriteria GetMatchCriteria() const { return m_matchCriteria; }
  inline bool MatchCriteriaHasBeenSet() const { return m_matchCriteriaHasBeenSet; }
  inline void SetMatchCriteria(CapacityReservationMatchCriteria value) {
    m_matchCriteriaHasBeenSet = true;
    m_matchCriteria = value;
  }
  inline CapacityReservationEndpointsAssociation& WithMatchCriteria(CapacityReservationMatchCriteria value) {
    SetMatchCriteria(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether one endpoint or multiple endpoints can use the ML capacity
   * reservation. Valid values:</p> <dl> <dt>SingleEndpoint</dt> <dd> <p>Only one
   * endpoint can use the ML capacity reservation.</p> </dd>
   * <dt>MultipleEndpoints</dt> <dd> <p>Multiple endpoints can use the ML capacity
   * reservation.</p> </dd> </dl>
   */
  inline CapacityReservationEndpointSharing GetEndpointSharing() const { return m_endpointSharing; }
  inline bool EndpointSharingHasBeenSet() const { return m_endpointSharingHasBeenSet; }
  inline void SetEndpointSharing(CapacityReservationEndpointSharing value) {
    m_endpointSharingHasBeenSet = true;
    m_endpointSharing = value;
  }
  inline CapacityReservationEndpointsAssociation& WithEndpointSharing(CapacityReservationEndpointSharing value) {
    SetEndpointSharing(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ML capacity reservation. Specify this
   * ARN in <code>CreateEndpointConfig</code> to use the reserved instances for an
   * endpoint. For a new ML capacity reservation, this value is returned when the
   * status is <code>Active</code>.</p>
   */
  inline const Aws::String& GetMlReservationArn() const { return m_mlReservationArn; }
  inline bool MlReservationArnHasBeenSet() const { return m_mlReservationArnHasBeenSet; }
  template <typename MlReservationArnT = Aws::String>
  void SetMlReservationArn(MlReservationArnT&& value) {
    m_mlReservationArnHasBeenSet = true;
    m_mlReservationArn = std::forward<MlReservationArnT>(value);
  }
  template <typename MlReservationArnT = Aws::String>
  CapacityReservationEndpointsAssociation& WithMlReservationArn(MlReservationArnT&& value) {
    SetMlReservationArn(std::forward<MlReservationArnT>(value));
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
  CapacityReservationEndpointsAssociation& WithFailureReason(FailureReasonT&& value) {
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
  CapacityReservationEndpointsAssociation& WithAssociatedTime(AssociatedTimeT&& value) {
    SetAssociatedTime(std::forward<AssociatedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_mlReservationId;

  CapacityReservationOptInStatus m_status{CapacityReservationOptInStatus::NOT_SET};

  CapacityReservationMatchCriteria m_matchCriteria{CapacityReservationMatchCriteria::NOT_SET};

  CapacityReservationEndpointSharing m_endpointSharing{CapacityReservationEndpointSharing::NOT_SET};

  Aws::String m_mlReservationArn;

  Aws::String m_failureReason;

  Aws::Utils::DateTime m_associatedTime{};
  bool m_mlReservationIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_matchCriteriaHasBeenSet = false;
  bool m_endpointSharingHasBeenSet = false;
  bool m_mlReservationArnHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_associatedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
