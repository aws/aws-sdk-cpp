/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/Assets.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

Assets::Assets(JsonView jsonValue) { *this = jsonValue; }

Assets& Assets::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("endpoints")) {
    Aws::Utils::Array<JsonView> endpointsJsonList = jsonValue.GetArray("endpoints");
    for (unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex) {
      m_endpoints.push_back(endpointsJsonList[endpointsIndex].AsObject());
    }
    m_endpointsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actors")) {
    Aws::Utils::Array<JsonView> actorsJsonList = jsonValue.GetArray("actors");
    for (unsigned actorsIndex = 0; actorsIndex < actorsJsonList.GetLength(); ++actorsIndex) {
      m_actors.push_back(actorsJsonList[actorsIndex].AsObject());
    }
    m_actorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("documents")) {
    Aws::Utils::Array<JsonView> documentsJsonList = jsonValue.GetArray("documents");
    for (unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex) {
      m_documents.push_back(documentsJsonList[documentsIndex].AsObject());
    }
    m_documentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceCode")) {
    Aws::Utils::Array<JsonView> sourceCodeJsonList = jsonValue.GetArray("sourceCode");
    for (unsigned sourceCodeIndex = 0; sourceCodeIndex < sourceCodeJsonList.GetLength(); ++sourceCodeIndex) {
      m_sourceCode.push_back(sourceCodeJsonList[sourceCodeIndex].AsObject());
    }
    m_sourceCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("integratedRepositories")) {
    Aws::Utils::Array<JsonView> integratedRepositoriesJsonList = jsonValue.GetArray("integratedRepositories");
    for (unsigned integratedRepositoriesIndex = 0; integratedRepositoriesIndex < integratedRepositoriesJsonList.GetLength();
         ++integratedRepositoriesIndex) {
      m_integratedRepositories.push_back(integratedRepositoriesJsonList[integratedRepositoriesIndex].AsObject());
    }
    m_integratedRepositoriesHasBeenSet = true;
  }
  return *this;
}

JsonValue Assets::Jsonize() const {
  JsonValue payload;

  if (m_endpointsHasBeenSet) {
    Aws::Utils::Array<JsonValue> endpointsJsonList(m_endpoints.size());
    for (unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex) {
      endpointsJsonList[endpointsIndex].AsObject(m_endpoints[endpointsIndex].Jsonize());
    }
    payload.WithArray("endpoints", std::move(endpointsJsonList));
  }

  if (m_actorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> actorsJsonList(m_actors.size());
    for (unsigned actorsIndex = 0; actorsIndex < actorsJsonList.GetLength(); ++actorsIndex) {
      actorsJsonList[actorsIndex].AsObject(m_actors[actorsIndex].Jsonize());
    }
    payload.WithArray("actors", std::move(actorsJsonList));
  }

  if (m_documentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> documentsJsonList(m_documents.size());
    for (unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex) {
      documentsJsonList[documentsIndex].AsObject(m_documents[documentsIndex].Jsonize());
    }
    payload.WithArray("documents", std::move(documentsJsonList));
  }

  if (m_sourceCodeHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceCodeJsonList(m_sourceCode.size());
    for (unsigned sourceCodeIndex = 0; sourceCodeIndex < sourceCodeJsonList.GetLength(); ++sourceCodeIndex) {
      sourceCodeJsonList[sourceCodeIndex].AsObject(m_sourceCode[sourceCodeIndex].Jsonize());
    }
    payload.WithArray("sourceCode", std::move(sourceCodeJsonList));
  }

  if (m_integratedRepositoriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> integratedRepositoriesJsonList(m_integratedRepositories.size());
    for (unsigned integratedRepositoriesIndex = 0; integratedRepositoriesIndex < integratedRepositoriesJsonList.GetLength();
         ++integratedRepositoriesIndex) {
      integratedRepositoriesJsonList[integratedRepositoriesIndex].AsObject(m_integratedRepositories[integratedRepositoriesIndex].Jsonize());
    }
    payload.WithArray("integratedRepositories", std::move(integratedRepositoriesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
