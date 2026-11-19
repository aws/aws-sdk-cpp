/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/LinkTarget.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

LinkTarget::LinkTarget(JsonView jsonValue) { *this = jsonValue; }

LinkTarget& LinkTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("linkId")) {
    m_linkId = jsonValue.GetString("linkId");
    m_linkIdHasBeenSet = true;
  }
  return *this;
}

JsonValue LinkTarget::Jsonize() const {
  JsonValue payload;

  if (m_linkIdHasBeenSet) {
    payload.WithString("linkId", m_linkId);
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
