/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/SuggestedMessageReference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

SuggestedMessageReference::SuggestedMessageReference(JsonView jsonValue) { *this = jsonValue; }

SuggestedMessageReference& SuggestedMessageReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("aiAgentId")) {
    m_aiAgentId = jsonValue.GetString("aiAgentId");
    m_aiAgentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("aiAgentArn")) {
    m_aiAgentArn = jsonValue.GetString("aiAgentArn");
    m_aiAgentArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SuggestedMessageReference::Jsonize() const {
  JsonValue payload;

  if (m_aiAgentIdHasBeenSet) {
    payload.WithString("aiAgentId", m_aiAgentId);
  }

  if (m_aiAgentArnHasBeenSet) {
    payload.WithString("aiAgentArn", m_aiAgentArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
