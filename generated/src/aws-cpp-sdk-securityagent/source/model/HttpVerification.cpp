/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/HttpVerification.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

HttpVerification::HttpVerification(JsonView jsonValue) { *this = jsonValue; }

HttpVerification& HttpVerification::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("token")) {
    m_token = jsonValue.GetString("token");
    m_tokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routePath")) {
    m_routePath = jsonValue.GetString("routePath");
    m_routePathHasBeenSet = true;
  }
  return *this;
}

JsonValue HttpVerification::Jsonize() const {
  JsonValue payload;

  if (m_tokenHasBeenSet) {
    payload.WithString("token", m_token);
  }

  if (m_routePathHasBeenSet) {
    payload.WithString("routePath", m_routePath);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
