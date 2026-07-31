/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/TopicIdentifierDeclaration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

TopicIdentifierDeclaration::TopicIdentifierDeclaration(JsonView jsonValue) { *this = jsonValue; }

TopicIdentifierDeclaration& TopicIdentifierDeclaration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Identifier")) {
    m_identifier = jsonValue.GetString("Identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TopicArn")) {
    m_topicArn = jsonValue.GetString("TopicArn");
    m_topicArnHasBeenSet = true;
  }
  return *this;
}

JsonValue TopicIdentifierDeclaration::Jsonize() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("Identifier", m_identifier);
  }

  if (m_topicArnHasBeenSet) {
    payload.WithString("TopicArn", m_topicArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
