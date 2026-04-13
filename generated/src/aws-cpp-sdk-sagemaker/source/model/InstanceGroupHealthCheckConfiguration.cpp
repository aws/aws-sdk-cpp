/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/InstanceGroupHealthCheckConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

InstanceGroupHealthCheckConfiguration::InstanceGroupHealthCheckConfiguration(JsonView jsonValue) { *this = jsonValue; }

InstanceGroupHealthCheckConfiguration& InstanceGroupHealthCheckConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceGroupName")) {
    m_instanceGroupName = jsonValue.GetString("InstanceGroupName");
    m_instanceGroupNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstanceIds")) {
    Aws::Utils::Array<JsonView> instanceIdsJsonList = jsonValue.GetArray("InstanceIds");
    for (unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex) {
      m_instanceIds.push_back(instanceIdsJsonList[instanceIdsIndex].AsString());
    }
    m_instanceIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeepHealthChecks")) {
    Aws::Utils::Array<JsonView> deepHealthChecksJsonList = jsonValue.GetArray("DeepHealthChecks");
    for (unsigned deepHealthChecksIndex = 0; deepHealthChecksIndex < deepHealthChecksJsonList.GetLength(); ++deepHealthChecksIndex) {
      m_deepHealthChecks.push_back(
          DeepHealthCheckTypeMapper::GetDeepHealthCheckTypeForName(deepHealthChecksJsonList[deepHealthChecksIndex].AsString()));
    }
    m_deepHealthChecksHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceGroupHealthCheckConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_instanceGroupNameHasBeenSet) {
    payload.WithString("InstanceGroupName", m_instanceGroupName);
  }

  if (m_instanceIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> instanceIdsJsonList(m_instanceIds.size());
    for (unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex) {
      instanceIdsJsonList[instanceIdsIndex].AsString(m_instanceIds[instanceIdsIndex]);
    }
    payload.WithArray("InstanceIds", std::move(instanceIdsJsonList));
  }

  if (m_deepHealthChecksHasBeenSet) {
    Aws::Utils::Array<JsonValue> deepHealthChecksJsonList(m_deepHealthChecks.size());
    for (unsigned deepHealthChecksIndex = 0; deepHealthChecksIndex < deepHealthChecksJsonList.GetLength(); ++deepHealthChecksIndex) {
      deepHealthChecksJsonList[deepHealthChecksIndex].AsString(
          DeepHealthCheckTypeMapper::GetNameForDeepHealthCheckType(m_deepHealthChecks[deepHealthChecksIndex]));
    }
    payload.WithArray("DeepHealthChecks", std::move(deepHealthChecksJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
