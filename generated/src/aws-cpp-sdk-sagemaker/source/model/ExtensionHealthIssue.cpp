/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ExtensionHealthIssue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ExtensionHealthIssue::ExtensionHealthIssue(JsonView jsonValue) { *this = jsonValue; }

ExtensionHealthIssue& ExtensionHealthIssue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Code")) {
    m_code = ExtensionHealthIssueCodeMapper::GetExtensionHealthIssueCodeForName(jsonValue.GetString("Code"));
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NodeCount")) {
    m_nodeCount = jsonValue.GetInteger("NodeCount");
    m_nodeCountHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtensionHealthIssue::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithString("Code", ExtensionHealthIssueCodeMapper::GetNameForExtensionHealthIssueCode(m_code));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  if (m_nodeCountHasBeenSet) {
    payload.WithInteger("NodeCount", m_nodeCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
