/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/TransportableTablespace.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

TransportableTablespace::TransportableTablespace(JsonView jsonValue) { *this = jsonValue; }

TransportableTablespace& TransportableTablespace::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ttsBundleUrl")) {
    m_ttsBundleUrl = jsonValue.GetString("ttsBundleUrl");
    m_ttsBundleUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue TransportableTablespace::Jsonize() const {
  JsonValue payload;

  if (m_ttsBundleUrlHasBeenSet) {
    payload.WithString("ttsBundleUrl", m_ttsBundleUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
