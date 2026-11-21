/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CapacityReservationHyperPodClustersAssociation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

CapacityReservationHyperPodClustersAssociation::CapacityReservationHyperPodClustersAssociation(JsonView jsonValue) { *this = jsonValue; }

CapacityReservationHyperPodClustersAssociation& CapacityReservationHyperPodClustersAssociation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = CapacityReservationOptInStatusMapper::GetCapacityReservationOptInStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
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

JsonValue CapacityReservationHyperPodClustersAssociation::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", CapacityReservationOptInStatusMapper::GetNameForCapacityReservationOptInStatus(m_status));
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
