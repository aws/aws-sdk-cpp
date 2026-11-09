/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/SecretsManagerEndpointEncryptionConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

SecretsManagerEndpointEncryptionConfiguration::SecretsManagerEndpointEncryptionConfiguration(JsonView jsonValue) { *this = jsonValue; }

SecretsManagerEndpointEncryptionConfiguration& SecretsManagerEndpointEncryptionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("encryptionSecretType")) {
    m_encryptionSecretType =
        EndpointEncryptionSecretTypeMapper::GetEndpointEncryptionSecretTypeForName(jsonValue.GetString("encryptionSecretType"));
    m_encryptionSecretTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionSecret")) {
    m_encryptionSecret = jsonValue.GetObject("encryptionSecret");
    m_encryptionSecretHasBeenSet = true;
  }
  return *this;
}

JsonValue SecretsManagerEndpointEncryptionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_encryptionSecretTypeHasBeenSet) {
    payload.WithString("encryptionSecretType",
                       EndpointEncryptionSecretTypeMapper::GetNameForEndpointEncryptionSecretType(m_encryptionSecretType));
  }

  if (m_encryptionSecretHasBeenSet) {
    payload.WithObject("encryptionSecret", m_encryptionSecret.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
