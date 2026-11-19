/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/FollowUpQuestion.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

FollowUpQuestion::FollowUpQuestion(JsonView jsonValue) { *this = jsonValue; }

FollowUpQuestion& FollowUpQuestion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Question")) {
    m_question = jsonValue.GetString("Question");
    m_questionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Justification")) {
    m_justification = jsonValue.GetString("Justification");
    m_justificationHasBeenSet = true;
  }
  return *this;
}

JsonValue FollowUpQuestion::Jsonize() const {
  JsonValue payload;

  if (m_questionHasBeenSet) {
    payload.WithString("Question", m_question);
  }

  if (m_justificationHasBeenSet) {
    payload.WithString("Justification", m_justification);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
