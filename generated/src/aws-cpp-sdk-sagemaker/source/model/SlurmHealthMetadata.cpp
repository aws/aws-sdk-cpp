/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/SlurmHealthMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

SlurmHealthMetadata::SlurmHealthMetadata(JsonView jsonValue) { *this = jsonValue; }

SlurmHealthMetadata& SlurmHealthMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Component")) {
    m_component = SlurmHealthComponentMapper::GetSlurmHealthComponentForName(jsonValue.GetString("Component"));
    m_componentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = SlurmHealthStatusMapper::GetSlurmHealthStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Reason")) {
    m_reason = SlurmHealthReasonMapper::GetSlurmHealthReasonForName(jsonValue.GetString("Reason"));
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue SlurmHealthMetadata::Jsonize() const {
  JsonValue payload;

  if (m_componentHasBeenSet) {
    payload.WithString("Component", SlurmHealthComponentMapper::GetNameForSlurmHealthComponent(m_component));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", SlurmHealthStatusMapper::GetNameForSlurmHealthStatus(m_status));
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("Reason", SlurmHealthReasonMapper::GetNameForSlurmHealthReason(m_reason));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
