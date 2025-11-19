/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/MergeRouterInputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

MergeRouterInputConfiguration::MergeRouterInputConfiguration(JsonView jsonValue) { *this = jsonValue; }

MergeRouterInputConfiguration& MergeRouterInputConfiguration::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("mergeRecoveryWindowMilliseconds")) {
    m_mergeRecoveryWindowMilliseconds = jsonValue.GetInt64("mergeRecoveryWindowMilliseconds");
    m_mergeRecoveryWindowMillisecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue MergeRouterInputConfiguration::Jsonize() const {
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

  if (m_mergeRecoveryWindowMillisecondsHasBeenSet) {
    payload.WithInt64("mergeRecoveryWindowMilliseconds", m_mergeRecoveryWindowMilliseconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
