/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/AssistantAssociationOutputData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

AssistantAssociationOutputData::AssistantAssociationOutputData(JsonView jsonValue) { *this = jsonValue; }

AssistantAssociationOutputData& AssistantAssociationOutputData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("knowledgeBaseAssociation")) {
    m_knowledgeBaseAssociation = jsonValue.GetObject("knowledgeBaseAssociation");
    m_knowledgeBaseAssociationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("externalBedrockKnowledgeBaseConfig")) {
    m_externalBedrockKnowledgeBaseConfig = jsonValue.GetObject("externalBedrockKnowledgeBaseConfig");
    m_externalBedrockKnowledgeBaseConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue AssistantAssociationOutputData::Jsonize() const {
  JsonValue payload;

  if (m_knowledgeBaseAssociationHasBeenSet) {
    payload.WithObject("knowledgeBaseAssociation", m_knowledgeBaseAssociation.Jsonize());
  }

  if (m_externalBedrockKnowledgeBaseConfigHasBeenSet) {
    payload.WithObject("externalBedrockKnowledgeBaseConfig", m_externalBedrockKnowledgeBaseConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
