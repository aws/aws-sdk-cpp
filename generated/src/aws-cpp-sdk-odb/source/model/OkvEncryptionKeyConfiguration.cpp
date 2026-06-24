/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/OkvEncryptionKeyConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

OkvEncryptionKeyConfiguration::OkvEncryptionKeyConfiguration(JsonView jsonValue) { *this = jsonValue; }

OkvEncryptionKeyConfiguration& OkvEncryptionKeyConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("certificateDirectoryName")) {
    m_certificateDirectoryName = jsonValue.GetString("certificateDirectoryName");
    m_certificateDirectoryNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("certificateId")) {
    m_certificateId = jsonValue.GetString("certificateId");
    m_certificateIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("directoryName")) {
    m_directoryName = jsonValue.GetString("directoryName");
    m_directoryNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("okvKmsKey")) {
    m_okvKmsKey = jsonValue.GetString("okvKmsKey");
    m_okvKmsKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("okvUri")) {
    m_okvUri = jsonValue.GetString("okvUri");
    m_okvUriHasBeenSet = true;
  }
  return *this;
}

JsonValue OkvEncryptionKeyConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_certificateDirectoryNameHasBeenSet) {
    payload.WithString("certificateDirectoryName", m_certificateDirectoryName);
  }

  if (m_certificateIdHasBeenSet) {
    payload.WithString("certificateId", m_certificateId);
  }

  if (m_directoryNameHasBeenSet) {
    payload.WithString("directoryName", m_directoryName);
  }

  if (m_okvKmsKeyHasBeenSet) {
    payload.WithString("okvKmsKey", m_okvKmsKey);
  }

  if (m_okvUriHasBeenSet) {
    payload.WithString("okvUri", m_okvUri);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
