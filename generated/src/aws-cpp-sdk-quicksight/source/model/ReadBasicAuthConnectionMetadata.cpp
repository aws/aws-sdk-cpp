/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ReadBasicAuthConnectionMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ReadBasicAuthConnectionMetadata::ReadBasicAuthConnectionMetadata(JsonView jsonValue) { *this = jsonValue; }

ReadBasicAuthConnectionMetadata& ReadBasicAuthConnectionMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BaseEndpoint")) {
    m_baseEndpoint = jsonValue.GetString("BaseEndpoint");
    m_baseEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Username")) {
    m_username = jsonValue.GetString("Username");
    m_usernameHasBeenSet = true;
  }
  return *this;
}

JsonValue ReadBasicAuthConnectionMetadata::Jsonize() const {
  JsonValue payload;

  if (m_baseEndpointHasBeenSet) {
    payload.WithString("BaseEndpoint", m_baseEndpoint);
  }

  if (m_usernameHasBeenSet) {
    payload.WithString("Username", m_username);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
