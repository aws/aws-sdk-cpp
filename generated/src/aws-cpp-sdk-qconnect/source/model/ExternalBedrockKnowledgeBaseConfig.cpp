/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/ExternalBedrockKnowledgeBaseConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

ExternalBedrockKnowledgeBaseConfig::ExternalBedrockKnowledgeBaseConfig(JsonView jsonValue) { *this = jsonValue; }

ExternalBedrockKnowledgeBaseConfig& ExternalBedrockKnowledgeBaseConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bedrockKnowledgeBaseArn")) {
    m_bedrockKnowledgeBaseArn = jsonValue.GetString("bedrockKnowledgeBaseArn");
    m_bedrockKnowledgeBaseArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accessRoleArn")) {
    m_accessRoleArn = jsonValue.GetString("accessRoleArn");
    m_accessRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ExternalBedrockKnowledgeBaseConfig::Jsonize() const {
  JsonValue payload;

  if (m_bedrockKnowledgeBaseArnHasBeenSet) {
    payload.WithString("bedrockKnowledgeBaseArn", m_bedrockKnowledgeBaseArn);
  }

  if (m_accessRoleArnHasBeenSet) {
    payload.WithString("accessRoleArn", m_accessRoleArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
