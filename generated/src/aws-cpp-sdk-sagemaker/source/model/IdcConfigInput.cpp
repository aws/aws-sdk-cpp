/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/IdcConfigInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

IdcConfigInput::IdcConfigInput(JsonView jsonValue) { *this = jsonValue; }

IdcConfigInput& IdcConfigInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceArn")) {
    m_instanceArn = jsonValue.GetString("InstanceArn");
    m_instanceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue IdcConfigInput::Jsonize() const {
  JsonValue payload;

  if (m_instanceArnHasBeenSet) {
    payload.WithString("InstanceArn", m_instanceArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
