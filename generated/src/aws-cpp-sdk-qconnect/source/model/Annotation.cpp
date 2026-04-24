/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/Annotation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

Annotation::Annotation(JsonView jsonValue) { *this = jsonValue; }

Annotation& Annotation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destructiveHint")) {
    m_destructiveHint = jsonValue.GetBool("destructiveHint");
    m_destructiveHintHasBeenSet = true;
  }
  return *this;
}

JsonValue Annotation::Jsonize() const {
  JsonValue payload;

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_destructiveHintHasBeenSet) {
    payload.WithBool("destructiveHint", m_destructiveHint);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
