/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/InstanceRequirementsEniConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

InstanceRequirementsEniConfiguration::InstanceRequirementsEniConfiguration(JsonView jsonValue) { *this = jsonValue; }

InstanceRequirementsEniConfiguration& InstanceRequirementsEniConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CustomerEni")) {
    m_customerEni = jsonValue.GetString("CustomerEni");
    m_customerEniHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AdditionalEnis")) {
    m_additionalEnis = jsonValue.GetObject("AdditionalEnis");
    m_additionalEnisHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceRequirementsEniConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_customerEniHasBeenSet) {
    payload.WithString("CustomerEni", m_customerEni);
  }

  if (m_additionalEnisHasBeenSet) {
    payload.WithObject("AdditionalEnis", m_additionalEnis.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
