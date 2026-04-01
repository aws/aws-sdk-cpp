/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mailmanager/model/TlsAuthConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MailManager {
namespace Model {

TlsAuthConfiguration::TlsAuthConfiguration(JsonView jsonValue) { *this = jsonValue; }

TlsAuthConfiguration& TlsAuthConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TrustStore")) {
    m_trustStore = jsonValue.GetObject("TrustStore");
    m_trustStoreHasBeenSet = true;
  }
  return *this;
}

JsonValue TlsAuthConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_trustStoreHasBeenSet) {
    payload.WithObject("TrustStore", m_trustStore.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
