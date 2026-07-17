/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/AdminPasswordSourceConfigurationInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

AdminPasswordSourceConfigurationInput::AdminPasswordSourceConfigurationInput(JsonView jsonValue) { *this = jsonValue; }

AdminPasswordSourceConfigurationInput& AdminPasswordSourceConfigurationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("customerManagedAwsSecret")) {
    m_customerManagedAwsSecret = jsonValue.GetObject("customerManagedAwsSecret");
    m_customerManagedAwsSecretHasBeenSet = true;
  }
  return *this;
}

JsonValue AdminPasswordSourceConfigurationInput::Jsonize() const {
  JsonValue payload;

  if (m_customerManagedAwsSecretHasBeenSet) {
    payload.WithObject("customerManagedAwsSecret", m_customerManagedAwsSecret.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
