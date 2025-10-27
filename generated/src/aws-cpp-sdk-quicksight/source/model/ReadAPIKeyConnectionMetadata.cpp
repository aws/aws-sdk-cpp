/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ReadAPIKeyConnectionMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ReadAPIKeyConnectionMetadata::ReadAPIKeyConnectionMetadata(JsonView jsonValue) { *this = jsonValue; }

ReadAPIKeyConnectionMetadata& ReadAPIKeyConnectionMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BaseEndpoint")) {
    m_baseEndpoint = jsonValue.GetString("BaseEndpoint");
    m_baseEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Email")) {
    m_email = jsonValue.GetString("Email");
    m_emailHasBeenSet = true;
  }
  return *this;
}

JsonValue ReadAPIKeyConnectionMetadata::Jsonize() const {
  JsonValue payload;

  if (m_baseEndpointHasBeenSet) {
    payload.WithString("BaseEndpoint", m_baseEndpoint);
  }

  if (m_emailHasBeenSet) {
    payload.WithString("Email", m_email);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
