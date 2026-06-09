/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/DeleteCodeReviewFailure.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

DeleteCodeReviewFailure::DeleteCodeReviewFailure(JsonView jsonValue) { *this = jsonValue; }

DeleteCodeReviewFailure& DeleteCodeReviewFailure::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("codeReviewId")) {
    m_codeReviewId = jsonValue.GetString("codeReviewId");
    m_codeReviewIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reason")) {
    m_reason = jsonValue.GetString("reason");
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue DeleteCodeReviewFailure::Jsonize() const {
  JsonValue payload;

  if (m_codeReviewIdHasBeenSet) {
    payload.WithString("codeReviewId", m_codeReviewId);
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", m_reason);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
