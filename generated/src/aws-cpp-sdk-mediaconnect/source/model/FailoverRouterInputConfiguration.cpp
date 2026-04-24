/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/FailoverRouterInputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

FailoverRouterInputConfiguration::FailoverRouterInputConfiguration(JsonView jsonValue) { *this = jsonValue; }

FailoverRouterInputConfiguration& FailoverRouterInputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("networkInterfaceArn")) {
    m_networkInterfaceArn = jsonValue.GetString("networkInterfaceArn");
    m_networkInterfaceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("protocolConfigurations")) {
    Aws::Utils::Array<JsonView> protocolConfigurationsJsonList = jsonValue.GetArray("protocolConfigurations");
    for (unsigned protocolConfigurationsIndex = 0; protocolConfigurationsIndex < protocolConfigurationsJsonList.GetLength();
         ++protocolConfigurationsIndex) {
      m_protocolConfigurations.push_back(protocolConfigurationsJsonList[protocolConfigurationsIndex].AsObject());
    }
    m_protocolConfigurationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourcePriorityMode")) {
    m_sourcePriorityMode =
        FailoverInputSourcePriorityModeMapper::GetFailoverInputSourcePriorityModeForName(jsonValue.GetString("sourcePriorityMode"));
    m_sourcePriorityModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("primarySourceIndex")) {
    m_primarySourceIndex = jsonValue.GetInteger("primarySourceIndex");
    m_primarySourceIndexHasBeenSet = true;
  }
  return *this;
}

JsonValue FailoverRouterInputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_networkInterfaceArnHasBeenSet) {
    payload.WithString("networkInterfaceArn", m_networkInterfaceArn);
  }

  if (m_protocolConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> protocolConfigurationsJsonList(m_protocolConfigurations.size());
    for (unsigned protocolConfigurationsIndex = 0; protocolConfigurationsIndex < protocolConfigurationsJsonList.GetLength();
         ++protocolConfigurationsIndex) {
      protocolConfigurationsJsonList[protocolConfigurationsIndex].AsObject(m_protocolConfigurations[protocolConfigurationsIndex].Jsonize());
    }
    payload.WithArray("protocolConfigurations", std::move(protocolConfigurationsJsonList));
  }

  if (m_sourcePriorityModeHasBeenSet) {
    payload.WithString("sourcePriorityMode",
                       FailoverInputSourcePriorityModeMapper::GetNameForFailoverInputSourcePriorityMode(m_sourcePriorityMode));
  }

  if (m_primarySourceIndexHasBeenSet) {
    payload.WithInteger("primarySourceIndex", m_primarySourceIndex);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
