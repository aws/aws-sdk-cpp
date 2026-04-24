/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchserverless/model/VectorOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {

VectorOptions::VectorOptions(JsonView jsonValue) { *this = jsonValue; }

VectorOptions& VectorOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ServerlessVectorAcceleration")) {
    m_serverlessVectorAcceleration = ServerlessVectorAccelerationStatusMapper::GetServerlessVectorAccelerationStatusForName(
        jsonValue.GetString("ServerlessVectorAcceleration"));
    m_serverlessVectorAccelerationHasBeenSet = true;
  }
  return *this;
}

JsonValue VectorOptions::Jsonize() const {
  JsonValue payload;

  if (m_serverlessVectorAccelerationHasBeenSet) {
    payload.WithString(
        "ServerlessVectorAcceleration",
        ServerlessVectorAccelerationStatusMapper::GetNameForServerlessVectorAccelerationStatus(m_serverlessVectorAcceleration));
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
