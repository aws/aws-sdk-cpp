/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/synthetics/model/AddReplicaLocationInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Synthetics {
namespace Model {

AddReplicaLocationInput::AddReplicaLocationInput(JsonView jsonValue) { *this = jsonValue; }

AddReplicaLocationInput& AddReplicaLocationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Location")) {
    m_location = jsonValue.GetString("Location");
    m_locationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VpcConfig")) {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");
    m_vpcConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AddReplicaLocationInput::Jsonize() const {
  JsonValue payload;

  if (m_locationHasBeenSet) {
    payload.WithString("Location", m_location);
  }

  if (m_vpcConfigHasBeenSet) {
    payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("KmsKeyArn", m_kmsKeyArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Synthetics
}  // namespace Aws
