/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-instances/model/InstanceTypeInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {

InstanceTypeInfo::InstanceTypeInfo(JsonView jsonValue) { *this = jsonValue; }

InstanceTypeInfo& InstanceTypeInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceType")) {
    m_instanceType = jsonValue.GetString("InstanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SupportedInstanceConfigurations")) {
    Aws::Utils::Array<JsonView> supportedInstanceConfigurationsJsonList = jsonValue.GetArray("SupportedInstanceConfigurations");
    for (unsigned supportedInstanceConfigurationsIndex = 0;
         supportedInstanceConfigurationsIndex < supportedInstanceConfigurationsJsonList.GetLength();
         ++supportedInstanceConfigurationsIndex) {
      m_supportedInstanceConfigurations.push_back(supportedInstanceConfigurationsJsonList[supportedInstanceConfigurationsIndex].AsObject());
    }
    m_supportedInstanceConfigurationsHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceTypeInfo::Jsonize() const {
  JsonValue payload;

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("InstanceType", m_instanceType);
  }

  if (m_supportedInstanceConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> supportedInstanceConfigurationsJsonList(m_supportedInstanceConfigurations.size());
    for (unsigned supportedInstanceConfigurationsIndex = 0;
         supportedInstanceConfigurationsIndex < supportedInstanceConfigurationsJsonList.GetLength();
         ++supportedInstanceConfigurationsIndex) {
      supportedInstanceConfigurationsJsonList[supportedInstanceConfigurationsIndex].AsObject(
          m_supportedInstanceConfigurations[supportedInstanceConfigurationsIndex].Jsonize());
    }
    payload.WithArray("SupportedInstanceConfigurations", std::move(supportedInstanceConfigurationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
