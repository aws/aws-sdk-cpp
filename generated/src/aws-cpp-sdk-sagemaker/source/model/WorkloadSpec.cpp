/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/WorkloadSpec.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

WorkloadSpec::WorkloadSpec(JsonView jsonValue) { *this = jsonValue; }

WorkloadSpec& WorkloadSpec::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Inline")) {
    m_inline = jsonValue.GetString("Inline");
    m_inlineHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkloadSpec::Jsonize() const {
  JsonValue payload;

  if (m_inlineHasBeenSet) {
    payload.WithString("Inline", m_inline);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
