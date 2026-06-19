/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ConfluenceResourceCapabilities.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ConfluenceResourceCapabilities::ConfluenceResourceCapabilities(JsonView jsonValue) { *this = jsonValue; }

ConfluenceResourceCapabilities& ConfluenceResourceCapabilities::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fetchDocument")) {
    m_fetchDocument = jsonValue.GetBool("fetchDocument");
    m_fetchDocumentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createDocument")) {
    m_createDocument = jsonValue.GetBool("createDocument");
    m_createDocumentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updateDocument")) {
    m_updateDocument = jsonValue.GetBool("updateDocument");
    m_updateDocumentHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfluenceResourceCapabilities::Jsonize() const {
  JsonValue payload;

  if (m_fetchDocumentHasBeenSet) {
    payload.WithBool("fetchDocument", m_fetchDocument);
  }

  if (m_createDocumentHasBeenSet) {
    payload.WithBool("createDocument", m_createDocument);
  }

  if (m_updateDocumentHasBeenSet) {
    payload.WithBool("updateDocument", m_updateDocument);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
