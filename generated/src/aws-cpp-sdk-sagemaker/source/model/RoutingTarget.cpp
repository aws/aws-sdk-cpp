/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/RoutingTarget.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

RoutingTarget::RoutingTarget(JsonView jsonValue) { *this = jsonValue; }

RoutingTarget& RoutingTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Destinations")) {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("Destinations");
    for (unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex) {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
    m_destinationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AsyncInferenceConfig")) {
    m_asyncInferenceConfig = jsonValue.GetObject("AsyncInferenceConfig");
    m_asyncInferenceConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoutingPreference")) {
    m_routingPreference =
        InferenceRouterRoutingPreferenceMapper::GetInferenceRouterRoutingPreferenceForName(jsonValue.GetString("RoutingPreference"));
    m_routingPreferenceHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingTarget::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_destinationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
    for (unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex) {
      destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
    }
    payload.WithArray("Destinations", std::move(destinationsJsonList));
  }

  if (m_asyncInferenceConfigHasBeenSet) {
    payload.WithObject("AsyncInferenceConfig", m_asyncInferenceConfig.Jsonize());
  }

  if (m_routingPreferenceHasBeenSet) {
    payload.WithString("RoutingPreference",
                       InferenceRouterRoutingPreferenceMapper::GetNameForInferenceRouterRoutingPreference(m_routingPreference));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
