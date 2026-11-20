/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/TrustCenterDocumentAttribute.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

TrustCenterDocumentAttribute::TrustCenterDocumentAttribute(JsonView jsonValue) { *this = jsonValue; }

TrustCenterDocumentAttribute& TrustCenterDocumentAttribute::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contentType")) {
    m_contentType = ResourceContentTypeMapper::GetResourceContentTypeForName(jsonValue.GetString("contentType"));
    m_contentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetString("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subjectArea")) {
    m_subjectArea = jsonValue.GetString("subjectArea");
    m_subjectAreaHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accessType")) {
    m_accessType = TrustCenterDocumentAccessTypeMapper::GetTrustCenterDocumentAccessTypeForName(jsonValue.GetString("accessType"));
    m_accessTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue TrustCenterDocumentAttribute::Jsonize() const {
  JsonValue payload;

  if (m_contentTypeHasBeenSet) {
    payload.WithString("contentType", ResourceContentTypeMapper::GetNameForResourceContentType(m_contentType));
  }

  if (m_valueHasBeenSet) {
    payload.WithString("value", m_value);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_subjectAreaHasBeenSet) {
    payload.WithString("subjectArea", m_subjectArea);
  }

  if (m_accessTypeHasBeenSet) {
    payload.WithString("accessType", TrustCenterDocumentAccessTypeMapper::GetNameForTrustCenterDocumentAccessType(m_accessType));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
