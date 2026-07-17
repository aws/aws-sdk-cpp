/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/WalletPasswordSourceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

WalletPasswordSourceConfiguration::WalletPasswordSourceConfiguration(JsonView jsonValue) { *this = jsonValue; }

WalletPasswordSourceConfiguration& WalletPasswordSourceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("customerManagedAwsSecret")) {
    m_customerManagedAwsSecret = jsonValue.GetObject("customerManagedAwsSecret");
    m_customerManagedAwsSecretHasBeenSet = true;
  }
  return *this;
}

JsonValue WalletPasswordSourceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_customerManagedAwsSecretHasBeenSet) {
    payload.WithObject("customerManagedAwsSecret", m_customerManagedAwsSecret.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
