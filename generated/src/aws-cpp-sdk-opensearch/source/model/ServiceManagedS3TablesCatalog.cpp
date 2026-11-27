/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/ServiceManagedS3TablesCatalog.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

ServiceManagedS3TablesCatalog::ServiceManagedS3TablesCatalog(JsonView jsonValue) { *this = jsonValue; }

ServiceManagedS3TablesCatalog& ServiceManagedS3TablesCatalog::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EncryptionConfiguration")) {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");
    m_encryptionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceManagedS3TablesCatalog::Jsonize() const {
  JsonValue payload;

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
