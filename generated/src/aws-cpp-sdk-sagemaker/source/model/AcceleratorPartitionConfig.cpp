/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AcceleratorPartitionConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AcceleratorPartitionConfig::AcceleratorPartitionConfig(JsonView jsonValue) { *this = jsonValue; }

AcceleratorPartitionConfig& AcceleratorPartitionConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = MIGProfileTypeMapper::GetMIGProfileTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Count")) {
    m_count = jsonValue.GetInteger("Count");
    m_countHasBeenSet = true;
  }
  return *this;
}

JsonValue AcceleratorPartitionConfig::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", MIGProfileTypeMapper::GetNameForMIGProfileType(m_type));
  }

  if (m_countHasBeenSet) {
    payload.WithInteger("Count", m_count);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
