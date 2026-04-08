/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/LegalTerm.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

LegalTerm::LegalTerm(JsonView jsonValue) { *this = jsonValue; }

LegalTerm& LegalTerm::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = TermTypeMapper::GetTermTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("documents")) {
    Aws::Utils::Array<JsonView> documentsJsonList = jsonValue.GetArray("documents");
    for (unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex) {
      m_documents.push_back(documentsJsonList[documentsIndex].AsObject());
    }
    m_documentsHasBeenSet = true;
  }
  return *this;
}

JsonValue LegalTerm::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", TermTypeMapper::GetNameForTermType(m_type));
  }

  if (m_documentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> documentsJsonList(m_documents.size());
    for (unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex) {
      documentsJsonList[documentsIndex].AsObject(m_documents[documentsIndex].Jsonize());
    }
    payload.WithArray("documents", std::move(documentsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
