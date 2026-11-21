/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CapacityReservationEndpointsAssociation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

CapacityReservationEndpointsAssociation::CapacityReservationEndpointsAssociation(JsonView jsonValue) { *this = jsonValue; }

CapacityReservationEndpointsAssociation& CapacityReservationEndpointsAssociation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MlReservationId")) {
    m_mlReservationId = jsonValue.GetString("MlReservationId");
    m_mlReservationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = CapacityReservationOptInStatusMapper::GetCapacityReservationOptInStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MatchCriteria")) {
    m_matchCriteria =
        CapacityReservationMatchCriteriaMapper::GetCapacityReservationMatchCriteriaForName(jsonValue.GetString("MatchCriteria"));
    m_matchCriteriaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndpointSharing")) {
    m_endpointSharing =
        CapacityReservationEndpointSharingMapper::GetCapacityReservationEndpointSharingForName(jsonValue.GetString("EndpointSharing"));
    m_endpointSharingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MlReservationArn")) {
    m_mlReservationArn = jsonValue.GetString("MlReservationArn");
    m_mlReservationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FailureReason")) {
    m_failureReason = jsonValue.GetString("FailureReason");
    m_failureReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssociatedTime")) {
    m_associatedTime = jsonValue.GetDouble("AssociatedTime");
    m_associatedTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityReservationEndpointsAssociation::Jsonize() const {
  JsonValue payload;

  if (m_mlReservationIdHasBeenSet) {
    payload.WithString("MlReservationId", m_mlReservationId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", CapacityReservationOptInStatusMapper::GetNameForCapacityReservationOptInStatus(m_status));
  }

  if (m_matchCriteriaHasBeenSet) {
    payload.WithString("MatchCriteria",
                       CapacityReservationMatchCriteriaMapper::GetNameForCapacityReservationMatchCriteria(m_matchCriteria));
  }

  if (m_endpointSharingHasBeenSet) {
    payload.WithString("EndpointSharing",
                       CapacityReservationEndpointSharingMapper::GetNameForCapacityReservationEndpointSharing(m_endpointSharing));
  }

  if (m_mlReservationArnHasBeenSet) {
    payload.WithString("MlReservationArn", m_mlReservationArn);
  }

  if (m_failureReasonHasBeenSet) {
    payload.WithString("FailureReason", m_failureReason);
  }

  if (m_associatedTimeHasBeenSet) {
    payload.WithDouble("AssociatedTime", m_associatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
