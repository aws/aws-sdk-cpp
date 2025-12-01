/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/RetrieveResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

RetrieveResult::RetrieveResult(JsonView jsonValue) { *this = jsonValue; }

RetrieveResult& RetrieveResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("associationId")) {
    m_associationId = jsonValue.GetString("associationId");
    m_associationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceId")) {
    m_sourceId = jsonValue.GetString("sourceId");
    m_sourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("referenceType")) {
    m_referenceType = ReferenceTypeMapper::GetReferenceTypeForName(jsonValue.GetString("referenceType"));
    m_referenceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contentText")) {
    m_contentText = jsonValue.GetString("contentText");
    m_contentTextHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrieveResult::Jsonize() const {
  JsonValue payload;

  if (m_associationIdHasBeenSet) {
    payload.WithString("associationId", m_associationId);
  }

  if (m_sourceIdHasBeenSet) {
    payload.WithString("sourceId", m_sourceId);
  }

  if (m_referenceTypeHasBeenSet) {
    payload.WithString("referenceType", ReferenceTypeMapper::GetNameForReferenceType(m_referenceType));
  }

  if (m_contentTextHasBeenSet) {
    payload.WithString("contentText", m_contentText);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
