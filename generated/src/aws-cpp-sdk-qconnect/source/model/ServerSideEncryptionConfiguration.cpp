/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/ServerSideEncryptionConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

ServerSideEncryptionConfiguration::ServerSideEncryptionConfiguration(JsonView jsonValue) { *this = jsonValue; }

ServerSideEncryptionConfiguration& ServerSideEncryptionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("kmsKeyId")) {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("replicaKmsKeys")) {
    Aws::Utils::Array<JsonView> replicaKmsKeysJsonList = jsonValue.GetArray("replicaKmsKeys");
    for (unsigned replicaKmsKeysIndex = 0; replicaKmsKeysIndex < replicaKmsKeysJsonList.GetLength(); ++replicaKmsKeysIndex) {
      m_replicaKmsKeys.push_back(replicaKmsKeysJsonList[replicaKmsKeysIndex].AsObject());
    }
    m_replicaKmsKeysHasBeenSet = true;
  }
  return *this;
}

JsonValue ServerSideEncryptionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_kmsKeyIdHasBeenSet) {
    payload.WithString("kmsKeyId", m_kmsKeyId);
  }

  if (m_replicaKmsKeysHasBeenSet) {
    Aws::Utils::Array<JsonValue> replicaKmsKeysJsonList(m_replicaKmsKeys.size());
    for (unsigned replicaKmsKeysIndex = 0; replicaKmsKeysIndex < replicaKmsKeysJsonList.GetLength(); ++replicaKmsKeysIndex) {
      replicaKmsKeysJsonList[replicaKmsKeysIndex].AsObject(m_replicaKmsKeys[replicaKmsKeysIndex].Jsonize());
    }
    payload.WithArray("replicaKmsKeys", std::move(replicaKmsKeysJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
