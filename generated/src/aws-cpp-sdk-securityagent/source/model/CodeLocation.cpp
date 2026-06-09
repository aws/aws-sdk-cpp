/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/CodeLocation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

CodeLocation::CodeLocation(JsonView jsonValue) { *this = jsonValue; }

CodeLocation& CodeLocation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("filePath")) {
    m_filePath = jsonValue.GetString("filePath");
    m_filePathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lineStart")) {
    m_lineStart = jsonValue.GetInteger("lineStart");
    m_lineStartHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lineEnd")) {
    m_lineEnd = jsonValue.GetInteger("lineEnd");
    m_lineEndHasBeenSet = true;
  }
  if (jsonValue.ValueExists("label")) {
    m_label = jsonValue.GetString("label");
    m_labelHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeLocation::Jsonize() const {
  JsonValue payload;

  if (m_filePathHasBeenSet) {
    payload.WithString("filePath", m_filePath);
  }

  if (m_lineStartHasBeenSet) {
    payload.WithInteger("lineStart", m_lineStart);
  }

  if (m_lineEndHasBeenSet) {
    payload.WithInteger("lineEnd", m_lineEnd);
  }

  if (m_labelHasBeenSet) {
    payload.WithString("label", m_label);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
