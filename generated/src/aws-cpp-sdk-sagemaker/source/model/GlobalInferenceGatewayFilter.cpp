/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

GlobalInferenceGatewayFilter::GlobalInferenceGatewayFilter(JsonView jsonValue) { *this = jsonValue; }

GlobalInferenceGatewayFilter& GlobalInferenceGatewayFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = GlobalInferenceGatewayFilterNameMapper::GetGlobalInferenceGatewayFilterNameForName(jsonValue.GetString("Name"));
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue GlobalInferenceGatewayFilter::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", GlobalInferenceGatewayFilterNameMapper::GetNameForGlobalInferenceGatewayFilterName(m_name));
  }

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
