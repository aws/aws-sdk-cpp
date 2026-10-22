/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchserverless/model/IngestionFailureReason.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {

IngestionFailureReason::IngestionFailureReason(JsonView jsonValue) { *this = jsonValue; }

IngestionFailureReason& IngestionFailureReason::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("code")) {
    m_code = IngestionFailureCodeMapper::GetIngestionFailureCodeForName(jsonValue.GetString("code"));
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue IngestionFailureReason::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithString("code", IngestionFailureCodeMapper::GetNameForIngestionFailureCode(m_code));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
