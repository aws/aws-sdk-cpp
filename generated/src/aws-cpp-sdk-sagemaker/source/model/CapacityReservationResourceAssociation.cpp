/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CapacityReservationResourceAssociation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

CapacityReservationResourceAssociation::CapacityReservationResourceAssociation(JsonView jsonValue) { *this = jsonValue; }

CapacityReservationResourceAssociation& CapacityReservationResourceAssociation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("HyperPodClusters")) {
    m_hyperPodClusters = jsonValue.GetObject("HyperPodClusters");
    m_hyperPodClustersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Endpoints")) {
    m_endpoints = jsonValue.GetObject("Endpoints");
    m_endpointsHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityReservationResourceAssociation::Jsonize() const {
  JsonValue payload;

  if (m_hyperPodClustersHasBeenSet) {
    payload.WithObject("HyperPodClusters", m_hyperPodClusters.Jsonize());
  }

  if (m_endpointsHasBeenSet) {
    payload.WithObject("Endpoints", m_endpoints.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
