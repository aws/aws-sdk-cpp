/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/SecurityGroupConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

SecurityGroupConfiguration::SecurityGroupConfiguration(JsonView jsonValue) { *this = jsonValue; }

SecurityGroupConfiguration& SecurityGroupConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("associations")) {
    m_associations = jsonValue.GetObject("associations");
    m_associationsHasBeenSet = true;
  }
  return *this;
}

JsonValue SecurityGroupConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_associationsHasBeenSet) {
    payload.WithObject("associations", m_associations.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
