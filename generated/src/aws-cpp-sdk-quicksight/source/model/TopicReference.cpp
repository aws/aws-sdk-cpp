/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/TopicReference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

TopicReference::TopicReference(JsonView jsonValue) { *this = jsonValue; }

TopicReference& TopicReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TopicPlaceholder")) {
    m_topicPlaceholder = jsonValue.GetString("TopicPlaceholder");
    m_topicPlaceholderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TopicArn")) {
    m_topicArn = jsonValue.GetString("TopicArn");
    m_topicArnHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicReference::Jsonize() const {
  JsonValue payload;

  if (m_topicPlaceholderHasBeenSet) {
    payload.WithString("TopicPlaceholder", m_topicPlaceholder);
  }

  if (m_topicArnHasBeenSet) {
    payload.WithString("TopicArn", m_topicArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
