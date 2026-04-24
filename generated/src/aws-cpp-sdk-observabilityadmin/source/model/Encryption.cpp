/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/Encryption.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

Encryption::Encryption(JsonView jsonValue) { *this = jsonValue; }

Encryption& Encryption::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SseAlgorithm")) {
    m_sseAlgorithm = SSEAlgorithmMapper::GetSSEAlgorithmForName(jsonValue.GetString("SseAlgorithm"));
    m_sseAlgorithmHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue Encryption::Jsonize() const {
  JsonValue payload;

  if (m_sseAlgorithmHasBeenSet) {
    payload.WithString("SseAlgorithm", SSEAlgorithmMapper::GetNameForSSEAlgorithm(m_sseAlgorithm));
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("KmsKeyArn", m_kmsKeyArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
