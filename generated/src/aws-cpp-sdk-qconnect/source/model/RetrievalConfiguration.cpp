/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/RetrievalConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

RetrievalConfiguration::RetrievalConfiguration(JsonView jsonValue) { *this = jsonValue; }

RetrievalConfiguration& RetrievalConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("knowledgeSource")) {
    m_knowledgeSource = jsonValue.GetObject("knowledgeSource");
    m_knowledgeSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("filter")) {
    m_filter = jsonValue.GetObject("filter");
    m_filterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("numberOfResults")) {
    m_numberOfResults = jsonValue.GetInteger("numberOfResults");
    m_numberOfResultsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("overrideKnowledgeBaseSearchType")) {
    m_overrideKnowledgeBaseSearchType =
        KnowledgeBaseSearchTypeMapper::GetKnowledgeBaseSearchTypeForName(jsonValue.GetString("overrideKnowledgeBaseSearchType"));
    m_overrideKnowledgeBaseSearchTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrievalConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_knowledgeSourceHasBeenSet) {
    payload.WithObject("knowledgeSource", m_knowledgeSource.Jsonize());
  }

  if (m_filterHasBeenSet) {
    payload.WithObject("filter", m_filter.Jsonize());
  }

  if (m_numberOfResultsHasBeenSet) {
    payload.WithInteger("numberOfResults", m_numberOfResults);
  }

  if (m_overrideKnowledgeBaseSearchTypeHasBeenSet) {
    payload.WithString("overrideKnowledgeBaseSearchType",
                       KnowledgeBaseSearchTypeMapper::GetNameForKnowledgeBaseSearchType(m_overrideKnowledgeBaseSearchType));
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
