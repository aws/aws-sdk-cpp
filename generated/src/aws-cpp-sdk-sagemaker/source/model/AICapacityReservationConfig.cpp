/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AICapacityReservationConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AICapacityReservationConfig::AICapacityReservationConfig(JsonView jsonValue) { *this = jsonValue; }

AICapacityReservationConfig& AICapacityReservationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CapacityReservationPreference")) {
    m_capacityReservationPreference = AICapacityReservationPreferenceMapper::GetAICapacityReservationPreferenceForName(
        jsonValue.GetString("CapacityReservationPreference"));
    m_capacityReservationPreferenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MlReservationArns")) {
    Aws::Utils::Array<JsonView> mlReservationArnsJsonList = jsonValue.GetArray("MlReservationArns");
    for (unsigned mlReservationArnsIndex = 0; mlReservationArnsIndex < mlReservationArnsJsonList.GetLength(); ++mlReservationArnsIndex) {
      m_mlReservationArns.push_back(mlReservationArnsJsonList[mlReservationArnsIndex].AsString());
    }
    m_mlReservationArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue AICapacityReservationConfig::Jsonize() const {
  JsonValue payload;

  if (m_capacityReservationPreferenceHasBeenSet) {
    payload.WithString("CapacityReservationPreference",
                       AICapacityReservationPreferenceMapper::GetNameForAICapacityReservationPreference(m_capacityReservationPreference));
  }

  if (m_mlReservationArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> mlReservationArnsJsonList(m_mlReservationArns.size());
    for (unsigned mlReservationArnsIndex = 0; mlReservationArnsIndex < mlReservationArnsJsonList.GetLength(); ++mlReservationArnsIndex) {
      mlReservationArnsJsonList[mlReservationArnsIndex].AsString(m_mlReservationArns[mlReservationArnsIndex]);
    }
    payload.WithArray("MlReservationArns", std::move(mlReservationArnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
