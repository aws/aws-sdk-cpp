/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/TrustCenterFaqAttribute.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

TrustCenterFaqAttribute::TrustCenterFaqAttribute(JsonView jsonValue) { *this = jsonValue; }

TrustCenterFaqAttribute& TrustCenterFaqAttribute::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("question")) {
    m_question = jsonValue.GetString("question");
    m_questionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("answer")) {
    m_answer = jsonValue.GetString("answer");
    m_answerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subjectArea")) {
    m_subjectArea = jsonValue.GetString("subjectArea");
    m_subjectAreaHasBeenSet = true;
  }
  return *this;
}

JsonValue TrustCenterFaqAttribute::Jsonize() const {
  JsonValue payload;

  if (m_questionHasBeenSet) {
    payload.WithString("question", m_question);
  }

  if (m_answerHasBeenSet) {
    payload.WithString("answer", m_answer);
  }

  if (m_subjectAreaHasBeenSet) {
    payload.WithString("subjectArea", m_subjectArea);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
