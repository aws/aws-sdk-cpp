/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/EventMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

EventMetadata::EventMetadata(JsonView jsonValue) { *this = jsonValue; }

EventMetadata& EventMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Cluster")) {
    m_cluster = jsonValue.GetObject("Cluster");
    m_clusterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstanceGroup")) {
    m_instanceGroup = jsonValue.GetObject("InstanceGroup");
    m_instanceGroupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstanceGroupScaling")) {
    m_instanceGroupScaling = jsonValue.GetObject("InstanceGroupScaling");
    m_instanceGroupScalingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Instance")) {
    m_instance = jsonValue.GetObject("Instance");
    m_instanceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DatabaseConfiguration")) {
    m_databaseConfiguration = jsonValue.GetObject("DatabaseConfiguration");
    m_databaseConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SlurmHealth")) {
    m_slurmHealth = jsonValue.GetObject("SlurmHealth");
    m_slurmHealthHasBeenSet = true;
  }
  return *this;
}

JsonValue EventMetadata::Jsonize() const {
  JsonValue payload;

  if (m_clusterHasBeenSet) {
    payload.WithObject("Cluster", m_cluster.Jsonize());
  }

  if (m_instanceGroupHasBeenSet) {
    payload.WithObject("InstanceGroup", m_instanceGroup.Jsonize());
  }

  if (m_instanceGroupScalingHasBeenSet) {
    payload.WithObject("InstanceGroupScaling", m_instanceGroupScaling.Jsonize());
  }

  if (m_instanceHasBeenSet) {
    payload.WithObject("Instance", m_instance.Jsonize());
  }

  if (m_databaseConfigurationHasBeenSet) {
    payload.WithObject("DatabaseConfiguration", m_databaseConfiguration.Jsonize());
  }

  if (m_slurmHealthHasBeenSet) {
    payload.WithObject("SlurmHealth", m_slurmHealth.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
