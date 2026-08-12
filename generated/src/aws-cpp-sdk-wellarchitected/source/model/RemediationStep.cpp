/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wellarchitected/model/RemediationStep.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WellArchitected {
namespace Model {

RemediationStep::RemediationStep(JsonView jsonValue) { *this = jsonValue; }

RemediationStep& RemediationStep::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("content")) {
    m_content = jsonValue.GetString("content");
    m_contentHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationStep::Jsonize() const {
  JsonValue payload;

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_contentHasBeenSet) {
    payload.WithString("content", m_content);
  }

  return payload;
}

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
